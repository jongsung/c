#ifndef __PHONEFUNC_H__
#define __PHONEFUNC_H__

#include "phonedata.h"

typedef enum {
    PHONE_INPUT = 0,
    PHONE_SHOWALL,
    PHONE_SEARCH,
    PHONE_DELETE,
    PHONE_CHANGE,
    PHONE_QUIT
};



void InputPhoneData(void);
void ShowAllData(void);
void SearchPhoneData(void);
void DeletePhoneData(void);
void ChangePhoneData(void);

void StoreDataToFile(void);
void LoadDataFromFile(void);

void StoreDataToFileInStruct(void);
void LoadDataFromFileInStruct(void);
#endif /* __PHONEFUNC_H__ */