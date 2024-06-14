
#include <godot_cpp/classes/a_star_grid2d.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AStarGrid2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AStarGrid2D>("AStarGrid2D")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<Rect2i (AStarGrid2D::*)() const>(&AStarGrid2D::get_region), static_cast<void (AStarGrid2D::*)(const Rect2i &)>(&AStarGrid2D::set_region)>((new std::string("region"))->c_str())
			.property<static_cast<Vector2i (AStarGrid2D::*)() const>(&AStarGrid2D::get_size), static_cast<void (AStarGrid2D::*)(const Vector2i &)>(&AStarGrid2D::set_size)>((new std::string("size"))->c_str())
			.property<static_cast<Vector2 (AStarGrid2D::*)() const>(&AStarGrid2D::get_offset), static_cast<void (AStarGrid2D::*)(const Vector2 &)>(&AStarGrid2D::set_offset)>((new std::string("offset"))->c_str())
			.property<static_cast<Vector2 (AStarGrid2D::*)() const>(&AStarGrid2D::get_cell_size), static_cast<void (AStarGrid2D::*)(const Vector2 &)>(&AStarGrid2D::set_cell_size)>((new std::string("cell_size"))->c_str())
			.property<static_cast<AStarGrid2D::CellShape (AStarGrid2D::*)() const>(&AStarGrid2D::get_cell_shape), static_cast<void (AStarGrid2D::*)(AStarGrid2D::CellShape)>(&AStarGrid2D::set_cell_shape)>((new std::string("cell_shape"))->c_str())
			.property<static_cast<bool (AStarGrid2D::*)() const>(&AStarGrid2D::is_jumping_enabled), static_cast<void (AStarGrid2D::*)(bool)>(&AStarGrid2D::set_jumping_enabled)>((new std::string("jumping_enabled"))->c_str())
			.property<static_cast<AStarGrid2D::Heuristic (AStarGrid2D::*)() const>(&AStarGrid2D::get_default_compute_heuristic), static_cast<void (AStarGrid2D::*)(AStarGrid2D::Heuristic)>(&AStarGrid2D::set_default_compute_heuristic)>((new std::string("default_compute_heuristic"))->c_str())
			.property<static_cast<AStarGrid2D::Heuristic (AStarGrid2D::*)() const>(&AStarGrid2D::get_default_estimate_heuristic), static_cast<void (AStarGrid2D::*)(AStarGrid2D::Heuristic)>(&AStarGrid2D::set_default_estimate_heuristic)>((new std::string("default_estimate_heuristic"))->c_str())
			.property<static_cast<AStarGrid2D::DiagonalMode (AStarGrid2D::*)() const>(&AStarGrid2D::get_diagonal_mode), static_cast<void (AStarGrid2D::*)(AStarGrid2D::DiagonalMode)>(&AStarGrid2D::set_diagonal_mode)>((new std::string("diagonal_mode"))->c_str())
			.fun<static_cast<double (AStarGrid2D::*)(const Vector2i &, const Vector2i &) const>(&AStarGrid2D::_estimate_cost)>((new std::string("_estimate_cost"))->c_str())
			.fun<static_cast<double (AStarGrid2D::*)(const Vector2i &, const Vector2i &) const>(&AStarGrid2D::_compute_cost)>((new std::string("_compute_cost"))->c_str())
			.fun<static_cast<bool (AStarGrid2D::*)(int32_t, int32_t) const>(&AStarGrid2D::is_in_bounds)>((new std::string("is_in_bounds"))->c_str())
			.fun<static_cast<bool (AStarGrid2D::*)(const Vector2i &) const>(&AStarGrid2D::is_in_boundsv)>((new std::string("is_in_boundsv"))->c_str())
			.fun<static_cast<bool (AStarGrid2D::*)() const>(&AStarGrid2D::is_dirty)>((new std::string("is_dirty"))->c_str())
			.fun<static_cast<void (AStarGrid2D::*)()>(&AStarGrid2D::update)>((new std::string("update"))->c_str())
			.fun<static_cast<void (AStarGrid2D::*)(const Vector2i &, bool)>(&AStarGrid2D::set_point_solid)>((new std::string("set_point_solid"))->c_str())
			.fun<static_cast<bool (AStarGrid2D::*)(const Vector2i &) const>(&AStarGrid2D::is_point_solid)>((new std::string("is_point_solid"))->c_str())
			.fun<static_cast<void (AStarGrid2D::*)(const Vector2i &, double)>(&AStarGrid2D::set_point_weight_scale)>((new std::string("set_point_weight_scale"))->c_str())
			.fun<static_cast<double (AStarGrid2D::*)(const Vector2i &) const>(&AStarGrid2D::get_point_weight_scale)>((new std::string("get_point_weight_scale"))->c_str())
			.fun<static_cast<void (AStarGrid2D::*)(const Rect2i &, bool)>(&AStarGrid2D::fill_solid_region)>((new std::string("fill_solid_region"))->c_str())
			.fun<static_cast<void (AStarGrid2D::*)(const Rect2i &, double)>(&AStarGrid2D::fill_weight_scale_region)>((new std::string("fill_weight_scale_region"))->c_str())
			.fun<static_cast<void (AStarGrid2D::*)()>(&AStarGrid2D::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<Vector2 (AStarGrid2D::*)(const Vector2i &) const>(&AStarGrid2D::get_point_position)>((new std::string("get_point_position"))->c_str())
			.fun<static_cast<PackedVector2Array (AStarGrid2D::*)(const Vector2i &, const Vector2i &, bool)>(&AStarGrid2D::get_point_path)>((new std::string("get_point_path"))->c_str())
			.fun<static_cast<TypedArray<Vector2i> (AStarGrid2D::*)(const Vector2i &, const Vector2i &, bool)>(&AStarGrid2D::get_id_path)>((new std::string("get_id_path"))->c_str());
	qjs::Value _Heuristic = context->newObject();
	_Heuristic[(new std::string("HEURISTIC_EUCLIDEAN"))->c_str()] = AStarGrid2D::Heuristic::HEURISTIC_EUCLIDEAN;
	_Heuristic[(new std::string("HEURISTIC_MANHATTAN"))->c_str()] = AStarGrid2D::Heuristic::HEURISTIC_MANHATTAN;
	_Heuristic[(new std::string("HEURISTIC_OCTILE"))->c_str()] = AStarGrid2D::Heuristic::HEURISTIC_OCTILE;
	_Heuristic[(new std::string("HEURISTIC_CHEBYSHEV"))->c_str()] = AStarGrid2D::Heuristic::HEURISTIC_CHEBYSHEV;
	_Heuristic[(new std::string("HEURISTIC_MAX"))->c_str()] = AStarGrid2D::Heuristic::HEURISTIC_MAX;
	_module.add("Heuristic", std::move(_Heuristic));
	qjs::Value _DiagonalMode = context->newObject();
	_DiagonalMode[(new std::string("DIAGONAL_MODE_ALWAYS"))->c_str()] = AStarGrid2D::DiagonalMode::DIAGONAL_MODE_ALWAYS;
	_DiagonalMode[(new std::string("DIAGONAL_MODE_NEVER"))->c_str()] = AStarGrid2D::DiagonalMode::DIAGONAL_MODE_NEVER;
	_DiagonalMode[(new std::string("DIAGONAL_MODE_AT_LEAST_ONE_WALKABLE"))->c_str()] = AStarGrid2D::DiagonalMode::DIAGONAL_MODE_AT_LEAST_ONE_WALKABLE;
	_DiagonalMode[(new std::string("DIAGONAL_MODE_ONLY_IF_NO_OBSTACLES"))->c_str()] = AStarGrid2D::DiagonalMode::DIAGONAL_MODE_ONLY_IF_NO_OBSTACLES;
	_DiagonalMode[(new std::string("DIAGONAL_MODE_MAX"))->c_str()] = AStarGrid2D::DiagonalMode::DIAGONAL_MODE_MAX;
	_module.add("DiagonalMode", std::move(_DiagonalMode));
	qjs::Value _CellShape = context->newObject();
	_CellShape[(new std::string("CELL_SHAPE_SQUARE"))->c_str()] = AStarGrid2D::CellShape::CELL_SHAPE_SQUARE;
	_CellShape[(new std::string("CELL_SHAPE_ISOMETRIC_RIGHT"))->c_str()] = AStarGrid2D::CellShape::CELL_SHAPE_ISOMETRIC_RIGHT;
	_CellShape[(new std::string("CELL_SHAPE_ISOMETRIC_DOWN"))->c_str()] = AStarGrid2D::CellShape::CELL_SHAPE_ISOMETRIC_DOWN;
	_CellShape[(new std::string("CELL_SHAPE_MAX"))->c_str()] = AStarGrid2D::CellShape::CELL_SHAPE_MAX;
	_module.add("CellShape", std::move(_CellShape));
}