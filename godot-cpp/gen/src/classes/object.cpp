/**************************************************************************/
/*  object.cpp                                                            */
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

#include <godot_cpp/classes/object.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/node_path.hpp>

namespace godot {

const int Object::NOTIFICATION_POSTINITIALIZE = 0;
const int Object::NOTIFICATION_PREDELETE = 1;
const int Object::NOTIFICATION_EXTENSION_RELOADED = 2;

String Object::get_class() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("get_class")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

bool Object::is_class(const String &_class) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("is_class")._native_ptr(), 3927539163);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &_class);
}

void Object::set(const StringName &property, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("set")._native_ptr(), 3776071444);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &property, &value);
}

Variant Object::get(const StringName &property) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("get")._native_ptr(), 2760726917);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &property);
}

void Object::set_indexed(const NodePath &property_path, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("set_indexed")._native_ptr(), 3500910842);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &property_path, &value);
}

Variant Object::get_indexed(const NodePath &property_path) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("get_indexed")._native_ptr(), 4006125091);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &property_path);
}

TypedArray<Dictionary> Object::get_property_list() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("get_property_list")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Dictionary>());
	return internal::_call_native_mb_ret<TypedArray<Dictionary>>(_gde_method_bind, _owner);
}

TypedArray<Dictionary> Object::get_method_list() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("get_method_list")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Dictionary>());
	return internal::_call_native_mb_ret<TypedArray<Dictionary>>(_gde_method_bind, _owner);
}

bool Object::property_can_revert(const StringName &property) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("property_can_revert")._native_ptr(), 2619796661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &property);
}

Variant Object::property_get_revert(const StringName &property) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("property_get_revert")._native_ptr(), 2760726917);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &property);
}

void Object::notification(int32_t what, bool reversed) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("notification")._native_ptr(), 4023243586);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t what_encoded;
	PtrToArg<int64_t>::encode(what, &what_encoded);
	int8_t reversed_encoded;
	PtrToArg<bool>::encode(reversed, &reversed_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &what_encoded, &reversed_encoded);
}

String Object::to_string() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("to_string")._native_ptr(), 2841200299);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

uint64_t Object::get_instance_id() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("get_instance_id")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner);
}

void Object::set_script(const Variant &script) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("set_script")._native_ptr(), 1114965689);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &script);
}

Variant Object::get_script() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("get_script")._native_ptr(), 1214101251);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner);
}

void Object::set_meta(const StringName &name, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("set_meta")._native_ptr(), 3776071444);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &value);
}

void Object::remove_meta(const StringName &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("remove_meta")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

Variant Object::get_meta(const StringName &name, const Variant &_default) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("get_meta")._native_ptr(), 3990617847);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &name, &_default);
}

bool Object::has_meta(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("has_meta")._native_ptr(), 2619796661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name);
}

TypedArray<StringName> Object::get_meta_list() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("get_meta_list")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<StringName>());
	return internal::_call_native_mb_ret<TypedArray<StringName>>(_gde_method_bind, _owner);
}

void Object::add_user_signal(const String &signal, const Array &arguments) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("add_user_signal")._native_ptr(), 85656714);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &signal, &arguments);
}

bool Object::has_user_signal(const StringName &signal) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("has_user_signal")._native_ptr(), 2619796661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &signal);
}

void Object::remove_user_signal(const StringName &signal) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("remove_user_signal")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &signal);
}

Error Object::emit_signal_internal(const Variant **args, GDExtensionInt arg_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("emit_signal")._native_ptr(), 4047867050);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	GDExtensionCallError error;
	Variant ret;
	internal::gdextension_interface_object_method_bind_call(_gde_method_bind, _owner, reinterpret_cast<GDExtensionConstVariantPtr *>(args), arg_count, &ret, &error);
	return VariantCaster<Error>::cast(ret);
}

Variant Object::call_internal(const Variant **args, GDExtensionInt arg_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("call")._native_ptr(), 3400424181);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	GDExtensionCallError error;
	Variant ret;
	internal::gdextension_interface_object_method_bind_call(_gde_method_bind, _owner, reinterpret_cast<GDExtensionConstVariantPtr *>(args), arg_count, &ret, &error);
	return ret;
}

Variant Object::call_deferred_internal(const Variant **args, GDExtensionInt arg_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("call_deferred")._native_ptr(), 3400424181);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	GDExtensionCallError error;
	Variant ret;
	internal::gdextension_interface_object_method_bind_call(_gde_method_bind, _owner, reinterpret_cast<GDExtensionConstVariantPtr *>(args), arg_count, &ret, &error);
	return ret;
}

void Object::set_deferred(const StringName &property, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("set_deferred")._native_ptr(), 3776071444);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &property, &value);
}

Variant Object::callv(const StringName &method, const Array &arg_array) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("callv")._native_ptr(), 1260104456);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &method, &arg_array);
}

bool Object::has_method(const StringName &method) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("has_method")._native_ptr(), 2619796661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &method);
}

int32_t Object::get_method_argument_count(const StringName &method) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("get_method_argument_count")._native_ptr(), 2458036349);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &method);
}

bool Object::has_signal(const StringName &signal) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("has_signal")._native_ptr(), 2619796661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &signal);
}

TypedArray<Dictionary> Object::get_signal_list() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("get_signal_list")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Dictionary>());
	return internal::_call_native_mb_ret<TypedArray<Dictionary>>(_gde_method_bind, _owner);
}

TypedArray<Dictionary> Object::get_signal_connection_list(const StringName &signal) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("get_signal_connection_list")._native_ptr(), 3147814860);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Dictionary>());
	return internal::_call_native_mb_ret<TypedArray<Dictionary>>(_gde_method_bind, _owner, &signal);
}

TypedArray<Dictionary> Object::get_incoming_connections() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("get_incoming_connections")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Dictionary>());
	return internal::_call_native_mb_ret<TypedArray<Dictionary>>(_gde_method_bind, _owner);
}

Error Object::connect(const StringName &signal, const Callable &callable, uint32_t flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("connect")._native_ptr(), 1518946055);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t flags_encoded;
	PtrToArg<int64_t>::encode(flags, &flags_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &signal, &callable, &flags_encoded);
}

void Object::disconnect(const StringName &signal, const Callable &callable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("disconnect")._native_ptr(), 1874754934);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &signal, &callable);
}

bool Object::is_connected(const StringName &signal, const Callable &callable) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("is_connected")._native_ptr(), 768136979);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &signal, &callable);
}

void Object::set_block_signals(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("set_block_signals")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Object::is_blocking_signals() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("is_blocking_signals")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Object::notify_property_list_changed() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("notify_property_list_changed")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Object::set_message_translation(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("set_message_translation")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Object::can_translate_messages() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("can_translate_messages")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

String Object::tr(const StringName &message, const StringName &context) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("tr")._native_ptr(), 2475554935);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &message, &context);
}

String Object::tr_n(const StringName &message, const StringName &plural_message, int32_t n, const StringName &context) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("tr_n")._native_ptr(), 4021311862);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t n_encoded;
	PtrToArg<int64_t>::encode(n, &n_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &message, &plural_message, &n_encoded, &context);
}

bool Object::is_queued_for_deletion() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("is_queued_for_deletion")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Object::cancel_free() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Object::get_class_static()._native_ptr(), StringName("cancel_free")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}


} // namespace godot 