/**************************************************************************/
/*  node2d.hpp                                                            */
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

#ifndef GODOT_CPP_NODE2D_HPP
#define GODOT_CPP_NODE2D_HPP

#include <godot_cpp/classes/canvas_item.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.h>
namespace godot {

class Node;

class Node2D : public CanvasItem {
	GDEXTENSION_CLASS(Node2D, CanvasItem)

public:

	void set_position(const Vector2 &position);
	void set_rotation(double radians);
	void set_rotation_degrees(double degrees);
	void set_skew(double radians);
	void set_scale(const Vector2 &scale);
	Vector2 get_position() const;
	double get_rotation() const;
	double get_rotation_degrees() const;
	double get_skew() const;
	Vector2 get_scale() const;
	void rotate(double radians);
	void move_local_x(double delta, bool scaled = false);
	void move_local_y(double delta, bool scaled = false);
	void translate(const Vector2 &offset);
	void global_translate(const Vector2 &offset);
	void apply_scale(const Vector2 &ratio);
	void set_global_position(const Vector2 &position);
	Vector2 get_global_position() const;
	void set_global_rotation(double radians);
	void set_global_rotation_degrees(double degrees);
	double get_global_rotation() const;
	double get_global_rotation_degrees() const;
	void set_global_skew(double radians);
	double get_global_skew() const;
	void set_global_scale(const Vector2 &scale);
	Vector2 get_global_scale() const;
	void set_transform(const Transform2D &xform);
	void set_global_transform(const Transform2D &xform);
	void look_at(const Vector2 &point);
	double get_angle_to(const Vector2 &point) const;
	Vector2 to_local(const Vector2 &global_point) const;
	Vector2 to_global(const Vector2 &local_point) const;
	Transform2D get_relative_transform_to_parent(Node *parent) const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		CanvasItem::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_NODE2D_HPP