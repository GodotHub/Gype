#include <godot_cpp/classes/a_star_grid2d.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AStarGrid2D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AStarGrid2D>("AStarGrid2D")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<Rect2i(AStarGrid2D::*)()const>(&AStarGrid2D::get_region),static_cast<void(AStarGrid2D::*)(const Rect2i &)>(&AStarGrid2D::set_region)>("region")
            .property<static_cast<Vector2i(AStarGrid2D::*)()const>(&AStarGrid2D::get_size),static_cast<void(AStarGrid2D::*)(const Vector2i &)>(&AStarGrid2D::set_size)>("size")
            .property<static_cast<Vector2(AStarGrid2D::*)()const>(&AStarGrid2D::get_offset),static_cast<void(AStarGrid2D::*)(const Vector2 &)>(&AStarGrid2D::set_offset)>("offset")
            .property<static_cast<Vector2(AStarGrid2D::*)()const>(&AStarGrid2D::get_cell_size),static_cast<void(AStarGrid2D::*)(const Vector2 &)>(&AStarGrid2D::set_cell_size)>("cell_size")
            .property<static_cast<AStarGrid2D::CellShape(AStarGrid2D::*)()const>(&AStarGrid2D::get_cell_shape),static_cast<void(AStarGrid2D::*)(AStarGrid2D::CellShape)>(&AStarGrid2D::set_cell_shape)>("cell_shape")
            .property<static_cast<bool(AStarGrid2D::*)()const>(&AStarGrid2D::is_jumping_enabled),static_cast<void(AStarGrid2D::*)(bool)>(&AStarGrid2D::set_jumping_enabled)>("jumping_enabled")
            .property<static_cast<AStarGrid2D::Heuristic(AStarGrid2D::*)()const>(&AStarGrid2D::get_default_compute_heuristic),static_cast<void(AStarGrid2D::*)(AStarGrid2D::Heuristic)>(&AStarGrid2D::set_default_compute_heuristic)>("default_compute_heuristic")
            .property<static_cast<AStarGrid2D::Heuristic(AStarGrid2D::*)()const>(&AStarGrid2D::get_default_estimate_heuristic),static_cast<void(AStarGrid2D::*)(AStarGrid2D::Heuristic)>(&AStarGrid2D::set_default_estimate_heuristic)>("default_estimate_heuristic")
            .property<static_cast<AStarGrid2D::DiagonalMode(AStarGrid2D::*)()const>(&AStarGrid2D::get_diagonal_mode),static_cast<void(AStarGrid2D::*)(AStarGrid2D::DiagonalMode)>(&AStarGrid2D::set_diagonal_mode)>("diagonal_mode")
            .fun<static_cast<double(AStarGrid2D::*)(const Vector2i &,const Vector2i &)const>(&AStarGrid2D::_estimate_cost)>("_estimate_cost")
            .fun<static_cast<double(AStarGrid2D::*)(const Vector2i &,const Vector2i &)const>(&AStarGrid2D::_compute_cost)>("_compute_cost")
            .fun<static_cast<bool(AStarGrid2D::*)(int32_t,int32_t)const>(&AStarGrid2D::is_in_bounds)>("is_in_bounds")
            .fun<static_cast<bool(AStarGrid2D::*)(const Vector2i &)const>(&AStarGrid2D::is_in_boundsv)>("is_in_boundsv")
            .fun<static_cast<bool(AStarGrid2D::*)()const>(&AStarGrid2D::is_dirty)>("is_dirty")
            .fun<static_cast<void(AStarGrid2D::*)()>(&AStarGrid2D::update)>("update")
            .fun<static_cast<void(AStarGrid2D::*)(const Vector2i &,bool)>(&AStarGrid2D::set_point_solid)>("set_point_solid")
            .fun<static_cast<bool(AStarGrid2D::*)(const Vector2i &)const>(&AStarGrid2D::is_point_solid)>("is_point_solid")
            .fun<static_cast<void(AStarGrid2D::*)(const Vector2i &,double)>(&AStarGrid2D::set_point_weight_scale)>("set_point_weight_scale")
            .fun<static_cast<double(AStarGrid2D::*)(const Vector2i &)const>(&AStarGrid2D::get_point_weight_scale)>("get_point_weight_scale")
            .fun<static_cast<void(AStarGrid2D::*)(const Rect2i &,bool)>(&AStarGrid2D::fill_solid_region)>("fill_solid_region")
            .fun<static_cast<void(AStarGrid2D::*)(const Rect2i &,double)>(&AStarGrid2D::fill_weight_scale_region)>("fill_weight_scale_region")
            .fun<static_cast<void(AStarGrid2D::*)()>(&AStarGrid2D::clear)>("clear")
            .fun<static_cast<Vector2(AStarGrid2D::*)(const Vector2i &)const>(&AStarGrid2D::get_point_position)>("get_point_position")
            .fun<static_cast<PackedVector2Array(AStarGrid2D::*)(const Vector2i &,const Vector2i &,bool)>(&AStarGrid2D::get_point_path)>("get_point_path")
            .fun<static_cast<TypedArray<Vector2i>(AStarGrid2D::*)(const Vector2i &,const Vector2i &,bool)>(&AStarGrid2D::get_id_path)>("get_id_path")
