/**************************************************************************/
/*  menu_bar.cpp                                                          */
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

#include <godot_cpp/classes/menu_bar.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/popup_menu.hpp>

namespace godot {

void MenuBar::set_switch_on_hover(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MenuBar::get_class_static()._native_ptr(), StringName("set_switch_on_hover")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool MenuBar::is_switch_on_hover() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MenuBar::get_class_static()._native_ptr(), StringName("is_switch_on_hover")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void MenuBar::set_disable_shortcuts(bool disabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MenuBar::get_class_static()._native_ptr(), StringName("set_disable_shortcuts")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t disabled_encoded;
	PtrToArg<bool>::encode(disabled, &disabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &disabled_encoded);
}

void MenuBar::set_prefer_global_menu(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MenuBar::get_class_static()._native_ptr(), StringName("set_prefer_global_menu")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool MenuBar::is_prefer_global_menu() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MenuBar::get_class_static()._native_ptr(), StringName("is_prefer_global_menu")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool MenuBar::is_native_menu() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MenuBar::get_class_static()._native_ptr(), StringName("is_native_menu")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

int32_t MenuBar::get_menu_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MenuBar::get_class_static()._native_ptr(), StringName("get_menu_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void MenuBar::set_text_direction(Control::TextDirection direction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MenuBar::get_class_static()._native_ptr(), StringName("set_text_direction")._native_ptr(), 119160795);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &direction);
}

Control::TextDirection MenuBar::get_text_direction() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MenuBar::get_class_static()._native_ptr(), StringName("get_text_direction")._native_ptr(), 797257663);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Control::TextDirection(0));
	return (Control::TextDirection)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void MenuBar::set_language(const String &language) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MenuBar::get_class_static()._native_ptr(), StringName("set_language")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &language);
}

String MenuBar::get_language() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MenuBar::get_class_static()._native_ptr(), StringName("get_language")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void MenuBar::set_flat(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MenuBar::get_class_static()._native_ptr(), StringName("set_flat")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool MenuBar::is_flat() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MenuBar::get_class_static()._native_ptr(), StringName("is_flat")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void MenuBar::set_start_index(int32_t enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MenuBar::get_class_static()._native_ptr(), StringName("set_start_index")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t enabled_encoded;
	PtrToArg<int64_t>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

int32_t MenuBar::get_start_index() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MenuBar::get_class_static()._native_ptr(), StringName("get_start_index")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void MenuBar::set_menu_title(int32_t menu, const String &title) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MenuBar::get_class_static()._native_ptr(), StringName("set_menu_title")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t menu_encoded;
	PtrToArg<int64_t>::encode(menu, &menu_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &menu_encoded, &title);
}

String MenuBar::get_menu_title(int32_t menu) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MenuBar::get_class_static()._native_ptr(), StringName("get_menu_title")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t menu_encoded;
	PtrToArg<int64_t>::encode(menu, &menu_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &menu_encoded);
}

void MenuBar::set_menu_tooltip(int32_t menu, const String &tooltip) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MenuBar::get_class_static()._native_ptr(), StringName("set_menu_tooltip")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t menu_encoded;
	PtrToArg<int64_t>::encode(menu, &menu_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &menu_encoded, &tooltip);
}

String MenuBar::get_menu_tooltip(int32_t menu) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MenuBar::get_class_static()._native_ptr(), StringName("get_menu_tooltip")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t menu_encoded;
	PtrToArg<int64_t>::encode(menu, &menu_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &menu_encoded);
}

void MenuBar::set_menu_disabled(int32_t menu, bool disabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MenuBar::get_class_static()._native_ptr(), StringName("set_menu_disabled")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t menu_encoded;
	PtrToArg<int64_t>::encode(menu, &menu_encoded);
	int8_t disabled_encoded;
	PtrToArg<bool>::encode(disabled, &disabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &menu_encoded, &disabled_encoded);
}

bool MenuBar::is_menu_disabled(int32_t menu) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MenuBar::get_class_static()._native_ptr(), StringName("is_menu_disabled")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t menu_encoded;
	PtrToArg<int64_t>::encode(menu, &menu_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &menu_encoded);
}

void MenuBar::set_menu_hidden(int32_t menu, bool hidden) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MenuBar::get_class_static()._native_ptr(), StringName("set_menu_hidden")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t menu_encoded;
	PtrToArg<int64_t>::encode(menu, &menu_encoded);
	int8_t hidden_encoded;
	PtrToArg<bool>::encode(hidden, &hidden_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &menu_encoded, &hidden_encoded);
}

bool MenuBar::is_menu_hidden(int32_t menu) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MenuBar::get_class_static()._native_ptr(), StringName("is_menu_hidden")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t menu_encoded;
	PtrToArg<int64_t>::encode(menu, &menu_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &menu_encoded);
}

PopupMenu *MenuBar::get_menu_popup(int32_t menu) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(MenuBar::get_class_static()._native_ptr(), StringName("get_menu_popup")._native_ptr(), 2100501353);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	int64_t menu_encoded;
	PtrToArg<int64_t>::encode(menu, &menu_encoded);
	return internal::_call_native_mb_ret_obj<PopupMenu>(_gde_method_bind, _owner, &menu_encoded);
}


} // namespace godot 