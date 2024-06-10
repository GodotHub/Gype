#include <godot_cpp/classes/navigation_agent2d.hpp>
#include <godot_cpp/classes/navigation_path_query_result2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_NavigationAgent2D() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<NavigationAgent2D>("NavigationAgent2D")
			.constructor<>()
			.property<&NavigationAgent2D::get_target_position, &NavigationAgent2D::set_target_position>("target_position")
			.property<&NavigationAgent2D::get_path_desired_distance, &NavigationAgent2D::set_path_desired_distance>("path_desired_distance")
			.property<&NavigationAgent2D::get_target_desired_distance, &NavigationAgent2D::set_target_desired_distance>("target_desired_distance")
			.property<&NavigationAgent2D::get_path_max_distance, &NavigationAgent2D::set_path_max_distance>("path_max_distance")
			.property<&NavigationAgent2D::get_navigation_layers, &NavigationAgent2D::set_navigation_layers>("navigation_layers")
			.property<&NavigationAgent2D::get_pathfinding_algorithm, &NavigationAgent2D::set_pathfinding_algorithm>("pathfinding_algorithm")
			.property<&NavigationAgent2D::get_path_postprocessing, &NavigationAgent2D::set_path_postprocessing>("path_postprocessing")
			.property<&NavigationAgent2D::get_path_metadata_flags, &NavigationAgent2D::set_path_metadata_flags>("path_metadata_flags")
			.property<&NavigationAgent2D::get_avoidance_enabled, &NavigationAgent2D::set_avoidance_enabled>("avoidance_enabled")
			.property<&NavigationAgent2D::get_velocity, &NavigationAgent2D::set_velocity>("velocity")
			.property<&NavigationAgent2D::get_radius, &NavigationAgent2D::set_radius>("radius")
			.property<&NavigationAgent2D::get_neighbor_distance, &NavigationAgent2D::set_neighbor_distance>("neighbor_distance")
			.property<&NavigationAgent2D::get_max_neighbors, &NavigationAgent2D::set_max_neighbors>("max_neighbors")
			.property<&NavigationAgent2D::get_time_horizon_agents, &NavigationAgent2D::set_time_horizon_agents>("time_horizon_agents")
			.property<&NavigationAgent2D::get_time_horizon_obstacles, &NavigationAgent2D::set_time_horizon_obstacles>("time_horizon_obstacles")
			.property<&NavigationAgent2D::get_max_speed, &NavigationAgent2D::set_max_speed>("max_speed")
			.property<&NavigationAgent2D::get_avoidance_layers, &NavigationAgent2D::set_avoidance_layers>("avoidance_layers")
			.property<&NavigationAgent2D::get_avoidance_mask, &NavigationAgent2D::set_avoidance_mask>("avoidance_mask")
			.property<&NavigationAgent2D::get_avoidance_priority, &NavigationAgent2D::set_avoidance_priority>("avoidance_priority")
			.property<&NavigationAgent2D::get_debug_enabled, &NavigationAgent2D::set_debug_enabled>("debug_enabled")
			.property<&NavigationAgent2D::get_debug_use_custom, &NavigationAgent2D::set_debug_use_custom>("debug_use_custom")
			.property<&NavigationAgent2D::get_debug_path_custom_color, &NavigationAgent2D::set_debug_path_custom_color>("debug_path_custom_color")
			.property<&NavigationAgent2D::get_debug_path_custom_point_size, &NavigationAgent2D::set_debug_path_custom_point_size>("debug_path_custom_point_size")
			.property<&NavigationAgent2D::get_debug_path_custom_line_width, &NavigationAgent2D::set_debug_path_custom_line_width>("debug_path_custom_line_width")
			.fun<static_cast<RID (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_rid)>("get_rid")
			.fun<static_cast<void (NavigationAgent2D::*)(int32_t, bool)>(&NavigationAgent2D::set_navigation_layer_value)>("set_navigation_layer_value")
			.fun<static_cast<bool (NavigationAgent2D::*)(int32_t) const>(&NavigationAgent2D::get_navigation_layer_value)>("get_navigation_layer_value")
			.fun<static_cast<void (NavigationAgent2D::*)(const RID &)>(&NavigationAgent2D::set_navigation_map)>("set_navigation_map")
			.fun<static_cast<RID (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_navigation_map)>("get_navigation_map")
			.fun<static_cast<Vector2 (NavigationAgent2D::*)()>(&NavigationAgent2D::get_next_path_position)>("get_next_path_position")
			.fun<static_cast<void (NavigationAgent2D::*)(const Vector2 &)>(&NavigationAgent2D::set_velocity_forced)>("set_velocity_forced")
			.fun<static_cast<double (NavigationAgent2D::*)() const>(&NavigationAgent2D::distance_to_target)>("distance_to_target")
			.fun<static_cast<Ref<NavigationPathQueryResult2D> (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_current_navigation_result)>("get_current_navigation_result")
			.fun<static_cast<PackedVector2Array (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_current_navigation_path)>("get_current_navigation_path")
			.fun<static_cast<int32_t (NavigationAgent2D::*)() const>(&NavigationAgent2D::get_current_navigation_path_index)>("get_current_navigation_path_index")
			.fun<static_cast<bool (NavigationAgent2D::*)() const>(&NavigationAgent2D::is_target_reached)>("is_target_reached")
			.fun<static_cast<bool (NavigationAgent2D::*)()>(&NavigationAgent2D::is_target_reachable)>("is_target_reachable")
			.fun<static_cast<bool (NavigationAgent2D::*)()>(&NavigationAgent2D::is_navigation_finished)>("is_navigation_finished")
			.fun<static_cast<Vector2 (NavigationAgent2D::*)()>(&NavigationAgent2D::get_final_position)>("get_final_position")
			.fun<static_cast<void (NavigationAgent2D::*)(int32_t, bool)>(&NavigationAgent2D::set_avoidance_layer_value)>("set_avoidance_layer_value")
			.fun<static_cast<bool (NavigationAgent2D::*)(int32_t) const>(&NavigationAgent2D::get_avoidance_layer_value)>("get_avoidance_layer_value")
			.fun<static_cast<void (NavigationAgent2D::*)(int32_t, bool)>(&NavigationAgent2D::set_avoidance_mask_value)>("set_avoidance_mask_value")
			.fun<static_cast<bool (NavigationAgent2D::*)(int32_t) const>(&NavigationAgent2D::get_avoidance_mask_value)>("get_avoidance_mask_value");
}