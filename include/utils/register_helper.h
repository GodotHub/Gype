#ifndef __REGISTER_HELPER_H__
#define __REGISTER_HELPER_H__

#include "quickjs/quickjs.h"
#include "utils/env.h"
#include "utils/quickjs_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/templates/hash_map.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>
#include <type_traits>

using namespace godot;

static HashMap<StringName, JSClassID> classes;

#endif // __REGISTER_HELPER_H__