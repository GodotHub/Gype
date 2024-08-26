/**************************************************************************/
/*  property_info.hpp                                                     */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

#ifndef GODOT_PROPERTY_INFO_HPP
#define GODOT_PROPERTY_INFO_HPP

#include "quickjs/env.h"
#include <gdextension_interface.h>
#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/godot.hpp>
#include <unordered_map>

namespace JSGodot {

enum PropertyHint {
	PROPERTY_HINT_NONE = 0,
	PROPERTY_HINT_RANGE = 1,
	PROPERTY_HINT_ENUM = 2,
	PROPERTY_HINT_ENUM_SUGGESTION = 3,
	PROPERTY_HINT_EXP_EASING = 4,
	PROPERTY_HINT_LINK = 5,
	PROPERTY_HINT_FLAGS = 6,
	PROPERTY_HINT_LAYERS_2D_RENDER = 7,
	PROPERTY_HINT_LAYERS_2D_PHYSICS = 8,
	PROPERTY_HINT_LAYERS_2D_NAVIGATION = 9,
	PROPERTY_HINT_LAYERS_3D_RENDER = 10,
	PROPERTY_HINT_LAYERS_3D_PHYSICS = 11,
	PROPERTY_HINT_LAYERS_3D_NAVIGATION = 12,
	PROPERTY_HINT_LAYERS_AVOIDANCE = 37,
	PROPERTY_HINT_FILE = 13,
	PROPERTY_HINT_DIR = 14,
	PROPERTY_HINT_GLOBAL_FILE = 15,
	PROPERTY_HINT_GLOBAL_DIR = 16,
	PROPERTY_HINT_RESOURCE_TYPE = 17,
	PROPERTY_HINT_MULTILINE_TEXT = 18,
	PROPERTY_HINT_EXPRESSION = 19,
	PROPERTY_HINT_PLACEHOLDER_TEXT = 20,
	PROPERTY_HINT_COLOR_NO_ALPHA = 21,
	PROPERTY_HINT_OBJECT_ID = 22,
	PROPERTY_HINT_TYPE_STRING = 23,
	PROPERTY_HINT_NODE_PATH_TO_EDITED_NODE = 24,
	PROPERTY_HINT_OBJECT_TOO_BIG = 25,
	PROPERTY_HINT_NODE_PATH_VALID_TYPES = 26,
	PROPERTY_HINT_SAVE_FILE = 27,
	PROPERTY_HINT_GLOBAL_SAVE_FILE = 28,
	PROPERTY_HINT_INT_IS_OBJECTID = 29,
	PROPERTY_HINT_INT_IS_POINTER = 30,
	PROPERTY_HINT_ARRAY_TYPE = 31,
	PROPERTY_HINT_LOCALE_ID = 32,
	PROPERTY_HINT_LOCALIZABLE_STRING = 33,
	PROPERTY_HINT_NODE_TYPE = 34,
	PROPERTY_HINT_HIDE_QUATERNION_EDIT = 35,
	PROPERTY_HINT_PASSWORD = 36,
	PROPERTY_HINT_MAX = 38,
};

enum PropertyUsageFlags : uint64_t {
	PROPERTY_USAGE_NONE = 0,
	PROPERTY_USAGE_STORAGE = 2,
	PROPERTY_USAGE_EDITOR = 4,
	PROPERTY_USAGE_INTERNAL = 8,
	PROPERTY_USAGE_CHECKABLE = 16,
	PROPERTY_USAGE_CHECKED = 32,
	PROPERTY_USAGE_GROUP = 64,
	PROPERTY_USAGE_CATEGORY = 128,
	PROPERTY_USAGE_SUBGROUP = 256,
	PROPERTY_USAGE_CLASS_IS_BITFIELD = 512,
	PROPERTY_USAGE_NO_INSTANCE_STATE = 1024,
	PROPERTY_USAGE_RESTART_IF_CHANGED = 2048,
	PROPERTY_USAGE_SCRIPT_VARIABLE = 4096,
	PROPERTY_USAGE_STORE_IF_NULL = 8192,
	PROPERTY_USAGE_UPDATE_ALL_IF_MODIFIED = 16384,
	PROPERTY_USAGE_SCRIPT_DEFAULT_VALUE = 32768,
	PROPERTY_USAGE_CLASS_IS_ENUM = 65536,
	PROPERTY_USAGE_NIL_IS_VARIANT = 131072,
	PROPERTY_USAGE_ARRAY = 262144,
	PROPERTY_USAGE_ALWAYS_DUPLICATE = 524288,
	PROPERTY_USAGE_NEVER_DUPLICATE = 1048576,
	PROPERTY_USAGE_HIGH_END_GFX = 2097152,
	PROPERTY_USAGE_NODE_PATH_FROM_SCENE_ROOT = 4194304,
	PROPERTY_USAGE_RESOURCE_NOT_PERSISTENT = 8388608,
	PROPERTY_USAGE_KEYING_INCREMENTS = 16777216,
	PROPERTY_USAGE_DEFERRED_SET_RESOURCE = 33554432,
	PROPERTY_USAGE_EDITOR_INSTANTIATE_OBJECT = 67108864,
	PROPERTY_USAGE_EDITOR_BASIC_SETTING = 134217728,
	PROPERTY_USAGE_READ_ONLY = 268435456,
	PROPERTY_USAGE_SECRET = 536870912,
	PROPERTY_USAGE_DEFAULT = 6,
	PROPERTY_USAGE_NO_EDITOR = 2,
};

struct PropertyInfo {
	GDExtensionVariantType type = GDExtensionVariantType::GDEXTENSION_VARIANT_TYPE_NIL;
	uint8_t *name;
	uint8_t *class_name;
	uint32_t hint = PropertyHint::PROPERTY_HINT_NONE;
	uint8_t *hint_string;
	uint32_t usage = PropertyUsageFlags::PROPERTY_USAGE_DEFAULT;

