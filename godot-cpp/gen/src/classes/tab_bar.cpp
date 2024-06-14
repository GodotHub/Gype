/**************************************************************************/
/*  tab_bar.cpp                                                           */
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

#include <godot_cpp/classes/tab_bar.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/vector2.hpp>

namespace godot {


void TabBar::set_tab_count(int32_t count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("set_tab_count")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t count_encoded;
	PtrToArg<int64_t>::encode(count, &count_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &count_encoded);
}

int32_t TabBar::get_tab_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("get_tab_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TabBar::set_current_tab(int32_t tab_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("set_current_tab")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t tab_idx_encoded;
	PtrToArg<int64_t>::encode(tab_idx, &tab_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &tab_idx_encoded);
}

int32_t TabBar::get_current_tab() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("get_current_tab")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t TabBar::get_previous_tab() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("get_previous_tab")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool TabBar::select_previous_available() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("select_previous_available")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool TabBar::select_next_available() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("select_next_available")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TabBar::set_tab_title(int32_t tab_idx, const String &title) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("set_tab_title")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t tab_idx_encoded;
	PtrToArg<int64_t>::encode(tab_idx, &tab_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &tab_idx_encoded, &title);
}

String TabBar::get_tab_title(int32_t tab_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("get_tab_title")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t tab_idx_encoded;
	PtrToArg<int64_t>::encode(tab_idx, &tab_idx_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &tab_idx_encoded);
}

void TabBar::set_tab_tooltip(int32_t tab_idx, const String &tooltip) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("set_tab_tooltip")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t tab_idx_encoded;
	PtrToArg<int64_t>::encode(tab_idx, &tab_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &tab_idx_encoded, &tooltip);
}

String TabBar::get_tab_tooltip(int32_t tab_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("get_tab_tooltip")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t tab_idx_encoded;
	PtrToArg<int64_t>::encode(tab_idx, &tab_idx_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &tab_idx_encoded);
}

void TabBar::set_tab_text_direction(int32_t tab_idx, Control::TextDirection direction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("set_tab_text_direction")._native_ptr(), 1707680378);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t tab_idx_encoded;
	PtrToArg<int64_t>::encode(tab_idx, &tab_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &tab_idx_encoded, &direction);
}

Control::TextDirection TabBar::get_tab_text_direction(int32_t tab_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("get_tab_text_direction")._native_ptr(), 4235602388);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Control::TextDirection(0));
	int64_t tab_idx_encoded;
	PtrToArg<int64_t>::encode(tab_idx, &tab_idx_encoded);
	return (Control::TextDirection)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &tab_idx_encoded);
}

void TabBar::set_tab_language(int32_t tab_idx, const String &language) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("set_tab_language")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t tab_idx_encoded;
	PtrToArg<int64_t>::encode(tab_idx, &tab_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &tab_idx_encoded, &language);
}

String TabBar::get_tab_language(int32_t tab_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("get_tab_language")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t tab_idx_encoded;
	PtrToArg<int64_t>::encode(tab_idx, &tab_idx_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &tab_idx_encoded);
}

void TabBar::set_tab_icon(int32_t tab_idx, const Ref<Texture2D> &icon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("set_tab_icon")._native_ptr(), 666127730);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t tab_idx_encoded;
	PtrToArg<int64_t>::encode(tab_idx, &tab_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &tab_idx_encoded, (icon != nullptr ? &icon->_owner : nullptr));
}

Ref<Texture2D> TabBar::get_tab_icon(int32_t tab_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("get_tab_icon")._native_ptr(), 3536238170);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	int64_t tab_idx_encoded;
	PtrToArg<int64_t>::encode(tab_idx, &tab_idx_encoded);
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner, &tab_idx_encoded));
}

void TabBar::set_tab_icon_max_width(int32_t tab_idx, int32_t width) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("set_tab_icon_max_width")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t tab_idx_encoded;
	PtrToArg<int64_t>::encode(tab_idx, &tab_idx_encoded);
	int64_t width_encoded;
	PtrToArg<int64_t>::encode(width, &width_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &tab_idx_encoded, &width_encoded);
}

int32_t TabBar::get_tab_icon_max_width(int32_t tab_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("get_tab_icon_max_width")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t tab_idx_encoded;
	PtrToArg<int64_t>::encode(tab_idx, &tab_idx_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &tab_idx_encoded);
}

void TabBar::set_tab_button_icon(int32_t tab_idx, const Ref<Texture2D> &icon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("set_tab_button_icon")._native_ptr(), 666127730);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t tab_idx_encoded;
	PtrToArg<int64_t>::encode(tab_idx, &tab_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &tab_idx_encoded, (icon != nullptr ? &icon->_owner : nullptr));
}

Ref<Texture2D> TabBar::get_tab_button_icon(int32_t tab_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("get_tab_button_icon")._native_ptr(), 3536238170);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	int64_t tab_idx_encoded;
	PtrToArg<int64_t>::encode(tab_idx, &tab_idx_encoded);
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner, &tab_idx_encoded));
}

void TabBar::set_tab_disabled(int32_t tab_idx, bool disabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("set_tab_disabled")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t tab_idx_encoded;
	PtrToArg<int64_t>::encode(tab_idx, &tab_idx_encoded);
	int8_t disabled_encoded;
	PtrToArg<bool>::encode(disabled, &disabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &tab_idx_encoded, &disabled_encoded);
}

