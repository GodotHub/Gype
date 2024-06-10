/**************************************************************************/
/*  canvas_item.cpp                                                       */
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

#include <godot_cpp/classes/canvas_item.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/canvas_layer.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/multi_mesh.hpp>
#include <godot_cpp/variant/packed_color_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/world2d.hpp>

namespace godot {

RID CanvasItem::get_canvas_item() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("get_canvas_item")._native_ptr(), 2944877500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void CanvasItem::set_visible(bool visible) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("set_visible")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t visible_encoded;
	PtrToArg<bool>::encode(visible, &visible_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &visible_encoded);
}

bool CanvasItem::is_visible() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("is_visible")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool CanvasItem::is_visible_in_tree() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("is_visible_in_tree")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CanvasItem::show() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("show")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void CanvasItem::hide() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("hide")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void CanvasItem::queue_redraw() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("queue_redraw")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void CanvasItem::move_to_front() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("move_to_front")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void CanvasItem::set_as_top_level(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("set_as_top_level")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool CanvasItem::is_set_as_top_level() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("is_set_as_top_level")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CanvasItem::set_light_mask(int32_t light_mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("set_light_mask")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t light_mask_encoded;
	PtrToArg<int64_t>::encode(light_mask, &light_mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light_mask_encoded);
}

int32_t CanvasItem::get_light_mask() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("get_light_mask")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void CanvasItem::set_modulate(const Color &modulate) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("set_modulate")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &modulate);
}

Color CanvasItem::get_modulate() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("get_modulate")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void CanvasItem::set_self_modulate(const Color &self_modulate) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("set_self_modulate")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &self_modulate);
}

Color CanvasItem::get_self_modulate() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("get_self_modulate")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void CanvasItem::set_z_index(int32_t z_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("set_z_index")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t z_index_encoded;
	PtrToArg<int64_t>::encode(z_index, &z_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &z_index_encoded);
}

int32_t CanvasItem::get_z_index() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("get_z_index")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void CanvasItem::set_z_as_relative(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("set_z_as_relative")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool CanvasItem::is_z_relative() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("is_z_relative")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CanvasItem::set_y_sort_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("set_y_sort_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool CanvasItem::is_y_sort_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("is_y_sort_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CanvasItem::set_draw_behind_parent(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("set_draw_behind_parent")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool CanvasItem::is_draw_behind_parent_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("is_draw_behind_parent_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CanvasItem::draw_line(const Vector2 &from, const Vector2 &to, const Color &color, double width, bool antialiased) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_line")._native_ptr(), 1562330099);
	CHECK_METHOD_BIND(_gde_method_bind);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	int8_t antialiased_encoded;
	PtrToArg<bool>::encode(antialiased, &antialiased_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &from, &to, &color, &width_encoded, &antialiased_encoded);
}

void CanvasItem::draw_dashed_line(const Vector2 &from, const Vector2 &to, const Color &color, double width, double dash, bool aligned, bool antialiased) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_dashed_line")._native_ptr(), 3653831622);
	CHECK_METHOD_BIND(_gde_method_bind);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	double dash_encoded;
	PtrToArg<double>::encode(dash, &dash_encoded);
	int8_t aligned_encoded;
	PtrToArg<bool>::encode(aligned, &aligned_encoded);
	int8_t antialiased_encoded;
	PtrToArg<bool>::encode(antialiased, &antialiased_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &from, &to, &color, &width_encoded, &dash_encoded, &aligned_encoded, &antialiased_encoded);
}

void CanvasItem::draw_polyline(const PackedVector2Array &points, const Color &color, double width, bool antialiased) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_polyline")._native_ptr(), 3797364428);
	CHECK_METHOD_BIND(_gde_method_bind);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	int8_t antialiased_encoded;
	PtrToArg<bool>::encode(antialiased, &antialiased_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &points, &color, &width_encoded, &antialiased_encoded);
}

void CanvasItem::draw_polyline_colors(const PackedVector2Array &points, const PackedColorArray &colors, double width, bool antialiased) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_polyline_colors")._native_ptr(), 2311979562);
	CHECK_METHOD_BIND(_gde_method_bind);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	int8_t antialiased_encoded;
	PtrToArg<bool>::encode(antialiased, &antialiased_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &points, &colors, &width_encoded, &antialiased_encoded);
}

