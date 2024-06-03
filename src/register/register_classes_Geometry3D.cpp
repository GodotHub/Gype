#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_Geometry3D() {
    qjs::Context::Module &_module = _System;
    _module.class_<Geometry3D>("Geometry3D")
           .constructor<>()
		   .fun<static_cast<PackedVector3Array(Geometry3D::*)(const TypedArray<Plane> &)>(&Geometry3D::compute_convex_mesh_points)>("compute_convex_mesh_points")
		   .fun<static_cast<TypedArray<Plane>(Geometry3D::*)(const Vector3 &)>(&Geometry3D::build_box_planes)>("build_box_planes")
		   .fun<static_cast<TypedArray<Plane>(Geometry3D::*)(double,double,int32_t,Vector3::Axis)>(&Geometry3D::build_cylinder_planes)>("build_cylinder_planes")
		   .fun<static_cast<TypedArray<Plane>(Geometry3D::*)(double,double,int32_t,int32_t,Vector3::Axis)>(&Geometry3D::build_capsule_planes)>("build_capsule_planes")
		   .fun<static_cast<PackedVector3Array(Geometry3D::*)(const Vector3 &,const Vector3 &,const Vector3 &,const Vector3 &)>(&Geometry3D::get_closest_points_between_segments)>("get_closest_points_between_segments")
		   .fun<static_cast<Vector3(Geometry3D::*)(const Vector3 &,const Vector3 &,const Vector3 &)>(&Geometry3D::get_closest_point_to_segment)>("get_closest_point_to_segment")
		   .fun<static_cast<Vector3(Geometry3D::*)(const Vector3 &,const Vector3 &,const Vector3 &)>(&Geometry3D::get_closest_point_to_segment_uncapped)>("get_closest_point_to_segment_uncapped")
		   .fun<static_cast<Vector3(Geometry3D::*)(const Vector3 &,const Vector3 &,const Vector3 &,const Vector3 &)>(&Geometry3D::get_triangle_barycentric_coords)>("get_triangle_barycentric_coords")
		   .fun<static_cast<Variant(Geometry3D::*)(const Vector3 &,const Vector3 &,const Vector3 &,const Vector3 &,const Vector3 &)>(&Geometry3D::ray_intersects_triangle)>("ray_intersects_triangle")
		   .fun<static_cast<Variant(Geometry3D::*)(const Vector3 &,const Vector3 &,const Vector3 &,const Vector3 &,const Vector3 &)>(&Geometry3D::segment_intersects_triangle)>("segment_intersects_triangle")
		   .fun<static_cast<PackedVector3Array(Geometry3D::*)(const Vector3 &,const Vector3 &,const Vector3 &,double)>(&Geometry3D::segment_intersects_sphere)>("segment_intersects_sphere")
		   .fun<static_cast<PackedVector3Array(Geometry3D::*)(const Vector3 &,const Vector3 &,double,double)>(&Geometry3D::segment_intersects_cylinder)>("segment_intersects_cylinder")
		   .fun<static_cast<PackedVector3Array(Geometry3D::*)(const Vector3 &,const Vector3 &,const TypedArray<Plane> &)>(&Geometry3D::segment_intersects_convex)>("segment_intersects_convex")
		   .fun<static_cast<PackedVector3Array(Geometry3D::*)(const PackedVector3Array &,const Plane &)>(&Geometry3D::clip_polygon)>("clip_polygon")
;}