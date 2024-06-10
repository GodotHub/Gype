/**************************************************************************/
/*  array.cpp                                                             */
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


#include <godot_cpp/variant/array.hpp>

#include <godot_cpp/core/binder_common.hpp>

#include <godot_cpp/godot.hpp>

#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_color_array.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/packed_float64_array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_int64_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/packed_vector4_array.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>

#include <godot_cpp/core/builtin_ptrcall.hpp>

#include <utility>

namespace godot {

Array::_MethodBindings Array::_method_bindings;

void Array::_init_bindings_constructors_destructor() {
	_method_bindings.from_variant_constructor = internal::gdextension_interface_get_variant_to_type_constructor(GDEXTENSION_VARIANT_TYPE_ARRAY);
	_method_bindings.constructor_0 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_ARRAY, 0);
	_method_bindings.constructor_1 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_ARRAY, 1);
	_method_bindings.constructor_2 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_ARRAY, 2);
	_method_bindings.constructor_3 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_ARRAY, 3);
	_method_bindings.constructor_4 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_ARRAY, 4);
	_method_bindings.constructor_5 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_ARRAY, 5);
	_method_bindings.constructor_6 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_ARRAY, 6);
	_method_bindings.constructor_7 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_ARRAY, 7);
	_method_bindings.constructor_8 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_ARRAY, 8);
	_method_bindings.constructor_9 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_ARRAY, 9);
	_method_bindings.constructor_10 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_ARRAY, 10);
	_method_bindings.constructor_11 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_ARRAY, 11);
	_method_bindings.constructor_12 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_ARRAY, 12);
	_method_bindings.destructor = internal::gdextension_interface_variant_get_ptr_destructor(GDEXTENSION_VARIANT_TYPE_ARRAY);
}
void Array::init_bindings() {
	Array::_init_bindings_constructors_destructor();
	StringName _gde_name;
	_gde_name = StringName("size");
	_method_bindings.method_size = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 3173160232);
	_gde_name = StringName("is_empty");
	_method_bindings.method_is_empty = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 3918633141);
	_gde_name = StringName("clear");
	_method_bindings.method_clear = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 3218959716);
	_gde_name = StringName("hash");
	_method_bindings.method_hash = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 3173160232);
	_gde_name = StringName("assign");
	_method_bindings.method_assign = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 2307260970);
	_gde_name = StringName("push_back");
	_method_bindings.method_push_back = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 3316032543);
	_gde_name = StringName("push_front");
	_method_bindings.method_push_front = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 3316032543);
	_gde_name = StringName("append");
	_method_bindings.method_append = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 3316032543);
	_gde_name = StringName("append_array");
	_method_bindings.method_append_array = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 2307260970);
	_gde_name = StringName("resize");
	_method_bindings.method_resize = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 848867239);
	_gde_name = StringName("insert");
	_method_bindings.method_insert = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 3176316662);
	_gde_name = StringName("remove_at");
	_method_bindings.method_remove_at = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 2823966027);
	_gde_name = StringName("fill");
	_method_bindings.method_fill = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 3316032543);
	_gde_name = StringName("erase");
	_method_bindings.method_erase = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 3316032543);
	_gde_name = StringName("front");
	_method_bindings.method_front = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 1460142086);
	_gde_name = StringName("back");
	_method_bindings.method_back = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 1460142086);
	_gde_name = StringName("pick_random");
	_method_bindings.method_pick_random = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 1460142086);
	_gde_name = StringName("find");
	_method_bindings.method_find = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 2336346817);
	_gde_name = StringName("rfind");
	_method_bindings.method_rfind = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 2336346817);
	_gde_name = StringName("count");
	_method_bindings.method_count = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 1481661226);
	_gde_name = StringName("has");
	_method_bindings.method_has = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 3680194679);
	_gde_name = StringName("pop_back");
	_method_bindings.method_pop_back = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 1321915136);
	_gde_name = StringName("pop_front");
	_method_bindings.method_pop_front = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 1321915136);
	_gde_name = StringName("pop_at");
	_method_bindings.method_pop_at = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 3518259424);
	_gde_name = StringName("sort");
	_method_bindings.method_sort = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 3218959716);
	_gde_name = StringName("sort_custom");
	_method_bindings.method_sort_custom = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 3470848906);
	_gde_name = StringName("shuffle");
	_method_bindings.method_shuffle = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 3218959716);
	_gde_name = StringName("bsearch");
	_method_bindings.method_bsearch = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 3372222236);
	_gde_name = StringName("bsearch_custom");
	_method_bindings.method_bsearch_custom = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 161317131);
	_gde_name = StringName("reverse");
	_method_bindings.method_reverse = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 3218959716);
	_gde_name = StringName("duplicate");
	_method_bindings.method_duplicate = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 636440122);
	_gde_name = StringName("slice");
	_method_bindings.method_slice = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 1393718243);
	_gde_name = StringName("filter");
	_method_bindings.method_filter = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 4075186556);
	_gde_name = StringName("map");
	_method_bindings.method_map = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 4075186556);
	_gde_name = StringName("reduce");
	_method_bindings.method_reduce = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 4272450342);
	_gde_name = StringName("any");
	_method_bindings.method_any = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 4129521963);
	_gde_name = StringName("all");
	_method_bindings.method_all = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 4129521963);
	_gde_name = StringName("max");
	_method_bindings.method_max = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 1460142086);
	_gde_name = StringName("min");
	_method_bindings.method_min = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 1460142086);
	_gde_name = StringName("is_typed");
	_method_bindings.method_is_typed = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 3918633141);
	_gde_name = StringName("is_same_typed");
	_method_bindings.method_is_same_typed = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 2988181878);
	_gde_name = StringName("get_typed_builtin");
	_method_bindings.method_get_typed_builtin = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 3173160232);
	_gde_name = StringName("get_typed_class_name");
	_method_bindings.method_get_typed_class_name = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 1825232092);
	_gde_name = StringName("get_typed_script");
	_method_bindings.method_get_typed_script = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 1460142086);
	_gde_name = StringName("make_read_only");
	_method_bindings.method_make_read_only = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 3218959716);
	_gde_name = StringName("is_read_only");
	_method_bindings.method_is_read_only = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_ARRAY, _gde_name._native_ptr(), 3918633141);
	_method_bindings.indexed_setter = internal::gdextension_interface_variant_get_ptr_indexed_setter(GDEXTENSION_VARIANT_TYPE_ARRAY);
	_method_bindings.indexed_getter = internal::gdextension_interface_variant_get_ptr_indexed_getter(GDEXTENSION_VARIANT_TYPE_ARRAY);
	_method_bindings.operator_equal_Variant = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_EQUAL, GDEXTENSION_VARIANT_TYPE_ARRAY, GDEXTENSION_VARIANT_TYPE_NIL);
	_method_bindings.operator_not_equal_Variant = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_NOT_EQUAL, GDEXTENSION_VARIANT_TYPE_ARRAY, GDEXTENSION_VARIANT_TYPE_NIL);
	_method_bindings.operator_not = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_NOT, GDEXTENSION_VARIANT_TYPE_ARRAY, GDEXTENSION_VARIANT_TYPE_NIL);
	_method_bindings.operator_in_Dictionary = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_IN, GDEXTENSION_VARIANT_TYPE_ARRAY, GDEXTENSION_VARIANT_TYPE_DICTIONARY);
	_method_bindings.operator_equal_Array = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_EQUAL, GDEXTENSION_VARIANT_TYPE_ARRAY, GDEXTENSION_VARIANT_TYPE_ARRAY);
	_method_bindings.operator_not_equal_Array = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_NOT_EQUAL, GDEXTENSION_VARIANT_TYPE_ARRAY, GDEXTENSION_VARIANT_TYPE_ARRAY);
	_method_bindings.operator_less_Array = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_LESS, GDEXTENSION_VARIANT_TYPE_ARRAY, GDEXTENSION_VARIANT_TYPE_ARRAY);
	_method_bindings.operator_less_equal_Array = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_LESS_EQUAL, GDEXTENSION_VARIANT_TYPE_ARRAY, GDEXTENSION_VARIANT_TYPE_ARRAY);
	_method_bindings.operator_greater_Array = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_GREATER, GDEXTENSION_VARIANT_TYPE_ARRAY, GDEXTENSION_VARIANT_TYPE_ARRAY);
	_method_bindings.operator_greater_equal_Array = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_GREATER_EQUAL, GDEXTENSION_VARIANT_TYPE_ARRAY, GDEXTENSION_VARIANT_TYPE_ARRAY);
	_method_bindings.operator_add_Array = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_ADD, GDEXTENSION_VARIANT_TYPE_ARRAY, GDEXTENSION_VARIANT_TYPE_ARRAY);
	_method_bindings.operator_in_Array = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_IN, GDEXTENSION_VARIANT_TYPE_ARRAY, GDEXTENSION_VARIANT_TYPE_ARRAY);
}