void CanvasItem::draw_arc(const Vector2 &center, double radius, double start_angle, double end_angle, int32_t point_count, const Color &color, double width, bool antialiased) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_arc")._native_ptr(), 4140652635);
	CHECK_METHOD_BIND(_gde_method_bind);
	double radius_encoded;
	PtrToArg<double>::encode(radius, &radius_encoded);
	double start_angle_encoded;
	PtrToArg<double>::encode(start_angle, &start_angle_encoded);
	double end_angle_encoded;
	PtrToArg<double>::encode(end_angle, &end_angle_encoded);
	int64_t point_count_encoded;
	PtrToArg<int64_t>::encode(point_count, &point_count_encoded);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	int8_t antialiased_encoded;
	PtrToArg<bool>::encode(antialiased, &antialiased_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &center, &radius_encoded, &start_angle_encoded, &end_angle_encoded, &point_count_encoded, &color, &width_encoded, &antialiased_encoded);
}

void CanvasItem::draw_multiline(const PackedVector2Array &points, const Color &color, double width, bool antialiased) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_multiline")._native_ptr(), 3797364428);
	CHECK_METHOD_BIND(_gde_method_bind);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	int8_t antialiased_encoded;
	PtrToArg<bool>::encode(antialiased, &antialiased_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &points, &color, &width_encoded, &antialiased_encoded);
}

void CanvasItem::draw_multiline_colors(const PackedVector2Array &points, const PackedColorArray &colors, double width, bool antialiased) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_multiline_colors")._native_ptr(), 2311979562);
	CHECK_METHOD_BIND(_gde_method_bind);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	int8_t antialiased_encoded;
	PtrToArg<bool>::encode(antialiased, &antialiased_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &points, &colors, &width_encoded, &antialiased_encoded);
}

void CanvasItem::draw_rect(const Rect2 &rect, const Color &color, bool filled, double width, bool antialiased) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_rect")._native_ptr(), 2773573813);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t filled_encoded;
	PtrToArg<bool>::encode(filled, &filled_encoded);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	int8_t antialiased_encoded;
	PtrToArg<bool>::encode(antialiased, &antialiased_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rect, &color, &filled_encoded, &width_encoded, &antialiased_encoded);
}

void CanvasItem::draw_circle(const Vector2 &position, double radius, const Color &color, bool filled, double width, bool antialiased) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_circle")._native_ptr(), 3153026596);
	CHECK_METHOD_BIND(_gde_method_bind);
	double radius_encoded;
	PtrToArg<double>::encode(radius, &radius_encoded);
	int8_t filled_encoded;
	PtrToArg<bool>::encode(filled, &filled_encoded);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	int8_t antialiased_encoded;
	PtrToArg<bool>::encode(antialiased, &antialiased_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &position, &radius_encoded, &color, &filled_encoded, &width_encoded, &antialiased_encoded);
}

void CanvasItem::draw_texture(const Ref<Texture2D> &texture, const Vector2 &position, const Color &modulate) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_texture")._native_ptr(), 520200117);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (texture != nullptr ? &texture->_owner : nullptr), &position, &modulate);
}

void CanvasItem::draw_texture_rect(const Ref<Texture2D> &texture, const Rect2 &rect, bool tile, const Color &modulate, bool transpose) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_texture_rect")._native_ptr(), 3832805018);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t tile_encoded;
	PtrToArg<bool>::encode(tile, &tile_encoded);
	int8_t transpose_encoded;
	PtrToArg<bool>::encode(transpose, &transpose_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (texture != nullptr ? &texture->_owner : nullptr), &rect, &tile_encoded, &modulate, &transpose_encoded);
}

void CanvasItem::draw_texture_rect_region(const Ref<Texture2D> &texture, const Rect2 &rect, const Rect2 &src_rect, const Color &modulate, bool transpose, bool clip_uv) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_texture_rect_region")._native_ptr(), 3883821411);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t transpose_encoded;
	PtrToArg<bool>::encode(transpose, &transpose_encoded);
	int8_t clip_uv_encoded;
	PtrToArg<bool>::encode(clip_uv, &clip_uv_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (texture != nullptr ? &texture->_owner : nullptr), &rect, &src_rect, &modulate, &transpose_encoded, &clip_uv_encoded);
}

