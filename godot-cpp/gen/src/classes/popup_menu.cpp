/**************************************************************************/
/*  popup_menu.cpp                                                        */
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

#include <godot_cpp/classes/popup_menu.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/shortcut.hpp>
#include <godot_cpp/classes/texture2d.hpp>

namespace godot {


bool PopupMenu::activate_item_by_event(const Ref<InputEvent> &event, bool for_global_only) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("activate_item_by_event")._native_ptr(), 3716412023);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int8_t for_global_only_encoded;
	PtrToArg<bool>::encode(for_global_only, &for_global_only_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, (event != nullptr ? &event->_owner : nullptr), &for_global_only_encoded);
}

void PopupMenu::set_prefer_native_menu(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_prefer_native_menu")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool PopupMenu::is_prefer_native_menu() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("is_prefer_native_menu")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void PopupMenu::add_item(const String &label, int32_t id, Key accel) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("add_item")._native_ptr(), 3674230041);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &label, &id_encoded, &accel);
}

void PopupMenu::add_icon_item(const Ref<Texture2D> &texture, const String &label, int32_t id, Key accel) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("add_icon_item")._native_ptr(), 1086190128);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (texture != nullptr ? &texture->_owner : nullptr), &label, &id_encoded, &accel);
}

void PopupMenu::add_check_item(const String &label, int32_t id, Key accel) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("add_check_item")._native_ptr(), 3674230041);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &label, &id_encoded, &accel);
}

void PopupMenu::add_icon_check_item(const Ref<Texture2D> &texture, const String &label, int32_t id, Key accel) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("add_icon_check_item")._native_ptr(), 1086190128);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (texture != nullptr ? &texture->_owner : nullptr), &label, &id_encoded, &accel);
}

void PopupMenu::add_radio_check_item(const String &label, int32_t id, Key accel) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("add_radio_check_item")._native_ptr(), 3674230041);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &label, &id_encoded, &accel);
}

void PopupMenu::add_icon_radio_check_item(const Ref<Texture2D> &texture, const String &label, int32_t id, Key accel) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("add_icon_radio_check_item")._native_ptr(), 1086190128);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (texture != nullptr ? &texture->_owner : nullptr), &label, &id_encoded, &accel);
}

void PopupMenu::add_multistate_item(const String &label, int32_t max_states, int32_t default_state, int32_t id, Key accel) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("add_multistate_item")._native_ptr(), 150780458);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t max_states_encoded;
	PtrToArg<int64_t>::encode(max_states, &max_states_encoded);
	int64_t default_state_encoded;
	PtrToArg<int64_t>::encode(default_state, &default_state_encoded);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &label, &max_states_encoded, &default_state_encoded, &id_encoded, &accel);
}

void PopupMenu::add_shortcut(const Ref<Shortcut> &shortcut, int32_t id, bool global, bool allow_echo) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("add_shortcut")._native_ptr(), 3451850107);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	int8_t global_encoded;
	PtrToArg<bool>::encode(global, &global_encoded);
	int8_t allow_echo_encoded;
	PtrToArg<bool>::encode(allow_echo, &allow_echo_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (shortcut != nullptr ? &shortcut->_owner : nullptr), &id_encoded, &global_encoded, &allow_echo_encoded);
}

void PopupMenu::add_icon_shortcut(const Ref<Texture2D> &texture, const Ref<Shortcut> &shortcut, int32_t id, bool global, bool allow_echo) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("add_icon_shortcut")._native_ptr(), 2997871092);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	int8_t global_encoded;
	PtrToArg<bool>::encode(global, &global_encoded);
	int8_t allow_echo_encoded;
	PtrToArg<bool>::encode(allow_echo, &allow_echo_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (texture != nullptr ? &texture->_owner : nullptr), (shortcut != nullptr ? &shortcut->_owner : nullptr), &id_encoded, &global_encoded, &allow_echo_encoded);
}

void PopupMenu::add_check_shortcut(const Ref<Shortcut> &shortcut, int32_t id, bool global) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("add_check_shortcut")._native_ptr(), 1642193386);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	int8_t global_encoded;
	PtrToArg<bool>::encode(global, &global_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (shortcut != nullptr ? &shortcut->_owner : nullptr), &id_encoded, &global_encoded);
}

void PopupMenu::add_icon_check_shortcut(const Ref<Texture2D> &texture, const Ref<Shortcut> &shortcut, int32_t id, bool global) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("add_icon_check_shortcut")._native_ptr(), 3856247530);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	int8_t global_encoded;
	PtrToArg<bool>::encode(global, &global_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (texture != nullptr ? &texture->_owner : nullptr), (shortcut != nullptr ? &shortcut->_owner : nullptr), &id_encoded, &global_encoded);
}

void PopupMenu::add_radio_check_shortcut(const Ref<Shortcut> &shortcut, int32_t id, bool global) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("add_radio_check_shortcut")._native_ptr(), 1642193386);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	int8_t global_encoded;
	PtrToArg<bool>::encode(global, &global_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (shortcut != nullptr ? &shortcut->_owner : nullptr), &id_encoded, &global_encoded);
}

