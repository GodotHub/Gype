#include <godot_cpp/classes/navigation_mesh.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_NavigationMesh() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<NavigationMesh>("NavigationMesh")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<PackedVector3Array(NavigationMesh::*)()const>(&NavigationMesh::get_vertices),static_cast<void(NavigationMesh::*)(const PackedVector3Array &)>(&NavigationMesh::set_vertices)>("vertices")
            .property<static_cast<NavigationMesh::SamplePartitionType(NavigationMesh::*)()const>(&NavigationMesh::get_sample_partition_type),static_cast<void(NavigationMesh::*)(NavigationMesh::SamplePartitionType)>(&NavigationMesh::set_sample_partition_type)>("sample_partition_type")
            .property<static_cast<NavigationMesh::ParsedGeometryType(NavigationMesh::*)()const>(&NavigationMesh::get_parsed_geometry_type),static_cast<void(NavigationMesh::*)(NavigationMesh::ParsedGeometryType)>(&NavigationMesh::set_parsed_geometry_type)>("geometry_parsed_geometry_type")
            .property<static_cast<uint32_t(NavigationMesh::*)()const>(&NavigationMesh::get_collision_mask),static_cast<void(NavigationMesh::*)(uint32_t)>(&NavigationMesh::set_collision_mask)>("geometry_collision_mask")
            .property<static_cast<NavigationMesh::SourceGeometryMode(NavigationMesh::*)()const>(&NavigationMesh::get_source_geometry_mode),static_cast<void(NavigationMesh::*)(NavigationMesh::SourceGeometryMode)>(&NavigationMesh::set_source_geometry_mode)>("geometry_source_geometry_mode")
            .property<static_cast<StringName(NavigationMesh::*)()const>(&NavigationMesh::get_source_group_name),static_cast<void(NavigationMesh::*)(const StringName &)>(&NavigationMesh::set_source_group_name)>("geometry_source_group_name")
            .property<static_cast<double(NavigationMesh::*)()const>(&NavigationMesh::get_cell_size),static_cast<void(NavigationMesh::*)(double)>(&NavigationMesh::set_cell_size)>("cell_size")
            .property<static_cast<double(NavigationMesh::*)()const>(&NavigationMesh::get_cell_height),static_cast<void(NavigationMesh::*)(double)>(&NavigationMesh::set_cell_height)>("cell_height")
            .property<static_cast<double(NavigationMesh::*)()const>(&NavigationMesh::get_border_size),static_cast<void(NavigationMesh::*)(double)>(&NavigationMesh::set_border_size)>("border_size")
            .property<static_cast<double(NavigationMesh::*)()const>(&NavigationMesh::get_agent_height),static_cast<void(NavigationMesh::*)(double)>(&NavigationMesh::set_agent_height)>("agent_height")
            .property<static_cast<double(NavigationMesh::*)()>(&NavigationMesh::get_agent_radius),static_cast<void(NavigationMesh::*)(double)>(&NavigationMesh::set_agent_radius)>("agent_radius")
            .property<static_cast<double(NavigationMesh::*)()const>(&NavigationMesh::get_agent_max_climb),static_cast<void(NavigationMesh::*)(double)>(&NavigationMesh::set_agent_max_climb)>("agent_max_climb")
            .property<static_cast<double(NavigationMesh::*)()const>(&NavigationMesh::get_agent_max_slope),static_cast<void(NavigationMesh::*)(double)>(&NavigationMesh::set_agent_max_slope)>("agent_max_slope")
            .property<static_cast<double(NavigationMesh::*)()const>(&NavigationMesh::get_region_min_size),static_cast<void(NavigationMesh::*)(double)>(&NavigationMesh::set_region_min_size)>("region_min_size")
            .property<static_cast<double(NavigationMesh::*)()const>(&NavigationMesh::get_region_merge_size),static_cast<void(NavigationMesh::*)(double)>(&NavigationMesh::set_region_merge_size)>("region_merge_size")
            .property<static_cast<double(NavigationMesh::*)()const>(&NavigationMesh::get_edge_max_length),static_cast<void(NavigationMesh::*)(double)>(&NavigationMesh::set_edge_max_length)>("edge_max_length")
            .property<static_cast<double(NavigationMesh::*)()const>(&NavigationMesh::get_edge_max_error),static_cast<void(NavigationMesh::*)(double)>(&NavigationMesh::set_edge_max_error)>("edge_max_error")
            .property<static_cast<double(NavigationMesh::*)()const>(&NavigationMesh::get_vertices_per_polygon),static_cast<void(NavigationMesh::*)(double)>(&NavigationMesh::set_vertices_per_polygon)>("vertices_per_polygon")
            .property<static_cast<double(NavigationMesh::*)()const>(&NavigationMesh::get_detail_sample_distance),static_cast<void(NavigationMesh::*)(double)>(&NavigationMesh::set_detail_sample_distance)>("detail_sample_distance")
            .property<static_cast<double(NavigationMesh::*)()const>(&NavigationMesh::get_detail_sample_max_error),static_cast<void(NavigationMesh::*)(double)>(&NavigationMesh::set_detail_sample_max_error)>("detail_sample_max_error")
            .property<static_cast<bool(NavigationMesh::*)()const>(&NavigationMesh::get_filter_low_hanging_obstacles),static_cast<void(NavigationMesh::*)(bool)>(&NavigationMesh::set_filter_low_hanging_obstacles)>("filter_low_hanging_obstacles")
            .property<static_cast<bool(NavigationMesh::*)()const>(&NavigationMesh::get_filter_ledge_spans),static_cast<void(NavigationMesh::*)(bool)>(&NavigationMesh::set_filter_ledge_spans)>("filter_ledge_spans")
            .property<static_cast<bool(NavigationMesh::*)()const>(&NavigationMesh::get_filter_walkable_low_height_spans),static_cast<void(NavigationMesh::*)(bool)>(&NavigationMesh::set_filter_walkable_low_height_spans)>("filter_walkable_low_height_spans")
            .property<static_cast<AABB(NavigationMesh::*)()const>(&NavigationMesh::get_filter_baking_aabb),static_cast<void(NavigationMesh::*)(const AABB &)>(&NavigationMesh::set_filter_baking_aabb)>("filter_baking_aabb")
            .property<static_cast<Vector3(NavigationMesh::*)()const>(&NavigationMesh::get_filter_baking_aabb_offset),static_cast<void(NavigationMesh::*)(const Vector3 &)>(&NavigationMesh::set_filter_baking_aabb_offset)>("filter_baking_aabb_offset")
            .fun<static_cast<void(NavigationMesh::*)(int32_t,bool)>(&NavigationMesh::set_collision_mask_value)>("set_collision_mask_value")
            .fun<static_cast<bool(NavigationMesh::*)(int32_t)const>(&NavigationMesh::get_collision_mask_value)>("get_collision_mask_value")
            .fun<static_cast<void(NavigationMesh::*)(const PackedInt32Array &)>(&NavigationMesh::add_polygon)>("add_polygon")
            .fun<static_cast<int32_t(NavigationMesh::*)()const>(&NavigationMesh::get_polygon_count)>("get_polygon_count")
            .fun<static_cast<PackedInt32Array(NavigationMesh::*)(int32_t)>(&NavigationMesh::get_polygon)>("get_polygon")
            .fun<static_cast<void(NavigationMesh::*)()>(&NavigationMesh::clear_polygons)>("clear_polygons")
            .fun<static_cast<void(NavigationMesh::*)(const Ref<Mesh> &)>(&NavigationMesh::create_from_mesh)>("create_from_mesh")
            .fun<static_cast<void(NavigationMesh::*)()>(&NavigationMesh::clear)>("clear")
