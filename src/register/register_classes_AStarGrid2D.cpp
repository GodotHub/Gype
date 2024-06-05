#include <godot_cpp/classes/a_star_grid2d.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AStarGrid2D() {
	qjs::Context::Module &_module = _General;
	_module.class_<AStarGrid2D>("AStarGrid2D")
			.constructor<>()
			.property<&AStarGrid2D::get_region, &AStarGrid2D::set_region>("region")
			.property<&AStarGrid2D::get_size, &AStarGrid2D::set_size>("size")
			.property<&AStarGrid2D::get_offset, &AStarGrid2D::set_offset>("offset")
			.property<&AStarGrid2D::get_cell_size, &AStarGrid2D::set_cell_size>("cell_size")
			.property<&AStarGrid2D::is_jumping_enabled, &AStarGrid2D::set_jumping_enabled>("jumping_enabled")
			.property<&AStarGrid2D::get_default_compute_heuristic, &AStarGrid2D::set_default_compute_heuristic>("default_compute_heuristic")
			.property<&AStarGrid2D::get_default_estimate_heuristic, &AStarGrid2D::set_default_estimate_heuristic>("default_estimate_heuristic")
			.property<&AStarGrid2D::get_diagonal_mode, &AStarGrid2D::set_diagonal_mode>("diagonal_mode")
			.fun<static_cast<double (AStarGrid2D::*)(const Vector2i &, const Vector2i &) const>(&AStarGrid2D::_estimate_cost)>("_estimate_cost")
			.fun<static_cast<double (AStarGrid2D::*)(const Vector2i &, const Vector2i &) const>(&AStarGrid2D::_compute_cost)>("_compute_cost")
			.fun<static_cast<bool (AStarGrid2D::*)(int32_t, int32_t) const>(&AStarGrid2D::is_in_bounds)>("is_in_bounds")
			.fun<static_cast<bool (AStarGrid2D::*)(const Vector2i &) const>(&AStarGrid2D::is_in_boundsv)>("is_in_boundsv")
			.fun<static_cast<bool (AStarGrid2D::*)() const>(&AStarGrid2D::is_dirty)>("is_dirty")
			.fun<static_cast<void (AStarGrid2D::*)()>(&AStarGrid2D::update)>("update")
			.fun<static_cast<void (AStarGrid2D::*)(const Vector2i &, bool)>(&AStarGrid2D::set_point_solid)>("set_point_solid")
			.fun<static_cast<bool (AStarGrid2D::*)(const Vector2i &) const>(&AStarGrid2D::is_point_solid)>("is_point_solid")
			.fun<static_cast<void (AStarGrid2D::*)(const Vector2i &, double)>(&AStarGrid2D::set_point_weight_scale)>("set_point_weight_scale")
			.fun<static_cast<double (AStarGrid2D::*)(const Vector2i &) const>(&AStarGrid2D::get_point_weight_scale)>("get_point_weight_scale")
			.fun<static_cast<void (AStarGrid2D::*)(const Rect2i &, bool)>(&AStarGrid2D::fill_solid_region)>("fill_solid_region")
			.fun<static_cast<void (AStarGrid2D::*)(const Rect2i &, double)>(&AStarGrid2D::fill_weight_scale_region)>("fill_weight_scale_region")
			.fun<static_cast<void (AStarGrid2D::*)()>(&AStarGrid2D::clear)>("clear")
			.fun<static_cast<Vector2 (AStarGrid2D::*)(const Vector2i &) const>(&AStarGrid2D::get_point_position)>("get_point_position")
			.fun<static_cast<PackedVector2Array (AStarGrid2D::*)(const Vector2i &, const Vector2i &)>(&AStarGrid2D::get_point_path)>("get_point_path")
			.fun<static_cast<TypedArray<Vector2i> (AStarGrid2D::*)(const Vector2i &, const Vector2i &)>(&AStarGrid2D::get_id_path)>("get_id_path");
}