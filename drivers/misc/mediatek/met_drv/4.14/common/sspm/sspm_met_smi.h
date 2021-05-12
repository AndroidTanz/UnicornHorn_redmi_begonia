/*
 * Copyright (C) 2019 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef _SMI_H_
#define _SMI_H_

#include <linux/device.h>

struct met_smi {
	int mode;
	int master;
	unsigned int port;
	unsigned int rwtype;	/* 0 for R+W, 1 for read, 2 for write */
	unsigned int desttype;	/* 0 for EMI+internal mem, 1 for EMI, 3 for internal mem */
	unsigned int bustype;	/* 0 for GMC, 1 for AXI */
	/* unsigned long requesttype;// 0:All, 1:ultra high, 2:pre-ultrahigh, 3:normal. */
	struct kobject *kobj_bus_smi;
};

struct smi_cfg {
	int master;
	unsigned int port;
	unsigned int rwtype;	/* 0 for R+W, 1 for read, 2 for write */
	unsigned int desttype;	/* 0 for EMI+internal mem, 1 for EMI, 3 for internal mem */
	unsigned int bustype;	/*0 for GMC, 1 for AXI */
	/*unsigned long requesttype;// 0:All, 1:ultra high, 2:pre-ultrahigh, 3:normal. */
};

struct smi_mon_con {
	unsigned int requesttype;	/* 0:All, 1:ultra high, 2:pre-ultrahigh, 3:normal. */
};

#endif				/* _SMI_H_ */
