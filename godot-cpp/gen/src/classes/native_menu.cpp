/**************************************************************************/
/*  native_menu.cpp                                                       */
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

#include <godot_cpp/classes/native_menu.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/vector2i.hpp>

namespace godot {


NativeMenu *NativeMenu::singleton = nullptr;

NativeMenu *NativeMenu::get_singleton() {
	if (unlikely(singleton == nullptr)) {
		GDExtensionObjectPtr singleton_obj = internal::gdextension_interface_global_get_singleton(NativeMenu::get_class_static()._native_ptr());
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton_obj, nullptr);
#endif // DEBUG_ENABLED
		singleton = reinterpret_cast<NativeMenu *>(internal::gdextension_interface_object_get_instance_binding(singleton_obj, internal::token, &NativeMenu::_gde_binding_callbacks));
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton, nullptr);
#endif // DEBUG_ENABLED
		if (likely(singleton)) {
			ClassDB::_register_engine_singleton(NativeMenu::get_class_static(), singleton);
		}
	}
	return singleton;
}

NativeMenu::~NativeMenu() {
	if (singleton == this) {
		ClassDB::_unregister_engine_singleton(NativeMenu::get_class_static());
		singleton = nullptr;
	}
}

bool NativeMenu::has_feature(NativeMenu::Feature feature) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("has_feature")._native_ptr(), 1708975490);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &feature);
}

bool NativeMenu::has_system_menu(NativeMenu::SystemMenus menu_id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("has_system_menu")._native_ptr(), 718213027);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &menu_id);
}

RID NativeMenu::get_system_menu(NativeMenu::SystemMenus menu_id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("get_system_menu")._native_ptr(), 469707506);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &menu_id);
}

String NativeMenu::get_system_menu_name(NativeMenu::SystemMenus menu_id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("get_system_menu_name")._native_ptr(), 1281499290);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &menu_id);
}

RID NativeMenu::create_menu() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("create_menu")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

bool NativeMenu::has_menu(const RID &rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("has_menu")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &rid);
}

void NativeMenu::free_menu(const RID &rid) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("free_menu")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid);
}

Vector2 NativeMenu::get_size(const RID &rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("get_size")._native_ptr(), 2440833711);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &rid);
}

void NativeMenu::popup(const RID &rid, const Vector2i &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("popup")._native_ptr(), 2450610377);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid, &position);
}

void NativeMenu::set_interface_direction(const RID &rid, bool is_rtl) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("set_interface_direction")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t is_rtl_encoded;
	PtrToArg<bool>::encode(is_rtl, &is_rtl_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid, &is_rtl_encoded);
}

void NativeMenu::set_popup_open_callback(const RID &rid, const Callable &callback) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("set_popup_open_callback")._native_ptr(), 3379118538);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid, &callback);
}

Callable NativeMenu::get_popup_open_callback(const RID &rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("get_popup_open_callback")._native_ptr(), 3170603026);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Callable());
	return internal::_call_native_mb_ret<Callable>(_gde_method_bind, _owner, &rid);
}

void NativeMenu::set_popup_close_callback(const RID &rid, const Callable &callback) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("set_popup_close_callback")._native_ptr(), 3379118538);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid, &callback);
}

Callable NativeMenu::get_popup_close_callback(const RID &rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("get_popup_close_callback")._native_ptr(), 3170603026);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Callable());
	return internal::_call_native_mb_ret<Callable>(_gde_method_bind, _owner, &rid);
}

void NativeMenu::set_minimum_width(const RID &rid, double width) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("set_minimum_width")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid, &width_encoded);
}

double NativeMenu::get_minimum_width(const RID &rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("get_minimum_width")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &rid);
}

int32_t NativeMenu::add_submenu_item(const RID &rid, const String &label, const RID &submenu_rid, const Variant &tag, int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("add_submenu_item")._native_ptr(), 1002030223);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &rid, &label, &submenu_rid, &tag, &index_encoded);
}

int32_t NativeMenu::add_item(const RID &rid, const String &label, const Callable &callback, const Callable &key_callback, const Variant &tag, Key accelerator, int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("add_item")._native_ptr(), 2553375659);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &rid, &label, &callback, &key_callback, &tag, &accelerator, &index_encoded);
}

int32_t NativeMenu::add_check_item(const RID &rid, const String &label, const Callable &callback, const Callable &key_callback, const Variant &tag, Key accelerator, int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("add_check_item")._native_ptr(), 2553375659);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &rid, &label, &callback, &key_callback, &tag, &accelerator, &index_encoded);
}

int32_t NativeMenu::add_icon_item(const RID &rid, const Ref<Texture2D> &icon, const String &label, const Callable &callback, const Callable &key_callback, const Variant &tag, Key accelerator, int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("add_icon_item")._native_ptr(), 2987595282);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &rid, (icon != nullptr ? &icon->_owner : nullptr), &label, &callback, &key_callback, &tag, &accelerator, &index_encoded);
}

