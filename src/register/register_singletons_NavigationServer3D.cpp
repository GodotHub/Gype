#include <godot_cpp/classes/navigation_server3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/navigation_mesh.hpp>
#include <godot_cpp/classes/navigation_mesh_source_geometry_data3d.hpp>
#include <godot_cpp/classes/navigation_path_query_parameters3d.hpp>
#include <godot_cpp/classes/navigation_path_query_result3d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_NavigationServer3D() {
	qjs::Value js_singleton = context->newObject();
    NavigationServer3D *singleton = NavigationServer3D::get_singleton();
    js_singleton.add("get_maps", [singleton]()->TypedArray<RID>{return singleton->get_maps();});
    js_singleton.add("map_create", [singleton]()->RID{return singleton->map_create();});
    js_singleton.add("map_set_active", [singleton](const RID & map,bool active)->void{singleton->map_set_active(map,active);});
    js_singleton.add("map_is_active", [singleton](const RID & map)->bool{return singleton->map_is_active(map);});
    js_singleton.add("map_set_up", [singleton](const RID & map,const Vector3 & up)->void{singleton->map_set_up(map,up);});
    js_singleton.add("map_get_up", [singleton](const RID & map)->Vector3{return singleton->map_get_up(map);});
    js_singleton.add("map_set_cell_size", [singleton](const RID & map,double cell_size)->void{singleton->map_set_cell_size(map,cell_size);});
    js_singleton.add("map_get_cell_size", [singleton](const RID & map)->double{return singleton->map_get_cell_size(map);});
    js_singleton.add("map_set_cell_height", [singleton](const RID & map,double cell_height)->void{singleton->map_set_cell_height(map,cell_height);});
    js_singleton.add("map_get_cell_height", [singleton](const RID & map)->double{return singleton->map_get_cell_height(map);});
    js_singleton.add("map_set_merge_rasterizer_cell_scale", [singleton](const RID & map,double scale)->void{singleton->map_set_merge_rasterizer_cell_scale(map,scale);});
    js_singleton.add("map_get_merge_rasterizer_cell_scale", [singleton](const RID & map)->double{return singleton->map_get_merge_rasterizer_cell_scale(map);});
    js_singleton.add("map_set_use_edge_connections", [singleton](const RID & map,bool enabled)->void{singleton->map_set_use_edge_connections(map,enabled);});
    js_singleton.add("map_get_use_edge_connections", [singleton](const RID & map)->bool{return singleton->map_get_use_edge_connections(map);});
    js_singleton.add("map_set_edge_connection_margin", [singleton](const RID & map,double margin)->void{singleton->map_set_edge_connection_margin(map,margin);});
    js_singleton.add("map_get_edge_connection_margin", [singleton](const RID & map)->double{return singleton->map_get_edge_connection_margin(map);});
    js_singleton.add("map_set_link_connection_radius", [singleton](const RID & map,double radius)->void{singleton->map_set_link_connection_radius(map,radius);});
    js_singleton.add("map_get_link_connection_radius", [singleton](const RID & map)->double{return singleton->map_get_link_connection_radius(map);});
    js_singleton.add("map_get_path", [singleton](const RID & map,const Vector3 & origin,const Vector3 & destination,bool optimize,uint32_t navigation_layers)->PackedVector3Array{return singleton->map_get_path(map,origin,destination,optimize,navigation_layers);});
    js_singleton.add("map_get_closest_point_to_segment", [singleton](const RID & map,const Vector3 & start,const Vector3 & end,bool use_collision)->Vector3{return singleton->map_get_closest_point_to_segment(map,start,end,use_collision);});
    js_singleton.add("map_get_closest_point", [singleton](const RID & map,const Vector3 & to_point)->Vector3{return singleton->map_get_closest_point(map,to_point);});
    js_singleton.add("map_get_closest_point_normal", [singleton](const RID & map,const Vector3 & to_point)->Vector3{return singleton->map_get_closest_point_normal(map,to_point);});
    js_singleton.add("map_get_closest_point_owner", [singleton](const RID & map,const Vector3 & to_point)->RID{return singleton->map_get_closest_point_owner(map,to_point);});
    js_singleton.add("map_get_links", [singleton](const RID & map)->TypedArray<RID>{return singleton->map_get_links(map);});
    js_singleton.add("map_get_regions", [singleton](const RID & map)->TypedArray<RID>{return singleton->map_get_regions(map);});
    js_singleton.add("map_get_agents", [singleton](const RID & map)->TypedArray<RID>{return singleton->map_get_agents(map);});
    js_singleton.add("map_get_obstacles", [singleton](const RID & map)->TypedArray<RID>{return singleton->map_get_obstacles(map);});
    js_singleton.add("map_force_update", [singleton](const RID & map)->void{singleton->map_force_update(map);});
    js_singleton.add("map_get_iteration_id", [singleton](const RID & map)->int64_t{return singleton->map_get_iteration_id(map);});
    js_singleton.add("map_get_random_point", [singleton](const RID & map,uint32_t navigation_layers,bool uniformly)->Vector3{return singleton->map_get_random_point(map,navigation_layers,uniformly);});
    js_singleton.add("query_path", [singleton](const Ref<NavigationPathQueryParameters3D> & parameters,const Ref<NavigationPathQueryResult3D> & result)->void{singleton->query_path(parameters,result);});
    js_singleton.add("region_create", [singleton]()->RID{return singleton->region_create();});
    js_singleton.add("region_set_enabled", [singleton](const RID & region,bool enabled)->void{singleton->region_set_enabled(region,enabled);});
    js_singleton.add("region_get_enabled", [singleton](const RID & region)->bool{return singleton->region_get_enabled(region);});
    js_singleton.add("region_set_use_edge_connections", [singleton](const RID & region,bool enabled)->void{singleton->region_set_use_edge_connections(region,enabled);});
    js_singleton.add("region_get_use_edge_connections", [singleton](const RID & region)->bool{return singleton->region_get_use_edge_connections(region);});
    js_singleton.add("region_set_enter_cost", [singleton](const RID & region,double enter_cost)->void{singleton->region_set_enter_cost(region,enter_cost);});
    js_singleton.add("region_get_enter_cost", [singleton](const RID & region)->double{return singleton->region_get_enter_cost(region);});
    js_singleton.add("region_set_travel_cost", [singleton](const RID & region,double travel_cost)->void{singleton->region_set_travel_cost(region,travel_cost);});
    js_singleton.add("region_get_travel_cost", [singleton](const RID & region)->double{return singleton->region_get_travel_cost(region);});
    js_singleton.add("region_set_owner_id", [singleton](const RID & region,uint64_t owner_id)->void{singleton->region_set_owner_id(region,owner_id);});
    js_singleton.add("region_get_owner_id", [singleton](const RID & region)->int64_t{return singleton->region_get_owner_id(region);});
    js_singleton.add("region_owns_point", [singleton](const RID & region,const Vector3 & point)->bool{return singleton->region_owns_point(region,point);});
    js_singleton.add("region_set_map", [singleton](const RID & region,const RID & map)->void{singleton->region_set_map(region,map);});
    js_singleton.add("region_get_map", [singleton](const RID & region)->RID{return singleton->region_get_map(region);});
    js_singleton.add("region_set_navigation_layers", [singleton](const RID & region,uint32_t navigation_layers)->void{singleton->region_set_navigation_layers(region,navigation_layers);});
    js_singleton.add("region_get_navigation_layers", [singleton](const RID & region)->int64_t{return singleton->region_get_navigation_layers(region);});
    js_singleton.add("region_set_transform", [singleton](const RID & region,const Transform3D & transform)->void{singleton->region_set_transform(region,transform);});
    js_singleton.add("region_get_transform", [singleton](const RID & region)->Transform3D{return singleton->region_get_transform(region);});
    js_singleton.add("region_set_navigation_mesh", [singleton](const RID & region,const Ref<NavigationMesh> & navigation_mesh)->void{singleton->region_set_navigation_mesh(region,navigation_mesh);});
    js_singleton.add("region_bake_navigation_mesh", [singleton](const Ref<NavigationMesh> & navigation_mesh,Node * root_node)->void{singleton->region_bake_navigation_mesh(navigation_mesh,root_node);});
    js_singleton.add("region_get_connections_count", [singleton](const RID & region)->int64_t{return singleton->region_get_connections_count(region);});
    js_singleton.add("region_get_connection_pathway_start", [singleton](const RID & region,int32_t connection)->Vector3{return singleton->region_get_connection_pathway_start(region,connection);});
    js_singleton.add("region_get_connection_pathway_end", [singleton](const RID & region,int32_t connection)->Vector3{return singleton->region_get_connection_pathway_end(region,connection);});
    js_singleton.add("region_get_random_point", [singleton](const RID & region,uint32_t navigation_layers,bool uniformly)->Vector3{return singleton->region_get_random_point(region,navigation_layers,uniformly);});
    js_singleton.add("link_create", [singleton]()->RID{return singleton->link_create();});
    js_singleton.add("link_set_map", [singleton](const RID & link,const RID & map)->void{singleton->link_set_map(link,map);});
    js_singleton.add("link_get_map", [singleton](const RID & link)->RID{return singleton->link_get_map(link);});
    js_singleton.add("link_set_enabled", [singleton](const RID & link,bool enabled)->void{singleton->link_set_enabled(link,enabled);});
    js_singleton.add("link_get_enabled", [singleton](const RID & link)->bool{return singleton->link_get_enabled(link);});
    js_singleton.add("link_set_bidirectional", [singleton](const RID & link,bool bidirectional)->void{singleton->link_set_bidirectional(link,bidirectional);});
    js_singleton.add("link_is_bidirectional", [singleton](const RID & link)->bool{return singleton->link_is_bidirectional(link);});
    js_singleton.add("link_set_navigation_layers", [singleton](const RID & link,uint32_t navigation_layers)->void{singleton->link_set_navigation_layers(link,navigation_layers);});
    js_singleton.add("link_get_navigation_layers", [singleton](const RID & link)->int64_t{return singleton->link_get_navigation_layers(link);});
    js_singleton.add("link_set_start_position", [singleton](const RID & link,const Vector3 & position)->void{singleton->link_set_start_position(link,position);});
    js_singleton.add("link_get_start_position", [singleton](const RID & link)->Vector3{return singleton->link_get_start_position(link);});
    js_singleton.add("link_set_end_position", [singleton](const RID & link,const Vector3 & position)->void{singleton->link_set_end_position(link,position);});
    js_singleton.add("link_get_end_position", [singleton](const RID & link)->Vector3{return singleton->link_get_end_position(link);});
    js_singleton.add("link_set_enter_cost", [singleton](const RID & link,double enter_cost)->void{singleton->link_set_enter_cost(link,enter_cost);});
    js_singleton.add("link_get_enter_cost", [singleton](const RID & link)->double{return singleton->link_get_enter_cost(link);});
    js_singleton.add("link_set_travel_cost", [singleton](const RID & link,double travel_cost)->void{singleton->link_set_travel_cost(link,travel_cost);});
    js_singleton.add("link_get_travel_cost", [singleton](const RID & link)->double{return singleton->link_get_travel_cost(link);});
    js_singleton.add("link_set_owner_id", [singleton](const RID & link,uint64_t owner_id)->void{singleton->link_set_owner_id(link,owner_id);});
    js_singleton.add("link_get_owner_id", [singleton](const RID & link)->int64_t{return singleton->link_get_owner_id(link);});
    js_singleton.add("agent_create", [singleton]()->RID{return singleton->agent_create();});
    js_singleton.add("agent_set_avoidance_enabled", [singleton](const RID & agent,bool enabled)->void{singleton->agent_set_avoidance_enabled(agent,enabled);});
    js_singleton.add("agent_get_avoidance_enabled", [singleton](const RID & agent)->bool{return singleton->agent_get_avoidance_enabled(agent);});
    js_singleton.add("agent_set_use_3d_avoidance", [singleton](const RID & agent,bool enabled)->void{singleton->agent_set_use_3d_avoidance(agent,enabled);});
    js_singleton.add("agent_get_use_3d_avoidance", [singleton](const RID & agent)->bool{return singleton->agent_get_use_3d_avoidance(agent);});
    js_singleton.add("agent_set_map", [singleton](const RID & agent,const RID & map)->void{singleton->agent_set_map(agent,map);});
    js_singleton.add("agent_get_map", [singleton](const RID & agent)->RID{return singleton->agent_get_map(agent);});
    js_singleton.add("agent_set_paused", [singleton](const RID & agent,bool paused)->void{singleton->agent_set_paused(agent,paused);});
    js_singleton.add("agent_get_paused", [singleton](const RID & agent)->bool{return singleton->agent_get_paused(agent);});
    js_singleton.add("agent_set_neighbor_distance", [singleton](const RID & agent,double distance)->void{singleton->agent_set_neighbor_distance(agent,distance);});
    js_singleton.add("agent_get_neighbor_distance", [singleton](const RID & agent)->double{return singleton->agent_get_neighbor_distance(agent);});
    js_singleton.add("agent_set_max_neighbors", [singleton](const RID & agent,int32_t count)->void{singleton->agent_set_max_neighbors(agent,count);});
    js_singleton.add("agent_get_max_neighbors", [singleton](const RID & agent)->int64_t{return singleton->agent_get_max_neighbors(agent);});
    js_singleton.add("agent_set_time_horizon_agents", [singleton](const RID & agent,double time_horizon)->void{singleton->agent_set_time_horizon_agents(agent,time_horizon);});
    js_singleton.add("agent_get_time_horizon_agents", [singleton](const RID & agent)->double{return singleton->agent_get_time_horizon_agents(agent);});
    js_singleton.add("agent_set_time_horizon_obstacles", [singleton](const RID & agent,double time_horizon)->void{singleton->agent_set_time_horizon_obstacles(agent,time_horizon);});
    js_singleton.add("agent_get_time_horizon_obstacles", [singleton](const RID & agent)->double{return singleton->agent_get_time_horizon_obstacles(agent);});
    js_singleton.add("agent_set_radius", [singleton](const RID & agent,double radius)->void{singleton->agent_set_radius(agent,radius);});
    js_singleton.add("agent_get_radius", [singleton](const RID & agent)->double{return singleton->agent_get_radius(agent);});
    js_singleton.add("agent_set_height", [singleton](const RID & agent,double height)->void{singleton->agent_set_height(agent,height);});
    js_singleton.add("agent_get_height", [singleton](const RID & agent)->double{return singleton->agent_get_height(agent);});
    js_singleton.add("agent_set_max_speed", [singleton](const RID & agent,double max_speed)->void{singleton->agent_set_max_speed(agent,max_speed);});
    js_singleton.add("agent_get_max_speed", [singleton](const RID & agent)->double{return singleton->agent_get_max_speed(agent);});
    js_singleton.add("agent_set_velocity_forced", [singleton](const RID & agent,const Vector3 & velocity)->void{singleton->agent_set_velocity_forced(agent,velocity);});
    js_singleton.add("agent_set_velocity", [singleton](const RID & agent,const Vector3 & velocity)->void{singleton->agent_set_velocity(agent,velocity);});
    js_singleton.add("agent_get_velocity", [singleton](const RID & agent)->Vector3{return singleton->agent_get_velocity(agent);});
    js_singleton.add("agent_set_position", [singleton](const RID & agent,const Vector3 & position)->void{singleton->agent_set_position(agent,position);});
    js_singleton.add("agent_get_position", [singleton](const RID & agent)->Vector3{return singleton->agent_get_position(agent);});
    js_singleton.add("agent_is_map_changed", [singleton](const RID & agent)->bool{return singleton->agent_is_map_changed(agent);});
    js_singleton.add("agent_set_avoidance_callback", [singleton](const RID & agent,const Callable & callback)->void{singleton->agent_set_avoidance_callback(agent,callback);});
    js_singleton.add("agent_has_avoidance_callback", [singleton](const RID & agent)->bool{return singleton->agent_has_avoidance_callback(agent);});
    js_singleton.add("agent_set_avoidance_layers", [singleton](const RID & agent,uint32_t layers)->void{singleton->agent_set_avoidance_layers(agent,layers);});
    js_singleton.add("agent_get_avoidance_layers", [singleton](const RID & agent)->int64_t{return singleton->agent_get_avoidance_layers(agent);});
    js_singleton.add("agent_set_avoidance_mask", [singleton](const RID & agent,uint32_t mask)->void{singleton->agent_set_avoidance_mask(agent,mask);});
    js_singleton.add("agent_get_avoidance_mask", [singleton](const RID & agent)->int64_t{return singleton->agent_get_avoidance_mask(agent);});
    js_singleton.add("agent_set_avoidance_priority", [singleton](const RID & agent,double priority)->void{singleton->agent_set_avoidance_priority(agent,priority);});
    js_singleton.add("agent_get_avoidance_priority", [singleton](const RID & agent)->double{return singleton->agent_get_avoidance_priority(agent);});
    js_singleton.add("obstacle_create", [singleton]()->RID{return singleton->obstacle_create();});
    js_singleton.add("obstacle_set_avoidance_enabled", [singleton](const RID & obstacle,bool enabled)->void{singleton->obstacle_set_avoidance_enabled(obstacle,enabled);});
    js_singleton.add("obstacle_get_avoidance_enabled", [singleton](const RID & obstacle)->bool{return singleton->obstacle_get_avoidance_enabled(obstacle);});
    js_singleton.add("obstacle_set_use_3d_avoidance", [singleton](const RID & obstacle,bool enabled)->void{singleton->obstacle_set_use_3d_avoidance(obstacle,enabled);});
    js_singleton.add("obstacle_get_use_3d_avoidance", [singleton](const RID & obstacle)->bool{return singleton->obstacle_get_use_3d_avoidance(obstacle);});
    js_singleton.add("obstacle_set_map", [singleton](const RID & obstacle,const RID & map)->void{singleton->obstacle_set_map(obstacle,map);});
    js_singleton.add("obstacle_get_map", [singleton](const RID & obstacle)->RID{return singleton->obstacle_get_map(obstacle);});
    js_singleton.add("obstacle_set_paused", [singleton](const RID & obstacle,bool paused)->void{singleton->obstacle_set_paused(obstacle,paused);});
    js_singleton.add("obstacle_get_paused", [singleton](const RID & obstacle)->bool{return singleton->obstacle_get_paused(obstacle);});
    js_singleton.add("obstacle_set_radius", [singleton](const RID & obstacle,double radius)->void{singleton->obstacle_set_radius(obstacle,radius);});
    js_singleton.add("obstacle_get_radius", [singleton](const RID & obstacle)->double{return singleton->obstacle_get_radius(obstacle);});
    js_singleton.add("obstacle_set_height", [singleton](const RID & obstacle,double height)->void{singleton->obstacle_set_height(obstacle,height);});
    js_singleton.add("obstacle_get_height", [singleton](const RID & obstacle)->double{return singleton->obstacle_get_height(obstacle);});
    js_singleton.add("obstacle_set_velocity", [singleton](const RID & obstacle,const Vector3 & velocity)->void{singleton->obstacle_set_velocity(obstacle,velocity);});
    js_singleton.add("obstacle_get_velocity", [singleton](const RID & obstacle)->Vector3{return singleton->obstacle_get_velocity(obstacle);});
    js_singleton.add("obstacle_set_position", [singleton](const RID & obstacle,const Vector3 & position)->void{singleton->obstacle_set_position(obstacle,position);});
    js_singleton.add("obstacle_get_position", [singleton](const RID & obstacle)->Vector3{return singleton->obstacle_get_position(obstacle);});
    js_singleton.add("obstacle_set_vertices", [singleton](const RID & obstacle,const PackedVector3Array & vertices)->void{singleton->obstacle_set_vertices(obstacle,vertices);});
    js_singleton.add("obstacle_get_vertices", [singleton](const RID & obstacle)->PackedVector3Array{return singleton->obstacle_get_vertices(obstacle);});
    js_singleton.add("obstacle_set_avoidance_layers", [singleton](const RID & obstacle,uint32_t layers)->void{singleton->obstacle_set_avoidance_layers(obstacle,layers);});
    js_singleton.add("obstacle_get_avoidance_layers", [singleton](const RID & obstacle)->int64_t{return singleton->obstacle_get_avoidance_layers(obstacle);});
    js_singleton.add("parse_source_geometry_data", [singleton](const Ref<NavigationMesh> & navigation_mesh,const Ref<NavigationMeshSourceGeometryData3D> & source_geometry_data,Node * root_node,const Callable & callback)->void{singleton->parse_source_geometry_data(navigation_mesh,source_geometry_data,root_node,callback);});
    js_singleton.add("bake_from_source_geometry_data", [singleton](const Ref<NavigationMesh> & navigation_mesh,const Ref<NavigationMeshSourceGeometryData3D> & source_geometry_data,const Callable & callback)->void{singleton->bake_from_source_geometry_data(navigation_mesh,source_geometry_data,callback);});
    js_singleton.add("bake_from_source_geometry_data_async", [singleton](const Ref<NavigationMesh> & navigation_mesh,const Ref<NavigationMeshSourceGeometryData3D> & source_geometry_data,const Callable & callback)->void{singleton->bake_from_source_geometry_data_async(navigation_mesh,source_geometry_data,callback);});
    js_singleton.add("is_baking_navigation_mesh", [singleton](const Ref<NavigationMesh> & navigation_mesh)->bool{return singleton->is_baking_navigation_mesh(navigation_mesh);});
    js_singleton.add("source_geometry_parser_create", [singleton]()->RID{return singleton->source_geometry_parser_create();});
    js_singleton.add("source_geometry_parser_set_callback", [singleton](const RID & parser,const Callable & callback)->void{singleton->source_geometry_parser_set_callback(parser,callback);});
    js_singleton.add("simplify_path", [singleton](const PackedVector3Array & path,double epsilon)->PackedVector3Array{return singleton->simplify_path(path,epsilon);});
    js_singleton.add("free_rid", [singleton](const RID & rid)->void{singleton->free_rid(rid);});
    js_singleton.add("set_active", [singleton](bool active)->void{singleton->set_active(active);});
    js_singleton.add("set_debug_enabled", [singleton](bool enabled)->void{singleton->set_debug_enabled(enabled);});
    js_singleton.add("get_debug_enabled", [singleton]()->bool{return singleton->get_debug_enabled();});
    js_singleton.add("get_process_info", [singleton](NavigationServer3D::ProcessInfo process_info)->int64_t{return singleton->get_process_info(process_info);});
    context->global()["NavigationServer3D"] = js_singleton;

    qjs::Value _ProcessInfo = context->newObject();
    _ProcessInfo["INFO_ACTIVE_MAPS"] = NavigationServer3D::ProcessInfo::INFO_ACTIVE_MAPS;
    _ProcessInfo["INFO_REGION_COUNT"] = NavigationServer3D::ProcessInfo::INFO_REGION_COUNT;
    _ProcessInfo["INFO_AGENT_COUNT"] = NavigationServer3D::ProcessInfo::INFO_AGENT_COUNT;
    _ProcessInfo["INFO_LINK_COUNT"] = NavigationServer3D::ProcessInfo::INFO_LINK_COUNT;
    _ProcessInfo["INFO_POLYGON_COUNT"] = NavigationServer3D::ProcessInfo::INFO_POLYGON_COUNT;
    _ProcessInfo["INFO_EDGE_COUNT"] = NavigationServer3D::ProcessInfo::INFO_EDGE_COUNT;
    _ProcessInfo["INFO_EDGE_MERGE_COUNT"] = NavigationServer3D::ProcessInfo::INFO_EDGE_MERGE_COUNT;
    _ProcessInfo["INFO_EDGE_CONNECTION_COUNT"] = NavigationServer3D::ProcessInfo::INFO_EDGE_CONNECTION_COUNT;
    _ProcessInfo["INFO_EDGE_FREE_COUNT"] = NavigationServer3D::ProcessInfo::INFO_EDGE_FREE_COUNT;
    js_singleton["ProcessInfo"] = _ProcessInfo;
}