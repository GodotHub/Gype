/**************************************************************************/
/*  tree_item.cpp                                                         */
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

#include <godot_cpp/classes/tree_item.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/tree.hpp>

namespace godot {

void TreeItem::set_cell_mode(int32_t column, TreeItem::TreeCellMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_cell_mode")._native_ptr(), 289920701);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &mode);
}

TreeItem::TreeCellMode TreeItem::get_cell_mode(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_cell_mode")._native_ptr(), 3406114978);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TreeItem::TreeCellMode(0));
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return (TreeItem::TreeCellMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::set_edit_multiline(int32_t column, bool multiline) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_edit_multiline")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int8_t multiline_encoded;
	PtrToArg<bool>::encode(multiline, &multiline_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &multiline_encoded);
}

bool TreeItem::is_edit_multiline(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("is_edit_multiline")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::set_checked(int32_t column, bool checked) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_checked")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int8_t checked_encoded;
	PtrToArg<bool>::encode(checked, &checked_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &checked_encoded);
}

void TreeItem::set_indeterminate(int32_t column, bool indeterminate) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_indeterminate")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int8_t indeterminate_encoded;
	PtrToArg<bool>::encode(indeterminate, &indeterminate_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &indeterminate_encoded);
}

bool TreeItem::is_checked(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("is_checked")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &column_encoded);
}

bool TreeItem::is_indeterminate(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("is_indeterminate")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::propagate_check(int32_t column, bool emit_signal) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("propagate_check")._native_ptr(), 972357352);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int8_t emit_signal_encoded;
	PtrToArg<bool>::encode(emit_signal, &emit_signal_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &emit_signal_encoded);
}

void TreeItem::set_text(int32_t column, const String &text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_text")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &text);
}

String TreeItem::get_text(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_text")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::set_text_direction(int32_t column, Control::TextDirection direction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_text_direction")._native_ptr(), 1707680378);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &direction);
}

Control::TextDirection TreeItem::get_text_direction(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_text_direction")._native_ptr(), 4235602388);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Control::TextDirection(0));
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return (Control::TextDirection)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::set_autowrap_mode(int32_t column, TextServer::AutowrapMode autowrap_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_autowrap_mode")._native_ptr(), 3633006561);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &autowrap_mode);
}

TextServer::AutowrapMode TreeItem::get_autowrap_mode(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_autowrap_mode")._native_ptr(), 2902757236);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::AutowrapMode(0));
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return (TextServer::AutowrapMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::set_text_overrun_behavior(int32_t column, TextServer::OverrunBehavior overrun_behavior) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_text_overrun_behavior")._native_ptr(), 1940772195);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &overrun_behavior);
}

TextServer::OverrunBehavior TreeItem::get_text_overrun_behavior(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_text_overrun_behavior")._native_ptr(), 3782727860);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::OverrunBehavior(0));
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return (TextServer::OverrunBehavior)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::set_structured_text_bidi_override(int32_t column, TextServer::StructuredTextParser parser) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_structured_text_bidi_override")._native_ptr(), 868756907);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &parser);
}

TextServer::StructuredTextParser TreeItem::get_structured_text_bidi_override(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_structured_text_bidi_override")._native_ptr(), 3377823772);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::StructuredTextParser(0));
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return (TextServer::StructuredTextParser)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::set_structured_text_bidi_override_options(int32_t column, const Array &args) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_structured_text_bidi_override_options")._native_ptr(), 537221740);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &args);
}

Array TreeItem::get_structured_text_bidi_override_options(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_structured_text_bidi_override_options")._native_ptr(), 663333327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::set_language(int32_t column, const String &language) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_language")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &language);
}

String TreeItem::get_language(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_language")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::set_suffix(int32_t column, const String &text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_suffix")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &text);
}

String TreeItem::get_suffix(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_suffix")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::set_icon(int32_t column, const Ref<Texture2D> &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_icon")._native_ptr(), 666127730);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, (texture != nullptr ? &texture->_owner : nullptr));
}

Ref<Texture2D> TreeItem::get_icon(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_icon")._native_ptr(), 3536238170);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner, &column_encoded));
}

void TreeItem::set_icon_region(int32_t column, const Rect2 &region) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_icon_region")._native_ptr(), 1356297692);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &region);
}

