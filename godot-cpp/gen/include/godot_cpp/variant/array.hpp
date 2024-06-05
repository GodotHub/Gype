/**************************************************************************/
/*  array.hpp                                                             */
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

#ifndef GODOT_CPP_ARRAY_HPP
#define GODOT_CPP_ARRAY_HPP

#include <godot_cpp/core/defs.hpp>

#include <godot_cpp/variant/array_helpers.hpp>
#include <gdextension_interface.h>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class Callable;
class Dictionary;
class PackedByteArray;
class PackedColorArray;
class PackedFloat32Array;
class PackedFloat64Array;
class PackedInt32Array;
class PackedInt64Array;
class PackedStringArray;
class PackedVector2Array;
class PackedVector3Array;
class StringName;
class Variant;

class Array {
	static constexpr size_t ARRAY_SIZE = 8;
	uint8_t opaque[ARRAY_SIZE] = {};

	friend class Variant;

	static struct _MethodBindings {
		GDExtensionTypeFromVariantConstructorFunc from_variant_constructor;
		GDExtensionPtrConstructor constructor_0;
		GDExtensionPtrConstructor constructor_1;
		GDExtensionPtrConstructor constructor_2;
		GDExtensionPtrConstructor constructor_3;
		GDExtensionPtrConstructor constructor_4;
		GDExtensionPtrConstructor constructor_5;
		GDExtensionPtrConstructor constructor_6;
		GDExtensionPtrConstructor constructor_7;
		GDExtensionPtrConstructor constructor_8;
		GDExtensionPtrConstructor constructor_9;
		GDExtensionPtrConstructor constructor_10;
		GDExtensionPtrConstructor constructor_11;
		GDExtensionPtrDestructor destructor;
		GDExtensionPtrBuiltInMethod method_size;
		GDExtensionPtrBuiltInMethod method_is_empty;
		GDExtensionPtrBuiltInMethod method_clear;
		GDExtensionPtrBuiltInMethod method_hash;
		GDExtensionPtrBuiltInMethod method_assign;
		GDExtensionPtrBuiltInMethod method_push_back;
		GDExtensionPtrBuiltInMethod method_push_front;
		GDExtensionPtrBuiltInMethod method_append;
		GDExtensionPtrBuiltInMethod method_append_array;
		GDExtensionPtrBuiltInMethod method_resize;
		GDExtensionPtrBuiltInMethod method_insert;
		GDExtensionPtrBuiltInMethod method_remove_at;
		GDExtensionPtrBuiltInMethod method_fill;
		GDExtensionPtrBuiltInMethod method_erase;
		GDExtensionPtrBuiltInMethod method_front;
		GDExtensionPtrBuiltInMethod method_back;
		GDExtensionPtrBuiltInMethod method_pick_random;
		GDExtensionPtrBuiltInMethod method_find;
		GDExtensionPtrBuiltInMethod method_rfind;
		GDExtensionPtrBuiltInMethod method_count;
		GDExtensionPtrBuiltInMethod method_has;
		GDExtensionPtrBuiltInMethod method_pop_back;
		GDExtensionPtrBuiltInMethod method_pop_front;
		GDExtensionPtrBuiltInMethod method_pop_at;
		GDExtensionPtrBuiltInMethod method_sort;
		GDExtensionPtrBuiltInMethod method_sort_custom;
		GDExtensionPtrBuiltInMethod method_shuffle;
		GDExtensionPtrBuiltInMethod method_bsearch;
		GDExtensionPtrBuiltInMethod method_bsearch_custom;
		GDExtensionPtrBuiltInMethod method_reverse;
		GDExtensionPtrBuiltInMethod method_duplicate;
		GDExtensionPtrBuiltInMethod method_slice;
		GDExtensionPtrBuiltInMethod method_filter;
		GDExtensionPtrBuiltInMethod method_map;
		GDExtensionPtrBuiltInMethod method_reduce;
		GDExtensionPtrBuiltInMethod method_any;
		GDExtensionPtrBuiltInMethod method_all;
		GDExtensionPtrBuiltInMethod method_max;
		GDExtensionPtrBuiltInMethod method_min;
		GDExtensionPtrBuiltInMethod method_is_typed;
		GDExtensionPtrBuiltInMethod method_is_same_typed;
		GDExtensionPtrBuiltInMethod method_get_typed_builtin;
		GDExtensionPtrBuiltInMethod method_get_typed_class_name;
		GDExtensionPtrBuiltInMethod method_get_typed_script;
		GDExtensionPtrBuiltInMethod method_make_read_only;
		GDExtensionPtrBuiltInMethod method_is_read_only;
		GDExtensionPtrIndexedSetter indexed_setter;
		GDExtensionPtrIndexedGetter indexed_getter;
		GDExtensionPtrOperatorEvaluator operator_equal_Variant;
		GDExtensionPtrOperatorEvaluator operator_not_equal_Variant;
		GDExtensionPtrOperatorEvaluator operator_not;
		GDExtensionPtrOperatorEvaluator operator_in_Dictionary;
		GDExtensionPtrOperatorEvaluator operator_equal_Array;
		GDExtensionPtrOperatorEvaluator operator_not_equal_Array;
		GDExtensionPtrOperatorEvaluator operator_less_Array;
		GDExtensionPtrOperatorEvaluator operator_less_equal_Array;
		GDExtensionPtrOperatorEvaluator operator_greater_Array;
		GDExtensionPtrOperatorEvaluator operator_greater_equal_Array;
		GDExtensionPtrOperatorEvaluator operator_add_Array;
		GDExtensionPtrOperatorEvaluator operator_in_Array;
	} _method_bindings;

