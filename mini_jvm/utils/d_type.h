//
// Created by gust on 2017/9/25.
//

#ifndef MINI_JVM_JVM_TYPE_H
#define MINI_JVM_JVM_TYPE_H

#include "stdlib.h"
//#define __MEM_LEAK_DETECT


#ifdef __MEM_LEAK_DETECT
#include "../cmem/memleak.h"
#endif //__MEM_LEAK_DETECT
#ifdef __cplusplus
extern "C" {
#endif


typedef unsigned char u8;
typedef char c8;
typedef unsigned short int u16;
typedef signed short int s16;
typedef unsigned int u32;
typedef signed int s32;
typedef float f32;
typedef double f64;
typedef unsigned long long u64;
typedef signed long long s64;
typedef void *__refer;

typedef struct _autoptr {
    __refer ref;
    s32 count;
} autoptr;

//======================= memory manage =============================

autoptr *autoptr_get(autoptr *a);

autoptr *autoptr_new(__refer r);

void autoptr_NULL(autoptr **aref);

#ifndef __MEM_LEAK_DETECT

void *jvm_alloc(u32 size);

s32 jvm_free(void *ptr);

void *jvm_realloc(void *pPtr, u32 size);

#endif //__MEM_LEAK_DETECT

#ifdef __cplusplus
}
#endif


#endif //MINI_JVM_JVM_TYPE_H
