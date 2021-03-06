/*****************************************************************************
* Copyright 2011 Broadcom Corporation.  All rights reserved.
*
* Unless you and Broadcom execute a separate written software license
* agreement governing use of this software, this software is licensed to you
* under the terms of the GNU General Public License version 2, available at
* http://www.broadcom.com/licenses/GPLv2.php (the "GPL").
*
* Notwithstanding the above, under no circumstances may you combine this
* software in any way with any other Broadcom software provided under a
* license other than the GPL, without Broadcom's express prior written
* consent.
*****************************************************************************/

#ifndef HDMI_CFG_H
#define HDMI_CFG_H

/*
 * Board dependent configuration for the HDMI hotplug driver
 */
struct hdmi_hw_cfg {
	int gpio_hdmi_det;
	char reg_hdmi_det[32];
	char reg_hdmi_blk[32];
};

#endif /* HDMI_CFG_H */
