
#include <godot_cpp/classes/navigation_mesh.hpp>
#include <godot_cpp/classes/navigation_polygon.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_NavigationPolygon() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<NavigationPolygon>("NavigationPolygon")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<PackedVector2Array (NavigationPolygon::*)() const>(&NavigationPolygon::get_vertices), static_cast<void (NavigationPolygon::*)(const PackedVector2Array &)>(&NavigationPolygon::set_vertices)>((new std::string("vertices"))->c_str())
			.property<static_cast<NavigationPolygon::ParsedGeometryType (NavigationPolygon::*)() const>(&NavigationPolygon::get_parsed_geometry_type), static_cast<void (NavigationPolygon::*)(NavigationPolygon::ParsedGeometryType)>(&NavigationPolygon::set_parsed_geometry_type)>((new std::string("parsed_geometry_type"))->c_str())
			.property<static_cast<uint32_t (NavigationPolygon::*)() const>(&NavigationPolygon::get_parsed_collision_mask), static_cast<void (NavigationPolygon::*)(uint32_t)>(&NavigationPolygon::set_parsed_collision_mask)>((new std::string("parsed_collision_mask"))->c_str())
			.property<static_cast<NavigationPolygon::SourceGeometryMode (NavigationPolygon::*)() const>(&NavigationPolygon::get_source_geometry_mode), static_cast<void (NavigationPolygon::*)(NavigationPolygon::SourceGeometryMode)>(&NavigationPolygon::set_source_geometry_mode)>((new std::string("source_geometry_mode"))->c_str())
			.property<static_cast<StringName (NavigationPolygon::*)() const>(&NavigationPolygon::get_source_geometry_group_name), static_cast<void (NavigationPolygon::*)(const StringName &)>(&NavigationPolygon::set_source_geometry_group_name)>((new std::string("source_geometry_group_name"))->c_str())
			.property<static_cast<double (NavigationPolygon::*)() const>(&NavigationPolygon::get_cell_size), static_cast<void (NavigationPolygon::*)(double)>(&NavigationPolygon::set_cell_size)>((new std::string("cell_size"))->c_str())
			.property<static_cast<double (NavigationPolygon::*)() const>(&NavigationPolygon::get_border_size), static_cast<void (NavigationPolygon::*)(double)>(&NavigationPolygon::set_border_size)>((new std::string("border_size"))->c_str())
			.property<static_cast<double (NavigationPolygon::*)() const>(&NavigationPolygon::get_agent_radius), static_cast<void (NavigationPolygon::*)(double)>(&NavigationPolygon::set_agent_radius)>((new std::string("agent_radius"))->c_str())
			.property<static_cast<Rect2 (NavigationPolygon::*)() const>(&NavigationPolygon::get_baking_rect), static_cast<void (NavigationPolygon::*)(const Rect2 &)>(&NavigationPolygon::set_baking_rect)>((new std::string("baking_rect"))->c_str())
			.property<static_cast<Vector2 (NavigationPolygon::*)() const>(&NavigationPolygon::get_baking_rect_offset), static_cast<void (NavigationPolygon::*)(const Vector2 &)>(&NavigationPolygon::set_baking_rect_offset)>((new std::string("baking_rect_offset"))->c_str())
			.fun<static_cast<void (NavigationPolygon::*)(const PackedInt32Array &)>(&NavigationPolygon::add_polygon)>((new std::string("add_polygon"))->c_str())
			.fun<static_cast<int32_t (NavigationPolygon::*)() const>(&NavigationPolygon::get_polygon_count)>((new std::string("get_polygon_count"))->c_str())
			.fun<static_cast<PackedInt32Array (NavigationPolygon::*)(int32_t)>(&NavigationPolygon::get_polygon)>((new std::string("get_polygon"))->c_str())
			.fun<static_cast<void (NavigationPolygon::*)()>(&NavigationPolygon::clear_polygons)>((new std::string("clear_polygons"))->c_str())
			.fun<static_cast<Ref<NavigationMesh> (NavigationPolygon::*)()>(&NavigationPolygon::get_navigation_mesh)>((new std::string("get_navigation_mesh"))->c_str())
			.fun<static_cast<void (NavigationPolygon::*)(const PackedVector2Array &)>(&NavigationPolygon::add_outline)>((new std::string("add_outline"))->c_str())
			.fun<static_cast<void (NavigationPolygon::*)(const PackedVector2Array &, int32_t)>(&NavigationPolygon::add_outline_at_index)>((new std::string("add_outline_at_index"))->c_str())
			.fun<static_cast<int32_t (NavigationPolygon::*)() const>(&NavigationPolygon::get_outline_count)>((new std::string("get_outline_count"))->c_str())
			.fun<static_cast<void (NavigationPolygon::*)(int32_t, const PackedVector2Array &)>(&NavigationPolygon::set_outline)>((new std::string("set_outline"))->c_str())
			.fun<static_cast<PackedVector2Array (NavigationPolygon::*)(int32_t) const>(&NavigationPolygon::get_outline)>((new std::string("get_outline"))->c_str())
			.fun<static_cast<void (NavigationPolygon::*)(int32_t)>(&NavigationPolygon::remove_outline)>((new std::string("remove_outline"))->c_str())
			.fun<static_cast<void (NavigationPolygon::*)()>(&NavigationPolygon::clear_outlines)>((new std::string("clear_outlines"))->c_str())
			.fun<static_cast<void (NavigationPolygon::*)()>(&NavigationPolygon::make_polygons_from_outlines)>((new std::string("make_polygons_from_outlines"))->c_str())
			.fun<static_cast<void (NavigationPolygon::*)(int32_t, bool)>(&NavigationPolygon::set_parsed_collision_mask_value)>((new std::string("set_parsed_collision_mask_value"))->c_str())
			.fun<static_cast<bool (NavigationPolygon::*)(int32_t) const>(&NavigationPolygon::get_parsed_collision_mask_value)>((new std::string("get_parsed_collision_mask_value"))->c_str())
			.fun<static_cast<void (NavigationPolygon::*)()>(&NavigationPolygon::clear)>((new std::string("clear"))->c_str());
	qjs::Value _ParsedGeometryType = context->newObject();
	_ParsedGeometryType[(new std::string("PARSED_GEOMETRY_MESH_INSTANCES"))->c_str()] = NavigationPolygon::ParsedGeometryType::PARSED_GEOMETRY_MESH_INSTANCES;
	_ParsedGeometryType[(new std::string("PARSED_GEOMETRY_STATIC_COLLIDERS"))->c_str()] = NavigationPolygon::ParsedGeometryType::PARSED_GEOMETRY_STATIC_COLLIDERS;
	_ParsedGeometryType[(new std::string("PARSED_GEOMETRY_BOTH"))->c_str()] = NavigationPolygon::ParsedGeometryType::PARSED_GEOMETRY_BOTH;
	_ParsedGeometryType[(new std::string("PARSED_GEOMETRY_MAX"))->c_str()] = NavigationPolygon::ParsedGeometryType::PARSED_GEOMETRY_MAX;
	_module.add("ParsedGeometryType", std::move(_ParsedGeometryType));
	qjs::Value _SourceGeometryMode = context->newObject();
	_SourceGeometryMode[(new std::string("SOURCE_GEOMETRY_ROOT_NODE_CHILDREN"))->c_str()] = NavigationPolygon::SourceGeometryMode::SOURCE_GEOMETRY_ROOT_NODE_CHILDREN;
	_SourceGeometryMode[(new std::string("SOURCE_GEOMETRY_GROUPS_WITH_CHILDREN"))->c_str()] = NavigationPolygon::SourceGeometryMode::SOURCE_GEOMETRY_GROUPS_WITH_CHILDREN;
	_SourceGeometryMode[(new std::string("SOURCE_GEOMETRY_GROUPS_EXPLICIT"))->c_str()] = NavigationPolygon::SourceGeometryMode::SOURCE_GEOMETRY_GROUPS_EXPLICIT;
	_SourceGeometryMode[(new std::string("SOURCE_GEOMETRY_MAX"))->c_str()] = NavigationPolygon::SourceGeometryMode::SOURCE_GEOMETRY_MAX;
	_module.add("SourceGeometryMode", std::move(_SourceGeometryMode));
}