Array::Array(const Variant *p_variant) {
	_method_bindings.from_variant_constructor(&opaque, p_variant->_native_ptr());
}

Array::Array() {
	internal::_call_builtin_constructor(_method_bindings.constructor_0, &opaque);
}

Array::Array(const Array &from) {
	internal::_call_builtin_constructor(_method_bindings.constructor_1, &opaque, &from);
}

Array::Array(const Array &base, int64_t type, const StringName &class_name, const Variant &script) {
	int64_t type_encoded;
	PtrToArg<int64_t>::encode(type, &type_encoded);
	internal::_call_builtin_constructor(_method_bindings.constructor_2, &opaque, &base, &type_encoded, &class_name, &script);
}

Array::Array(const PackedByteArray &from) {
	internal::_call_builtin_constructor(_method_bindings.constructor_3, &opaque, &from);
}

Array::Array(const PackedInt32Array &from) {
	internal::_call_builtin_constructor(_method_bindings.constructor_4, &opaque, &from);
}

Array::Array(const PackedInt64Array &from) {
	internal::_call_builtin_constructor(_method_bindings.constructor_5, &opaque, &from);
}

Array::Array(const PackedFloat32Array &from) {
	internal::_call_builtin_constructor(_method_bindings.constructor_6, &opaque, &from);
}

