#ifndef __REGISTER_HELPER_H__
#define __REGISTER_HELPER_H__

#include "quickjs/quickjs.h"
#include <godot_cpp/templates/hash_map.hpp>
#include <godot_cpp/variant/string_name.hpp>

using namespace godot;

extern HashMap<StringName, JSClassID> classes;

template <typename T>
T *js_owner_to_gd(JSContext *ctx, JSValue this_obj) {
	return static_cast<T *>(gd_get_wrapper(ctx, this_obj));
}

Variant js_get_variant(JSContext *ctx, JSValue val);

#endif // __REGISTER_HELPER_H__