#include <godot_cpp/classes/navigation_mesh.hpp>
#include <godot_cpp/classes/navigation_polygon.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_NavigationPolygon() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<NavigationPolygon>("NavigationPolygon")
			.constructor<>()
			.property<&NavigationPolygon::get_vertices, &NavigationPolygon::set_vertices>("vertices")
			.property<&NavigationPolygon::get_parsed_geometry_type, &NavigationPolygon::set_parsed_geometry_type>("parsed_geometry_type")
			.property<&NavigationPolygon::get_parsed_collision_mask, &NavigationPolygon::set_parsed_collision_mask>("parsed_collision_mask")
			.property<&NavigationPolygon::get_source_geometry_mode, &NavigationPolygon::set_source_geometry_mode>("source_geometry_mode")
			.property<&NavigationPolygon::get_source_geometry_group_name, &NavigationPolygon::set_source_geometry_group_name>("source_geometry_group_name")
			.property<&NavigationPolygon::get_cell_size, &NavigationPolygon::set_cell_size>("cell_size")
			.property<&NavigationPolygon::get_agent_radius, &NavigationPolygon::set_agent_radius>("agent_radius")
			.fun<static_cast<void (NavigationPolygon::*)(const PackedInt32Array &)>(&NavigationPolygon::add_polygon)>("add_polygon")
			.fun<static_cast<int32_t (NavigationPolygon::*)() const>(&NavigationPolygon::get_polygon_count)>("get_polygon_count")
			.fun<static_cast<PackedInt32Array (NavigationPolygon::*)(int32_t)>(&NavigationPolygon::get_polygon)>("get_polygon")
			.fun<static_cast<void (NavigationPolygon::*)()>(&NavigationPolygon::clear_polygons)>("clear_polygons")
			.fun<static_cast<Ref<NavigationMesh> (NavigationPolygon::*)()>(&NavigationPolygon::get_navigation_mesh)>("get_navigation_mesh")
			.fun<static_cast<void (NavigationPolygon::*)(const PackedVector2Array &)>(&NavigationPolygon::add_outline)>("add_outline")
			.fun<static_cast<void (NavigationPolygon::*)(const PackedVector2Array &, int32_t)>(&NavigationPolygon::add_outline_at_index)>("add_outline_at_index")
			.fun<static_cast<int32_t (NavigationPolygon::*)() const>(&NavigationPolygon::get_outline_count)>("get_outline_count")
			.fun<static_cast<void (NavigationPolygon::*)(int32_t, const PackedVector2Array &)>(&NavigationPolygon::set_outline)>("set_outline")
			.fun<static_cast<PackedVector2Array (NavigationPolygon::*)(int32_t) const>(&NavigationPolygon::get_outline)>("get_outline")
			.fun<static_cast<void (NavigationPolygon::*)(int32_t)>(&NavigationPolygon::remove_outline)>("remove_outline")
			.fun<static_cast<void (NavigationPolygon::*)()>(&NavigationPolygon::clear_outlines)>("clear_outlines")
			.fun<static_cast<void (NavigationPolygon::*)()>(&NavigationPolygon::make_polygons_from_outlines)>("make_polygons_from_outlines")
			.fun<static_cast<void (NavigationPolygon::*)(int32_t, bool)>(&NavigationPolygon::set_parsed_collision_mask_value)>("set_parsed_collision_mask_value")
			.fun<static_cast<bool (NavigationPolygon::*)(int32_t) const>(&NavigationPolygon::get_parsed_collision_mask_value)>("get_parsed_collision_mask_value")
			.fun<static_cast<void (NavigationPolygon::*)()>(&NavigationPolygon::clear)>("clear");
}