#ifndef __SCREENOUT_H__
#define __SCREENOUT_H__

#include "phonedata.h"

void ShowMenu(void);
//void ShowPhoneInfo(phonedata phone);
void ShowPhoneInfo(const phonedata *phone);

#endif /* __SCREENOUT_H__ */