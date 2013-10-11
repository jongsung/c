#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef WIN32
#include <windows.h>
#endif

enum {
    PHONE_INPUT=1,
    PHONE_SHOWALL,
	PHONE_SEARCH,
	PHONE_DELETE,
    PHONE_QUIT
};

#endif /* __COMMON_H__ */