Rect2 TreeItem::get_icon_region(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_icon_region")._native_ptr(), 3327874267);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2());
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<Rect2>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::set_icon_max_width(int32_t column, int32_t width) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_icon_max_width")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int64_t width_encoded;
	PtrToArg<int64_t>::encode(width, &width_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &width_encoded);
}

int32_t TreeItem::get_icon_max_width(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_icon_max_width")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::set_icon_modulate(int32_t column, const Color &modulate) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_icon_modulate")._native_ptr(), 2878471219);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &modulate);
}

Color TreeItem::get_icon_modulate(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_icon_modulate")._native_ptr(), 3457211756);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::set_range(int32_t column, double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_range")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &value_encoded);
}

double TreeItem::get_range(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_range")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::set_range_config(int32_t column, double min, double max, double step, bool expr) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_range_config")._native_ptr(), 1547181014);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	double min_encoded;
	PtrToArg<double>::encode(min, &min_encoded);
	double max_encoded;
	PtrToArg<double>::encode(max, &max_encoded);
	double step_encoded;
	PtrToArg<double>::encode(step, &step_encoded);
	int8_t expr_encoded;
	PtrToArg<bool>::encode(expr, &expr_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &min_encoded, &max_encoded, &step_encoded, &expr_encoded);
}

Dictionary TreeItem::get_range_config(int32_t column) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_range_config")._native_ptr(), 3554694381);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::set_metadata(int32_t column, const Variant &meta) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_metadata")._native_ptr(), 2152698145);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &meta);
}

Variant TreeItem::get_metadata(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_metadata")._native_ptr(), 4227898402);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::set_custom_draw(int32_t column, Object *object, const StringName &callback) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_custom_draw")._native_ptr(), 272420368);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, (object != nullptr ? &object->_owner : nullptr), &callback);
}

void TreeItem::set_collapsed(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_collapsed")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool TreeItem::is_collapsed() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("is_collapsed")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TreeItem::set_collapsed_recursive(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_collapsed_recursive")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool TreeItem::is_any_collapsed(bool only_visible) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("is_any_collapsed")._native_ptr(), 2595650253);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int8_t only_visible_encoded;
	PtrToArg<bool>::encode(only_visible, &only_visible_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &only_visible_encoded);
}

void TreeItem::set_visible(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_visible")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool TreeItem::is_visible() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("is_visible")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void TreeItem::uncollapse_tree() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("uncollapse_tree")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void TreeItem::set_custom_minimum_height(int32_t height) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_custom_minimum_height")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t height_encoded;
	PtrToArg<int64_t>::encode(height, &height_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &height_encoded);
}

int32_t TreeItem::get_custom_minimum_height() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_custom_minimum_height")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TreeItem::set_selectable(int32_t column, bool selectable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_selectable")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int8_t selectable_encoded;
	PtrToArg<bool>::encode(selectable, &selectable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &selectable_encoded);
}

bool TreeItem::is_selectable(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("is_selectable")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &column_encoded);
}

bool TreeItem::is_selected(int32_t column) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("is_selected")._native_ptr(), 3067735520);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::select(int32_t column) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("select")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::deselect(int32_t column) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("deselect")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::set_editable(int32_t column, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_editable")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &enabled_encoded);
}

bool TreeItem::is_editable(int32_t column) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("is_editable")._native_ptr(), 3067735520);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::set_custom_color(int32_t column, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_custom_color")._native_ptr(), 2878471219);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &color);
}

Color TreeItem::get_custom_color(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_custom_color")._native_ptr(), 3457211756);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::clear_custom_color(int32_t column) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("clear_custom_color")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::set_custom_font(int32_t column, const Ref<Font> &font) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_custom_font")._native_ptr(), 2637609184);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, (font != nullptr ? &font->_owner : nullptr));
}

Ref<Font> TreeItem::get_custom_font(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_custom_font")._native_ptr(), 4244553094);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Font>());
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return Ref<Font>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Font>(_gde_method_bind, _owner, &column_encoded));
}

void TreeItem::set_custom_font_size(int32_t column, int32_t font_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_custom_font_size")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &font_size_encoded);
}

int32_t TreeItem::get_custom_font_size(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_custom_font_size")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::set_custom_bg_color(int32_t column, const Color &color, bool just_outline) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_custom_bg_color")._native_ptr(), 894174518);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int8_t just_outline_encoded;
	PtrToArg<bool>::encode(just_outline, &just_outline_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &color, &just_outline_encoded);
}

void TreeItem::clear_custom_bg_color(int32_t column) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("clear_custom_bg_color")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded);
}

