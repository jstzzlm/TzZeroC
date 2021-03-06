/**
 * Copyright (c) 2016, 技术挑战者联盟(TZZ)
 *
 * Contact	:	jstzzlm@hotmail.com
 * Web Site :	http://www.jstzzlm.com
 *
 * Author	:	丁晶(cooben)
 * Date		:	2016/07/10
 *
 * This file is part of TzZeroC.
 *
 * All rights reserved.
 *
 * TzZeroC is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation.
 *
 * TzZeroC is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with TzZeroC; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, 
 * MA 02110-1301 USA.
 */
#ifndef TZZEROC_TZCONSOLE_TZCONSOLE_H
#define TZZEROC_TZCONSOLE_TZCONSOLE_H

#include <stdint.h>
#include "TzTerminalExport.h"

typedef enum _TzConsoleColor 
{
    TZ_CONSOLE_COLOR_BLACK      = 0x0,  ///< 黑色
    TZ_CONSOLE_COLOR_BLUE       = 0x1,  ///< 蓝色
    TZ_CONSOLE_COLOR_GREEN      = 0x2,  ///< 绿色
    TZ_CONSOLE_COLOR_ACIDBLUE   = 0x3,  ///< 湖蓝色
    TZ_CONSOLE_COLOR_RED        = 0x4,  ///< 红色
    TZ_CONSOLE_COLOR_PURPLE     = 0x5,  ///< 紫色
    TZ_CONSOLE_COLOR_YELLOW     = 0x6,  ///< 黄色
    TZ_CONSOLE_COLOR_WHITE      = 0x7,  ///< 白色
    TZ_CONSOLE_COLOR_GRAY       = 0x8,  ///< 灰色
    TZ_CONSOLE_COLOR_LIGHTBLUE  = 0x9,  ///< 浅蓝色
    TZ_CONSOLE_COLOR_PALEGREEN  = 0xA,  ///< 淡绿色
    TZ_CONSOLE_COLOR_LIGHTGREEN = 0xB,  ///< 淡浅绿色
    TZ_CONSOLE_COLOR_LIGHTRED   = 0xC,  ///< 淡红色
    TZ_CONSOLE_COLOR_LAVENDER   = 0xD,  ///< 淡紫色
    TZ_CONSOLE_COLOR_LIGHTYELLOW= 0xE,  ///< 淡黄色
    TZ_CONSOLE_COLOR_BRIGHTWHITE= 0xF,  ///< 亮白色
} TzConsoleColor;

/**
 * 设置控制台颜色
 *
 * @param fcol 指定控制台前景色;
 * @param bcol 制定控制台背景色;
 */
TZTERMINAL_API(int32_t) tz_console_color(TzConsoleColor fcol, TzConsoleColor bcol);

TZTERMINAL_API(int32_t) tz_console_pause();

#endif
