/**************************************************************************/
/*  shape2d.hpp                                                           */
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

#ifndef GODOT_CPP_SHAPE2D_HPP
#define GODOT_CPP_SHAPE2D_HPP

#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rect2.hpp>


#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

struct Color;
class RID;
struct Transform2D;
struct Vector2;

class Shape2D : public Resource {
	GDEXTENSION_CLASS(Shape2D, Resource)

public:
	void set_custom_solver_bias(double bias);
	double get_custom_solver_bias() const;
	bool collide(const Transform2D &local_xform, const Ref<Shape2D> &with_shape, const Transform2D &shape_xform);
	bool collide_with_motion(const Transform2D &local_xform, const Vector2 &local_motion, const Ref<Shape2D> &with_shape, const Transform2D &shape_xform, const Vector2 &shape_motion);
	PackedVector2Array collide_and_get_contacts(const Transform2D &local_xform, const Ref<Shape2D> &with_shape, const Transform2D &shape_xform);
	PackedVector2Array collide_with_motion_and_get_contacts(const Transform2D &local_xform, const Vector2 &local_motion, const Ref<Shape2D> &with_shape, const Transform2D &shape_xform, const Vector2 &shape_motion);
	void draw(const RID &canvas_item, const Color &color);
	Rect2 get_rect() const;

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Resource::register_virtuals<T, B>();
	}

public:
};

} // namespace godot

#endif // ! GODOT_CPP_SHAPE2D_HPP