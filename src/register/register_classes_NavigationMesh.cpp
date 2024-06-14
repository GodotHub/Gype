
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/navigation_mesh.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_NavigationMesh() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<NavigationMesh>("NavigationMesh")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<PackedVector3Array (NavigationMesh::*)() const>(&NavigationMesh::get_vertices), static_cast<void (NavigationMesh::*)(const PackedVector3Array &)>(&NavigationMesh::set_vertices)>((new std::string("vertices"))->c_str())
			.property<static_cast<NavigationMesh::SamplePartitionType (NavigationMesh::*)() const>(&NavigationMesh::get_sample_partition_type), static_cast<void (NavigationMesh::*)(NavigationMesh::SamplePartitionType)>(&NavigationMesh::set_sample_partition_type)>((new std::string("sample_partition_type"))->c_str())
			.property<static_cast<NavigationMesh::ParsedGeometryType (NavigationMesh::*)() const>(&NavigationMesh::get_parsed_geometry_type), static_cast<void (NavigationMesh::*)(NavigationMesh::ParsedGeometryType)>(&NavigationMesh::set_parsed_geometry_type)>((new std::string("geometry_parsed_geometry_type"))->c_str())
			.property<static_cast<uint32_t (NavigationMesh::*)() const>(&NavigationMesh::get_collision_mask), static_cast<void (NavigationMesh::*)(uint32_t)>(&NavigationMesh::set_collision_mask)>((new std::string("geometry_collision_mask"))->c_str())
			.property<static_cast<NavigationMesh::SourceGeometryMode (NavigationMesh::*)() const>(&NavigationMesh::get_source_geometry_mode), static_cast<void (NavigationMesh::*)(NavigationMesh::SourceGeometryMode)>(&NavigationMesh::set_source_geometry_mode)>((new std::string("geometry_source_geometry_mode"))->c_str())
			.property<static_cast<StringName (NavigationMesh::*)() const>(&NavigationMesh::get_source_group_name), static_cast<void (NavigationMesh::*)(const StringName &)>(&NavigationMesh::set_source_group_name)>((new std::string("geometry_source_group_name"))->c_str())
			.property<static_cast<double (NavigationMesh::*)() const>(&NavigationMesh::get_cell_size), static_cast<void (NavigationMesh::*)(double)>(&NavigationMesh::set_cell_size)>((new std::string("cell_size"))->c_str())
			.property<static_cast<double (NavigationMesh::*)() const>(&NavigationMesh::get_cell_height), static_cast<void (NavigationMesh::*)(double)>(&NavigationMesh::set_cell_height)>((new std::string("cell_height"))->c_str())
			.property<static_cast<double (NavigationMesh::*)() const>(&NavigationMesh::get_border_size), static_cast<void (NavigationMesh::*)(double)>(&NavigationMesh::set_border_size)>((new std::string("border_size"))->c_str())
			.property<static_cast<double (NavigationMesh::*)() const>(&NavigationMesh::get_agent_height), static_cast<void (NavigationMesh::*)(double)>(&NavigationMesh::set_agent_height)>((new std::string("agent_height"))->c_str())
			.property<static_cast<double (NavigationMesh::*)()>(&NavigationMesh::get_agent_radius), static_cast<void (NavigationMesh::*)(double)>(&NavigationMesh::set_agent_radius)>((new std::string("agent_radius"))->c_str())
			.property<static_cast<double (NavigationMesh::*)() const>(&NavigationMesh::get_agent_max_climb), static_cast<void (NavigationMesh::*)(double)>(&NavigationMesh::set_agent_max_climb)>((new std::string("agent_max_climb"))->c_str())
			.property<static_cast<double (NavigationMesh::*)() const>(&NavigationMesh::get_agent_max_slope), static_cast<void (NavigationMesh::*)(double)>(&NavigationMesh::set_agent_max_slope)>((new std::string("agent_max_slope"))->c_str())
			.property<static_cast<double (NavigationMesh::*)() const>(&NavigationMesh::get_region_min_size), static_cast<void (NavigationMesh::*)(double)>(&NavigationMesh::set_region_min_size)>((new std::string("region_min_size"))->c_str())
			.property<static_cast<double (NavigationMesh::*)() const>(&NavigationMesh::get_region_merge_size), static_cast<void (NavigationMesh::*)(double)>(&NavigationMesh::set_region_merge_size)>((new std::string("region_merge_size"))->c_str())
			.property<static_cast<double (NavigationMesh::*)() const>(&NavigationMesh::get_edge_max_length), static_cast<void (NavigationMesh::*)(double)>(&NavigationMesh::set_edge_max_length)>((new std::string("edge_max_length"))->c_str())
			.property<static_cast<double (NavigationMesh::*)() const>(&NavigationMesh::get_edge_max_error), static_cast<void (NavigationMesh::*)(double)>(&NavigationMesh::set_edge_max_error)>((new std::string("edge_max_error"))->c_str())
			.property<static_cast<double (NavigationMesh::*)() const>(&NavigationMesh::get_vertices_per_polygon), static_cast<void (NavigationMesh::*)(double)>(&NavigationMesh::set_vertices_per_polygon)>((new std::string("vertices_per_polygon"))->c_str())
			.property<static_cast<double (NavigationMesh::*)() const>(&NavigationMesh::get_detail_sample_distance), static_cast<void (NavigationMesh::*)(double)>(&NavigationMesh::set_detail_sample_distance)>((new std::string("detail_sample_distance"))->c_str())
			.property<static_cast<double (NavigationMesh::*)() const>(&NavigationMesh::get_detail_sample_max_error), static_cast<void (NavigationMesh::*)(double)>(&NavigationMesh::set_detail_sample_max_error)>((new std::string("detail_sample_max_error"))->c_str())
			.property<static_cast<bool (NavigationMesh::*)() const>(&NavigationMesh::get_filter_low_hanging_obstacles), static_cast<void (NavigationMesh::*)(bool)>(&NavigationMesh::set_filter_low_hanging_obstacles)>((new std::string("filter_low_hanging_obstacles"))->c_str())
			.property<static_cast<bool (NavigationMesh::*)() const>(&NavigationMesh::get_filter_ledge_spans), static_cast<void (NavigationMesh::*)(bool)>(&NavigationMesh::set_filter_ledge_spans)>((new std::string("filter_ledge_spans"))->c_str())
			.property<static_cast<bool (NavigationMesh::*)() const>(&NavigationMesh::get_filter_walkable_low_height_spans), static_cast<void (NavigationMesh::*)(bool)>(&NavigationMesh::set_filter_walkable_low_height_spans)>((new std::string("filter_walkable_low_height_spans"))->c_str())
			.property<static_cast<AABB (NavigationMesh::*)() const>(&NavigationMesh::get_filter_baking_aabb), static_cast<void (NavigationMesh::*)(const AABB &)>(&NavigationMesh::set_filter_baking_aabb)>((new std::string("filter_baking_aabb"))->c_str())
			.property<static_cast<Vector3 (NavigationMesh::*)() const>(&NavigationMesh::get_filter_baking_aabb_offset), static_cast<void (NavigationMesh::*)(const Vector3 &)>(&NavigationMesh::set_filter_baking_aabb_offset)>((new std::string("filter_baking_aabb_offset"))->c_str())
			.fun<static_cast<void (NavigationMesh::*)(int32_t, bool)>(&NavigationMesh::set_collision_mask_value)>((new std::string("set_collision_mask_value"))->c_str())
			.fun<static_cast<bool (NavigationMesh::*)(int32_t) const>(&NavigationMesh::get_collision_mask_value)>((new std::string("get_collision_mask_value"))->c_str())
			.fun<static_cast<void (NavigationMesh::*)(const PackedInt32Array &)>(&NavigationMesh::add_polygon)>((new std::string("add_polygon"))->c_str())
			.fun<static_cast<int32_t (NavigationMesh::*)() const>(&NavigationMesh::get_polygon_count)>((new std::string("get_polygon_count"))->c_str())
			.fun<static_cast<PackedInt32Array (NavigationMesh::*)(int32_t)>(&NavigationMesh::get_polygon)>((new std::string("get_polygon"))->c_str())
			.fun<static_cast<void (NavigationMesh::*)()>(&NavigationMesh::clear_polygons)>((new std::string("clear_polygons"))->c_str())
			.fun<static_cast<void (NavigationMesh::*)(const Ref<Mesh> &)>(&NavigationMesh::create_from_mesh)>((new std::string("create_from_mesh"))->c_str())
			.fun<static_cast<void (NavigationMesh::*)()>(&NavigationMesh::clear)>((new std::string("clear"))->c_str());
	qjs::Value _SamplePartitionType = context->newObject();
	_SamplePartitionType[(new std::string("SAMPLE_PARTITION_WATERSHED"))->c_str()] = NavigationMesh::SamplePartitionType::SAMPLE_PARTITION_WATERSHED;
	_SamplePartitionType[(new std::string("SAMPLE_PARTITION_MONOTONE"))->c_str()] = NavigationMesh::SamplePartitionType::SAMPLE_PARTITION_MONOTONE;
	_SamplePartitionType[(new std::string("SAMPLE_PARTITION_LAYERS"))->c_str()] = NavigationMesh::SamplePartitionType::SAMPLE_PARTITION_LAYERS;
	_SamplePartitionType[(new std::string("SAMPLE_PARTITION_MAX"))->c_str()] = NavigationMesh::SamplePartitionType::SAMPLE_PARTITION_MAX;
	_module.add("SamplePartitionType", std::move(_SamplePartitionType));
	qjs::Value _ParsedGeometryType = context->newObject();
	_ParsedGeometryType[(new std::string("PARSED_GEOMETRY_MESH_INSTANCES"))->c_str()] = NavigationMesh::ParsedGeometryType::PARSED_GEOMETRY_MESH_INSTANCES;
	_ParsedGeometryType[(new std::string("PARSED_GEOMETRY_STATIC_COLLIDERS"))->c_str()] = NavigationMesh::ParsedGeometryType::PARSED_GEOMETRY_STATIC_COLLIDERS;
	_ParsedGeometryType[(new std::string("PARSED_GEOMETRY_BOTH"))->c_str()] = NavigationMesh::ParsedGeometryType::PARSED_GEOMETRY_BOTH;
	_ParsedGeometryType[(new std::string("PARSED_GEOMETRY_MAX"))->c_str()] = NavigationMesh::ParsedGeometryType::PARSED_GEOMETRY_MAX;
	_module.add("ParsedGeometryType", std::move(_ParsedGeometryType));
	qjs::Value _SourceGeometryMode = context->newObject();
	_SourceGeometryMode[(new std::string("SOURCE_GEOMETRY_ROOT_NODE_CHILDREN"))->c_str()] = NavigationMesh::SourceGeometryMode::SOURCE_GEOMETRY_ROOT_NODE_CHILDREN;
	_SourceGeometryMode[(new std::string("SOURCE_GEOMETRY_GROUPS_WITH_CHILDREN"))->c_str()] = NavigationMesh::SourceGeometryMode::SOURCE_GEOMETRY_GROUPS_WITH_CHILDREN;
	_SourceGeometryMode[(new std::string("SOURCE_GEOMETRY_GROUPS_EXPLICIT"))->c_str()] = NavigationMesh::SourceGeometryMode::SOURCE_GEOMETRY_GROUPS_EXPLICIT;
	_SourceGeometryMode[(new std::string("SOURCE_GEOMETRY_MAX"))->c_str()] = NavigationMesh::SourceGeometryMode::SOURCE_GEOMETRY_MAX;
	_module.add("SourceGeometryMode", std::move(_SourceGeometryMode));
}