	PropertyInfo() = default;

	PropertyInfo(GDExtensionVariantType p_type, const uint8_t *p_name, PropertyHint p_hint, const uint8_t *p_hint_string, uint32_t p_usage, const uint8_t *p_class_name) :
			type(p_type),
			name(const_cast<uint8_t *>(p_name)),
			hint(p_hint),
			hint_string(const_cast<uint8_t *>(p_hint_string)),
			usage(p_usage) {
		if (hint == PropertyHint::PROPERTY_HINT_RESOURCE_TYPE) {
			class_name = hint_string;
		} else {
			class_name = const_cast<uint8_t *>(p_class_name);
		}
	}

	PropertyInfo(const GDExtensionPropertyInfo *p_info) :
			PropertyInfo(p_info->type, *reinterpret_cast<uint8_t **>(p_info->name), (PropertyHint)p_info->hint, *reinterpret_cast<uint8_t **>(p_info->hint_string), p_info->usage, *reinterpret_cast<uint8_t **>(p_info->class_name)) {}

	std::unordered_map<std::string, std::any> to_dict() const {
		std::unordered_map<std::string, std::any> dict;
		dict["name"] = name;
		dict["class_name"] = class_name;
		dict["type"] = type;
		dict["hint"] = hint;
		dict["hint_string"] = hint_string;
		dict["usage"] = usage;
		return dict;
	}

	static PropertyInfo from_dict(std::unordered_map<std::string, std::any> p_dict) {
		PropertyInfo pi;
		if (p_dict.count("type") > 0) {
			pi.type = GDExtensionVariantType(std::any_cast<int>(p_dict["type"]));
		}
		if (p_dict.count("name") > 0) {
			pi.name = std::any_cast<uint8_t *>(p_dict["name"]);
		}
		if (p_dict.count("class_name") > 0) {
			pi.class_name = std::any_cast<uint8_t *>(p_dict["class_name"]);
		}
		if (p_dict.count("hint") > 0) {
			pi.hint = PropertyHint(std::any_cast<int>(p_dict["hint"]));
		}
		if (p_dict.count("hint_string") > 0) {
			pi.hint_string = std::any_cast<uint8_t *>(p_dict["hint_string"]);
		}
		if (p_dict.count("usage") > 0) {
			pi.usage = std::any_cast<uint32_t>(p_dict["usage"]);
		}
		return pi;
	}

	void _update(GDExtensionPropertyInfo *p_info) {
		p_info->type = (GDExtensionVariantType)type;
		*(reinterpret_cast<uint8_t **>(p_info->name)) = name;
		p_info->hint = hint;
		*(reinterpret_cast<uint8_t **>(p_info->hint_string)) = hint_string;
		p_info->usage = usage;
		*(reinterpret_cast<uint8_t **>(p_info->class_name)) = class_name;
	}

	GDExtensionPropertyInfo _to_gdextension() const {
		return {
			(GDExtensionVariantType)type,
			name,
			class_name,
			hint,
			hint_string,
			usage,
		};
	}
};
} //namespace JSGodot

#endif // GODOT_PROPERTY_INFO_HPP
