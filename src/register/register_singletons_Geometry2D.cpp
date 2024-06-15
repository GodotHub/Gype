#include <godot_cpp/classes/geometry2d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_Geometry2D() {
	qjs::Value js_singleton = context->newObject();
    Geometry2D *singleton = Geometry2D::get_singleton();
    js_singleton.add("is_point_in_circle", [singleton](const Vector2 & point,const Vector2 & circle_position,double circle_radius)->bool{return singleton->is_point_in_circle(point,circle_position,circle_radius);});
    js_singleton.add("segment_intersects_circle", [singleton](const Vector2 & segment_from,const Vector2 & segment_to,const Vector2 & circle_position,double circle_radius)->double{return singleton->segment_intersects_circle(segment_from,segment_to,circle_position,circle_radius);});
    js_singleton.add("segment_intersects_segment", [singleton](const Vector2 & from_a,const Vector2 & to_a,const Vector2 & from_b,const Vector2 & to_b)->Variant{return singleton->segment_intersects_segment(from_a,to_a,from_b,to_b);});
    js_singleton.add("line_intersects_line", [singleton](const Vector2 & from_a,const Vector2 & dir_a,const Vector2 & from_b,const Vector2 & dir_b)->Variant{return singleton->line_intersects_line(from_a,dir_a,from_b,dir_b);});
    js_singleton.add("get_closest_points_between_segments", [singleton](const Vector2 & p1,const Vector2 & q1,const Vector2 & p2,const Vector2 & q2)->PackedVector2Array{return singleton->get_closest_points_between_segments(p1,q1,p2,q2);});
    js_singleton.add("get_closest_point_to_segment", [singleton](const Vector2 & point,const Vector2 & s1,const Vector2 & s2)->Vector2{return singleton->get_closest_point_to_segment(point,s1,s2);});
    js_singleton.add("get_closest_point_to_segment_uncapped", [singleton](const Vector2 & point,const Vector2 & s1,const Vector2 & s2)->Vector2{return singleton->get_closest_point_to_segment_uncapped(point,s1,s2);});
    js_singleton.add("point_is_inside_triangle", [singleton](const Vector2 & point,const Vector2 & a,const Vector2 & b,const Vector2 & c)->bool{return singleton->point_is_inside_triangle(point,a,b,c);});
    js_singleton.add("is_polygon_clockwise", [singleton](const PackedVector2Array & polygon)->bool{return singleton->is_polygon_clockwise(polygon);});
    js_singleton.add("is_point_in_polygon", [singleton](const Vector2 & point,const PackedVector2Array & polygon)->bool{return singleton->is_point_in_polygon(point,polygon);});
    js_singleton.add("triangulate_polygon", [singleton](const PackedVector2Array & polygon)->PackedInt32Array{return singleton->triangulate_polygon(polygon);});
    js_singleton.add("triangulate_delaunay", [singleton](const PackedVector2Array & points)->PackedInt32Array{return singleton->triangulate_delaunay(points);});
    js_singleton.add("convex_hull", [singleton](const PackedVector2Array & points)->PackedVector2Array{return singleton->convex_hull(points);});
    js_singleton.add("decompose_polygon_in_convex", [singleton](const PackedVector2Array & polygon)->TypedArray<PackedVector2Array>{return singleton->decompose_polygon_in_convex(polygon);});
    js_singleton.add("merge_polygons", [singleton](const PackedVector2Array & polygon_a,const PackedVector2Array & polygon_b)->TypedArray<PackedVector2Array>{return singleton->merge_polygons(polygon_a,polygon_b);});
    js_singleton.add("clip_polygons", [singleton](const PackedVector2Array & polygon_a,const PackedVector2Array & polygon_b)->TypedArray<PackedVector2Array>{return singleton->clip_polygons(polygon_a,polygon_b);});
    js_singleton.add("intersect_polygons", [singleton](const PackedVector2Array & polygon_a,const PackedVector2Array & polygon_b)->TypedArray<PackedVector2Array>{return singleton->intersect_polygons(polygon_a,polygon_b);});
    js_singleton.add("exclude_polygons", [singleton](const PackedVector2Array & polygon_a,const PackedVector2Array & polygon_b)->TypedArray<PackedVector2Array>{return singleton->exclude_polygons(polygon_a,polygon_b);});
    js_singleton.add("clip_polyline_with_polygon", [singleton](const PackedVector2Array & polyline,const PackedVector2Array & polygon)->TypedArray<PackedVector2Array>{return singleton->clip_polyline_with_polygon(polyline,polygon);});
    js_singleton.add("intersect_polyline_with_polygon", [singleton](const PackedVector2Array & polyline,const PackedVector2Array & polygon)->TypedArray<PackedVector2Array>{return singleton->intersect_polyline_with_polygon(polyline,polygon);});
    js_singleton.add("offset_polygon", [singleton](const PackedVector2Array & polygon,double delta,Geometry2D::PolyJoinType join_type)->TypedArray<PackedVector2Array>{return singleton->offset_polygon(polygon,delta,join_type);});
    js_singleton.add("offset_polyline", [singleton](const PackedVector2Array & polyline,double delta,Geometry2D::PolyJoinType join_type,Geometry2D::PolyEndType end_type)->TypedArray<PackedVector2Array>{return singleton->offset_polyline(polyline,delta,join_type,end_type);});
    js_singleton.add("make_atlas", [singleton](const PackedVector2Array & sizes)->Dictionary{return singleton->make_atlas(sizes);});
    context->global()["Geometry2D"] = js_singleton;

    qjs::Value _PolyBooleanOperation = context->newObject();
    _PolyBooleanOperation["OPERATION_UNION"] = Geometry2D::PolyBooleanOperation::OPERATION_UNION;
    _PolyBooleanOperation["OPERATION_DIFFERENCE"] = Geometry2D::PolyBooleanOperation::OPERATION_DIFFERENCE;
    _PolyBooleanOperation["OPERATION_INTERSECTION"] = Geometry2D::PolyBooleanOperation::OPERATION_INTERSECTION;
    _PolyBooleanOperation["OPERATION_XOR"] = Geometry2D::PolyBooleanOperation::OPERATION_XOR;
    js_singleton["PolyBooleanOperation"] = _PolyBooleanOperation;
    qjs::Value _PolyJoinType = context->newObject();
    _PolyJoinType["JOIN_SQUARE"] = Geometry2D::PolyJoinType::JOIN_SQUARE;
    _PolyJoinType["JOIN_ROUND"] = Geometry2D::PolyJoinType::JOIN_ROUND;
    _PolyJoinType["JOIN_MITER"] = Geometry2D::PolyJoinType::JOIN_MITER;
    js_singleton["PolyJoinType"] = _PolyJoinType;
    qjs::Value _PolyEndType = context->newObject();
    _PolyEndType["END_POLYGON"] = Geometry2D::PolyEndType::END_POLYGON;
    _PolyEndType["END_JOINED"] = Geometry2D::PolyEndType::END_JOINED;
    _PolyEndType["END_BUTT"] = Geometry2D::PolyEndType::END_BUTT;
    _PolyEndType["END_SQUARE"] = Geometry2D::PolyEndType::END_SQUARE;
    _PolyEndType["END_ROUND"] = Geometry2D::PolyEndType::END_ROUND;
    js_singleton["PolyEndType"] = _PolyEndType;
}