;    qjs::Value _Heuristic = context->newObject();
    _Heuristic["HEURISTIC_EUCLIDEAN"] = AStarGrid2D::Heuristic::HEURISTIC_EUCLIDEAN;
    _Heuristic["HEURISTIC_MANHATTAN"] = AStarGrid2D::Heuristic::HEURISTIC_MANHATTAN;
    _Heuristic["HEURISTIC_OCTILE"] = AStarGrid2D::Heuristic::HEURISTIC_OCTILE;
    _Heuristic["HEURISTIC_CHEBYSHEV"] = AStarGrid2D::Heuristic::HEURISTIC_CHEBYSHEV;
    _Heuristic["HEURISTIC_MAX"] = AStarGrid2D::Heuristic::HEURISTIC_MAX;
    _module.add("Heuristic", std::move(_Heuristic));
    qjs::Value _DiagonalMode = context->newObject();
    _DiagonalMode["DIAGONAL_MODE_ALWAYS"] = AStarGrid2D::DiagonalMode::DIAGONAL_MODE_ALWAYS;
    _DiagonalMode["DIAGONAL_MODE_NEVER"] = AStarGrid2D::DiagonalMode::DIAGONAL_MODE_NEVER;
    _DiagonalMode["DIAGONAL_MODE_AT_LEAST_ONE_WALKABLE"] = AStarGrid2D::DiagonalMode::DIAGONAL_MODE_AT_LEAST_ONE_WALKABLE;
    _DiagonalMode["DIAGONAL_MODE_ONLY_IF_NO_OBSTACLES"] = AStarGrid2D::DiagonalMode::DIAGONAL_MODE_ONLY_IF_NO_OBSTACLES;
    _DiagonalMode["DIAGONAL_MODE_MAX"] = AStarGrid2D::DiagonalMode::DIAGONAL_MODE_MAX;
    _module.add("DiagonalMode", std::move(_DiagonalMode));
    qjs::Value _CellShape = context->newObject();
    _CellShape["CELL_SHAPE_SQUARE"] = AStarGrid2D::CellShape::CELL_SHAPE_SQUARE;
    _CellShape["CELL_SHAPE_ISOMETRIC_RIGHT"] = AStarGrid2D::CellShape::CELL_SHAPE_ISOMETRIC_RIGHT;
    _CellShape["CELL_SHAPE_ISOMETRIC_DOWN"] = AStarGrid2D::CellShape::CELL_SHAPE_ISOMETRIC_DOWN;
    _CellShape["CELL_SHAPE_MAX"] = AStarGrid2D::CellShape::CELL_SHAPE_MAX;
    _module.add("CellShape", std::move(_CellShape));
}