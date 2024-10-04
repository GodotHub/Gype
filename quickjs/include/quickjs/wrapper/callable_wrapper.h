#ifndef __CALLABLE_WRAPPER_H__
#define __CALLABLE_WRAPPER_H__

#include "quickjs/quickjs.h"

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef struct JSContext JSContext;
typedef struct CallableWrapper CallableWrapper;

void *gd_Callable_get_opaque(CallableWrapper *wrapper);
CallableWrapper *gd_new_empty_Callable_wrapper();
CallableWrapper *gd_new_Callable_wrapper(JSContext *ctx, JSValue this_obj, JSValue method);

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __CALLABLE_WRAPPER_H__