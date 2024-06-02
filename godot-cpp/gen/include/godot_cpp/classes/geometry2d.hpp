/**************************************************************************/
/*  geometry2d.hpp                                                        */
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

#ifndef GODOT_CPP_GEOMETRY2D_HPP
#define GODOT_CPP_GEOMETRY2D_HPP

#include <godot_cpp/core/object.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>


#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class Geometry2D : public Object {
	GDEXTENSION_CLASS(Geometry2D, Object)

public:
	enum PolyBooleanOperation {
		OPERATION_UNION = 0,
		OPERATION_DIFFERENCE = 1,
		OPERATION_INTERSECTION = 2,
		OPERATION_XOR = 3,
	};

	enum PolyJoinType {
		JOIN_SQUARE = 0,
		JOIN_ROUND = 1,
		JOIN_MITER = 2,
	};

	enum PolyEndType {
		END_POLYGON = 0,
		END_JOINED = 1,
		END_BUTT = 2,
		END_SQUARE = 3,
		END_ROUND = 4,
	};

	static Geometry2D *get_singleton();

	bool is_point_in_circle(const Vector2 &point, const Vector2 &circle_position, double circle_radius);
	double segment_intersects_circle(const Vector2 &segment_from, const Vector2 &segment_to, const Vector2 &circle_position, double circle_radius);
	Variant segment_intersects_segment(const Vector2 &from_a, const Vector2 &to_a, const Vector2 &from_b, const Vector2 &to_b);
	Variant line_intersects_line(const Vector2 &from_a, const Vector2 &dir_a, const Vector2 &from_b, const Vector2 &dir_b);
	PackedVector2Array get_closest_points_between_segments(const Vector2 &p1, const Vector2 &q1, const Vector2 &p2, const Vector2 &q2);
	Vector2 get_closest_point_to_segment(const Vector2 &point, const Vector2 &s1, const Vector2 &s2);
	Vector2 get_closest_point_to_segment_uncapped(const Vector2 &point, const Vector2 &s1, const Vector2 &s2);
	bool point_is_inside_triangle(const Vector2 &point, const Vector2 &a, const Vector2 &b, const Vector2 &c) const;
	bool is_polygon_clockwise(const PackedVector2Array &polygon);
	bool is_point_in_polygon(const Vector2 &point, const PackedVector2Array &polygon);
	PackedInt32Array triangulate_polygon(const PackedVector2Array &polygon);
	PackedInt32Array triangulate_delaunay(const PackedVector2Array &points);
	PackedVector2Array convex_hull(const PackedVector2Array &points);
	TypedArray<PackedVector2Array> decompose_polygon_in_convex(const PackedVector2Array &polygon);
	TypedArray<PackedVector2Array> merge_polygons(const PackedVector2Array &polygon_a, const PackedVector2Array &polygon_b);
	TypedArray<PackedVector2Array> clip_polygons(const PackedVector2Array &polygon_a, const PackedVector2Array &polygon_b);
	TypedArray<PackedVector2Array> intersect_polygons(const PackedVector2Array &polygon_a, const PackedVector2Array &polygon_b);
	TypedArray<PackedVector2Array> exclude_polygons(const PackedVector2Array &polygon_a, const PackedVector2Array &polygon_b);
	TypedArray<PackedVector2Array> clip_polyline_with_polygon(const PackedVector2Array &polyline, const PackedVector2Array &polygon);
	TypedArray<PackedVector2Array> intersect_polyline_with_polygon(const PackedVector2Array &polyline, const PackedVector2Array &polygon);
	TypedArray<PackedVector2Array> offset_polygon(const PackedVector2Array &polygon, double delta, Geometry2D::PolyJoinType join_type = (Geometry2D::PolyJoinType)0);
	TypedArray<PackedVector2Array> offset_polyline(const PackedVector2Array &polyline, double delta, Geometry2D::PolyJoinType join_type = (Geometry2D::PolyJoinType)0, Geometry2D::PolyEndType end_type = (Geometry2D::PolyEndType)3);
	Dictionary make_atlas(const PackedVector2Array &sizes);

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Object::register_virtuals<T, B>();
	}

public:
};

} // namespace godot

VARIANT_ENUM_CAST(Geometry2D::PolyBooleanOperation);
VARIANT_ENUM_CAST(Geometry2D::PolyJoinType);
VARIANT_ENUM_CAST(Geometry2D::PolyEndType);

#endif // ! GODOT_CPP_GEOMETRY2D_HPP