#ifndef __OBJECT_WRAPPER_H__
#define __OBJECT_WRAPPER_H__

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef struct ObjectWrapper ObjectWrapper;
typedef struct VariantWrapper VariantWrapper;
typedef struct JSValue JSValue;

ObjectWrapper *gd_new_empty_JSObject_wrapper();
ObjectWrapper *get_new_JSObject_wrapper(JSValue this_obj);
void gd_JSObject_set_value(ObjectWrapper *this_obj, VariantWrapper *keyw, VariantWrapper *valw);
void *gd_JSObject_get_opaque(ObjectWrapper *wrapper);

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __OBJECT_WRAPPER_H__