#ifndef __OBJECT_WRAPPER_H__
#define __OBJECT_WRAPPER_H__

#include "quickjs/quickjs.h"

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef struct ObjectWrapper ObjectWrapper;
typedef struct VariantWrapper VariantWrapper;
typedef struct JSValue JSValue;
typedef struct JSContext JSContext;

ObjectWrapper *gd_new_empty_JSObject_wrapper();
ObjectWrapper *gd_new_JSObject_wrapper(JSContext *ctx, JSValue this_obj);
void gd_JSObject_set_value(ObjectWrapper *this_obj, VariantWrapper *keyw, VariantWrapper *valw);
void *gd_JSObject_get_opaque(ObjectWrapper *wrapper);

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __OBJECT_WRAPPER_H__