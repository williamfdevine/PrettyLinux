/*
 * Synopsys DesignWare Multimedia Card Interface driver
 *
 * Copyright (C) 2009 NXP Semiconductors
 * Copyright (C) 2009, 2010 Imagination Technologies Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#include <linux/err.h>
#include <linux/interrupt.h>
#include <linux/module.h>
#include <linux/io.h>
#include <linux/irq.h>
#include <linux/platform_device.h>
#include <linux/slab.h>
#include <linux/mmc/host.h>
#include <linux/mmc/mmc.h>
#include <linux/mmc/dw_mmc.h>
#include <linux/of.h>
#include <linux/clk.h>

#include "dw_mmc.h"
#include "dw_mmc-pltfm.h"

int dw_mci_pltfm_register(struct platform_device *pdev,
						  const struct dw_mci_drv_data *drv_data)
{
	struct dw_mci *host;
	struct resource	*regs;

	host = devm_kzalloc(&pdev->dev, sizeof(struct dw_mci), GFP_KERNEL);

	if (!host)
	{
		return -ENOMEM;
	}

	host->irq = platform_get_irq(pdev, 0);

	if (host->irq < 0)
	{
		return host->irq;
	}

	host->drv_data = drv_data;
	host->dev = &pdev->dev;
	host->irq_flags = 0;
	host->pdata = pdev->dev.platform_data;

	regs = platform_get_resource(pdev, IORESOURCE_MEM, 0);
	host->regs = devm_ioremap_resource(&pdev->dev, regs);

	if (IS_ERR(host->regs))
	{
		return PTR_ERR(host->regs);
	}

	/* Get registers' physical base address */
	host->phy_regs = regs->start;

	platform_set_drvdata(pdev, host);
	return dw_mci_probe(host);
}
EXPORT_SYMBOL_GPL(dw_mci_pltfm_register);

#ifdef CONFIG_PM_SLEEP
/*
 * TODO: we should probably disable the clock to the card in the suspend path.
 */
static int dw_mci_pltfm_suspend(struct device *dev)
{
	struct dw_mci *host = dev_get_drvdata(dev);

	return dw_mci_suspend(host);
}

static int dw_mci_pltfm_resume(struct device *dev)
{
	struct dw_mci *host = dev_get_drvdata(dev);

	return dw_mci_resume(host);
}
#endif /* CONFIG_PM_SLEEP */

SIMPLE_DEV_PM_OPS(dw_mci_pltfm_pmops, dw_mci_pltfm_suspend, dw_mci_pltfm_resume);
EXPORT_SYMBOL_GPL(dw_mci_pltfm_pmops);

static const struct of_device_id dw_mci_pltfm_match[] =
{
	{ .compatible = "snps,dw-mshc", },
	{ .compatible = "altr,socfpga-dw-mshc", },
	{ .compatible = "img,pistachio-dw-mshc", },
	{},
};
MODULE_DEVICE_TABLE(of, dw_mci_pltfm_match);

static int dw_mci_pltfm_probe(struct platform_device *pdev)
{
	const struct dw_mci_drv_data *drv_data = NULL;
	const struct of_device_id *match;

	if (pdev->dev.of_node)
	{
		match = of_match_node(dw_mci_pltfm_match, pdev->dev.of_node);
		drv_data = match->data;
	}

	return dw_mci_pltfm_register(pdev, drv_data);
}

int dw_mci_pltfm_remove(struct platform_device *pdev)
{
	struct dw_mci *host = platform_get_drvdata(pdev);

	dw_mci_remove(host);
	return 0;
}
EXPORT_SYMBOL_GPL(dw_mci_pltfm_remove);

static struct platform_driver dw_mci_pltfm_driver =
{
	.probe		= dw_mci_pltfm_probe,
	.remove		= dw_mci_pltfm_remove,
	.driver		= {
		.name		= "dw_mmc",
		.of_match_table	= dw_mci_pltfm_match,
		.pm		= &dw_mci_pltfm_pmops,
	},
};

module_platform_driver(dw_mci_pltfm_driver);

MODULE_DESCRIPTION("DW Multimedia Card Interface driver");
MODULE_AUTHOR("NXP Semiconductor VietNam");
MODULE_AUTHOR("Imagination Technologies Ltd");
MODULE_LICENSE("GPL v2");
