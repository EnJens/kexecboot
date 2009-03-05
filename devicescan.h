/*
 *  kexecboot - A kexec based bootloader
 *
 *  Copyright (c) 2008-2009 Yuri Bushmelev <jay4mail@gmail.com>
 *  Copyright (c) 2008 Thomas Kunze <thommycheck@gmx.de>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 */
#ifndef _HAVE_DEVICESCAN_H_
#define _HAVE_DEVICESCAN_H_

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/mount.h>
#include <asm/setup.h> // for COMMAND_LINE_SIZE
#include <errno.h>
#include "fstype/fstype.h"
#include "util.h"

struct fslist {
	char **list;
	unsigned int size;
};

struct bootlist *scan_devices(global_settings *settings);
void free_bootlist(struct bootlist* bl);
#endif