bool TabBar::is_tab_disabled(int32_t tab_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("is_tab_disabled")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t tab_idx_encoded;
	PtrToArg<int64_t>::encode(tab_idx, &tab_idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &tab_idx_encoded);
}

void TabBar::set_tab_hidden(int32_t tab_idx, bool hidden) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("set_tab_hidden")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t tab_idx_encoded;
	PtrToArg<int64_t>::encode(tab_idx, &tab_idx_encoded);
	int8_t hidden_encoded;
	PtrToArg<bool>::encode(hidden, &hidden_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &tab_idx_encoded, &hidden_encoded);
}

bool TabBar::is_tab_hidden(int32_t tab_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("is_tab_hidden")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t tab_idx_encoded;
	PtrToArg<int64_t>::encode(tab_idx, &tab_idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &tab_idx_encoded);
}

void TabBar::set_tab_metadata(int32_t tab_idx, const Variant &metadata) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("set_tab_metadata")._native_ptr(), 2152698145);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t tab_idx_encoded;
	PtrToArg<int64_t>::encode(tab_idx, &tab_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &tab_idx_encoded, &metadata);
}

Variant TabBar::get_tab_metadata(int32_t tab_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("get_tab_metadata")._native_ptr(), 4227898402);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	int64_t tab_idx_encoded;
	PtrToArg<int64_t>::encode(tab_idx, &tab_idx_encoded);
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &tab_idx_encoded);
}

void TabBar::remove_tab(int32_t tab_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("remove_tab")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t tab_idx_encoded;
	PtrToArg<int64_t>::encode(tab_idx, &tab_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &tab_idx_encoded);
}

void TabBar::add_tab(const String &title, const Ref<Texture2D> &icon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("add_tab")._native_ptr(), 1465444425);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &title, (icon != nullptr ? &icon->_owner : nullptr));
}

int32_t TabBar::get_tab_idx_at_point(const Vector2 &point) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("get_tab_idx_at_point")._native_ptr(), 3820158470);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &point);
}

void TabBar::set_tab_alignment(TabBar::AlignmentMode alignment) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("set_tab_alignment")._native_ptr(), 2413632353);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &alignment);
}

TabBar::AlignmentMode TabBar::get_tab_alignment() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("get_tab_alignment")._native_ptr(), 2178122193);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TabBar::AlignmentMode(0));
	return (TabBar::AlignmentMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TabBar::set_clip_tabs(bool clip_tabs) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("set_clip_tabs")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t clip_tabs_encoded;
	PtrToArg<bool>::encode(clip_tabs, &clip_tabs_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &clip_tabs_encoded);
}

bool TabBar::get_clip_tabs() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("get_clip_tabs")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

int32_t TabBar::get_tab_offset() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("get_tab_offset")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool TabBar::get_offset_buttons_visible() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("get_offset_buttons_visible")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TabBar::ensure_tab_visible(int32_t idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("ensure_tab_visible")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded);
}

Rect2 TabBar::get_tab_rect(int32_t tab_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("get_tab_rect")._native_ptr(), 3327874267);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2());
	int64_t tab_idx_encoded;
	PtrToArg<int64_t>::encode(tab_idx, &tab_idx_encoded);
	return internal::_call_native_mb_ret<Rect2>(_gde_method_bind, _owner, &tab_idx_encoded);
}

void TabBar::move_tab(int32_t from, int32_t to) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("move_tab")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t from_encoded;
	PtrToArg<int64_t>::encode(from, &from_encoded);
	int64_t to_encoded;
	PtrToArg<int64_t>::encode(to, &to_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &from_encoded, &to_encoded);
}

void TabBar::set_tab_close_display_policy(TabBar::CloseButtonDisplayPolicy policy) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("set_tab_close_display_policy")._native_ptr(), 2212906737);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &policy);
}

TabBar::CloseButtonDisplayPolicy TabBar::get_tab_close_display_policy() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("get_tab_close_display_policy")._native_ptr(), 2956568028);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TabBar::CloseButtonDisplayPolicy(0));
	return (TabBar::CloseButtonDisplayPolicy)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TabBar::set_max_tab_width(int32_t width) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("set_max_tab_width")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t width_encoded;
	PtrToArg<int64_t>::encode(width, &width_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &width_encoded);
}

int32_t TabBar::get_max_tab_width() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("get_max_tab_width")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TabBar::set_scrolling_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("set_scrolling_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool TabBar::get_scrolling_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("get_scrolling_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TabBar::set_drag_to_rearrange_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("set_drag_to_rearrange_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool TabBar::get_drag_to_rearrange_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("get_drag_to_rearrange_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TabBar::set_tabs_rearrange_group(int32_t group_id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("set_tabs_rearrange_group")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t group_id_encoded;
	PtrToArg<int64_t>::encode(group_id, &group_id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &group_id_encoded);
}

int32_t TabBar::get_tabs_rearrange_group() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("get_tabs_rearrange_group")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TabBar::set_scroll_to_selected(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("set_scroll_to_selected")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool TabBar::get_scroll_to_selected() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("get_scroll_to_selected")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TabBar::set_select_with_rmb(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("set_select_with_rmb")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool TabBar::get_select_with_rmb() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("get_select_with_rmb")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TabBar::set_deselect_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("set_deselect_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool TabBar::get_deselect_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("get_deselect_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TabBar::clear_tabs() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TabBar::get_class_static()._native_ptr(), StringName("clear_tabs")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}


} // namespace godot 