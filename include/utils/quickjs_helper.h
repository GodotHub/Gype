#ifndef __QUICKJS_HELPER_H__
#define __QUICKJS_HELPER_H__

#include "quickjs/quickjs.h"
#include "utils/env.h"
#include <gdextension_interface.h>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>

using namespace godot;

uint8_t *get_typed_array_buf(JSValue v);
bool is_typed_array(JSValue value);
bool is_int(JSValue value);
bool is_float(JSValue value);
void print_exception();
bool is_exception(JSValue exp);

#endif // __QUICKJS_HELPER_H__