Color TreeItem::get_custom_bg_color(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_custom_bg_color")._native_ptr(), 3457211756);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::set_custom_as_button(int32_t column, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_custom_as_button")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &enable_encoded);
}

bool TreeItem::is_custom_set_as_button(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("is_custom_set_as_button")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::add_button(int32_t column, const Ref<Texture2D> &button, int32_t id, bool disabled, const String &tooltip_text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("add_button")._native_ptr(), 1688223362);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	int8_t disabled_encoded;
	PtrToArg<bool>::encode(disabled, &disabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, (button != nullptr ? &button->_owner : nullptr), &id_encoded, &disabled_encoded, &tooltip_text);
}

int32_t TreeItem::get_button_count(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_button_count")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &column_encoded);
}

String TreeItem::get_button_tooltip_text(int32_t column, int32_t button_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_button_tooltip_text")._native_ptr(), 1391810591);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int64_t button_index_encoded;
	PtrToArg<int64_t>::encode(button_index, &button_index_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &column_encoded, &button_index_encoded);
}

int32_t TreeItem::get_button_id(int32_t column, int32_t button_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_button_id")._native_ptr(), 3175239445);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int64_t button_index_encoded;
	PtrToArg<int64_t>::encode(button_index, &button_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &column_encoded, &button_index_encoded);
}

int32_t TreeItem::get_button_by_id(int32_t column, int32_t id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_button_by_id")._native_ptr(), 3175239445);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &column_encoded, &id_encoded);
}

Ref<Texture2D> TreeItem::get_button(int32_t column, int32_t button_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_button")._native_ptr(), 2584904275);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int64_t button_index_encoded;
	PtrToArg<int64_t>::encode(button_index, &button_index_encoded);
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner, &column_encoded, &button_index_encoded));
}

void TreeItem::set_button_tooltip_text(int32_t column, int32_t button_index, const String &tooltip) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_button_tooltip_text")._native_ptr(), 2285447957);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int64_t button_index_encoded;
	PtrToArg<int64_t>::encode(button_index, &button_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &button_index_encoded, &tooltip);
}

void TreeItem::set_button(int32_t column, int32_t button_index, const Ref<Texture2D> &button) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_button")._native_ptr(), 176101966);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int64_t button_index_encoded;
	PtrToArg<int64_t>::encode(button_index, &button_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &button_index_encoded, (button != nullptr ? &button->_owner : nullptr));
}

void TreeItem::erase_button(int32_t column, int32_t button_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("erase_button")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int64_t button_index_encoded;
	PtrToArg<int64_t>::encode(button_index, &button_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &button_index_encoded);
}

void TreeItem::set_button_disabled(int32_t column, int32_t button_index, bool disabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_button_disabled")._native_ptr(), 1383440665);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int64_t button_index_encoded;
	PtrToArg<int64_t>::encode(button_index, &button_index_encoded);
	int8_t disabled_encoded;
	PtrToArg<bool>::encode(disabled, &disabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &button_index_encoded, &disabled_encoded);
}

void TreeItem::set_button_color(int32_t column, int32_t button_index, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_button_color")._native_ptr(), 3733378741);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int64_t button_index_encoded;
	PtrToArg<int64_t>::encode(button_index, &button_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &button_index_encoded, &color);
}

bool TreeItem::is_button_disabled(int32_t column, int32_t button_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("is_button_disabled")._native_ptr(), 2522259332);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int64_t button_index_encoded;
	PtrToArg<int64_t>::encode(button_index, &button_index_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &column_encoded, &button_index_encoded);
}

void TreeItem::set_tooltip_text(int32_t column, const String &tooltip) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_tooltip_text")._native_ptr(), 501894301);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &tooltip);
}

String TreeItem::get_tooltip_text(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_tooltip_text")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::set_text_alignment(int32_t column, HorizontalAlignment text_alignment) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_text_alignment")._native_ptr(), 3276431499);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &text_alignment);
}

HorizontalAlignment TreeItem::get_text_alignment(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_text_alignment")._native_ptr(), 4171562184);
	CHECK_METHOD_BIND_RET(_gde_method_bind, HorizontalAlignment(0));
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return (HorizontalAlignment)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::set_expand_right(int32_t column, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_expand_right")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &column_encoded, &enable_encoded);
}

bool TreeItem::get_expand_right(int32_t column) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_expand_right")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t column_encoded;
	PtrToArg<int64_t>::encode(column, &column_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &column_encoded);
}