void CanvasItem::draw_msdf_texture_rect_region(const Ref<Texture2D> &texture, const Rect2 &rect, const Rect2 &src_rect, const Color &modulate, double outline, double pixel_range, double scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_msdf_texture_rect_region")._native_ptr(), 4219163252);
	CHECK_METHOD_BIND(_gde_method_bind);
	double outline_encoded;
	PtrToArg<double>::encode(outline, &outline_encoded);
	double pixel_range_encoded;
	PtrToArg<double>::encode(pixel_range, &pixel_range_encoded);
	double scale_encoded;
	PtrToArg<double>::encode(scale, &scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (texture != nullptr ? &texture->_owner : nullptr), &rect, &src_rect, &modulate, &outline_encoded, &pixel_range_encoded, &scale_encoded);
}

void CanvasItem::draw_lcd_texture_rect_region(const Ref<Texture2D> &texture, const Rect2 &rect, const Rect2 &src_rect, const Color &modulate) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_lcd_texture_rect_region")._native_ptr(), 3212350954);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (texture != nullptr ? &texture->_owner : nullptr), &rect, &src_rect, &modulate);
}

void CanvasItem::draw_style_box(const Ref<StyleBox> &style_box, const Rect2 &rect) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_style_box")._native_ptr(), 388176283);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (style_box != nullptr ? &style_box->_owner : nullptr), &rect);
}

void CanvasItem::draw_primitive(const PackedVector2Array &points, const PackedColorArray &colors, const PackedVector2Array &uvs, const Ref<Texture2D> &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_primitive")._native_ptr(), 3288481815);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &points, &colors, &uvs, (texture != nullptr ? &texture->_owner : nullptr));
}

void CanvasItem::draw_polygon(const PackedVector2Array &points, const PackedColorArray &colors, const PackedVector2Array &uvs, const Ref<Texture2D> &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_polygon")._native_ptr(), 974537912);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &points, &colors, &uvs, (texture != nullptr ? &texture->_owner : nullptr));
}

void CanvasItem::draw_colored_polygon(const PackedVector2Array &points, const Color &color, const PackedVector2Array &uvs, const Ref<Texture2D> &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_colored_polygon")._native_ptr(), 15245644);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &points, &color, &uvs, (texture != nullptr ? &texture->_owner : nullptr));
}

void CanvasItem::draw_string(const Ref<Font> &font, const Vector2 &pos, const String &text, HorizontalAlignment alignment, double width, int32_t font_size, const Color &modulate, BitField<TextServer::JustificationFlag> justification_flags, TextServer::Direction direction, TextServer::Orientation orientation) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_string")._native_ptr(), 728290553);
	CHECK_METHOD_BIND(_gde_method_bind);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (font != nullptr ? &font->_owner : nullptr), &pos, &text, &alignment, &width_encoded, &font_size_encoded, &modulate, &justification_flags, &direction, &orientation);
}

void CanvasItem::draw_multiline_string(const Ref<Font> &font, const Vector2 &pos, const String &text, HorizontalAlignment alignment, double width, int32_t font_size, int32_t max_lines, const Color &modulate, BitField<TextServer::LineBreakFlag> brk_flags, BitField<TextServer::JustificationFlag> justification_flags, TextServer::Direction direction, TextServer::Orientation orientation) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_multiline_string")._native_ptr(), 1927038192);
	CHECK_METHOD_BIND(_gde_method_bind);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	int64_t max_lines_encoded;
	PtrToArg<int64_t>::encode(max_lines, &max_lines_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (font != nullptr ? &font->_owner : nullptr), &pos, &text, &alignment, &width_encoded, &font_size_encoded, &max_lines_encoded, &modulate, &brk_flags, &justification_flags, &direction, &orientation);
}

void CanvasItem::draw_string_outline(const Ref<Font> &font, const Vector2 &pos, const String &text, HorizontalAlignment alignment, double width, int32_t font_size, int32_t size, const Color &modulate, BitField<TextServer::JustificationFlag> justification_flags, TextServer::Direction direction, TextServer::Orientation orientation) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_string_outline")._native_ptr(), 340562381);
	CHECK_METHOD_BIND(_gde_method_bind);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (font != nullptr ? &font->_owner : nullptr), &pos, &text, &alignment, &width_encoded, &font_size_encoded, &size_encoded, &modulate, &justification_flags, &direction, &orientation);
}

