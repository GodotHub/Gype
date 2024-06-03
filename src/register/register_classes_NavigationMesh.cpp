#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/navigation_mesh.hpp>

using namespace godot;

void register_classes_NavigationMesh() {
    qjs::Context::Module &_module = _General;
    _module.class_<NavigationMesh>("NavigationMesh")
           .constructor<>()
           .property<NavigationMesh::get_vertices, NavigationMesh::set_vertices>("vertices")
           .property<NavigationMesh::_get_polygons, NavigationMesh::_set_polygons>("polygons")
           .property<NavigationMesh::get_sample_partition_type, NavigationMesh::set_sample_partition_type>("sample_partition_type")
           .property<NavigationMesh::get_parsed_geometry_type, NavigationMesh::set_parsed_geometry_type>("geometry_parsed_geometry_type")
           .property<NavigationMesh::get_collision_mask, NavigationMesh::set_collision_mask>("geometry_collision_mask")
           .property<NavigationMesh::get_source_geometry_mode, NavigationMesh::set_source_geometry_mode>("geometry_source_geometry_mode")
           .property<NavigationMesh::get_source_group_name, NavigationMesh::set_source_group_name>("geometry_source_group_name")
           .property<NavigationMesh::get_cell_size, NavigationMesh::set_cell_size>("cell_size")
           .property<NavigationMesh::get_cell_height, NavigationMesh::set_cell_height>("cell_height")
           .property<NavigationMesh::get_agent_height, NavigationMesh::set_agent_height>("agent_height")
           .property<NavigationMesh::get_agent_radius, NavigationMesh::set_agent_radius>("agent_radius")
           .property<NavigationMesh::get_agent_max_climb, NavigationMesh::set_agent_max_climb>("agent_max_climb")
           .property<NavigationMesh::get_agent_max_slope, NavigationMesh::set_agent_max_slope>("agent_max_slope")
           .property<NavigationMesh::get_region_min_size, NavigationMesh::set_region_min_size>("region_min_size")
           .property<NavigationMesh::get_region_merge_size, NavigationMesh::set_region_merge_size>("region_merge_size")
           .property<NavigationMesh::get_edge_max_length, NavigationMesh::set_edge_max_length>("edge_max_length")
           .property<NavigationMesh::get_edge_max_error, NavigationMesh::set_edge_max_error>("edge_max_error")
           .property<NavigationMesh::get_vertices_per_polygon, NavigationMesh::set_vertices_per_polygon>("vertices_per_polygon")
           .property<NavigationMesh::get_detail_sample_distance, NavigationMesh::set_detail_sample_distance>("detail_sample_distance")
           .property<NavigationMesh::get_detail_sample_max_error, NavigationMesh::set_detail_sample_max_error>("detail_sample_max_error")
           .property<NavigationMesh::get_filter_low_hanging_obstacles, NavigationMesh::set_filter_low_hanging_obstacles>("filter_low_hanging_obstacles")
           .property<NavigationMesh::get_filter_ledge_spans, NavigationMesh::set_filter_ledge_spans>("filter_ledge_spans")
           .property<NavigationMesh::get_filter_walkable_low_height_spans, NavigationMesh::set_filter_walkable_low_height_spans>("filter_walkable_low_height_spans")
           .property<NavigationMesh::get_filter_baking_aabb, NavigationMesh::set_filter_baking_aabb>("filter_baking_aabb")
           .property<NavigationMesh::get_filter_baking_aabb_offset, NavigationMesh::set_filter_baking_aabb_offset>("filter_baking_aabb_offset")
		    .fun<static_cast<void(NavigationMesh::*)(int32_t,bool)>(&NavigationMesh::set_collision_mask_value)>("set_collision_mask_value")
		    .fun<static_cast<bool(NavigationMesh::*)(int32_t)const>(&NavigationMesh::get_collision_mask_value)>("get_collision_mask_value")
		    .fun<static_cast<void(NavigationMesh::*)(const PackedInt32Array &)>(&NavigationMesh::add_polygon)>("add_polygon")
		    .fun<static_cast<int32_t(NavigationMesh::*)()const>(&NavigationMesh::get_polygon_count)>("get_polygon_count")
		    .fun<static_cast<PackedInt32Array(NavigationMesh::*)(int32_t)>(&NavigationMesh::get_polygon)>("get_polygon")
		    .fun<static_cast<void(NavigationMesh::*)()>(&NavigationMesh::clear_polygons)>("clear_polygons")
		    .fun<static_cast<void(NavigationMesh::*)(const Ref<Mesh> &)>(&NavigationMesh::create_from_mesh)>("create_from_mesh")
		    .fun<static_cast<void(NavigationMesh::*)()>(&NavigationMesh::clear)>("clear")
;}