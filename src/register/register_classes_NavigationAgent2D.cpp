
#include <godot_cpp/classes/navigation_agent2d.hpp>
#include <godot_cpp/classes/navigation_path_query_parameters2d.hpp>
#include <godot_cpp/classes/navigation_path_query_result2d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_NavigationAgent2D() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<NavigationAgent2D>("NavigationAgent2D")
			.constructor<>()
			.base<Node>()
			.property<static_cast<Vector2 (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_target_position), static_cast<void (NavigationAgent2D::*)(const Vector2 &)>(&NavigationAgent2D::set_target_position)>((new std::string("target_position"))->c_str())
			.property<static_cast<double (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_path_desired_distance), static_cast<void (NavigationAgent2D::*)(double)>(&NavigationAgent2D::set_path_desired_distance)>((new std::string("path_desired_distance"))->c_str())
			.property<static_cast<double (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_target_desired_distance), static_cast<void (NavigationAgent2D::*)(double)>(&NavigationAgent2D::set_target_desired_distance)>((new std::string("target_desired_distance"))->c_str())
			.property<static_cast<double (NavigationAgent2D::*)()>(&NavigationAgent2D::get_path_max_distance), static_cast<void (NavigationAgent2D::*)(double)>(&NavigationAgent2D::set_path_max_distance)>((new std::string("path_max_distance"))->c_str())
			.property<static_cast<uint32_t (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_navigation_layers), static_cast<void (NavigationAgent2D::*)(uint32_t)>(&NavigationAgent2D::set_navigation_layers)>((new std::string("navigation_layers"))->c_str())
			.property<static_cast<NavigationPathQueryParameters2D::PathfindingAlgorithm (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_pathfinding_algorithm), static_cast<void (NavigationAgent2D::*)(NavigationPathQueryParameters2D::PathfindingAlgorithm)>(&NavigationAgent2D::set_pathfinding_algorithm)>((new std::string("pathfinding_algorithm"))->c_str())
			.property<static_cast<NavigationPathQueryParameters2D::PathPostProcessing (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_path_postprocessing), static_cast<void (NavigationAgent2D::*)(NavigationPathQueryParameters2D::PathPostProcessing)>(&NavigationAgent2D::set_path_postprocessing)>((new std::string("path_postprocessing"))->c_str())
			.property<static_cast<BitField<NavigationPathQueryParameters2D::PathMetadataFlags> (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_path_metadata_flags), static_cast<void (NavigationAgent2D::*)(BitField<NavigationPathQueryParameters2D::PathMetadataFlags>)>(&NavigationAgent2D::set_path_metadata_flags)>((new std::string("path_metadata_flags"))->c_str())
			.property<static_cast<bool (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_simplify_path), static_cast<void (NavigationAgent2D::*)(bool)>(&NavigationAgent2D::set_simplify_path)>((new std::string("simplify_path"))->c_str())
			.property<static_cast<double (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_simplify_epsilon), static_cast<void (NavigationAgent2D::*)(double)>(&NavigationAgent2D::set_simplify_epsilon)>((new std::string("simplify_epsilon"))->c_str())
			.property<static_cast<bool (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_avoidance_enabled), static_cast<void (NavigationAgent2D::*)(bool)>(&NavigationAgent2D::set_avoidance_enabled)>((new std::string("avoidance_enabled"))->c_str())
			.property<static_cast<Vector2 (NavigationAgent2D::*)()>(&NavigationAgent2D::get_velocity), static_cast<void (NavigationAgent2D::*)(const Vector2 &)>(&NavigationAgent2D::set_velocity)>((new std::string("velocity"))->c_str())
			.property<static_cast<double (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_radius), static_cast<void (NavigationAgent2D::*)(double)>(&NavigationAgent2D::set_radius)>((new std::string("radius"))->c_str())
			.property<static_cast<double (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_neighbor_distance), static_cast<void (NavigationAgent2D::*)(double)>(&NavigationAgent2D::set_neighbor_distance)>((new std::string("neighbor_distance"))->c_str())
			.property<static_cast<int32_t (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_max_neighbors), static_cast<void (NavigationAgent2D::*)(int32_t)>(&NavigationAgent2D::set_max_neighbors)>((new std::string("max_neighbors"))->c_str())
			.property<static_cast<double (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_time_horizon_agents), static_cast<void (NavigationAgent2D::*)(double)>(&NavigationAgent2D::set_time_horizon_agents)>((new std::string("time_horizon_agents"))->c_str())
			.property<static_cast<double (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_time_horizon_obstacles), static_cast<void (NavigationAgent2D::*)(double)>(&NavigationAgent2D::set_time_horizon_obstacles)>((new std::string("time_horizon_obstacles"))->c_str())
			.property<static_cast<double (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_max_speed), static_cast<void (NavigationAgent2D::*)(double)>(&NavigationAgent2D::set_max_speed)>((new std::string("max_speed"))->c_str())
			.property<static_cast<uint32_t (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_avoidance_layers), static_cast<void (NavigationAgent2D::*)(uint32_t)>(&NavigationAgent2D::set_avoidance_layers)>((new std::string("avoidance_layers"))->c_str())
			.property<static_cast<uint32_t (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_avoidance_mask), static_cast<void (NavigationAgent2D::*)(uint32_t)>(&NavigationAgent2D::set_avoidance_mask)>((new std::string("avoidance_mask"))->c_str())
			.property<static_cast<double (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_avoidance_priority), static_cast<void (NavigationAgent2D::*)(double)>(&NavigationAgent2D::set_avoidance_priority)>((new std::string("avoidance_priority"))->c_str())
			.property<static_cast<bool (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_debug_enabled), static_cast<void (NavigationAgent2D::*)(bool)>(&NavigationAgent2D::set_debug_enabled)>((new std::string("debug_enabled"))->c_str())
			.property<static_cast<bool (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_debug_use_custom), static_cast<void (NavigationAgent2D::*)(bool)>(&NavigationAgent2D::set_debug_use_custom)>((new std::string("debug_use_custom"))->c_str())
			.property<static_cast<Color (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_debug_path_custom_color), static_cast<void (NavigationAgent2D::*)(const Color &)>(&NavigationAgent2D::set_debug_path_custom_color)>((new std::string("debug_path_custom_color"))->c_str())
			.property<static_cast<double (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_debug_path_custom_point_size), static_cast<void (NavigationAgent2D::*)(double)>(&NavigationAgent2D::set_debug_path_custom_point_size)>((new std::string("debug_path_custom_point_size"))->c_str())
			.property<static_cast<double (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_debug_path_custom_line_width), static_cast<void (NavigationAgent2D::*)(double)>(&NavigationAgent2D::set_debug_path_custom_line_width)>((new std::string("debug_path_custom_line_width"))->c_str())
			.fun<static_cast<RID (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_rid)>((new std::string("get_rid"))->c_str())
			.fun<static_cast<void (NavigationAgent2D::*)(int32_t, bool)>(&NavigationAgent2D::set_navigation_layer_value)>((new std::string("set_navigation_layer_value"))->c_str())
			.fun<static_cast<bool (NavigationAgent2D::*)(int32_t) const>(&NavigationAgent2D::get_navigation_layer_value)>((new std::string("get_navigation_layer_value"))->c_str())
			.fun<static_cast<void (NavigationAgent2D::*)(const RID &)>(&NavigationAgent2D::set_navigation_map)>((new std::string("set_navigation_map"))->c_str())
			.fun<static_cast<RID (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_navigation_map)>((new std::string("get_navigation_map"))->c_str())
			.fun<static_cast<Vector2 (NavigationAgent2D::*)()>(&NavigationAgent2D::get_next_path_position)>((new std::string("get_next_path_position"))->c_str())
			.fun<static_cast<void (NavigationAgent2D::*)(const Vector2 &)>(&NavigationAgent2D::set_velocity_forced)>((new std::string("set_velocity_forced"))->c_str())
			.fun<static_cast<double (NavigationAgent2D::*)() const>(&NavigationAgent2D::distance_to_target)>((new std::string("distance_to_target"))->c_str())
			.fun<static_cast<Ref<NavigationPathQueryResult2D> (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_current_navigation_result)>((new std::string("get_current_navigation_result"))->c_str())
			.fun<static_cast<PackedVector2Array (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_current_navigation_path)>((new std::string("get_current_navigation_path"))->c_str())
			.fun<static_cast<int32_t (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_current_navigation_path_index)>((new std::string("get_current_navigation_path_index"))->c_str())
			.fun<static_cast<bool (NavigationAgent2D::*)() const>(&NavigationAgent2D::is_target_reached)>((new std::string("is_target_reached"))->c_str())
			.fun<static_cast<bool (NavigationAgent2D::*)()>(&NavigationAgent2D::is_target_reachable)>((new std::string("is_target_reachable"))->c_str())
			.fun<static_cast<bool (NavigationAgent2D::*)()>(&NavigationAgent2D::is_navigation_finished)>((new std::string("is_navigation_finished"))->c_str())
			.fun<static_cast<Vector2 (NavigationAgent2D::*)()>(&NavigationAgent2D::get_final_position)>((new std::string("get_final_position"))->c_str())
			.fun<static_cast<void (NavigationAgent2D::*)(int32_t, bool)>(&NavigationAgent2D::set_avoidance_layer_value)>((new std::string("set_avoidance_layer_value"))->c_str())
			.fun<static_cast<bool (NavigationAgent2D::*)(int32_t) const>(&NavigationAgent2D::get_avoidance_layer_value)>((new std::string("get_avoidance_layer_value"))->c_str())
			.fun<static_cast<void (NavigationAgent2D::*)(int32_t, bool)>(&NavigationAgent2D::set_avoidance_mask_value)>((new std::string("set_avoidance_mask_value"))->c_str())
			.fun<static_cast<bool (NavigationAgent2D::*)(int32_t) const>(&NavigationAgent2D::get_avoidance_mask_value)>((new std::string("get_avoidance_mask_value"))->c_str());
}