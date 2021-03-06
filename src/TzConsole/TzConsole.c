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
#include "TzConsole.h"
#include <stdlib.h>

/// 获得控制台颜色字符
char __tz_console_colorchar(TzConsoleColor col)
{
    switch (col)
    {
    case TZ_CONSOLE_COLOR_BLACK:    
        return '0';
    case TZ_CONSOLE_COLOR_BLUE:     
        return '1';
    case TZ_CONSOLE_COLOR_GREEN:    
        return '2';
    case TZ_CONSOLE_COLOR_ACIDBLUE: 
        return '3';
    case TZ_CONSOLE_COLOR_RED:      
        return '4';
    case TZ_CONSOLE_COLOR_PURPLE:   
        return '5';
    case TZ_CONSOLE_COLOR_YELLOW:   
        return '6';
    case TZ_CONSOLE_COLOR_WHITE:    
        return '7';
    case TZ_CONSOLE_COLOR_GRAY:     
        return '8';
    case TZ_CONSOLE_COLOR_LIGHTBLUE:
        return '9';
    case TZ_CONSOLE_COLOR_PALEGREEN: 
        return 'A';
    case TZ_CONSOLE_COLOR_LIGHTGREEN: 
        return 'B';
    case TZ_CONSOLE_COLOR_LIGHTRED: 
        return 'C';
    case TZ_CONSOLE_COLOR_LAVENDER: 
        return 'D';
    case TZ_CONSOLE_COLOR_LIGHTYELLOW: 
        return 'E';
    case TZ_CONSOLE_COLOR_BRIGHTWHITE: 
        return 'F';
    default:
        return '0';
    }
}

int32_t tz_console_color(TzConsoleColor fcol, TzConsoleColor bcol)
{
    char cmd[] = "color bf";
    cmd[6] = __tz_console_colorchar(bcol);
    cmd[7] = __tz_console_colorchar(fcol);

    return system(cmd);
}

int32_t tz_console_pause()
{
    return system("pause");
}