void CanvasItem::draw_multiline_string_outline(const Ref<Font> &font, const Vector2 &pos, const String &text, HorizontalAlignment alignment, double width, int32_t font_size, int32_t max_lines, int32_t size, const Color &modulate, BitField<TextServer::LineBreakFlag> brk_flags, BitField<TextServer::JustificationFlag> justification_flags, TextServer::Direction direction, TextServer::Orientation orientation) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_multiline_string_outline")._native_ptr(), 1912318525);
	CHECK_METHOD_BIND(_gde_method_bind);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	int64_t max_lines_encoded;
	PtrToArg<int64_t>::encode(max_lines, &max_lines_encoded);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (font != nullptr ? &font->_owner : nullptr), &pos, &text, &alignment, &width_encoded, &font_size_encoded, &max_lines_encoded, &size_encoded, &modulate, &brk_flags, &justification_flags, &direction, &orientation);
}

void CanvasItem::draw_char(const Ref<Font> &font, const Vector2 &pos, const String &_char, int32_t font_size, const Color &modulate) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_char")._native_ptr(), 3339793283);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (font != nullptr ? &font->_owner : nullptr), &pos, &_char, &font_size_encoded, &modulate);
}

void CanvasItem::draw_char_outline(const Ref<Font> &font, const Vector2 &pos, const String &_char, int32_t font_size, int32_t size, const Color &modulate) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_char_outline")._native_ptr(), 3302344391);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t font_size_encoded;
	PtrToArg<int64_t>::encode(font_size, &font_size_encoded);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (font != nullptr ? &font->_owner : nullptr), &pos, &_char, &font_size_encoded, &size_encoded, &modulate);
}

void CanvasItem::draw_mesh(const Ref<Mesh> &mesh, const Ref<Texture2D> &texture, const Transform2D &transform, const Color &modulate) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_mesh")._native_ptr(), 153818295);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (mesh != nullptr ? &mesh->_owner : nullptr), (texture != nullptr ? &texture->_owner : nullptr), &transform, &modulate);
}

void CanvasItem::draw_multimesh(const Ref<MultiMesh> &multimesh, const Ref<Texture2D> &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_multimesh")._native_ptr(), 937992368);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (multimesh != nullptr ? &multimesh->_owner : nullptr), (texture != nullptr ? &texture->_owner : nullptr));
}

void CanvasItem::draw_set_transform(const Vector2 &position, double rotation, const Vector2 &scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_set_transform")._native_ptr(), 288975085);
	CHECK_METHOD_BIND(_gde_method_bind);
	double rotation_encoded;
	PtrToArg<double>::encode(rotation, &rotation_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &position, &rotation_encoded, &scale);
}

void CanvasItem::draw_set_transform_matrix(const Transform2D &xform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_set_transform_matrix")._native_ptr(), 2761652528);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &xform);
}

void CanvasItem::draw_animation_slice(double animation_length, double slice_begin, double slice_end, double offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_animation_slice")._native_ptr(), 3112831842);
	CHECK_METHOD_BIND(_gde_method_bind);
	double animation_length_encoded;
	PtrToArg<double>::encode(animation_length, &animation_length_encoded);
	double slice_begin_encoded;
	PtrToArg<double>::encode(slice_begin, &slice_begin_encoded);
	double slice_end_encoded;
	PtrToArg<double>::encode(slice_end, &slice_end_encoded);
	double offset_encoded;
	PtrToArg<double>::encode(offset, &offset_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &animation_length_encoded, &slice_begin_encoded, &slice_end_encoded, &offset_encoded);
}

void CanvasItem::draw_end_animation() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("draw_end_animation")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Transform2D CanvasItem::get_transform() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("get_transform")._native_ptr(), 3814499831);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform2D());
	return internal::_call_native_mb_ret<Transform2D>(_gde_method_bind, _owner);
}

Transform2D CanvasItem::get_global_transform() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("get_global_transform")._native_ptr(), 3814499831);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform2D());
	return internal::_call_native_mb_ret<Transform2D>(_gde_method_bind, _owner);
}

Transform2D CanvasItem::get_global_transform_with_canvas() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("get_global_transform_with_canvas")._native_ptr(), 3814499831);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform2D());
	return internal::_call_native_mb_ret<Transform2D>(_gde_method_bind, _owner);
}

Transform2D CanvasItem::get_viewport_transform() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("get_viewport_transform")._native_ptr(), 3814499831);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform2D());
	return internal::_call_native_mb_ret<Transform2D>(_gde_method_bind, _owner);
}

Rect2 CanvasItem::get_viewport_rect() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("get_viewport_rect")._native_ptr(), 1639390495);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2());
	return internal::_call_native_mb_ret<Rect2>(_gde_method_bind, _owner);
}

