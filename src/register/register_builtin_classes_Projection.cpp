#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/variant/plane.hpp>
#include <godot_cpp/variant/projection.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector4.hpp>

#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_Projection() {
	get_Variant_module().class_<Projection>("Projection").constructor<>().constructor<const Projection &>("Projection_1").constructor<const Transform3D &>("Projection_2").constructor<const Vector4 &, const Vector4 &, const Vector4 &, const Vector4 &>("Projection_3")

			.static_fun<Projection::create_depth_correction>("create_depth_correction")
			.static_fun<Projection::create_light_atlas_rect>("create_light_atlas_rect")
			.static_fun<Projection::create_perspective>("create_perspective")
			.static_fun<Projection::create_perspective_hmd>("create_perspective_hmd")
			.static_fun<Projection::create_for_hmd>("create_for_hmd")
			.static_fun<Projection::create_orthogonal>("create_orthogonal")
			.static_fun<Projection::create_orthogonal_aspect>("create_orthogonal_aspect")
			.static_fun<Projection::create_frustum>("create_frustum")
			.static_fun<Projection::create_frustum_aspect>("create_frustum_aspect")
			.static_fun<Projection::create_fit_aabb>("create_fit_aabb")
			.fun<static_cast<real_t (Projection::*)() const>(&Projection::determinant)>("determinant")
			.fun<static_cast<Projection (Projection::*)(real_t) const>(&Projection::perspective_znear_adjusted)>("perspective_znear_adjusted")
			.fun<static_cast<Plane (Projection::*)(Projection::Planes) const>(&Projection::get_projection_plane)>("get_projection_plane")
			.fun<static_cast<Projection (Projection::*)() const>(&Projection::flipped_y)>("flipped_y")
			.fun<static_cast<Projection (Projection::*)(const Vector2 &) const>(&Projection::jitter_offseted)>("jitter_offseted")
			.static_fun<Projection::get_fovy>("get_fovy")
			.fun<static_cast<real_t (Projection::*)() const>(&Projection::get_z_far)>("get_z_far")
			.fun<static_cast<real_t (Projection::*)() const>(&Projection::get_z_near)>("get_z_near")
			.fun<static_cast<real_t (Projection::*)() const>(&Projection::get_aspect)>("get_aspect")
			.fun<static_cast<real_t (Projection::*)() const>(&Projection::get_fov)>("get_fov")
			.fun<static_cast<bool (Projection::*)() const>(&Projection::is_orthogonal)>("is_orthogonal")
			.fun<static_cast<Vector2 (Projection::*)() const>(&Projection::get_viewport_half_extents)>("get_viewport_half_extents")
			.fun<static_cast<Vector2 (Projection::*)() const>(&Projection::get_far_plane_half_extents)>("get_far_plane_half_extents")
			.fun<static_cast<Projection (Projection::*)() const>(&Projection::inverse)>("inverse")
			.fun<static_cast<int (Projection::*)(int) const>(&Projection::get_pixels_per_meter)>("get_pixels_per_meter")
			.fun<static_cast<real_t (Projection::*)() const>(&Projection::get_lod_multiplier)>("get_lod_multiplier");
}