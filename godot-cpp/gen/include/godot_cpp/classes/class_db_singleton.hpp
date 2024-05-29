/**************************************************************************/
/*  class_db_singleton.hpp                                                */
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

// THIS FILE IS GENERATED. EDITS WILL BE LOST.

#ifndef GODOT_CPP_CLASS_DB_SINGLETON_HPP
#define GODOT_CPP_CLASS_DB_SINGLETON_HPP

#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/core/object.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>

#include <godot_cpp/templates/vararg.h>
namespace godot {

class ClassDBSingleton : public Object {
	GDEXTENSION_CLASS_ALIAS(ClassDBSingleton, ClassDB, Object)

public:

	static ClassDBSingleton *get_singleton();

	PackedStringArray get_class_list() const;
	PackedStringArray get_inheriters_from_class(const StringName &_class) const;
	StringName get_parent_class(const StringName &_class) const;
	bool class_exists(const StringName &_class) const;
	bool is_parent_class(const StringName &_class, const StringName &inherits) const;
	bool can_instantiate(const StringName &_class) const;
	Variant instantiate(const StringName &_class) const;
	bool class_has_signal(const StringName &_class, const StringName &signal) const;
	Dictionary class_get_signal(const StringName &_class, const StringName &signal) const;
	TypedArray<Dictionary> class_get_signal_list(const StringName &_class, bool no_inheritance = false) const;
	TypedArray<Dictionary> class_get_property_list(const StringName &_class, bool no_inheritance = false) const;
	Variant class_get_property(Object *object, const StringName &property) const;
	Error class_set_property(Object *object, const StringName &property, const Variant &value) const;
	bool class_has_method(const StringName &_class, const StringName &method, bool no_inheritance = false) const;
	TypedArray<Dictionary> class_get_method_list(const StringName &_class, bool no_inheritance = false) const;
	PackedStringArray class_get_integer_constant_list(const StringName &_class, bool no_inheritance = false) const;
	bool class_has_integer_constant(const StringName &_class, const StringName &name) const;
	int64_t class_get_integer_constant(const StringName &_class, const StringName &name) const;
	bool class_has_enum(const StringName &_class, const StringName &name, bool no_inheritance = false) const;
	PackedStringArray class_get_enum_list(const StringName &_class, bool no_inheritance = false) const;
	PackedStringArray class_get_enum_constants(const StringName &_class, const StringName &_enum, bool no_inheritance = false) const;
	StringName class_get_integer_constant_enum(const StringName &_class, const StringName &name, bool no_inheritance = false) const;
	bool is_class_enabled(const StringName &_class) const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Object::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

#define CLASSDB_SINGLETON_FORWARD_METHODS \
	static PackedStringArray get_class_list() { \
		return ClassDBSingleton::get_singleton()->get_class_list(); \
	} \
	static PackedStringArray get_inheriters_from_class(const StringName &_class) { \
		return ClassDBSingleton::get_singleton()->get_inheriters_from_class(_class); \
	} \
	static StringName get_parent_class(const StringName &_class) { \
		return ClassDBSingleton::get_singleton()->get_parent_class(_class); \
	} \
	static bool class_exists(const StringName &_class) { \
		return ClassDBSingleton::get_singleton()->class_exists(_class); \
	} \
	static bool is_parent_class(const StringName &_class, const StringName &inherits) { \
		return ClassDBSingleton::get_singleton()->is_parent_class(_class, inherits); \
	} \
	static bool can_instantiate(const StringName &_class) { \
		return ClassDBSingleton::get_singleton()->can_instantiate(_class); \
	} \
	static Variant instantiate(const StringName &_class) { \
		return ClassDBSingleton::get_singleton()->instantiate(_class); \
	} \
	static bool class_has_signal(const StringName &_class, const StringName &signal) { \
		return ClassDBSingleton::get_singleton()->class_has_signal(_class, signal); \
	} \
	static Dictionary class_get_signal(const StringName &_class, const StringName &signal) { \
		return ClassDBSingleton::get_singleton()->class_get_signal(_class, signal); \
	} \
	static TypedArray<Dictionary> class_get_signal_list(const StringName &_class, bool no_inheritance = false) { \
		return ClassDBSingleton::get_singleton()->class_get_signal_list(_class, no_inheritance); \
	} \
	static TypedArray<Dictionary> class_get_property_list(const StringName &_class, bool no_inheritance = false) { \
		return ClassDBSingleton::get_singleton()->class_get_property_list(_class, no_inheritance); \
	} \
	static Variant class_get_property(Object *object, const StringName &property) { \
		return ClassDBSingleton::get_singleton()->class_get_property(object, property); \
	} \
	static Error class_set_property(Object *object, const StringName &property, const Variant &value) { \
		return ClassDBSingleton::get_singleton()->class_set_property(object, property, value); \
	} \
	static bool class_has_method(const StringName &_class, const StringName &method, bool no_inheritance = false) { \
		return ClassDBSingleton::get_singleton()->class_has_method(_class, method, no_inheritance); \
	} \
	static TypedArray<Dictionary> class_get_method_list(const StringName &_class, bool no_inheritance = false) { \
		return ClassDBSingleton::get_singleton()->class_get_method_list(_class, no_inheritance); \
	} \
	static PackedStringArray class_get_integer_constant_list(const StringName &_class, bool no_inheritance = false) { \
		return ClassDBSingleton::get_singleton()->class_get_integer_constant_list(_class, no_inheritance); \
	} \
	static bool class_has_integer_constant(const StringName &_class, const StringName &name) { \
		return ClassDBSingleton::get_singleton()->class_has_integer_constant(_class, name); \
	} \
	static int64_t class_get_integer_constant(const StringName &_class, const StringName &name) { \
		return ClassDBSingleton::get_singleton()->class_get_integer_constant(_class, name); \
	} \
	static bool class_has_enum(const StringName &_class, const StringName &name, bool no_inheritance = false) { \
		return ClassDBSingleton::get_singleton()->class_has_enum(_class, name, no_inheritance); \
	} \
	static PackedStringArray class_get_enum_list(const StringName &_class, bool no_inheritance = false) { \
		return ClassDBSingleton::get_singleton()->class_get_enum_list(_class, no_inheritance); \
	} \
	static PackedStringArray class_get_enum_constants(const StringName &_class, const StringName &_enum, bool no_inheritance = false) { \
		return ClassDBSingleton::get_singleton()->class_get_enum_constants(_class, _enum, no_inheritance); \
	} \
	static StringName class_get_integer_constant_enum(const StringName &_class, const StringName &name, bool no_inheritance = false) { \
		return ClassDBSingleton::get_singleton()->class_get_integer_constant_enum(_class, name, no_inheritance); \
	} \
	static bool is_class_enabled(const StringName &_class) { \
		return ClassDBSingleton::get_singleton()->is_class_enabled(_class); \
	} \
	;

#endif // ! GODOT_CPP_CLASS_DB_SINGLETON_HPP