Array::Array(const PackedFloat64Array &from) {
	internal::_call_builtin_constructor(_method_bindings.constructor_7, &opaque, &from);
}

Array::Array(const PackedStringArray &from) {
	internal::_call_builtin_constructor(_method_bindings.constructor_8, &opaque, &from);
}

Array::Array(const PackedVector2Array &from) {
	internal::_call_builtin_constructor(_method_bindings.constructor_9, &opaque, &from);
}

Array::Array(const PackedVector3Array &from) {
	internal::_call_builtin_constructor(_method_bindings.constructor_10, &opaque, &from);
}

Array::Array(const PackedColorArray &from) {
	internal::_call_builtin_constructor(_method_bindings.constructor_11, &opaque, &from);
}

Array::Array(const PackedVector4Array &from) {
	internal::_call_builtin_constructor(_method_bindings.constructor_12, &opaque, &from);
}

Array::Array(Array &&other) {
	std::swap(opaque, other.opaque);
}

Array::~Array() {
	_method_bindings.destructor(&opaque);
}

int64_t Array::size() const{
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_size, (GDExtensionTypePtr)&opaque);
}

bool Array::is_empty() const{
	return internal::_call_builtin_method_ptr_ret<int8_t>(_method_bindings.method_is_empty, (GDExtensionTypePtr)&opaque);
}

void Array::clear(){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_clear, (GDExtensionTypePtr)&opaque);
}

int64_t Array::hash() const{
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_hash, (GDExtensionTypePtr)&opaque);
}

void Array::assign(const Array &array){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_assign, (GDExtensionTypePtr)&opaque, &array);
}

void Array::push_back(const Variant &value){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_push_back, (GDExtensionTypePtr)&opaque, &value);
}

void Array::push_front(const Variant &value){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_push_front, (GDExtensionTypePtr)&opaque, &value);
}

void Array::append(const Variant &value){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_append, (GDExtensionTypePtr)&opaque, &value);
}

void Array::append_array(const Array &array){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_append_array, (GDExtensionTypePtr)&opaque, &array);
}

int64_t Array::resize(int64_t size){
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_resize, (GDExtensionTypePtr)&opaque, &size_encoded);
}

