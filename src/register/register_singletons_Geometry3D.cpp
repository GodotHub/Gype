
#include <godot_cpp/classes/geometry3d.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/plane.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_singletons_Geometry3D() {
	qjs::Value js_singleton = context->newObject();
	Geometry3D *singleton = Geometry3D::get_singleton();
	js_singleton.add((new std::string("compute_convex_mesh_points"))->c_str(), [singleton](const TypedArray<Plane> &planes) -> PackedVector3Array { return singleton->compute_convex_mesh_points(planes); });
	js_singleton.add((new std::string("build_box_planes"))->c_str(), [singleton](const Vector3 &extents) -> TypedArray<Plane> { return singleton->build_box_planes(extents); });
	js_singleton.add((new std::string("build_cylinder_planes"))->c_str(), [singleton](double radius, double height, int32_t sides, Vector3::Axis axis) -> TypedArray<Plane> { return singleton->build_cylinder_planes(radius, height, sides, axis); });
	js_singleton.add((new std::string("build_capsule_planes"))->c_str(), [singleton](double radius, double height, int32_t sides, int32_t lats, Vector3::Axis axis) -> TypedArray<Plane> { return singleton->build_capsule_planes(radius, height, sides, lats, axis); });
	js_singleton.add((new std::string("get_closest_points_between_segments"))->c_str(), [singleton](const Vector3 &p1, const Vector3 &p2, const Vector3 &q1, const Vector3 &q2) -> PackedVector3Array { return singleton->get_closest_points_between_segments(p1, p2, q1, q2); });
	js_singleton.add((new std::string("get_closest_point_to_segment"))->c_str(), [singleton](const Vector3 &point, const Vector3 &s1, const Vector3 &s2) -> Vector3 { return singleton->get_closest_point_to_segment(point, s1, s2); });
	js_singleton.add((new std::string("get_closest_point_to_segment_uncapped"))->c_str(), [singleton](const Vector3 &point, const Vector3 &s1, const Vector3 &s2) -> Vector3 { return singleton->get_closest_point_to_segment_uncapped(point, s1, s2); });
	js_singleton.add((new std::string("get_triangle_barycentric_coords"))->c_str(), [singleton](const Vector3 &point, const Vector3 &a, const Vector3 &b, const Vector3 &c) -> Vector3 { return singleton->get_triangle_barycentric_coords(point, a, b, c); });
	js_singleton.add((new std::string("ray_intersects_triangle"))->c_str(), [singleton](const Vector3 &from, const Vector3 &dir, const Vector3 &a, const Vector3 &b, const Vector3 &c) -> Variant { return singleton->ray_intersects_triangle(from, dir, a, b, c); });
	js_singleton.add((new std::string("segment_intersects_triangle"))->c_str(), [singleton](const Vector3 &from, const Vector3 &to, const Vector3 &a, const Vector3 &b, const Vector3 &c) -> Variant { return singleton->segment_intersects_triangle(from, to, a, b, c); });
	js_singleton.add((new std::string("segment_intersects_sphere"))->c_str(), [singleton](const Vector3 &from, const Vector3 &to, const Vector3 &sphere_position, double sphere_radius) -> PackedVector3Array { return singleton->segment_intersects_sphere(from, to, sphere_position, sphere_radius); });
	js_singleton.add((new std::string("segment_intersects_cylinder"))->c_str(), [singleton](const Vector3 &from, const Vector3 &to, double height, double radius) -> PackedVector3Array { return singleton->segment_intersects_cylinder(from, to, height, radius); });
	js_singleton.add((new std::string("segment_intersects_convex"))->c_str(), [singleton](const Vector3 &from, const Vector3 &to, const TypedArray<Plane> &planes) -> PackedVector3Array { return singleton->segment_intersects_convex(from, to, planes); });
	js_singleton.add((new std::string("clip_polygon"))->c_str(), [singleton](const PackedVector3Array &points, const Plane &plane) -> PackedVector3Array { return singleton->clip_polygon(points, plane); });
	js_singleton.add((new std::string("tetrahedralize_delaunay"))->c_str(), [singleton](const PackedVector3Array &points) -> PackedInt32Array { return singleton->tetrahedralize_delaunay(points); });
	context->global()[(new std::string("Geometry3D"))->c_str()] = js_singleton;
}