#ifndef __OBJECT_WRAPPER_H__
#define __OBJECT_WRAPPER_H__

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef struct ObjectWrapper ObjectWrapper;
typedef struct JSValue JSValue;

ObjectWrapper *gd_new_object_wrapper(JSValue *val);

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __OBJECT_WRAPPER_H__