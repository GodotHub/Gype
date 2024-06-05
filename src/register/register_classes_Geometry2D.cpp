#include <godot_cpp/classes/geometry2d.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>


#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_Geometry2D() {
	qjs::Context::Module &_module = _General;
	_module.class_<Geometry2D>("Geometry2D")
			.constructor<>()
			.fun<static_cast<bool (Geometry2D::*)(const Vector2 &, const Vector2 &, double)>(&Geometry2D::is_point_in_circle)>("is_point_in_circle")
			.fun<static_cast<double (Geometry2D::*)(const Vector2 &, const Vector2 &, const Vector2 &, double)>(&Geometry2D::segment_intersects_circle)>("segment_intersects_circle")
			.fun<static_cast<Variant (Geometry2D::*)(const Vector2 &, const Vector2 &, const Vector2 &, const Vector2 &)>(&Geometry2D::segment_intersects_segment)>("segment_intersects_segment")
			.fun<static_cast<Variant (Geometry2D::*)(const Vector2 &, const Vector2 &, const Vector2 &, const Vector2 &)>(&Geometry2D::line_intersects_line)>("line_intersects_line")
			.fun<static_cast<PackedVector2Array (Geometry2D::*)(const Vector2 &, const Vector2 &, const Vector2 &, const Vector2 &)>(&Geometry2D::get_closest_points_between_segments)>("get_closest_points_between_segments")
			.fun<static_cast<Vector2 (Geometry2D::*)(const Vector2 &, const Vector2 &, const Vector2 &)>(&Geometry2D::get_closest_point_to_segment)>("get_closest_point_to_segment")
			.fun<static_cast<Vector2 (Geometry2D::*)(const Vector2 &, const Vector2 &, const Vector2 &)>(&Geometry2D::get_closest_point_to_segment_uncapped)>("get_closest_point_to_segment_uncapped")
			.fun<static_cast<bool (Geometry2D::*)(const Vector2 &, const Vector2 &, const Vector2 &, const Vector2 &) const>(&Geometry2D::point_is_inside_triangle)>("point_is_inside_triangle")
			.fun<static_cast<bool (Geometry2D::*)(const PackedVector2Array &)>(&Geometry2D::is_polygon_clockwise)>("is_polygon_clockwise")
			.fun<static_cast<bool (Geometry2D::*)(const Vector2 &, const PackedVector2Array &)>(&Geometry2D::is_point_in_polygon)>("is_point_in_polygon")
			.fun<static_cast<PackedInt32Array (Geometry2D::*)(const PackedVector2Array &)>(&Geometry2D::triangulate_polygon)>("triangulate_polygon")
			.fun<static_cast<PackedInt32Array (Geometry2D::*)(const PackedVector2Array &)>(&Geometry2D::triangulate_delaunay)>("triangulate_delaunay")
			.fun<static_cast<PackedVector2Array (Geometry2D::*)(const PackedVector2Array &)>(&Geometry2D::convex_hull)>("convex_hull")
			.fun<static_cast<TypedArray<PackedVector2Array> (Geometry2D::*)(const PackedVector2Array &)>(&Geometry2D::decompose_polygon_in_convex)>("decompose_polygon_in_convex")
			.fun<static_cast<TypedArray<PackedVector2Array> (Geometry2D::*)(const PackedVector2Array &, const PackedVector2Array &)>(&Geometry2D::merge_polygons)>("merge_polygons")
			.fun<static_cast<TypedArray<PackedVector2Array> (Geometry2D::*)(const PackedVector2Array &, const PackedVector2Array &)>(&Geometry2D::clip_polygons)>("clip_polygons")
			.fun<static_cast<TypedArray<PackedVector2Array> (Geometry2D::*)(const PackedVector2Array &, const PackedVector2Array &)>(&Geometry2D::intersect_polygons)>("intersect_polygons")
			.fun<static_cast<TypedArray<PackedVector2Array> (Geometry2D::*)(const PackedVector2Array &, const PackedVector2Array &)>(&Geometry2D::exclude_polygons)>("exclude_polygons")
			.fun<static_cast<TypedArray<PackedVector2Array> (Geometry2D::*)(const PackedVector2Array &, const PackedVector2Array &)>(&Geometry2D::clip_polyline_with_polygon)>("clip_polyline_with_polygon")
			.fun<static_cast<TypedArray<PackedVector2Array> (Geometry2D::*)(const PackedVector2Array &, const PackedVector2Array &)>(&Geometry2D::intersect_polyline_with_polygon)>("intersect_polyline_with_polygon")
			.fun<static_cast<TypedArray<PackedVector2Array> (Geometry2D::*)(const PackedVector2Array &, double, Geometry2D::PolyJoinType)>(&Geometry2D::offset_polygon)>("offset_polygon")
			.fun<static_cast<TypedArray<PackedVector2Array> (Geometry2D::*)(const PackedVector2Array &, double, Geometry2D::PolyJoinType, Geometry2D::PolyEndType)>(&Geometry2D::offset_polyline)>("offset_polyline")
			.fun<static_cast<Dictionary (Geometry2D::*)(const PackedVector2Array &)>(&Geometry2D::make_atlas)>("make_atlas");
}