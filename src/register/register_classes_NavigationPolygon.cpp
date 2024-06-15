#include <godot_cpp/classes/navigation_polygon.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/navigation_mesh.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_NavigationPolygon() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<NavigationPolygon>("NavigationPolygon")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<PackedVector2Array(NavigationPolygon::*)()const>(&NavigationPolygon::get_vertices),static_cast<void(NavigationPolygon::*)(const PackedVector2Array &)>(&NavigationPolygon::set_vertices)>("vertices")
            .property<static_cast<NavigationPolygon::ParsedGeometryType(NavigationPolygon::*)()const>(&NavigationPolygon::get_parsed_geometry_type),static_cast<void(NavigationPolygon::*)(NavigationPolygon::ParsedGeometryType)>(&NavigationPolygon::set_parsed_geometry_type)>("parsed_geometry_type")
            .property<static_cast<uint32_t(NavigationPolygon::*)()const>(&NavigationPolygon::get_parsed_collision_mask),static_cast<void(NavigationPolygon::*)(uint32_t)>(&NavigationPolygon::set_parsed_collision_mask)>("parsed_collision_mask")
            .property<static_cast<NavigationPolygon::SourceGeometryMode(NavigationPolygon::*)()const>(&NavigationPolygon::get_source_geometry_mode),static_cast<void(NavigationPolygon::*)(NavigationPolygon::SourceGeometryMode)>(&NavigationPolygon::set_source_geometry_mode)>("source_geometry_mode")
            .property<static_cast<StringName(NavigationPolygon::*)()const>(&NavigationPolygon::get_source_geometry_group_name),static_cast<void(NavigationPolygon::*)(const StringName &)>(&NavigationPolygon::set_source_geometry_group_name)>("source_geometry_group_name")
            .property<static_cast<double(NavigationPolygon::*)()const>(&NavigationPolygon::get_cell_size),static_cast<void(NavigationPolygon::*)(double)>(&NavigationPolygon::set_cell_size)>("cell_size")
            .property<static_cast<double(NavigationPolygon::*)()const>(&NavigationPolygon::get_border_size),static_cast<void(NavigationPolygon::*)(double)>(&NavigationPolygon::set_border_size)>("border_size")
            .property<static_cast<double(NavigationPolygon::*)()const>(&NavigationPolygon::get_agent_radius),static_cast<void(NavigationPolygon::*)(double)>(&NavigationPolygon::set_agent_radius)>("agent_radius")
            .property<static_cast<Rect2(NavigationPolygon::*)()const>(&NavigationPolygon::get_baking_rect),static_cast<void(NavigationPolygon::*)(const Rect2 &)>(&NavigationPolygon::set_baking_rect)>("baking_rect")
            .property<static_cast<Vector2(NavigationPolygon::*)()const>(&NavigationPolygon::get_baking_rect_offset),static_cast<void(NavigationPolygon::*)(const Vector2 &)>(&NavigationPolygon::set_baking_rect_offset)>("baking_rect_offset")
            .fun<static_cast<void(NavigationPolygon::*)(const PackedInt32Array &)>(&NavigationPolygon::add_polygon)>("add_polygon")
            .fun<static_cast<int32_t(NavigationPolygon::*)()const>(&NavigationPolygon::get_polygon_count)>("get_polygon_count")
            .fun<static_cast<PackedInt32Array(NavigationPolygon::*)(int32_t)>(&NavigationPolygon::get_polygon)>("get_polygon")
            .fun<static_cast<void(NavigationPolygon::*)()>(&NavigationPolygon::clear_polygons)>("clear_polygons")
            .fun<static_cast<Ref<NavigationMesh>(NavigationPolygon::*)()>(&NavigationPolygon::get_navigation_mesh)>("get_navigation_mesh")
            .fun<static_cast<void(NavigationPolygon::*)(const PackedVector2Array &)>(&NavigationPolygon::add_outline)>("add_outline")
            .fun<static_cast<void(NavigationPolygon::*)(const PackedVector2Array &,int32_t)>(&NavigationPolygon::add_outline_at_index)>("add_outline_at_index")
            .fun<static_cast<int32_t(NavigationPolygon::*)()const>(&NavigationPolygon::get_outline_count)>("get_outline_count")
            .fun<static_cast<void(NavigationPolygon::*)(int32_t,const PackedVector2Array &)>(&NavigationPolygon::set_outline)>("set_outline")
            .fun<static_cast<PackedVector2Array(NavigationPolygon::*)(int32_t)const>(&NavigationPolygon::get_outline)>("get_outline")
            .fun<static_cast<void(NavigationPolygon::*)(int32_t)>(&NavigationPolygon::remove_outline)>("remove_outline")
            .fun<static_cast<void(NavigationPolygon::*)()>(&NavigationPolygon::clear_outlines)>("clear_outlines")
            .fun<static_cast<void(NavigationPolygon::*)()>(&NavigationPolygon::make_polygons_from_outlines)>("make_polygons_from_outlines")
            .fun<static_cast<void(NavigationPolygon::*)(int32_t,bool)>(&NavigationPolygon::set_parsed_collision_mask_value)>("set_parsed_collision_mask_value")
            .fun<static_cast<bool(NavigationPolygon::*)(int32_t)const>(&NavigationPolygon::get_parsed_collision_mask_value)>("get_parsed_collision_mask_value")
            .fun<static_cast<void(NavigationPolygon::*)()>(&NavigationPolygon::clear)>("clear")
;    qjs::Value _ParsedGeometryType = context->newObject();
    _ParsedGeometryType["PARSED_GEOMETRY_MESH_INSTANCES"] = NavigationPolygon::ParsedGeometryType::PARSED_GEOMETRY_MESH_INSTANCES;
    _ParsedGeometryType["PARSED_GEOMETRY_STATIC_COLLIDERS"] = NavigationPolygon::ParsedGeometryType::PARSED_GEOMETRY_STATIC_COLLIDERS;
    _ParsedGeometryType["PARSED_GEOMETRY_BOTH"] = NavigationPolygon::ParsedGeometryType::PARSED_GEOMETRY_BOTH;
    _ParsedGeometryType["PARSED_GEOMETRY_MAX"] = NavigationPolygon::ParsedGeometryType::PARSED_GEOMETRY_MAX;
    _module.add("ParsedGeometryType", std::move(_ParsedGeometryType));
    qjs::Value _SourceGeometryMode = context->newObject();
    _SourceGeometryMode["SOURCE_GEOMETRY_ROOT_NODE_CHILDREN"] = NavigationPolygon::SourceGeometryMode::SOURCE_GEOMETRY_ROOT_NODE_CHILDREN;
    _SourceGeometryMode["SOURCE_GEOMETRY_GROUPS_WITH_CHILDREN"] = NavigationPolygon::SourceGeometryMode::SOURCE_GEOMETRY_GROUPS_WITH_CHILDREN;
    _SourceGeometryMode["SOURCE_GEOMETRY_GROUPS_EXPLICIT"] = NavigationPolygon::SourceGeometryMode::SOURCE_GEOMETRY_GROUPS_EXPLICIT;
    _SourceGeometryMode["SOURCE_GEOMETRY_MAX"] = NavigationPolygon::SourceGeometryMode::SOURCE_GEOMETRY_MAX;
    _module.add("SourceGeometryMode", std::move(_SourceGeometryMode));
}