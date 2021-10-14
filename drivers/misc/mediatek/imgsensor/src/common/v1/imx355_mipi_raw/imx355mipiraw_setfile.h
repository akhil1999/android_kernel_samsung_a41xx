/*
 * Copyright (c) 2021 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __IMX355_SENSOR_SETFILE_H__
#define __IMX355_SENSOR_SETFILE_H__

/* Reference : IMX355-PQH_SEC-DPHY_26M_RegisterSetting_ver1.00-3.01_210106.xlsx */
#include "imx355mipiraw_Sensor.h"

static kal_uint16 addr_data_init_imx355[] = {
	/* External Clock Setting */
	0x0136, 0x1A,
	0x0137, 0x00,
	
	/* Global Setting */
	0x4348, 0x16,
	0x4350, 0x19,
	0x4408, 0x0A,
	0x440C, 0x0B,
	0x4411, 0x5F,
	0x4412, 0x2C,
	0x4623, 0x00,
	0x462C, 0x0F,
	0x462D, 0x00,
	0x462E, 0x00,
	0x4684, 0x54,
	0x480A, 0x07,
	0x4908, 0x07,
	0x4909, 0x07,
	0x490D, 0x0A,
	0x491E, 0x0F,
	0x4921, 0x06,
	0x4923, 0x28,
	0x4924, 0x28,
	0x4925, 0x29,
	0x4926, 0x29,
	0x4927, 0x1F,
	0x4928, 0x20,
	0x4929, 0x20,
	0x492A, 0x20,
	0x492C, 0x05,
	0x492D, 0x06,
	0x492E, 0x06,
	0x492F, 0x06,
	0x4930, 0x03,
	0x4931, 0x04,
	0x4932, 0x04,
	0x4933, 0x05,
	0x595E, 0x01,
	0x5963, 0x01,
};

static kal_uint16 addr_data_preview_imx355[] = {
	/* MIPI setting */
	0x0112, 0x0A,
	0x0113, 0x0A,
	0x0114, 0x03,
		
	/* Frame Horizontal Clock Count */
	0x0342, 0x0E,
	0x0343, 0x58,
		
	/* Frame Vertical Clock Count */		
	0x0340, 0x09,
	0x0341, 0xF4,
		
	/* Visible Size */
	0x0344, 0x00,
	0x0345, 0x08,
	0x0346, 0x00,
	0x0347, 0x08,
	0x0348, 0x0C,
	0x0349, 0xC7,
	0x034A, 0x09,
	0x034B, 0x97,
		
	/* Mode Setting */		
	0x0220, 0x00,
	0x0222, 0x01,
	0x0900, 0x00,
	0x0901, 0x11,
	0x0902, 0x00,		
		
	/* Output Size Setting */		
	0x034C, 0x0C,
	0x034D, 0xC0,
	0x034E, 0x09,
	0x034F, 0x90,
		
		
	/* Clock Setting */ 	
	0x0301, 0x05,
	0x0303, 0x01,
	0x0305, 0x02,
	0x0306, 0x00,
	0x0307, 0x78,
	0x030B, 0x01,
	0x030D, 0x04,
	0x030E, 0x00,
	0x030F, 0x6C,
	0x0310, 0x00,
	0x0700, 0x00,
	0x0701, 0x10,
	0x0820, 0x0A,
	0x0821, 0xF8,
	0x3088, 0x04,
	0x6813, 0x02,
	0x6835, 0x07,
	0x6836, 0x00,
	0x6837, 0x04,
	0x684D, 0x07,
	0x684E, 0x00,
	0x684F, 0x04,
	
	/* CIT Setting	*/
	0x0202, 0x09,
	0x0203, 0xEA,
		
	/* Gain Setting */		
	0x0204, 0x00,
	0x0205, 0x00,
	0x020E, 0x01,
	0x020F, 0x00,
	
	/* DPC Setting	*/
	0x0B06, 0x00,
};