	static void init_bindings();
	static void _init_bindings_constructors_destructor();

	Array(const Variant *p_variant);

public:
	_FORCE_INLINE_ GDExtensionTypePtr _native_ptr() const { return const_cast<uint8_t (*)[ARRAY_SIZE]>(&opaque); }
	Array();
	Array(const Array &from);
	Array(const Array &base, int64_t type, const StringName &class_name, const Variant &script);
	Array(const PackedByteArray &from);
	Array(const PackedInt32Array &from);
	Array(const PackedInt64Array &from);
	Array(const PackedFloat32Array &from);
	Array(const PackedFloat64Array &from);
	Array(const PackedStringArray &from);
	Array(const PackedVector2Array &from);
	Array(const PackedVector3Array &from);
	Array(const PackedColorArray &from);
	Array(Array &&other);
	~Array();
	int64_t size() const;
	bool is_empty() const;
	void clear();
	int64_t hash() const;
	void assign(const Array &array);
	void push_back(const Variant &value);
	void push_front(const Variant &value);
	void append(const Variant &value);
	void append_array(const Array &array);
	int64_t resize(int64_t size);
	int64_t insert(int64_t position, const Variant &value);
	void remove_at(int64_t position);
	void fill(const Variant &value);
	void erase(const Variant &value);
	Variant front() const;
	Variant back() const;
	Variant pick_random() const;
	int64_t find(const Variant &what, int64_t from = 0) const;
	int64_t rfind(const Variant &what, int64_t from = -1) const;
	int64_t count(const Variant &value) const;
	bool has(const Variant &value) const;
	Variant pop_back();
	Variant pop_front();
	Variant pop_at(int64_t position);
	void sort();
	void sort_custom(const Callable &func);
	void shuffle();
	int64_t bsearch(const Variant &value, bool before = true) const;
	int64_t bsearch_custom(const Variant &value, const Callable &func, bool before = true) const;
	void reverse();
	Array duplicate(bool deep = false) const;
	Array slice(int64_t begin, int64_t end = 2147483647, int64_t step = 1, bool deep = false) const;
	Array filter(const Callable &method) const;
	Array map(const Callable &method) const;
	Variant reduce(const Callable &method, const Variant &accum) const;
	bool any(const Callable &method) const;
	bool all(const Callable &method) const;
	Variant max() const;
	Variant min() const;
	bool is_typed() const;
	bool is_same_typed(const Array &array) const;
	int64_t get_typed_builtin() const;
	StringName get_typed_class_name() const;
	Variant get_typed_script() const;
	void make_read_only();
	bool is_read_only() const;
	bool operator==(const Variant &other) const;
	bool operator!=(const Variant &other) const;
	bool operatornot() const;
	bool operator==(const Array &other) const;
	bool operator!=(const Array &other) const;
	bool operator<(const Array &other) const;
	bool operator<=(const Array &other) const;
	bool operator>(const Array &other) const;
	bool operator>=(const Array &other) const;
	Array operator+(const Array &other) const;
	Array &operator=(const Array &other);
	Array &operator=(Array &&other);
	template <typename... Args>
	static Array make(Args... args) {
		return helpers::append_all(Array(), args...);
	}
	const Variant &operator[](int64_t p_index) const;
	Variant &operator[](int64_t p_index);
	void set_typed(uint32_t p_type, const StringName &p_class_name, const Variant &p_script);
	void _ref(const Array &p_from) const;
};

} // namespace godot
#endif // ! GODOT_CPP_ARRAY_HPP