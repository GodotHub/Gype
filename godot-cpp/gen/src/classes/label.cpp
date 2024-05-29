/**************************************************************************/
/*  label.cpp                                                             */
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

#include <godot_cpp/classes/label.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/label_settings.hpp>

namespace godot {

void Label::set_horizontal_alignment(HorizontalAlignment alignment) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("set_horizontal_alignment")._native_ptr(), 2312603777);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &alignment);
}

HorizontalAlignment Label::get_horizontal_alignment() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("get_horizontal_alignment")._native_ptr(), 341400642);
	CHECK_METHOD_BIND_RET(_gde_method_bind, HorizontalAlignment(0));
	return (HorizontalAlignment)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Label::set_vertical_alignment(VerticalAlignment alignment) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("set_vertical_alignment")._native_ptr(), 1796458609);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &alignment);
}

VerticalAlignment Label::get_vertical_alignment() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("get_vertical_alignment")._native_ptr(), 3274884059);
	CHECK_METHOD_BIND_RET(_gde_method_bind, VerticalAlignment(0));
	return (VerticalAlignment)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Label::set_text(const String &text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("set_text")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &text);
}

String Label::get_text() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("get_text")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void Label::set_label_settings(const Ref<LabelSettings> &settings) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("set_label_settings")._native_ptr(), 1030653839);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (settings != nullptr ? &settings->_owner : nullptr));
}

Ref<LabelSettings> Label::get_label_settings() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("get_label_settings")._native_ptr(), 826676056);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<LabelSettings>());
	return Ref<LabelSettings>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<LabelSettings>(_gde_method_bind, _owner));
}

void Label::set_text_direction(Control::TextDirection direction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("set_text_direction")._native_ptr(), 119160795);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &direction);
}

Control::TextDirection Label::get_text_direction() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("get_text_direction")._native_ptr(), 797257663);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Control::TextDirection(0));
	return (Control::TextDirection)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Label::set_language(const String &language) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("set_language")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &language);
}

String Label::get_language() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("get_language")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void Label::set_autowrap_mode(TextServer::AutowrapMode autowrap_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("set_autowrap_mode")._native_ptr(), 3289138044);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &autowrap_mode);
}

TextServer::AutowrapMode Label::get_autowrap_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("get_autowrap_mode")._native_ptr(), 1549071663);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::AutowrapMode(0));
	return (TextServer::AutowrapMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Label::set_justification_flags(BitField<TextServer::JustificationFlag> justification_flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("set_justification_flags")._native_ptr(), 2877345813);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &justification_flags);
}

BitField<TextServer::JustificationFlag> Label::get_justification_flags() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("get_justification_flags")._native_ptr(), 1583363614);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BitField<TextServer::JustificationFlag>(0));
	return (int64_t)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Label::set_clip_text(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("set_clip_text")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Label::is_clipping_text() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("is_clipping_text")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Label::set_tab_stops(const PackedFloat32Array &tab_stops) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("set_tab_stops")._native_ptr(), 2899603908);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &tab_stops);
}

PackedFloat32Array Label::get_tab_stops() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("get_tab_stops")._native_ptr(), 675695659);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedFloat32Array());
	return internal::_call_native_mb_ret<PackedFloat32Array>(_gde_method_bind, _owner);
}

void Label::set_text_overrun_behavior(TextServer::OverrunBehavior overrun_behavior) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("set_text_overrun_behavior")._native_ptr(), 1008890932);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &overrun_behavior);
}

TextServer::OverrunBehavior Label::get_text_overrun_behavior() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("get_text_overrun_behavior")._native_ptr(), 3779142101);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::OverrunBehavior(0));
	return (TextServer::OverrunBehavior)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Label::set_uppercase(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("set_uppercase")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool Label::is_uppercase() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("is_uppercase")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

int32_t Label::get_line_height(int32_t line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("get_line_height")._native_ptr(), 181039630);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t line_encoded;
	PtrToArg<int64_t>::encode(line, &line_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &line_encoded);
}

int32_t Label::get_line_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("get_line_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t Label::get_visible_line_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("get_visible_line_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t Label::get_total_character_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("get_total_character_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Label::set_visible_characters(int32_t amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("set_visible_characters")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t amount_encoded;
	PtrToArg<int64_t>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

int32_t Label::get_visible_characters() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("get_visible_characters")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

TextServer::VisibleCharactersBehavior Label::get_visible_characters_behavior() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("get_visible_characters_behavior")._native_ptr(), 258789322);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::VisibleCharactersBehavior(0));
	return (TextServer::VisibleCharactersBehavior)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Label::set_visible_characters_behavior(TextServer::VisibleCharactersBehavior behavior) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("set_visible_characters_behavior")._native_ptr(), 3383839701);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &behavior);
}

void Label::set_visible_ratio(double ratio) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("set_visible_ratio")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double ratio_encoded;
	PtrToArg<double>::encode(ratio, &ratio_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &ratio_encoded);
}

double Label::get_visible_ratio() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("get_visible_ratio")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Label::set_lines_skipped(int32_t lines_skipped) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("set_lines_skipped")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t lines_skipped_encoded;
	PtrToArg<int64_t>::encode(lines_skipped, &lines_skipped_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &lines_skipped_encoded);
}

int32_t Label::get_lines_skipped() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("get_lines_skipped")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Label::set_max_lines_visible(int32_t lines_visible) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("set_max_lines_visible")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t lines_visible_encoded;
	PtrToArg<int64_t>::encode(lines_visible, &lines_visible_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &lines_visible_encoded);
}

int32_t Label::get_max_lines_visible() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("get_max_lines_visible")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Label::set_structured_text_bidi_override(TextServer::StructuredTextParser parser) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("set_structured_text_bidi_override")._native_ptr(), 55961453);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &parser);
}

TextServer::StructuredTextParser Label::get_structured_text_bidi_override() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("get_structured_text_bidi_override")._native_ptr(), 3385126229);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::StructuredTextParser(0));
	return (TextServer::StructuredTextParser)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Label::set_structured_text_bidi_override_options(const Array &args) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("set_structured_text_bidi_override_options")._native_ptr(), 381264803);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &args);
}

Array Label::get_structured_text_bidi_override_options() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Label::get_class_static()._native_ptr(), StringName("get_structured_text_bidi_override_options")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner);
}


} // namespace godot 