void PopupMenu::add_icon_radio_check_shortcut(const Ref<Texture2D> &texture, const Ref<Shortcut> &shortcut, int32_t id, bool global) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("add_icon_radio_check_shortcut")._native_ptr(), 3856247530);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	int8_t global_encoded;
	PtrToArg<bool>::encode(global, &global_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (texture != nullptr ? &texture->_owner : nullptr), (shortcut != nullptr ? &shortcut->_owner : nullptr), &id_encoded, &global_encoded);
}

void PopupMenu::add_submenu_item(const String &label, const String &submenu, int32_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("add_submenu_item")._native_ptr(), 2979222410);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &label, &submenu, &id_encoded);
}

void PopupMenu::add_submenu_node_item(const String &label, PopupMenu *submenu, int32_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("add_submenu_node_item")._native_ptr(), 1325455216);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &label, (submenu != nullptr ? &submenu->_owner : nullptr), &id_encoded);
}

void PopupMenu::set_item_text(int32_t index, const String &text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_item_text")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &text);
}

void PopupMenu::set_item_text_direction(int32_t index, Control::TextDirection direction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_item_text_direction")._native_ptr(), 1707680378);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &direction);
}

void PopupMenu::set_item_language(int32_t index, const String &language) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_item_language")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &language);
}

void PopupMenu::set_item_icon(int32_t index, const Ref<Texture2D> &icon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_item_icon")._native_ptr(), 666127730);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, (icon != nullptr ? &icon->_owner : nullptr));
}

void PopupMenu::set_item_icon_max_width(int32_t index, int32_t width) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_item_icon_max_width")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	int64_t width_encoded;
	PtrToArg<int64_t>::encode(width, &width_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &width_encoded);
}

void PopupMenu::set_item_icon_modulate(int32_t index, const Color &modulate) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_item_icon_modulate")._native_ptr(), 2878471219);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &modulate);
}

void PopupMenu::set_item_checked(int32_t index, bool checked) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_item_checked")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	int8_t checked_encoded;
	PtrToArg<bool>::encode(checked, &checked_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &checked_encoded);
}

void PopupMenu::set_item_id(int32_t index, int32_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_item_id")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &id_encoded);
}

void PopupMenu::set_item_accelerator(int32_t index, Key accel) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_item_accelerator")._native_ptr(), 2992817551);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &accel);
}

void PopupMenu::set_item_metadata(int32_t index, const Variant &metadata) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_item_metadata")._native_ptr(), 2152698145);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &metadata);
}

void PopupMenu::set_item_disabled(int32_t index, bool disabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_item_disabled")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	int8_t disabled_encoded;
	PtrToArg<bool>::encode(disabled, &disabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &disabled_encoded);
}

void PopupMenu::set_item_submenu(int32_t index, const String &submenu) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_item_submenu")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &submenu);
}

void PopupMenu::set_item_submenu_node(int32_t index, PopupMenu *submenu) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_item_submenu_node")._native_ptr(), 1068370740);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, (submenu != nullptr ? &submenu->_owner : nullptr));
}

void PopupMenu::set_item_as_separator(int32_t index, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_item_as_separator")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &enable_encoded);
}

void PopupMenu::set_item_as_checkable(int32_t index, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_item_as_checkable")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &enable_encoded);
}

void PopupMenu::set_item_as_radio_checkable(int32_t index, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_item_as_radio_checkable")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &enable_encoded);
}

void PopupMenu::set_item_tooltip(int32_t index, const String &tooltip) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_item_tooltip")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &tooltip);
}

void PopupMenu::set_item_shortcut(int32_t index, const Ref<Shortcut> &shortcut, bool global) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_item_shortcut")._native_ptr(), 825127832);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	int8_t global_encoded;
	PtrToArg<bool>::encode(global, &global_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, (shortcut != nullptr ? &shortcut->_owner : nullptr), &global_encoded);
}

void PopupMenu::set_item_indent(int32_t index, int32_t indent) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_item_indent")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	int64_t indent_encoded;
	PtrToArg<int64_t>::encode(indent, &indent_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &indent_encoded);
}

void PopupMenu::set_item_multistate(int32_t index, int32_t state) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_item_multistate")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	int64_t state_encoded;
	PtrToArg<int64_t>::encode(state, &state_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &state_encoded);
}

void PopupMenu::set_item_multistate_max(int32_t index, int32_t max_states) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_item_multistate_max")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	int64_t max_states_encoded;
	PtrToArg<int64_t>::encode(max_states, &max_states_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &max_states_encoded);
}

void PopupMenu::set_item_shortcut_disabled(int32_t index, bool disabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_item_shortcut_disabled")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	int8_t disabled_encoded;
	PtrToArg<bool>::encode(disabled, &disabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &disabled_encoded);
}

void PopupMenu::toggle_item_checked(int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("toggle_item_checked")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded);
}

void PopupMenu::toggle_item_multistate(int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("toggle_item_multistate")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded);
}

String PopupMenu::get_item_text(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("get_item_text")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &index_encoded);
}

Control::TextDirection PopupMenu::get_item_text_direction(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("get_item_text_direction")._native_ptr(), 4235602388);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Control::TextDirection(0));
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return (Control::TextDirection)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &index_encoded);
}