static kal_uint16 addr_data_video_imx355[] = {
	/* MIPI setting */
	0x0112, 0x0A,
	0x0113, 0x0A,
	0x0114, 0x03,
		
	/* Frame Horizontal Clock Count */
	0x0342, 0x0E,
	0x0343, 0x58,
		
	/* Frame Vertical Clock Count */		
	0x0340, 0x09,
	0x0341, 0xF4,
		
	/* Visible Size */
	0x0344, 0x00,
	0x0345, 0x08,
	0x0346, 0x01,
	0x0347, 0x38,
	0x0348, 0x0C,
	0x0349, 0xC7,
	0x034A, 0x08,
	0x034B, 0x63,
		
	/* Mode Setting */		
	0x0220, 0x00,
	0x0222, 0x01,
	0x0900, 0x00,
	0x0901, 0x11,
	0x0902, 0x00,		
		
	/* Output Size Setting */		
	0x034C, 0x0C,
	0x034D, 0xC0,
	0x034E, 0x07,
	0x034F, 0x2C,
		
		
	/* Clock Setting */ 	
	0x0301, 0x05,
	0x0303, 0x01,
	0x0305, 0x02,
	0x0306, 0x00,
	0x0307, 0x78,
	0x030B, 0x01,
	0x030D, 0x04,
	0x030E, 0x00,
	0x030F, 0x6C,
	0x0310, 0x00,
	0x0700, 0x00,
	0x0701, 0x10,
	0x0820, 0x0A,
	0x0821, 0xF8,
	0x3088, 0x04,
	0x6813, 0x02,
	0x6835, 0x07,
	0x6836, 0x00,
	0x6837, 0x04,
	0x684D, 0x07,
	0x684E, 0x00,
	0x684F, 0x04,
	
	/* CIT Setting	*/
	0x0202, 0x09,
	0x0203, 0xEA,
		
	/* Gain Setting */		
	0x0204, 0x00,
	0x0205, 0x00,
	0x020E, 0x01,
	0x020F, 0x00,
	
	/* DPC Setting	*/
	0x0B06, 0x00,
};

static kal_uint16 addr_data_custom1_imx355[] = {
	/* MIPI setting */
	0x0112, 0x0A,
	0x0113, 0x0A,
	0x0114, 0x03,
		
	/* Frame Horizontal Clock Count */
	0x0342, 0x0E,
	0x0343, 0x58,
		
	/* Frame Vertical Clock Count */		
	0x0340, 0x04,
	0x0341, 0xF8,
		
	/* Visible Size */
	0x0344, 0x00,
	0x0345, 0xA8,
	0x0346, 0x00,
	0x0347, 0x80,
	0x0348, 0x0C,
	0x0349, 0x27,
	0x034A, 0x09,
	0x034B, 0x1F,
		
	/* Mode Setting */		
	0x0220, 0x00,
	0x0222, 0x01,
	0x0900, 0x00,
	0x0901, 0x44,
	0x0902, 0x00,		
		
	/* Output Size Setting */		
	0x034C, 0x02,
	0x034D, 0xE0,
	0x034E, 0x02,
	0x034F, 0x28,
		
		
	/* Clock Setting */ 	
	0x0301, 0x05,
	0x0303, 0x01,
	0x0305, 0x02,
	0x0306, 0x00,
	0x0307, 0x78,
	0x030B, 0x01,
	0x030D, 0x04,
	0x030E, 0x00,
	0x030F, 0x6C,
	0x0310, 0x00,
	0x0700, 0x02,
	0x0701, 0x38,
	0x0820, 0x0A,
	0x0821, 0xF8,
	0x3088, 0x04,
	0x6813, 0x02,
	0x6835, 0x07,
	0x6836, 0x00,
	0x6837, 0x04,
	0x684D, 0x07,
	0x684E, 0x00,
	0x684F, 0x04,
	
	/* CIT Setting	*/
	0x0202, 0x02,
	0x0203, 0x72,
		
	/* Gain Setting */		
	0x0204, 0x00,
	0x0205, 0x00,
	0x020E, 0x01,
	0x020F, 0x00,
	
	/* DPC Setting	*/
	0x0B06, 0x00,
};


struct setfile_mode_info imx355_setfile_info[IMGSENSOR_MODE_MAX] = {
	{addr_data_init_imx355,    ARRAY_SIZE(addr_data_init_imx355),    "init"},        //IMGSENSOR_MODE_INIT
	{addr_data_preview_imx355,     ARRAY_SIZE(addr_data_preview_imx355),     "4:3 mode"},    //IMGSENSOR_MODE_PREVIEW
	{addr_data_preview_imx355,     ARRAY_SIZE(addr_data_preview_imx355),     "capture"},     //IMGSENSOR_MODE_CAPTURE
	{addr_data_video_imx355,   ARRAY_SIZE(addr_data_video_imx355),   "16:9 mode"},   //IMGSENSOR_MODE_VIDEO
	{addr_data_video_imx355,   ARRAY_SIZE(addr_data_video_imx355),   "slow_motion"},   //Not used
	{addr_data_video_imx355,   ARRAY_SIZE(addr_data_video_imx355),   "slim_video"},   //Not used
	{addr_data_custom1_imx355, ARRAY_SIZE(addr_data_custom1_imx355), "fast AE"},     //IMGSENSOR_MODE_CUSTOM1
};

#endif//__IMX355_SENSOR_SETFILE_H__
