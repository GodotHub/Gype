/**************************************************************************/
/*  tree.cpp                                                              */
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

#include <godot_cpp/classes/tree.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void Tree::clear() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

TreeItem *Tree::create_item(TreeItem *parent, int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("create_item")._native_ptr(), 528467046);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret_obj<TreeItem>(_gde_method_bind, _owner, (parent != nullptr ? &parent->_owner : nullptr), &index_encoded);
}

TreeItem *Tree::get_root() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_root")._native_ptr(), 1514277247);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<TreeItem>(_gde_method_bind, _owner);
}

void Tree::set_column_custom_minimum_width(int32_t column, int32_t min_width) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("set_column_custom_minimum_width")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int64_t min_width_encoded;
	PtrToArg<int64_t>::encode(min_width, &min_width_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &min_width_encoded);
}

void Tree::set_column_expand(int32_t column, bool expand) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("set_column_expand")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int8_t expand_encoded;
	PtrToArg<bool>::encode(expand, &expand_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &expand_encoded);
}

void Tree::set_column_expand_ratio(int32_t column, int32_t ratio) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("set_column_expand_ratio")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int64_t ratio_encoded;
	PtrToArg<int64_t>::encode(ratio, &ratio_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &ratio_encoded);
}

void Tree::set_column_clip_content(int32_t column, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("set_column_clip_content")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &enable_encoded);
}

bool Tree::is_column_expanding(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("is_column_expanding")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &column_encoded);
}

bool Tree::is_column_clipping_content(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("is_column_clipping_content")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &column_encoded);
}

int32_t Tree::get_column_expand_ratio(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_column_expand_ratio")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &column_encoded);
}

int32_t Tree::get_column_width(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_column_width")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &column_encoded);
}

void Tree::set_hide_root(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("set_hide_root")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Tree::is_root_hidden() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("is_root_hidden")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

TreeItem *Tree::get_next_selected(TreeItem *from) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_next_selected")._native_ptr(), 873446299);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<TreeItem>(_gde_method_bind, _owner, (from != nullptr ? &from->_owner : nullptr));
}

TreeItem *Tree::get_selected() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_selected")._native_ptr(), 1514277247);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<TreeItem>(_gde_method_bind, _owner);
}

void Tree::set_selected(TreeItem *item, int32_t column) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("set_selected")._native_ptr(), 2662547442);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (item != nullptr ? &item->_owner : nullptr), &column_encoded);
}

int32_t Tree::get_selected_column() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_selected_column")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t Tree::get_pressed_button() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_pressed_button")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Tree::set_select_mode(Tree::SelectMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("set_select_mode")._native_ptr(), 3223887270);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

Tree::SelectMode Tree::get_select_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_select_mode")._native_ptr(), 100748571);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Tree::SelectMode(0));
	return (Tree::SelectMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Tree::deselect_all() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("deselect_all")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Tree::set_columns(int32_t amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("set_columns")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t amount_encoded;
	PtrToArg<int64_t>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

int32_t Tree::get_columns() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_columns")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

TreeItem *Tree::get_edited() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_edited")._native_ptr(), 1514277247);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<TreeItem>(_gde_method_bind, _owner);
}

int32_t Tree::get_edited_column() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_edited_column")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool Tree::edit_selected(bool force_edit) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("edit_selected")._native_ptr(), 2595650253);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int8_t force_edit_encoded;
	PtrToArg<bool>::encode(force_edit, &force_edit_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &force_edit_encoded);
}

Rect2 Tree::get_custom_popup_rect() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_custom_popup_rect")._native_ptr(), 1639390495);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2());
	return internal::_call_native_mb_ret<Rect2>(_gde_method_bind, _owner);
}

Rect2 Tree::get_item_area_rect(TreeItem *item, int32_t column, int32_t button_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_item_area_rect")._native_ptr(), 47968679);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2());
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int64_t button_index_encoded;
	PtrToArg<int64_t>::encode(button_index, &button_index_encoded);
	return internal::_call_native_mb_ret<Rect2>(_gde_method_bind, _owner, (item != nullptr ? &item->_owner : nullptr), &column_encoded, &button_index_encoded);
}

TreeItem *Tree::get_item_at_position(const Vector2 &position) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_item_at_position")._native_ptr(), 4193340126);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<TreeItem>(_gde_method_bind, _owner, &position);
}

