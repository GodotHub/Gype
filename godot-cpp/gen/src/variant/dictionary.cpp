/**************************************************************************/
/*  dictionary.cpp                                                        */
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


#include <godot_cpp/variant/dictionary.hpp>

#include <godot_cpp/core/binder_common.hpp>

#include <godot_cpp/godot.hpp>

#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/variant.hpp>

#include <godot_cpp/core/builtin_ptrcall.hpp>

#include <utility>

namespace godot {

Dictionary::_MethodBindings Dictionary::_method_bindings;

void Dictionary::_init_bindings_constructors_destructor() {
	_method_bindings.from_variant_constructor = internal::gdextension_interface_get_variant_to_type_constructor(GDEXTENSION_VARIANT_TYPE_DICTIONARY);
	_method_bindings.constructor_0 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_DICTIONARY, 0);
	_method_bindings.constructor_1 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_DICTIONARY, 1);
	_method_bindings.destructor = internal::gdextension_interface_variant_get_ptr_destructor(GDEXTENSION_VARIANT_TYPE_DICTIONARY);
}
void Dictionary::init_bindings() {
	Dictionary::_init_bindings_constructors_destructor();
	StringName _gde_name;
	_gde_name = StringName("size");
	_method_bindings.method_size = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_DICTIONARY, _gde_name._native_ptr(), 3173160232);
	_gde_name = StringName("is_empty");
	_method_bindings.method_is_empty = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_DICTIONARY, _gde_name._native_ptr(), 3918633141);
	_gde_name = StringName("clear");
	_method_bindings.method_clear = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_DICTIONARY, _gde_name._native_ptr(), 3218959716);
	_gde_name = StringName("merge");
	_method_bindings.method_merge = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_DICTIONARY, _gde_name._native_ptr(), 2079548978);
	_gde_name = StringName("merged");
	_method_bindings.method_merged = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_DICTIONARY, _gde_name._native_ptr(), 2271165639);
	_gde_name = StringName("has");
	_method_bindings.method_has = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_DICTIONARY, _gde_name._native_ptr(), 3680194679);
	_gde_name = StringName("has_all");
	_method_bindings.method_has_all = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_DICTIONARY, _gde_name._native_ptr(), 2988181878);
	_gde_name = StringName("find_key");
	_method_bindings.method_find_key = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_DICTIONARY, _gde_name._native_ptr(), 1988825835);
	_gde_name = StringName("erase");
	_method_bindings.method_erase = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_DICTIONARY, _gde_name._native_ptr(), 1776646889);
	_gde_name = StringName("hash");
	_method_bindings.method_hash = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_DICTIONARY, _gde_name._native_ptr(), 3173160232);
	_gde_name = StringName("keys");
	_method_bindings.method_keys = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_DICTIONARY, _gde_name._native_ptr(), 4144163970);
	_gde_name = StringName("values");
	_method_bindings.method_values = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_DICTIONARY, _gde_name._native_ptr(), 4144163970);
	_gde_name = StringName("duplicate");
	_method_bindings.method_duplicate = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_DICTIONARY, _gde_name._native_ptr(), 830099069);
	_gde_name = StringName("get");
	_method_bindings.method_get = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_DICTIONARY, _gde_name._native_ptr(), 2205440559);
	_gde_name = StringName("get_or_add");
	_method_bindings.method_get_or_add = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_DICTIONARY, _gde_name._native_ptr(), 1052551076);
	_gde_name = StringName("make_read_only");
	_method_bindings.method_make_read_only = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_DICTIONARY, _gde_name._native_ptr(), 3218959716);
	_gde_name = StringName("is_read_only");
	_method_bindings.method_is_read_only = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_DICTIONARY, _gde_name._native_ptr(), 3918633141);
	_method_bindings.indexed_setter = internal::gdextension_interface_variant_get_ptr_indexed_setter(GDEXTENSION_VARIANT_TYPE_DICTIONARY);
	_method_bindings.indexed_getter = internal::gdextension_interface_variant_get_ptr_indexed_getter(GDEXTENSION_VARIANT_TYPE_DICTIONARY);
	_method_bindings.keyed_setter = internal::gdextension_interface_variant_get_ptr_keyed_setter(GDEXTENSION_VARIANT_TYPE_DICTIONARY);
	_method_bindings.keyed_getter = internal::gdextension_interface_variant_get_ptr_keyed_getter(GDEXTENSION_VARIANT_TYPE_DICTIONARY);
	_method_bindings.keyed_checker = internal::gdextension_interface_variant_get_ptr_keyed_checker(GDEXTENSION_VARIANT_TYPE_DICTIONARY);
	_method_bindings.operator_equal_Variant = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_EQUAL, GDEXTENSION_VARIANT_TYPE_DICTIONARY, GDEXTENSION_VARIANT_TYPE_NIL);
	_method_bindings.operator_not_equal_Variant = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_NOT_EQUAL, GDEXTENSION_VARIANT_TYPE_DICTIONARY, GDEXTENSION_VARIANT_TYPE_NIL);
	_method_bindings.operator_not = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_NOT, GDEXTENSION_VARIANT_TYPE_DICTIONARY, GDEXTENSION_VARIANT_TYPE_NIL);
	_method_bindings.operator_equal_Dictionary = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_EQUAL, GDEXTENSION_VARIANT_TYPE_DICTIONARY, GDEXTENSION_VARIANT_TYPE_DICTIONARY);
	_method_bindings.operator_not_equal_Dictionary = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_NOT_EQUAL, GDEXTENSION_VARIANT_TYPE_DICTIONARY, GDEXTENSION_VARIANT_TYPE_DICTIONARY);
	_method_bindings.operator_in_Dictionary = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_IN, GDEXTENSION_VARIANT_TYPE_DICTIONARY, GDEXTENSION_VARIANT_TYPE_DICTIONARY);
	_method_bindings.operator_in_Array = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_IN, GDEXTENSION_VARIANT_TYPE_DICTIONARY, GDEXTENSION_VARIANT_TYPE_ARRAY);
}