String PopupMenu::get_item_language(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("get_item_language")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &index_encoded);
}

Ref<Texture2D> PopupMenu::get_item_icon(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("get_item_icon")._native_ptr(), 3536238170);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner, &index_encoded));
}

int32_t PopupMenu::get_item_icon_max_width(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("get_item_icon_max_width")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &index_encoded);
}

Color PopupMenu::get_item_icon_modulate(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("get_item_icon_modulate")._native_ptr(), 3457211756);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &index_encoded);
}

bool PopupMenu::is_item_checked(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("is_item_checked")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &index_encoded);
}

int32_t PopupMenu::get_item_id(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("get_item_id")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &index_encoded);
}

int32_t PopupMenu::get_item_index(int32_t id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("get_item_index")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &id_encoded);
}

Key PopupMenu::get_item_accelerator(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("get_item_accelerator")._native_ptr(), 253789942);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Key(0));
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return (Key)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &index_encoded);
}

Variant PopupMenu::get_item_metadata(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("get_item_metadata")._native_ptr(), 4227898402);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &index_encoded);
}

bool PopupMenu::is_item_disabled(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("is_item_disabled")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &index_encoded);
}

String PopupMenu::get_item_submenu(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("get_item_submenu")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &index_encoded);
}

PopupMenu *PopupMenu::get_item_submenu_node(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("get_item_submenu_node")._native_ptr(), 2100501353);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret_obj<PopupMenu>(_gde_method_bind, _owner, &index_encoded);
}

bool PopupMenu::is_item_separator(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("is_item_separator")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &index_encoded);
}

bool PopupMenu::is_item_checkable(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("is_item_checkable")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &index_encoded);
}

bool PopupMenu::is_item_radio_checkable(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("is_item_radio_checkable")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &index_encoded);
}

bool PopupMenu::is_item_shortcut_disabled(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("is_item_shortcut_disabled")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &index_encoded);
}

String PopupMenu::get_item_tooltip(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("get_item_tooltip")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &index_encoded);
}

Ref<Shortcut> PopupMenu::get_item_shortcut(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("get_item_shortcut")._native_ptr(), 1449483325);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Shortcut>());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return Ref<Shortcut>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Shortcut>(_gde_method_bind, _owner, &index_encoded));
}

int32_t PopupMenu::get_item_indent(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("get_item_indent")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &index_encoded);
}

int32_t PopupMenu::get_item_multistate_max(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("get_item_multistate_max")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &index_encoded);
}

int32_t PopupMenu::get_item_multistate(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("get_item_multistate")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &index_encoded);
}

void PopupMenu::set_focused_item(int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_focused_item")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded);
}

int32_t PopupMenu::get_focused_item() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("get_focused_item")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void PopupMenu::set_item_count(int32_t count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_item_count")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t count_encoded;
	PtrToArg<int64_t>::encode(count, &count_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &count_encoded);
}

int32_t PopupMenu::get_item_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("get_item_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void PopupMenu::scroll_to_item(int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("scroll_to_item")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded);
}

void PopupMenu::remove_item(int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("remove_item")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded);
}

void PopupMenu::add_separator(const String &label, int32_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("add_separator")._native_ptr(), 2266703459);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &label, &id_encoded);
}

void PopupMenu::clear(bool free_submenus) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 107499316);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t free_submenus_encoded;
	PtrToArg<bool>::encode(free_submenus, &free_submenus_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &free_submenus_encoded);
}

void PopupMenu::set_hide_on_item_selection(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_hide_on_item_selection")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool PopupMenu::is_hide_on_item_selection() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("is_hide_on_item_selection")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void PopupMenu::set_hide_on_checkable_item_selection(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_hide_on_checkable_item_selection")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool PopupMenu::is_hide_on_checkable_item_selection() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("is_hide_on_checkable_item_selection")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void PopupMenu::set_hide_on_state_item_selection(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_hide_on_state_item_selection")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool PopupMenu::is_hide_on_state_item_selection() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("is_hide_on_state_item_selection")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void PopupMenu::set_submenu_popup_delay(double seconds) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_submenu_popup_delay")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double seconds_encoded;
	PtrToArg<double>::encode(seconds, &seconds_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &seconds_encoded);
}

double PopupMenu::get_submenu_popup_delay() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("get_submenu_popup_delay")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void PopupMenu::set_allow_search(bool allow) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_allow_search")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t allow_encoded;
	PtrToArg<bool>::encode(allow, &allow_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &allow_encoded);
}

bool PopupMenu::get_allow_search() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("get_allow_search")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool PopupMenu::is_system_menu() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("is_system_menu")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void PopupMenu::set_system_menu(NativeMenu::SystemMenus system_menu_id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("set_system_menu")._native_ptr(), 600639674);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &system_menu_id);
}

NativeMenu::SystemMenus PopupMenu::get_system_menu() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PopupMenu::get_class_static()._native_ptr(), StringName("get_system_menu")._native_ptr(), 1222557358);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NativeMenu::SystemMenus(0));
	return (NativeMenu::SystemMenus)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}


} // namespace godot 