#ifndef __QUICKJS_HELPER_H__
#define __QUICKJS_HELPER_H__

#include "quickjs/quickjs.h"
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>

using namespace godot;

uint8_t *get_typed_array_buf(JSContext *ctx, JSValue v);
bool is_typed_array(JSContext *ctx, JSValue value);
bool is_int(JSContext *ctx, JSValue value);
bool is_float(JSContext *ctx, JSValue value);
void print_exception(JSContext *ctx);
bool is_exception(JSContext *ctx, JSValue exp);

#endif // __QUICKJS_HELPER_H__