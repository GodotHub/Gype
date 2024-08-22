#ifndef QUICKJS_FINALIZER
#define QUICKJS_FINALIZER

#include "quickjs/env.h"
#include <quickjs/class_ids.h>
#include <string>
#include <unordered_map>

#ifdef __cplusplus
extern "C" {
#endif
void js_init_module(JSContext *ctx);
void variant_finalizer(JSRuntime *rt, JSValue val);

#ifdef __cplusplus
}

#endif
#endif