int32_t NativeMenu::add_icon_check_item(const RID &rid, const Ref<Texture2D> &icon, const String &label, const Callable &callback, const Callable &key_callback, const Variant &tag, Key accelerator, int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("add_icon_check_item")._native_ptr(), 2987595282);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &rid, (icon != nullptr ? &icon->_owner : nullptr), &label, &callback, &key_callback, &tag, &accelerator, &index_encoded);
}

int32_t NativeMenu::add_radio_check_item(const RID &rid, const String &label, const Callable &callback, const Callable &key_callback, const Variant &tag, Key accelerator, int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("add_radio_check_item")._native_ptr(), 2553375659);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &rid, &label, &callback, &key_callback, &tag, &accelerator, &index_encoded);
}

int32_t NativeMenu::add_icon_radio_check_item(const RID &rid, const Ref<Texture2D> &icon, const String &label, const Callable &callback, const Callable &key_callback, const Variant &tag, Key accelerator, int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("add_icon_radio_check_item")._native_ptr(), 2987595282);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &rid, (icon != nullptr ? &icon->_owner : nullptr), &label, &callback, &key_callback, &tag, &accelerator, &index_encoded);
}

int32_t NativeMenu::add_multistate_item(const RID &rid, const String &label, int32_t max_states, int32_t default_state, const Callable &callback, const Callable &key_callback, const Variant &tag, Key accelerator, int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("add_multistate_item")._native_ptr(), 1558592568);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t max_states_encoded;
	PtrToArg<int64_t>::encode(max_states, &max_states_encoded);
	int64_t default_state_encoded;
	PtrToArg<int64_t>::encode(default_state, &default_state_encoded);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &rid, &label, &max_states_encoded, &default_state_encoded, &callback, &key_callback, &tag, &accelerator, &index_encoded);
}

int32_t NativeMenu::add_separator(const RID &rid, int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("add_separator")._native_ptr(), 448810126);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &rid, &index_encoded);
}

int32_t NativeMenu::find_item_index_with_text(const RID &rid, const String &text) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("find_item_index_with_text")._native_ptr(), 1362438794);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &rid, &text);
}

int32_t NativeMenu::find_item_index_with_tag(const RID &rid, const Variant &tag) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("find_item_index_with_tag")._native_ptr(), 1260085030);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &rid, &tag);
}

int32_t NativeMenu::find_item_index_with_submenu(const RID &rid, const RID &submenu_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("find_item_index_with_submenu")._native_ptr(), 893635918);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &rid, &submenu_rid);
}

bool NativeMenu::is_item_checked(const RID &rid, int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("is_item_checked")._native_ptr(), 3120086654);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &rid, &idx_encoded);
}

bool NativeMenu::is_item_checkable(const RID &rid, int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("is_item_checkable")._native_ptr(), 3120086654);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &rid, &idx_encoded);
}

bool NativeMenu::is_item_radio_checkable(const RID &rid, int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("is_item_radio_checkable")._native_ptr(), 3120086654);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &rid, &idx_encoded);
}

Callable NativeMenu::get_item_callback(const RID &rid, int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("get_item_callback")._native_ptr(), 1639989698);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Callable());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<Callable>(_gde_method_bind, _owner, &rid, &idx_encoded);
}

Callable NativeMenu::get_item_key_callback(const RID &rid, int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("get_item_key_callback")._native_ptr(), 1639989698);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Callable());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<Callable>(_gde_method_bind, _owner, &rid, &idx_encoded);
}

Variant NativeMenu::get_item_tag(const RID &rid, int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("get_item_tag")._native_ptr(), 4069510997);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &rid, &idx_encoded);
}

String NativeMenu::get_item_text(const RID &rid, int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("get_item_text")._native_ptr(), 1464764419);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &rid, &idx_encoded);
}

RID NativeMenu::get_item_submenu(const RID &rid, int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("get_item_submenu")._native_ptr(), 1066463050);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &rid, &idx_encoded);
}

Key NativeMenu::get_item_accelerator(const RID &rid, int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("get_item_accelerator")._native_ptr(), 316800700);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Key(0));
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return (Key)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &rid, &idx_encoded);
}

bool NativeMenu::is_item_disabled(const RID &rid, int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("is_item_disabled")._native_ptr(), 3120086654);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &rid, &idx_encoded);
}

bool NativeMenu::is_item_hidden(const RID &rid, int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("is_item_hidden")._native_ptr(), 3120086654);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &rid, &idx_encoded);
}

String NativeMenu::get_item_tooltip(const RID &rid, int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("get_item_tooltip")._native_ptr(), 1464764419);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &rid, &idx_encoded);
}

int32_t NativeMenu::get_item_state(const RID &rid, int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("get_item_state")._native_ptr(), 1120910005);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &rid, &idx_encoded);
}

int32_t NativeMenu::get_item_max_states(const RID &rid, int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("get_item_max_states")._native_ptr(), 1120910005);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &rid, &idx_encoded);
}

