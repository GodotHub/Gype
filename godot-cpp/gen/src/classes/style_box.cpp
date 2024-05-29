/**************************************************************************/
/*  style_box.cpp                                                         */
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

#include <godot_cpp/classes/style_box.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/canvas_item.hpp>
#include <godot_cpp/variant/rid.hpp>

namespace godot {

Vector2 StyleBox::get_minimum_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBox::get_class_static()._native_ptr(), StringName("get_minimum_size")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void StyleBox::set_content_margin(Side margin, double offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBox::get_class_static()._native_ptr(), StringName("set_content_margin")._native_ptr(), 4290182280);
	CHECK_METHOD_BIND(_gde_method_bind);
	double offset_encoded;
	PtrToArg<double>::encode(offset, &offset_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &margin, &offset_encoded);
}

void StyleBox::set_content_margin_all(double offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBox::get_class_static()._native_ptr(), StringName("set_content_margin_all")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double offset_encoded;
	PtrToArg<double>::encode(offset, &offset_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &offset_encoded);
}

double StyleBox::get_content_margin(Side margin) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBox::get_class_static()._native_ptr(), StringName("get_content_margin")._native_ptr(), 2869120046);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &margin);
}

double StyleBox::get_margin(Side margin) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBox::get_class_static()._native_ptr(), StringName("get_margin")._native_ptr(), 2869120046);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &margin);
}

Vector2 StyleBox::get_offset() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBox::get_class_static()._native_ptr(), StringName("get_offset")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void StyleBox::draw(const RID &canvas_item, const Rect2 &rect) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBox::get_class_static()._native_ptr(), StringName("draw")._native_ptr(), 2275962004);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &canvas_item, &rect);
}

CanvasItem *StyleBox::get_current_item_drawn() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBox::get_class_static()._native_ptr(), StringName("get_current_item_drawn")._native_ptr(), 3213695180);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<CanvasItem>(_gde_method_bind, _owner);
}

bool StyleBox::test_mask(const Vector2 &point, const Rect2 &rect) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StyleBox::get_class_static()._native_ptr(), StringName("test_mask")._native_ptr(), 3735564539);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &point, &rect);
}

void StyleBox::_draw(const RID &to_canvas_item, const Rect2 &rect) const {}

Rect2 StyleBox::_get_draw_rect(const Rect2 &rect) const {
	return Rect2();
}

Vector2 StyleBox::_get_minimum_size() const {
	return Vector2();
}

bool StyleBox::_test_mask(const Vector2 &point, const Rect2 &rect) const {
	return false;
}


} // namespace godot 