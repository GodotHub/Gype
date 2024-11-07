#ifndef __QUICKJS_HELPER_H__
#define __QUICKJS_HELPER_H__

#include "quickjs/quickjs.h"
#include <godot_cpp/templates/hash_map.hpp>
#include <godot_cpp/templates/hash_set.hpp>
#include <godot_cpp/variant/builtin_types.hpp>
#include <godot_cpp/variant/variant.hpp>

using namespace godot;

extern HashSet<int> class_id_list;
extern HashMap<StringName, int> classes;
extern HashMap<uint64_t, JSValue> constructors;

uint8_t *get_typed_array_buf(JSContext *ctx, JSValue v);
bool is_typed_array(JSContext *ctx, JSValue value);
bool is_int(JSContext *ctx, JSValue value);
bool is_float(JSContext *ctx, JSValue value);
void print_exception(JSContext *ctx);
int64_t to_int64(JSContext *ctx, JSValue val);
bool is_exception(JSContext *ctx, JSValue exp);
Variant any_to_variant(JSValue val);
JSValue any_to_jsvalue(const Variant *val);

#ifndef _countof
#define _countof(array) (sizeof(array) / sizeof((array)[0]))
#endif // _countof

#endif // __QUICKJS_HELPER_H__