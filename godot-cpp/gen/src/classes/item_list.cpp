/**************************************************************************/
/*  item_list.cpp                                                         */
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

#include <godot_cpp/classes/item_list.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/v_scroll_bar.hpp>
#include <godot_cpp/variant/vector2.hpp>

namespace godot {

int32_t ItemList::add_item(const String &text, const Ref<Texture2D> &icon, bool selectable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("add_item")._native_ptr(), 359861678);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int8_t selectable_encoded;
	PtrToArg<bool>::encode(selectable, &selectable_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &text, (icon != nullptr ? &icon->_owner : nullptr), &selectable_encoded);
}

int32_t ItemList::add_icon_item(const Ref<Texture2D> &icon, bool selectable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("add_icon_item")._native_ptr(), 4256579627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int8_t selectable_encoded;
	PtrToArg<bool>::encode(selectable, &selectable_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, (icon != nullptr ? &icon->_owner : nullptr), &selectable_encoded);
}

void ItemList::set_item_text(int32_t idx, const String &text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_item_text")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &text);
}

String ItemList::get_item_text(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_item_text")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &idx_encoded);
}

void ItemList::set_item_icon(int32_t idx, const Ref<Texture2D> &icon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_item_icon")._native_ptr(), 666127730);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, (icon != nullptr ? &icon->_owner : nullptr));
}

Ref<Texture2D> ItemList::get_item_icon(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_item_icon")._native_ptr(), 3536238170);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner, &idx_encoded));
}

void ItemList::set_item_text_direction(int32_t idx, Control::TextDirection direction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_item_text_direction")._native_ptr(), 1707680378);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &direction);
}

Control::TextDirection ItemList::get_item_text_direction(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_item_text_direction")._native_ptr(), 4235602388);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Control::TextDirection(0));
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return (Control::TextDirection)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &idx_encoded);
}

void ItemList::set_item_language(int32_t idx, const String &language) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_item_language")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &language);
}

String ItemList::get_item_language(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_item_language")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &idx_encoded);
}

void ItemList::set_item_icon_transposed(int32_t idx, bool transposed) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_item_icon_transposed")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	int8_t transposed_encoded;
	PtrToArg<bool>::encode(transposed, &transposed_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &transposed_encoded);
}

bool ItemList::is_item_icon_transposed(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("is_item_icon_transposed")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &idx_encoded);
}

void ItemList::set_item_icon_region(int32_t idx, const Rect2 &rect) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_item_icon_region")._native_ptr(), 1356297692);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &rect);
}

Rect2 ItemList::get_item_icon_region(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_item_icon_region")._native_ptr(), 3327874267);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<Rect2>(_gde_method_bind, _owner, &idx_encoded);
}

void ItemList::set_item_icon_modulate(int32_t idx, const Color &modulate) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_item_icon_modulate")._native_ptr(), 2878471219);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &modulate);
}

Color ItemList::get_item_icon_modulate(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_item_icon_modulate")._native_ptr(), 3457211756);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &idx_encoded);
}

void ItemList::set_item_selectable(int32_t idx, bool selectable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_item_selectable")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	int8_t selectable_encoded;
	PtrToArg<bool>::encode(selectable, &selectable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &selectable_encoded);
}

bool ItemList::is_item_selectable(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("is_item_selectable")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &idx_encoded);
}

void ItemList::set_item_disabled(int32_t idx, bool disabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_item_disabled")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	int8_t disabled_encoded;
	PtrToArg<bool>::encode(disabled, &disabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &disabled_encoded);
}

bool ItemList::is_item_disabled(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("is_item_disabled")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &idx_encoded);
}

void ItemList::set_item_metadata(int32_t idx, const Variant &metadata) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_item_metadata")._native_ptr(), 2152698145);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &metadata);
}

Variant ItemList::get_item_metadata(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_item_metadata")._native_ptr(), 4227898402);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &idx_encoded);
}

void ItemList::set_item_custom_bg_color(int32_t idx, const Color &custom_bg_color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_item_custom_bg_color")._native_ptr(), 2878471219);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &custom_bg_color);
}

Color ItemList::get_item_custom_bg_color(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_item_custom_bg_color")._native_ptr(), 3457211756);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &idx_encoded);
}

void ItemList::set_item_custom_fg_color(int32_t idx, const Color &custom_fg_color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_item_custom_fg_color")._native_ptr(), 2878471219);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &custom_fg_color);
}

Color ItemList::get_item_custom_fg_color(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_item_custom_fg_color")._native_ptr(), 3457211756);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &idx_encoded);
}

Rect2 ItemList::get_item_rect(int32_t idx, bool expand) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_item_rect")._native_ptr(), 159227807);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	int8_t expand_encoded;
	PtrToArg<bool>::encode(expand, &expand_encoded);
	return internal::_call_native_mb_ret<Rect2>(_gde_method_bind, _owner, &idx_encoded, &expand_encoded);
}

void ItemList::set_item_tooltip_enabled(int32_t idx, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_item_tooltip_enabled")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &enable_encoded);
}

bool ItemList::is_item_tooltip_enabled(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("is_item_tooltip_enabled")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &idx_encoded);
}

void ItemList::set_item_tooltip(int32_t idx, const String &tooltip) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_item_tooltip")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &tooltip);
}

String ItemList::get_item_tooltip(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_item_tooltip")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &idx_encoded);
}

