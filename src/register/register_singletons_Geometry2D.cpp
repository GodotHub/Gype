#include <godot_cpp/classes/geometry2d.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_singletons_Geometry2D() {
	qjs::Value js_singleton = context->newObject();
	Geometry2D *singleton = Geometry2D::get_singleton();
	js_singleton.add((new std::string("is_point_in_circle"))->c_str(), [singleton](const Vector2 &point, const Vector2 &circle_position, double circle_radius) -> bool { return singleton->is_point_in_circle(point, circle_position, circle_radius); });
	js_singleton.add((new std::string("segment_intersects_circle"))->c_str(), [singleton](const Vector2 &segment_from, const Vector2 &segment_to, const Vector2 &circle_position, double circle_radius) -> double { return singleton->segment_intersects_circle(segment_from, segment_to, circle_position, circle_radius); });
	js_singleton.add((new std::string("segment_intersects_segment"))->c_str(), [singleton](const Vector2 &from_a, const Vector2 &to_a, const Vector2 &from_b, const Vector2 &to_b) -> Variant { return singleton->segment_intersects_segment(from_a, to_a, from_b, to_b); });
	js_singleton.add((new std::string("line_intersects_line"))->c_str(), [singleton](const Vector2 &from_a, const Vector2 &dir_a, const Vector2 &from_b, const Vector2 &dir_b) -> Variant { return singleton->line_intersects_line(from_a, dir_a, from_b, dir_b); });
	js_singleton.add((new std::string("get_closest_points_between_segments"))->c_str(), [singleton](const Vector2 &p1, const Vector2 &q1, const Vector2 &p2, const Vector2 &q2) -> PackedVector2Array { return singleton->get_closest_points_between_segments(p1, q1, p2, q2); });
	js_singleton.add((new std::string("get_closest_point_to_segment"))->c_str(), [singleton](const Vector2 &point, const Vector2 &s1, const Vector2 &s2) -> Vector2 { return singleton->get_closest_point_to_segment(point, s1, s2); });
	js_singleton.add((new std::string("get_closest_point_to_segment_uncapped"))->c_str(), [singleton](const Vector2 &point, const Vector2 &s1, const Vector2 &s2) -> Vector2 { return singleton->get_closest_point_to_segment_uncapped(point, s1, s2); });
	js_singleton.add((new std::string("point_is_inside_triangle"))->c_str(), [singleton](const Vector2 &point, const Vector2 &a, const Vector2 &b, const Vector2 &c) -> bool { return singleton->point_is_inside_triangle(point, a, b, c); });
	js_singleton.add((new std::string("is_polygon_clockwise"))->c_str(), [singleton](const PackedVector2Array &polygon) -> bool { return singleton->is_polygon_clockwise(polygon); });
	js_singleton.add((new std::string("is_point_in_polygon"))->c_str(), [singleton](const Vector2 &point, const PackedVector2Array &polygon) -> bool { return singleton->is_point_in_polygon(point, polygon); });
	js_singleton.add((new std::string("triangulate_polygon"))->c_str(), [singleton](const PackedVector2Array &polygon) -> PackedInt32Array { return singleton->triangulate_polygon(polygon); });
	js_singleton.add((new std::string("triangulate_delaunay"))->c_str(), [singleton](const PackedVector2Array &points) -> PackedInt32Array { return singleton->triangulate_delaunay(points); });
	js_singleton.add((new std::string("convex_hull"))->c_str(), [singleton](const PackedVector2Array &points) -> PackedVector2Array { return singleton->convex_hull(points); });
	js_singleton.add((new std::string("decompose_polygon_in_convex"))->c_str(), [singleton](const PackedVector2Array &polygon) -> TypedArray<PackedVector2Array> { return singleton->decompose_polygon_in_convex(polygon); });
	js_singleton.add((new std::string("merge_polygons"))->c_str(), [singleton](const PackedVector2Array &polygon_a, const PackedVector2Array &polygon_b) -> TypedArray<PackedVector2Array> { return singleton->merge_polygons(polygon_a, polygon_b); });
	js_singleton.add((new std::string("clip_polygons"))->c_str(), [singleton](const PackedVector2Array &polygon_a, const PackedVector2Array &polygon_b) -> TypedArray<PackedVector2Array> { return singleton->clip_polygons(polygon_a, polygon_b); });
	js_singleton.add((new std::string("intersect_polygons"))->c_str(), [singleton](const PackedVector2Array &polygon_a, const PackedVector2Array &polygon_b) -> TypedArray<PackedVector2Array> { return singleton->intersect_polygons(polygon_a, polygon_b); });
	js_singleton.add((new std::string("exclude_polygons"))->c_str(), [singleton](const PackedVector2Array &polygon_a, const PackedVector2Array &polygon_b) -> TypedArray<PackedVector2Array> { return singleton->exclude_polygons(polygon_a, polygon_b); });
	js_singleton.add((new std::string("clip_polyline_with_polygon"))->c_str(), [singleton](const PackedVector2Array &polyline, const PackedVector2Array &polygon) -> TypedArray<PackedVector2Array> { return singleton->clip_polyline_with_polygon(polyline, polygon); });
	js_singleton.add((new std::string("intersect_polyline_with_polygon"))->c_str(), [singleton](const PackedVector2Array &polyline, const PackedVector2Array &polygon) -> TypedArray<PackedVector2Array> { return singleton->intersect_polyline_with_polygon(polyline, polygon); });
	js_singleton.add((new std::string("offset_polygon"))->c_str(), [singleton](const PackedVector2Array &polygon, double delta, Geometry2D::PolyJoinType join_type) -> TypedArray<PackedVector2Array> { return singleton->offset_polygon(polygon, delta, join_type); });
	js_singleton.add((new std::string("offset_polyline"))->c_str(), [singleton](const PackedVector2Array &polyline, double delta, Geometry2D::PolyJoinType join_type, Geometry2D::PolyEndType end_type) -> TypedArray<PackedVector2Array> { return singleton->offset_polyline(polyline, delta, join_type, end_type); });
	js_singleton.add((new std::string("make_atlas"))->c_str(), [singleton](const PackedVector2Array &sizes) -> Dictionary { return singleton->make_atlas(sizes); });
	context->global()[(new std::string("Geometry2D"))->c_str()] = js_singleton;

	qjs::Value _PolyBooleanOperation = context->newObject();
	_PolyBooleanOperation[(new std::string("OPERATION_UNION"))->c_str()] = Geometry2D::PolyBooleanOperation::OPERATION_UNION;
	_PolyBooleanOperation[(new std::string("OPERATION_DIFFERENCE"))->c_str()] = Geometry2D::PolyBooleanOperation::OPERATION_DIFFERENCE;
	_PolyBooleanOperation[(new std::string("OPERATION_INTERSECTION"))->c_str()] = Geometry2D::PolyBooleanOperation::OPERATION_INTERSECTION;
	_PolyBooleanOperation[(new std::string("OPERATION_XOR"))->c_str()] = Geometry2D::PolyBooleanOperation::OPERATION_XOR;
	js_singleton[(new std::string("PolyBooleanOperation"))->c_str()] = _PolyBooleanOperation;
	qjs::Value _PolyJoinType = context->newObject();
	_PolyJoinType[(new std::string("JOIN_SQUARE"))->c_str()] = Geometry2D::PolyJoinType::JOIN_SQUARE;
	_PolyJoinType[(new std::string("JOIN_ROUND"))->c_str()] = Geometry2D::PolyJoinType::JOIN_ROUND;
	_PolyJoinType[(new std::string("JOIN_MITER"))->c_str()] = Geometry2D::PolyJoinType::JOIN_MITER;
	js_singleton[(new std::string("PolyJoinType"))->c_str()] = _PolyJoinType;
	qjs::Value _PolyEndType = context->newObject();
	_PolyEndType[(new std::string("END_POLYGON"))->c_str()] = Geometry2D::PolyEndType::END_POLYGON;
	_PolyEndType[(new std::string("END_JOINED"))->c_str()] = Geometry2D::PolyEndType::END_JOINED;
	_PolyEndType[(new std::string("END_BUTT"))->c_str()] = Geometry2D::PolyEndType::END_BUTT;
	_PolyEndType[(new std::string("END_SQUARE"))->c_str()] = Geometry2D::PolyEndType::END_SQUARE;
	_PolyEndType[(new std::string("END_ROUND"))->c_str()] = Geometry2D::PolyEndType::END_ROUND;
	js_singleton[(new std::string("PolyEndType"))->c_str()] = _PolyEndType;
}