Dictionary::Dictionary(const Variant *p_variant) {
	_method_bindings.from_variant_constructor(&opaque, p_variant->_native_ptr());
}

Dictionary::Dictionary() {
	internal::_call_builtin_constructor(_method_bindings.constructor_0, &opaque);
}

Dictionary::Dictionary(const Dictionary &from) {
	internal::_call_builtin_constructor(_method_bindings.constructor_1, &opaque, &from);
}

Dictionary::Dictionary(Dictionary &&other) {
	internal::_call_builtin_constructor(_method_bindings.constructor_1, &opaque, &other);
}

Dictionary::~Dictionary() {
	_method_bindings.destructor(&opaque);
}

int64_t Dictionary::size() const{
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_size, (GDExtensionTypePtr)&opaque);
}

bool Dictionary::is_empty() const{
	return internal::_call_builtin_method_ptr_ret<int8_t>(_method_bindings.method_is_empty, (GDExtensionTypePtr)&opaque);
}

void Dictionary::clear(){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_clear, (GDExtensionTypePtr)&opaque);
}

void Dictionary::merge(const Dictionary &dictionary, bool overwrite){
	int8_t overwrite_encoded;
	PtrToArg<bool>::encode(overwrite, &overwrite_encoded);
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_merge, (GDExtensionTypePtr)&opaque, &dictionary, &overwrite_encoded);
}

Dictionary Dictionary::merged(const Dictionary &dictionary, bool overwrite) const{
	int8_t overwrite_encoded;
	PtrToArg<bool>::encode(overwrite, &overwrite_encoded);
	return internal::_call_builtin_method_ptr_ret<Dictionary>(_method_bindings.method_merged, (GDExtensionTypePtr)&opaque, &dictionary, &overwrite_encoded);
}

bool Dictionary::has(const Variant &key) const{
	return internal::_call_builtin_method_ptr_ret<int8_t>(_method_bindings.method_has, (GDExtensionTypePtr)&opaque, &key);
}

bool Dictionary::has_all(const Array &keys) const{
	return internal::_call_builtin_method_ptr_ret<int8_t>(_method_bindings.method_has_all, (GDExtensionTypePtr)&opaque, &keys);
}

Variant Dictionary::find_key(const Variant &value) const{
	return internal::_call_builtin_method_ptr_ret<Variant>(_method_bindings.method_find_key, (GDExtensionTypePtr)&opaque, &value);
}

bool Dictionary::erase(const Variant &key){
	return internal::_call_builtin_method_ptr_ret<int8_t>(_method_bindings.method_erase, (GDExtensionTypePtr)&opaque, &key);
}

int64_t Dictionary::hash() const{
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_hash, (GDExtensionTypePtr)&opaque);
}

Array Dictionary::keys() const{
	return internal::_call_builtin_method_ptr_ret<Array>(_method_bindings.method_keys, (GDExtensionTypePtr)&opaque);
}

Array Dictionary::values() const{
	return internal::_call_builtin_method_ptr_ret<Array>(_method_bindings.method_values, (GDExtensionTypePtr)&opaque);
}

Dictionary Dictionary::duplicate(bool deep) const{
	int8_t deep_encoded;
	PtrToArg<bool>::encode(deep, &deep_encoded);
	return internal::_call_builtin_method_ptr_ret<Dictionary>(_method_bindings.method_duplicate, (GDExtensionTypePtr)&opaque, &deep_encoded);
}

Variant Dictionary::get(const Variant &key, const Variant &_default) const{
	return internal::_call_builtin_method_ptr_ret<Variant>(_method_bindings.method_get, (GDExtensionTypePtr)&opaque, &key, &_default);
}

Variant Dictionary::get_or_add(const Variant &key, const Variant &_default){
	return internal::_call_builtin_method_ptr_ret<Variant>(_method_bindings.method_get_or_add, (GDExtensionTypePtr)&opaque, &key, &_default);
}

void Dictionary::make_read_only(){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_make_read_only, (GDExtensionTypePtr)&opaque);
}

bool Dictionary::is_read_only() const{
	return internal::_call_builtin_method_ptr_ret<int8_t>(_method_bindings.method_is_read_only, (GDExtensionTypePtr)&opaque);
}

bool Dictionary::operator==(const Variant &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_equal_Variant, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool Dictionary::operator!=(const Variant &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_not_equal_Variant, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool Dictionary::operatornot() const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_not, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)nullptr);
}

bool Dictionary::operator==(const Dictionary &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_equal_Dictionary, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool Dictionary::operator!=(const Dictionary &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_not_equal_Dictionary, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

Dictionary &Dictionary::operator=(const Dictionary &other) {
	_method_bindings.destructor(&opaque);
	internal::_call_builtin_constructor(_method_bindings.constructor_1, &opaque, &other);
	return *this;
}

Dictionary &Dictionary::operator=(Dictionary &&other) {
	internal::_call_builtin_constructor(_method_bindings.constructor_1, &opaque, &other);
	return *this;
}

} //namespace godot