int32_t Tree::get_column_at_position(const Vector2 &position) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_column_at_position")._native_ptr(), 3820158470);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &position);
}

int32_t Tree::get_drop_section_at_position(const Vector2 &position) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_drop_section_at_position")._native_ptr(), 3820158470);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &position);
}

int32_t Tree::get_button_id_at_position(const Vector2 &position) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_button_id_at_position")._native_ptr(), 3820158470);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &position);
}

void Tree::ensure_cursor_is_visible() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("ensure_cursor_is_visible")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Tree::set_column_titles_visible(bool visible) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("set_column_titles_visible")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t visible_encoded;
	PtrToArg<bool>::encode(visible, &visible_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &visible_encoded);
}

bool Tree::are_column_titles_visible() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("are_column_titles_visible")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Tree::set_column_title(int32_t column, const String &title) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("set_column_title")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &title);
}

String Tree::get_column_title(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_column_title")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &column_encoded);
}

void Tree::set_column_title_alignment(int32_t column, HorizontalAlignment title_alignment) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("set_column_title_alignment")._native_ptr(), 3276431499);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &title_alignment);
}

HorizontalAlignment Tree::get_column_title_alignment(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_column_title_alignment")._native_ptr(), 4171562184);
	CHECK_METHOD_BIND_RET(_gde_method_bind, HorizontalAlignment(0));
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return (HorizontalAlignment)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &column_encoded);
}

void Tree::set_column_title_direction(int32_t column, Control::TextDirection direction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("set_column_title_direction")._native_ptr(), 1707680378);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &direction);
}

Control::TextDirection Tree::get_column_title_direction(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_column_title_direction")._native_ptr(), 4235602388);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Control::TextDirection(0));
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return (Control::TextDirection)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &column_encoded);
}

void Tree::set_column_title_language(int32_t column, const String &language) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("set_column_title_language")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &language);
}

String Tree::get_column_title_language(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_column_title_language")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &column_encoded);
}

Vector2 Tree::get_scroll() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_scroll")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void Tree::scroll_to_item(TreeItem *item, bool center_on_item) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("scroll_to_item")._native_ptr(), 1314737213);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t center_on_item_encoded;
	PtrToArg<bool>::encode(center_on_item, &center_on_item_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (item != nullptr ? &item->_owner : nullptr), &center_on_item_encoded);
}

void Tree::set_h_scroll_enabled(bool h_scroll) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("set_h_scroll_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t h_scroll_encoded;
	PtrToArg<bool>::encode(h_scroll, &h_scroll_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &h_scroll_encoded);
}

bool Tree::is_h_scroll_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("is_h_scroll_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Tree::set_v_scroll_enabled(bool h_scroll) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("set_v_scroll_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t h_scroll_encoded;
	PtrToArg<bool>::encode(h_scroll, &h_scroll_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &h_scroll_encoded);
}

bool Tree::is_v_scroll_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("is_v_scroll_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Tree::set_hide_folding(bool hide) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("set_hide_folding")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t hide_encoded;
	PtrToArg<bool>::encode(hide, &hide_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &hide_encoded);
}

bool Tree::is_folding_hidden() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("is_folding_hidden")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Tree::set_enable_recursive_folding(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("set_enable_recursive_folding")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Tree::is_recursive_folding_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("is_recursive_folding_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Tree::set_drop_mode_flags(int32_t flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("set_drop_mode_flags")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t flags_encoded;
	PtrToArg<int64_t>::encode(flags, &flags_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &flags_encoded);
}

int32_t Tree::get_drop_mode_flags() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_drop_mode_flags")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Tree::set_allow_rmb_select(bool allow) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("set_allow_rmb_select")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t allow_encoded;
	PtrToArg<bool>::encode(allow, &allow_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &allow_encoded);
}

bool Tree::get_allow_rmb_select() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_allow_rmb_select")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Tree::set_allow_reselect(bool allow) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("set_allow_reselect")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t allow_encoded;
	PtrToArg<bool>::encode(allow, &allow_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &allow_encoded);
}

bool Tree::get_allow_reselect() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_allow_reselect")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Tree::set_allow_search(bool allow) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("set_allow_search")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t allow_encoded;
	PtrToArg<bool>::encode(allow, &allow_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &allow_encoded);
}

bool Tree::get_allow_search() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Tree::get_class_static()._native_ptr(), StringName("get_allow_search")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}


} // namespace godot 