;    qjs::Value _SamplePartitionType = context->newObject();
    _SamplePartitionType["SAMPLE_PARTITION_WATERSHED"] = NavigationMesh::SamplePartitionType::SAMPLE_PARTITION_WATERSHED;
    _SamplePartitionType["SAMPLE_PARTITION_MONOTONE"] = NavigationMesh::SamplePartitionType::SAMPLE_PARTITION_MONOTONE;
    _SamplePartitionType["SAMPLE_PARTITION_LAYERS"] = NavigationMesh::SamplePartitionType::SAMPLE_PARTITION_LAYERS;
    _SamplePartitionType["SAMPLE_PARTITION_MAX"] = NavigationMesh::SamplePartitionType::SAMPLE_PARTITION_MAX;
    _module.add("SamplePartitionType", std::move(_SamplePartitionType));
    qjs::Value _ParsedGeometryType = context->newObject();
    _ParsedGeometryType["PARSED_GEOMETRY_MESH_INSTANCES"] = NavigationMesh::ParsedGeometryType::PARSED_GEOMETRY_MESH_INSTANCES;
    _ParsedGeometryType["PARSED_GEOMETRY_STATIC_COLLIDERS"] = NavigationMesh::ParsedGeometryType::PARSED_GEOMETRY_STATIC_COLLIDERS;
    _ParsedGeometryType["PARSED_GEOMETRY_BOTH"] = NavigationMesh::ParsedGeometryType::PARSED_GEOMETRY_BOTH;
    _ParsedGeometryType["PARSED_GEOMETRY_MAX"] = NavigationMesh::ParsedGeometryType::PARSED_GEOMETRY_MAX;
    _module.add("ParsedGeometryType", std::move(_ParsedGeometryType));
    qjs::Value _SourceGeometryMode = context->newObject();
    _SourceGeometryMode["SOURCE_GEOMETRY_ROOT_NODE_CHILDREN"] = NavigationMesh::SourceGeometryMode::SOURCE_GEOMETRY_ROOT_NODE_CHILDREN;
    _SourceGeometryMode["SOURCE_GEOMETRY_GROUPS_WITH_CHILDREN"] = NavigationMesh::SourceGeometryMode::SOURCE_GEOMETRY_GROUPS_WITH_CHILDREN;
    _SourceGeometryMode["SOURCE_GEOMETRY_GROUPS_EXPLICIT"] = NavigationMesh::SourceGeometryMode::SOURCE_GEOMETRY_GROUPS_EXPLICIT;
    _SourceGeometryMode["SOURCE_GEOMETRY_MAX"] = NavigationMesh::SourceGeometryMode::SOURCE_GEOMETRY_MAX;
    _module.add("SourceGeometryMode", std::move(_SourceGeometryMode));
}