void TreeItem::set_disable_folding(bool disable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("set_disable_folding")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t disable_encoded;
	PtrToArg<bool>::encode(disable, &disable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &disable_encoded);
}

bool TreeItem::is_folding_disabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("is_folding_disabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

TreeItem *TreeItem::create_child(int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("create_child")._native_ptr(), 954243986);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret_obj<TreeItem>(_gde_method_bind, _owner, &index_encoded);
}

void TreeItem::add_child(TreeItem *child) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("add_child")._native_ptr(), 1819951137);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (child != nullptr ? &child->_owner : nullptr));
}

void TreeItem::remove_child(TreeItem *child) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("remove_child")._native_ptr(), 1819951137);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (child != nullptr ? &child->_owner : nullptr));
}

Tree *TreeItem::get_tree() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_tree")._native_ptr(), 2243340556);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<Tree>(_gde_method_bind, _owner);
}

TreeItem *TreeItem::get_next() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_next")._native_ptr(), 1514277247);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<TreeItem>(_gde_method_bind, _owner);
}

TreeItem *TreeItem::get_prev() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_prev")._native_ptr(), 2768121250);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<TreeItem>(_gde_method_bind, _owner);
}

TreeItem *TreeItem::get_parent() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_parent")._native_ptr(), 1514277247);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<TreeItem>(_gde_method_bind, _owner);
}

TreeItem *TreeItem::get_first_child() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_first_child")._native_ptr(), 1514277247);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<TreeItem>(_gde_method_bind, _owner);
}

TreeItem *TreeItem::get_next_in_tree(bool wrap) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_next_in_tree")._native_ptr(), 1666920593);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	int8_t wrap_encoded;
	PtrToArg<bool>::encode(wrap, &wrap_encoded);
	return internal::_call_native_mb_ret_obj<TreeItem>(_gde_method_bind, _owner, &wrap_encoded);
}

TreeItem *TreeItem::get_prev_in_tree(bool wrap) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_prev_in_tree")._native_ptr(), 1666920593);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	int8_t wrap_encoded;
	PtrToArg<bool>::encode(wrap, &wrap_encoded);
	return internal::_call_native_mb_ret_obj<TreeItem>(_gde_method_bind, _owner, &wrap_encoded);
}

TreeItem *TreeItem::get_next_visible(bool wrap) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_next_visible")._native_ptr(), 1666920593);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	int8_t wrap_encoded;
	PtrToArg<bool>::encode(wrap, &wrap_encoded);
	return internal::_call_native_mb_ret_obj<TreeItem>(_gde_method_bind, _owner, &wrap_encoded);
}

TreeItem *TreeItem::get_prev_visible(bool wrap) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_prev_visible")._native_ptr(), 1666920593);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	int8_t wrap_encoded;
	PtrToArg<bool>::encode(wrap, &wrap_encoded);
	return internal::_call_native_mb_ret_obj<TreeItem>(_gde_method_bind, _owner, &wrap_encoded);
}

TreeItem *TreeItem::get_child(int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_child")._native_ptr(), 306700752);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret_obj<TreeItem>(_gde_method_bind, _owner, &index_encoded);
}

int32_t TreeItem::get_child_count() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_child_count")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

TypedArray<TreeItem> TreeItem::get_children() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_children")._native_ptr(), 2915620761);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<TreeItem>());
	return internal::_call_native_mb_ret<TypedArray<TreeItem>>(_gde_method_bind, _owner);
}

int32_t TreeItem::get_index() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("get_index")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void TreeItem::move_before(TreeItem *item) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("move_before")._native_ptr(), 1819951137);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (item != nullptr ? &item->_owner : nullptr));
}

void TreeItem::move_after(TreeItem *item) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("move_after")._native_ptr(), 1819951137);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (item != nullptr ? &item->_owner : nullptr));
}

void TreeItem::call_recursive_internal(const Variant **args, GDExtensionInt arg_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TreeItem::get_class_static()._native_ptr(), StringName("call_recursive")._native_ptr(), 2866548813);
	CHECK_METHOD_BIND(_gde_method_bind);
	GDExtensionCallError error;
	Variant ret;
	internal::gdextension_interface_object_method_bind_call(_gde_method_bind, _owner, reinterpret_cast<GDExtensionConstVariantPtr *>(args), arg_count, &ret, &error);
}


} // namespace godot 