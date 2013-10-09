#ifndef __PHONEDATA_H__
#define __PHONEDATA_H__

#define NAME_LEN	30
#define PHONE_LEN	30

typedef struct __phonedata {
    char name[NAME_LEN];
    char phonenum[PHONE_LEN];
} phonedata;

#endif /* __PHONEDATA_H__ */