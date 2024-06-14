/**************************************************************************/
/*  base_button.cpp                                                       */
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

#include <godot_cpp/classes/base_button.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/button_group.hpp>
#include <godot_cpp/classes/shortcut.hpp>

namespace godot {


void BaseButton::set_pressed(bool pressed) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseButton::get_class_static()._native_ptr(), StringName("set_pressed")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t pressed_encoded;
	PtrToArg<bool>::encode(pressed, &pressed_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pressed_encoded);
}

bool BaseButton::is_pressed() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseButton::get_class_static()._native_ptr(), StringName("is_pressed")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void BaseButton::set_pressed_no_signal(bool pressed) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseButton::get_class_static()._native_ptr(), StringName("set_pressed_no_signal")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t pressed_encoded;
	PtrToArg<bool>::encode(pressed, &pressed_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pressed_encoded);
}

bool BaseButton::is_hovered() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseButton::get_class_static()._native_ptr(), StringName("is_hovered")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void BaseButton::set_toggle_mode(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseButton::get_class_static()._native_ptr(), StringName("set_toggle_mode")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool BaseButton::is_toggle_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseButton::get_class_static()._native_ptr(), StringName("is_toggle_mode")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void BaseButton::set_shortcut_in_tooltip(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseButton::get_class_static()._native_ptr(), StringName("set_shortcut_in_tooltip")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool BaseButton::is_shortcut_in_tooltip_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseButton::get_class_static()._native_ptr(), StringName("is_shortcut_in_tooltip_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void BaseButton::set_disabled(bool disabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseButton::get_class_static()._native_ptr(), StringName("set_disabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t disabled_encoded;
	PtrToArg<bool>::encode(disabled, &disabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &disabled_encoded);
}

bool BaseButton::is_disabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseButton::get_class_static()._native_ptr(), StringName("is_disabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void BaseButton::set_action_mode(BaseButton::ActionMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseButton::get_class_static()._native_ptr(), StringName("set_action_mode")._native_ptr(), 1985162088);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

BaseButton::ActionMode BaseButton::get_action_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseButton::get_class_static()._native_ptr(), StringName("get_action_mode")._native_ptr(), 2589712189);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BaseButton::ActionMode(0));
	return (BaseButton::ActionMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BaseButton::set_button_mask(BitField<MouseButtonMask> mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseButton::get_class_static()._native_ptr(), StringName("set_button_mask")._native_ptr(), 3950145251);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mask);
}

BitField<MouseButtonMask> BaseButton::get_button_mask() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseButton::get_class_static()._native_ptr(), StringName("get_button_mask")._native_ptr(), 2512161324);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BitField<MouseButtonMask>(0));
	return (int64_t)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

BaseButton::DrawMode BaseButton::get_draw_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseButton::get_class_static()._native_ptr(), StringName("get_draw_mode")._native_ptr(), 2492721305);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BaseButton::DrawMode(0));
	return (BaseButton::DrawMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BaseButton::set_keep_pressed_outside(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseButton::get_class_static()._native_ptr(), StringName("set_keep_pressed_outside")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool BaseButton::is_keep_pressed_outside() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseButton::get_class_static()._native_ptr(), StringName("is_keep_pressed_outside")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void BaseButton::set_shortcut_feedback(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseButton::get_class_static()._native_ptr(), StringName("set_shortcut_feedback")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool BaseButton::is_shortcut_feedback() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseButton::get_class_static()._native_ptr(), StringName("is_shortcut_feedback")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void BaseButton::set_shortcut(const Ref<Shortcut> &shortcut) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseButton::get_class_static()._native_ptr(), StringName("set_shortcut")._native_ptr(), 857163497);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (shortcut != nullptr ? &shortcut->_owner : nullptr));
}

Ref<Shortcut> BaseButton::get_shortcut() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseButton::get_class_static()._native_ptr(), StringName("get_shortcut")._native_ptr(), 3415666916);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Shortcut>());
	return Ref<Shortcut>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Shortcut>(_gde_method_bind, _owner));
}

void BaseButton::set_button_group(const Ref<ButtonGroup> &button_group) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseButton::get_class_static()._native_ptr(), StringName("set_button_group")._native_ptr(), 1794463739);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (button_group != nullptr ? &button_group->_owner : nullptr));
}

Ref<ButtonGroup> BaseButton::get_button_group() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BaseButton::get_class_static()._native_ptr(), StringName("get_button_group")._native_ptr(), 281644053);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<ButtonGroup>());
	return Ref<ButtonGroup>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<ButtonGroup>(_gde_method_bind, _owner));
}

void BaseButton::_pressed() {}

void BaseButton::_toggled(bool toggled_on) {}


} // namespace godot 