int64_t Array::insert(int64_t position, const Variant &value){
	int64_t position_encoded;
	PtrToArg<int64_t>::encode(position, &position_encoded);
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_insert, (GDExtensionTypePtr)&opaque, &position_encoded, &value);
}

void Array::remove_at(int64_t position){
	int64_t position_encoded;
	PtrToArg<int64_t>::encode(position, &position_encoded);
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_remove_at, (GDExtensionTypePtr)&opaque, &position_encoded);
}

void Array::fill(const Variant &value){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_fill, (GDExtensionTypePtr)&opaque, &value);
}

void Array::erase(const Variant &value){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_erase, (GDExtensionTypePtr)&opaque, &value);
}

Variant Array::front() const{
	return internal::_call_builtin_method_ptr_ret<Variant>(_method_bindings.method_front, (GDExtensionTypePtr)&opaque);
}

Variant Array::back() const{
	return internal::_call_builtin_method_ptr_ret<Variant>(_method_bindings.method_back, (GDExtensionTypePtr)&opaque);
}

Variant Array::pick_random() const{
	return internal::_call_builtin_method_ptr_ret<Variant>(_method_bindings.method_pick_random, (GDExtensionTypePtr)&opaque);
}

int64_t Array::find(const Variant &what, int64_t from) const{
	int64_t from_encoded;
	PtrToArg<int64_t>::encode(from, &from_encoded);
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_find, (GDExtensionTypePtr)&opaque, &what, &from_encoded);
}

int64_t Array::rfind(const Variant &what, int64_t from) const{
	int64_t from_encoded;
	PtrToArg<int64_t>::encode(from, &from_encoded);
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_rfind, (GDExtensionTypePtr)&opaque, &what, &from_encoded);
}

int64_t Array::count(const Variant &value) const{
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_count, (GDExtensionTypePtr)&opaque, &value);
}

bool Array::has(const Variant &value) const{
	return internal::_call_builtin_method_ptr_ret<int8_t>(_method_bindings.method_has, (GDExtensionTypePtr)&opaque, &value);
}

Variant Array::pop_back(){
	return internal::_call_builtin_method_ptr_ret<Variant>(_method_bindings.method_pop_back, (GDExtensionTypePtr)&opaque);
}

Variant Array::pop_front(){
	return internal::_call_builtin_method_ptr_ret<Variant>(_method_bindings.method_pop_front, (GDExtensionTypePtr)&opaque);
}

Variant Array::pop_at(int64_t position){
	int64_t position_encoded;
	PtrToArg<int64_t>::encode(position, &position_encoded);
	return internal::_call_builtin_method_ptr_ret<Variant>(_method_bindings.method_pop_at, (GDExtensionTypePtr)&opaque, &position_encoded);
}

void Array::sort(){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_sort, (GDExtensionTypePtr)&opaque);
}

void Array::sort_custom(const Callable &func){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_sort_custom, (GDExtensionTypePtr)&opaque, &func);
}

void Array::shuffle(){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_shuffle, (GDExtensionTypePtr)&opaque);
}

int64_t Array::bsearch(const Variant &value, bool before) const{
	int8_t before_encoded;
	PtrToArg<bool>::encode(before, &before_encoded);
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_bsearch, (GDExtensionTypePtr)&opaque, &value, &before_encoded);
}

int64_t Array::bsearch_custom(const Variant &value, const Callable &func, bool before) const{
	int8_t before_encoded;
	PtrToArg<bool>::encode(before, &before_encoded);
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_bsearch_custom, (GDExtensionTypePtr)&opaque, &value, &func, &before_encoded);
}

void Array::reverse(){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_reverse, (GDExtensionTypePtr)&opaque);
}

Array Array::duplicate(bool deep) const{
	int8_t deep_encoded;
	PtrToArg<bool>::encode(deep, &deep_encoded);
	return internal::_call_builtin_method_ptr_ret<Array>(_method_bindings.method_duplicate, (GDExtensionTypePtr)&opaque, &deep_encoded);
}