void ItemList::select(int32_t idx, bool single) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("select")._native_ptr(), 972357352);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	int8_t single_encoded;
	PtrToArg<bool>::encode(single, &single_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded, &single_encoded);
}

void ItemList::deselect(int32_t idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("deselect")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded);
}

void ItemList::deselect_all() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("deselect_all")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

bool ItemList::is_selected(int32_t idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("is_selected")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &idx_encoded);
}

PackedInt32Array ItemList::get_selected_items() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_selected_items")._native_ptr(), 969006518);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner);
}

void ItemList::move_item(int32_t from_idx, int32_t to_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("move_item")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t from_idx_encoded;
	PtrToArg<int64_t>::encode(from_idx, &from_idx_encoded);
	int64_t to_idx_encoded;
	PtrToArg<int64_t>::encode(to_idx, &to_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &from_idx_encoded, &to_idx_encoded);
}

void ItemList::set_item_count(int32_t count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_item_count")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t count_encoded;
	PtrToArg<int64_t>::encode(count, &count_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &count_encoded);
}

int32_t ItemList::get_item_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_item_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void ItemList::remove_item(int32_t idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("remove_item")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t idx_encoded;
	PtrToArg<int64_t>::encode(idx, &idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &idx_encoded);
}

void ItemList::clear() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void ItemList::sort_items_by_text() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("sort_items_by_text")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void ItemList::set_fixed_column_width(int32_t width) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_fixed_column_width")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t width_encoded;
	PtrToArg<int64_t>::encode(width, &width_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &width_encoded);
}

int32_t ItemList::get_fixed_column_width() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_fixed_column_width")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void ItemList::set_same_column_width(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_same_column_width")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool ItemList::is_same_column_width() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("is_same_column_width")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void ItemList::set_max_text_lines(int32_t lines) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_max_text_lines")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t lines_encoded;
	PtrToArg<int64_t>::encode(lines, &lines_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &lines_encoded);
}

int32_t ItemList::get_max_text_lines() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_max_text_lines")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void ItemList::set_max_columns(int32_t amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_max_columns")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t amount_encoded;
	PtrToArg<int64_t>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

int32_t ItemList::get_max_columns() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_max_columns")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void ItemList::set_select_mode(ItemList::SelectMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_select_mode")._native_ptr(), 928267388);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

ItemList::SelectMode ItemList::get_select_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_select_mode")._native_ptr(), 1191945842);
	CHECK_METHOD_BIND_RET(_gde_method_bind, ItemList::SelectMode(0));
	return (ItemList::SelectMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void ItemList::set_icon_mode(ItemList::IconMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_icon_mode")._native_ptr(), 2025053633);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

ItemList::IconMode ItemList::get_icon_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_icon_mode")._native_ptr(), 3353929232);
	CHECK_METHOD_BIND_RET(_gde_method_bind, ItemList::IconMode(0));
	return (ItemList::IconMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void ItemList::set_fixed_icon_size(const Vector2i &size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_fixed_icon_size")._native_ptr(), 1130785943);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size);
}

Vector2i ItemList::get_fixed_icon_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_fixed_icon_size")._native_ptr(), 3690982128);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner);
}

void ItemList::set_icon_scale(double scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_icon_scale")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double scale_encoded;
	PtrToArg<double>::encode(scale, &scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scale_encoded);
}

double ItemList::get_icon_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_icon_scale")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void ItemList::set_allow_rmb_select(bool allow) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_allow_rmb_select")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t allow_encoded;
	PtrToArg<bool>::encode(allow, &allow_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &allow_encoded);
}

bool ItemList::get_allow_rmb_select() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_allow_rmb_select")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void ItemList::set_allow_reselect(bool allow) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_allow_reselect")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t allow_encoded;
	PtrToArg<bool>::encode(allow, &allow_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &allow_encoded);
}

bool ItemList::get_allow_reselect() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_allow_reselect")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void ItemList::set_allow_search(bool allow) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_allow_search")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t allow_encoded;
	PtrToArg<bool>::encode(allow, &allow_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &allow_encoded);
}

bool ItemList::get_allow_search() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_allow_search")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void ItemList::set_auto_height(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_auto_height")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool ItemList::has_auto_height() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("has_auto_height")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool ItemList::is_anything_selected() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("is_anything_selected")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

int32_t ItemList::get_item_at_position(const Vector2 &position, bool exact) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_item_at_position")._native_ptr(), 2300324924);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int8_t exact_encoded;
	PtrToArg<bool>::encode(exact, &exact_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &position, &exact_encoded);
}

void ItemList::ensure_current_is_visible() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("ensure_current_is_visible")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

VScrollBar *ItemList::get_v_scroll_bar() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_v_scroll_bar")._native_ptr(), 2630340773);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<VScrollBar>(_gde_method_bind, _owner);
}

void ItemList::set_text_overrun_behavior(TextServer::OverrunBehavior overrun_behavior) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("set_text_overrun_behavior")._native_ptr(), 1008890932);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &overrun_behavior);
}

TextServer::OverrunBehavior ItemList::get_text_overrun_behavior() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("get_text_overrun_behavior")._native_ptr(), 3779142101);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::OverrunBehavior(0));
	return (TextServer::OverrunBehavior)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void ItemList::force_update_list_size() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ItemList::get_class_static()._native_ptr(), StringName("force_update_list_size")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}


} // namespace godot 