Transform2D CanvasItem::get_canvas_transform() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("get_canvas_transform")._native_ptr(), 3814499831);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform2D());
	return internal::_call_native_mb_ret<Transform2D>(_gde_method_bind, _owner);
}

Transform2D CanvasItem::get_screen_transform() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("get_screen_transform")._native_ptr(), 3814499831);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform2D());
	return internal::_call_native_mb_ret<Transform2D>(_gde_method_bind, _owner);
}

Vector2 CanvasItem::get_local_mouse_position() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("get_local_mouse_position")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

Vector2 CanvasItem::get_global_mouse_position() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("get_global_mouse_position")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

RID CanvasItem::get_canvas() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("get_canvas")._native_ptr(), 2944877500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

CanvasLayer *CanvasItem::get_canvas_layer_node() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("get_canvas_layer_node")._native_ptr(), 2602762519);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<CanvasLayer>(_gde_method_bind, _owner);
}

Ref<World2D> CanvasItem::get_world_2d() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("get_world_2d")._native_ptr(), 2339128592);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<World2D>());
	return Ref<World2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<World2D>(_gde_method_bind, _owner));
}

void CanvasItem::set_material(const Ref<Material> &material) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("set_material")._native_ptr(), 2757459619);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (material != nullptr ? &material->_owner : nullptr));
}

Ref<Material> CanvasItem::get_material() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("get_material")._native_ptr(), 5934680);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Material>());
	return Ref<Material>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Material>(_gde_method_bind, _owner));
}

void CanvasItem::set_use_parent_material(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("set_use_parent_material")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool CanvasItem::get_use_parent_material() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("get_use_parent_material")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CanvasItem::set_notify_local_transform(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("set_notify_local_transform")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool CanvasItem::is_local_transform_notification_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("is_local_transform_notification_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CanvasItem::set_notify_transform(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("set_notify_transform")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool CanvasItem::is_transform_notification_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("is_transform_notification_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void CanvasItem::force_update_transform() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("force_update_transform")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Vector2 CanvasItem::make_canvas_position_local(const Vector2 &screen_point) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("make_canvas_position_local")._native_ptr(), 2656412154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &screen_point);
}

Ref<InputEvent> CanvasItem::make_input_local(const Ref<InputEvent> &event) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("make_input_local")._native_ptr(), 811130057);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<InputEvent>());
	return Ref<InputEvent>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<InputEvent>(_gde_method_bind, _owner, (event != nullptr ? &event->_owner : nullptr)));
}

void CanvasItem::set_visibility_layer(uint32_t layer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("set_visibility_layer")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_encoded);
}

uint32_t CanvasItem::get_visibility_layer() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("get_visibility_layer")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void CanvasItem::set_visibility_layer_bit(uint32_t layer, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("set_visibility_layer_bit")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_encoded, &enabled_encoded);
}

bool CanvasItem::get_visibility_layer_bit(uint32_t layer) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("get_visibility_layer_bit")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &layer_encoded);
}

void CanvasItem::set_texture_filter(CanvasItem::TextureFilter mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("set_texture_filter")._native_ptr(), 1037999706);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

CanvasItem::TextureFilter CanvasItem::get_texture_filter() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("get_texture_filter")._native_ptr(), 121960042);
	CHECK_METHOD_BIND_RET(_gde_method_bind, CanvasItem::TextureFilter(0));
	return (CanvasItem::TextureFilter)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void CanvasItem::set_texture_repeat(CanvasItem::TextureRepeat mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("set_texture_repeat")._native_ptr(), 1716472974);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

CanvasItem::TextureRepeat CanvasItem::get_texture_repeat() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("get_texture_repeat")._native_ptr(), 2667158319);
	CHECK_METHOD_BIND_RET(_gde_method_bind, CanvasItem::TextureRepeat(0));
	return (CanvasItem::TextureRepeat)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void CanvasItem::set_clip_children_mode(CanvasItem::ClipChildrenMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("set_clip_children_mode")._native_ptr(), 1319393776);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

CanvasItem::ClipChildrenMode CanvasItem::get_clip_children_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(CanvasItem::get_class_static()._native_ptr(), StringName("get_clip_children_mode")._native_ptr(), 3581808349);
	CHECK_METHOD_BIND_RET(_gde_method_bind, CanvasItem::ClipChildrenMode(0));
	return (CanvasItem::ClipChildrenMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void CanvasItem::_draw() {}


} // namespace godot 