Array Array::slice(int64_t begin, int64_t end, int64_t step, bool deep) const{
	int64_t begin_encoded;
	PtrToArg<int64_t>::encode(begin, &begin_encoded);
	int64_t end_encoded;
	PtrToArg<int64_t>::encode(end, &end_encoded);
	int64_t step_encoded;
	PtrToArg<int64_t>::encode(step, &step_encoded);
	int8_t deep_encoded;
	PtrToArg<bool>::encode(deep, &deep_encoded);
	return internal::_call_builtin_method_ptr_ret<Array>(_method_bindings.method_slice, (GDExtensionTypePtr)&opaque, &begin_encoded, &end_encoded, &step_encoded, &deep_encoded);
}

Array Array::filter(const Callable &method) const{
	return internal::_call_builtin_method_ptr_ret<Array>(_method_bindings.method_filter, (GDExtensionTypePtr)&opaque, &method);
}

Array Array::map(const Callable &method) const{
	return internal::_call_builtin_method_ptr_ret<Array>(_method_bindings.method_map, (GDExtensionTypePtr)&opaque, &method);
}

Variant Array::reduce(const Callable &method, const Variant &accum) const{
	return internal::_call_builtin_method_ptr_ret<Variant>(_method_bindings.method_reduce, (GDExtensionTypePtr)&opaque, &method, &accum);
}

bool Array::any(const Callable &method) const{
	return internal::_call_builtin_method_ptr_ret<int8_t>(_method_bindings.method_any, (GDExtensionTypePtr)&opaque, &method);
}

bool Array::all(const Callable &method) const{
	return internal::_call_builtin_method_ptr_ret<int8_t>(_method_bindings.method_all, (GDExtensionTypePtr)&opaque, &method);
}

Variant Array::max() const{
	return internal::_call_builtin_method_ptr_ret<Variant>(_method_bindings.method_max, (GDExtensionTypePtr)&opaque);
}

Variant Array::min() const{
	return internal::_call_builtin_method_ptr_ret<Variant>(_method_bindings.method_min, (GDExtensionTypePtr)&opaque);
}

bool Array::is_typed() const{
	return internal::_call_builtin_method_ptr_ret<int8_t>(_method_bindings.method_is_typed, (GDExtensionTypePtr)&opaque);
}

bool Array::is_same_typed(const Array &array) const{
	return internal::_call_builtin_method_ptr_ret<int8_t>(_method_bindings.method_is_same_typed, (GDExtensionTypePtr)&opaque, &array);
}

int64_t Array::get_typed_builtin() const{
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_get_typed_builtin, (GDExtensionTypePtr)&opaque);
}

StringName Array::get_typed_class_name() const{
	return internal::_call_builtin_method_ptr_ret<StringName>(_method_bindings.method_get_typed_class_name, (GDExtensionTypePtr)&opaque);
}

Variant Array::get_typed_script() const{
	return internal::_call_builtin_method_ptr_ret<Variant>(_method_bindings.method_get_typed_script, (GDExtensionTypePtr)&opaque);
}

void Array::make_read_only(){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_make_read_only, (GDExtensionTypePtr)&opaque);
}

bool Array::is_read_only() const{
	return internal::_call_builtin_method_ptr_ret<int8_t>(_method_bindings.method_is_read_only, (GDExtensionTypePtr)&opaque);
}

bool Array::operator==(const Variant &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_equal_Variant, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool Array::operator!=(const Variant &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_not_equal_Variant, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool Array::operatornot() const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_not, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)nullptr);
}

bool Array::operator==(const Array &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_equal_Array, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool Array::operator!=(const Array &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_not_equal_Array, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool Array::operator<(const Array &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_less_Array, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool Array::operator<=(const Array &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_less_equal_Array, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool Array::operator>(const Array &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_greater_Array, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool Array::operator>=(const Array &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_greater_equal_Array, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

Array Array::operator+(const Array &other) const {
	return internal::_call_builtin_operator_ptr<Array>(_method_bindings.operator_add_Array, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

Array &Array::operator=(const Array &other) {
	_method_bindings.destructor(&opaque);
	internal::_call_builtin_constructor(_method_bindings.constructor_1, &opaque, &other);
	return *this;
}

Array &Array::operator=(Array &&other) {
	std::swap(opaque, other.opaque);
	return *this;
}

} //namespace godot