Ref<Texture2D> NativeMenu::get_item_icon(const RID &rid, int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("get_item_icon")._native_ptr(), 3391850701);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner, &rid, &idx_encoded));
}

int32_t NativeMenu::get_item_indentation_level(const RID &rid, int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("get_item_indentation_level")._native_ptr(), 1120910005);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &rid, &idx_encoded);
}

void NativeMenu::set_item_checked(const RID &rid, int32_t idx, bool checked) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("set_item_checked")._native_ptr(), 2658558584);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	int8_t checked_encoded;
	PtrToArg<bool>::encode(checked, &checked_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid, &idx_encoded, &checked_encoded);
}

void NativeMenu::set_item_checkable(const RID &rid, int32_t idx, bool checkable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("set_item_checkable")._native_ptr(), 2658558584);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	int8_t checkable_encoded;
	PtrToArg<bool>::encode(checkable, &checkable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid, &idx_encoded, &checkable_encoded);
}

void NativeMenu::set_item_radio_checkable(const RID &rid, int32_t idx, bool checkable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("set_item_radio_checkable")._native_ptr(), 2658558584);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	int8_t checkable_encoded;
	PtrToArg<bool>::encode(checkable, &checkable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid, &idx_encoded, &checkable_encoded);
}

void NativeMenu::set_item_callback(const RID &rid, int32_t idx, const Callable &callback) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("set_item_callback")._native_ptr(), 2779810226);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid, &idx_encoded, &callback);
}

void NativeMenu::set_item_hover_callbacks(const RID &rid, int32_t idx, const Callable &callback) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("set_item_hover_callbacks")._native_ptr(), 2779810226);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid, &idx_encoded, &callback);
}

void NativeMenu::set_item_key_callback(const RID &rid, int32_t idx, const Callable &key_callback) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("set_item_key_callback")._native_ptr(), 2779810226);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid, &idx_encoded, &key_callback);
}

void NativeMenu::set_item_tag(const RID &rid, int32_t idx, const Variant &tag) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("set_item_tag")._native_ptr(), 2706844827);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid, &idx_encoded, &tag);
}

void NativeMenu::set_item_text(const RID &rid, int32_t idx, const String &text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("set_item_text")._native_ptr(), 4153150897);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid, &idx_encoded, &text);
}

void NativeMenu::set_item_submenu(const RID &rid, int32_t idx, const RID &submenu_rid) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("set_item_submenu")._native_ptr(), 2310537182);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid, &idx_encoded, &submenu_rid);
}

void NativeMenu::set_item_accelerator(const RID &rid, int32_t idx, Key keycode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("set_item_accelerator")._native_ptr(), 786300043);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid, &idx_encoded, &keycode);
}

void NativeMenu::set_item_disabled(const RID &rid, int32_t idx, bool disabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("set_item_disabled")._native_ptr(), 2658558584);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	int8_t disabled_encoded;
	PtrToArg<bool>::encode(disabled, &disabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid, &idx_encoded, &disabled_encoded);
}

void NativeMenu::set_item_hidden(const RID &rid, int32_t idx, bool hidden) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("set_item_hidden")._native_ptr(), 2658558584);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	int8_t hidden_encoded;
	PtrToArg<bool>::encode(hidden, &hidden_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid, &idx_encoded, &hidden_encoded);
}

void NativeMenu::set_item_tooltip(const RID &rid, int32_t idx, const String &tooltip) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("set_item_tooltip")._native_ptr(), 4153150897);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid, &idx_encoded, &tooltip);
}

void NativeMenu::set_item_state(const RID &rid, int32_t idx, int32_t state) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("set_item_state")._native_ptr(), 4288446313);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	int64_t state_encoded;
	PtrToArg<int64_t>::encode(state, &state_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid, &idx_encoded, &state_encoded);
}

void NativeMenu::set_item_max_states(const RID &rid, int32_t idx, int32_t max_states) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("set_item_max_states")._native_ptr(), 4288446313);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	int64_t max_states_encoded;
	PtrToArg<int64_t>::encode(max_states, &max_states_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid, &idx_encoded, &max_states_encoded);
}

void NativeMenu::set_item_icon(const RID &rid, int32_t idx, const Ref<Texture2D> &icon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("set_item_icon")._native_ptr(), 1388763257);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid, &idx_encoded, (icon != nullptr ? &icon->_owner : nullptr));
}

void NativeMenu::set_item_indentation_level(const RID &rid, int32_t idx, int32_t level) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("set_item_indentation_level")._native_ptr(), 4288446313);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	int64_t level_encoded;
	PtrToArg<int64_t>::encode(level, &level_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid, &idx_encoded, &level_encoded);
}

int32_t NativeMenu::get_item_count(const RID &rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("get_item_count")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &rid);
}

bool NativeMenu::is_system_menu(const RID &rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("is_system_menu")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &rid);
}

void NativeMenu::remove_item(const RID &rid, int32_t idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("remove_item")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid, &idx_encoded);
}

void NativeMenu::clear(const RID &rid) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NativeMenu::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid);
}


} // namespace godot 