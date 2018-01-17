/*
 * Phoenix-RTOS
 *
 * libphoenix
 *
 * dirent.h
 *
 * Copyright 2018 Phoenix Systems
 * Author: Jan Sikorski
 *
 * This file is part of Phoenix-RTOS.
 *
 * %LICENSE%
 */

#ifndef _LIBPHOENIX_DIRENT_H_
#define _LIBPHOENIX_DIRENT_H_

#include <stdio.h>
#include <sys/types.h>

#define NAME_MAX 128


struct dirent {
	ino_t  d_ino;
	u32    d_type;
	u16    d_reclen;
	u16    d_namlen;
	char   d_name[];
};


extern struct dirent *readdir(DIR *s);


extern DIR *opendir(const char *dirname);


extern int closedir(DIR *dirp);



#endif
