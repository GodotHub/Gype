import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Node } from '@js_godot/classes/node'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_rid;
  method_set_avoidance_enabled;
  method_get_avoidance_enabled;
  method_set_path_desired_distance;
  method_get_path_desired_distance;
  method_set_target_desired_distance;
  method_get_target_desired_distance;
  method_set_radius;
  method_get_radius;
  method_set_neighbor_distance;
  method_get_neighbor_distance;
  method_set_max_neighbors;
  method_get_max_neighbors;
  method_set_time_horizon_agents;
  method_get_time_horizon_agents;
  method_set_time_horizon_obstacles;
  method_get_time_horizon_obstacles;
  method_set_max_speed;
  method_get_max_speed;
  method_set_path_max_distance;
  method_get_path_max_distance;
  method_set_navigation_layers;
  method_get_navigation_layers;
  method_set_navigation_layer_value;
  method_get_navigation_layer_value;
  method_set_pathfinding_algorithm;
  method_get_pathfinding_algorithm;
  method_set_path_postprocessing;
  method_get_path_postprocessing;
  method_set_path_metadata_flags;
  method_get_path_metadata_flags;
  method_set_navigation_map;
  method_get_navigation_map;
  method_set_target_position;
  method_get_target_position;
  method_set_simplify_path;
  method_get_simplify_path;
  method_set_simplify_epsilon;
  method_get_simplify_epsilon;
  method_get_next_path_position;
  method_set_velocity_forced;
  method_set_velocity;
  method_get_velocity;
  method_distance_to_target;
  method_get_current_navigation_result;
  method_get_current_navigation_path;
  method_get_current_navigation_path_index;
  method_is_target_reached;
  method_is_target_reachable;
  method_is_navigation_finished;
  method_get_final_position;
  method_set_avoidance_layers;
  method_get_avoidance_layers;
  method_set_avoidance_mask;
  method_get_avoidance_mask;
  method_set_avoidance_layer_value;
  method_get_avoidance_layer_value;
  method_set_avoidance_mask_value;
  method_get_avoidance_mask_value;
  method_set_avoidance_priority;
  method_get_avoidance_priority;
  method_set_debug_enabled;
  method_get_debug_enabled;
  method_set_debug_use_custom;
  method_get_debug_use_custom;
  method_set_debug_path_custom_color;
  method_get_debug_path_custom_color;
  method_set_debug_path_custom_point_size;
  method_get_debug_path_custom_point_size;
  method_set_debug_path_custom_line_width;
  method_get_debug_path_custom_line_width;
}
export class NavigationAgent2D extends Node{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("NavigationAgent2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_rid() {
    if (!this.#_bindings.method_get_rid) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_rid");
      this.#_bindings.method_get_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_set_avoidance_enabled() {
    if (!this.#_bindings.method_set_avoidance_enabled) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_avoidance_enabled");
      this.#_bindings.method_set_avoidance_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_avoidance_enabled() {
    if (!this.#_bindings.method_get_avoidance_enabled) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_avoidance_enabled");
      this.#_bindings.method_get_avoidance_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_path_desired_distance() {
    if (!this.#_bindings.method_set_path_desired_distance) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_path_desired_distance");
      this.#_bindings.method_set_path_desired_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_path_desired_distance() {
    if (!this.#_bindings.method_get_path_desired_distance) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_path_desired_distance");
      this.#_bindings.method_get_path_desired_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_target_desired_distance() {
    if (!this.#_bindings.method_set_target_desired_distance) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_target_desired_distance");
      this.#_bindings.method_set_target_desired_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_target_desired_distance() {
    if (!this.#_bindings.method_get_target_desired_distance) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_target_desired_distance");
      this.#_bindings.method_get_target_desired_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_radius() {
    if (!this.#_bindings.method_set_radius) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_radius");
      this.#_bindings.method_set_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_radius() {
    if (!this.#_bindings.method_get_radius) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_radius");
      this.#_bindings.method_get_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_neighbor_distance() {
    if (!this.#_bindings.method_set_neighbor_distance) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_neighbor_distance");
      this.#_bindings.method_set_neighbor_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_neighbor_distance() {
    if (!this.#_bindings.method_get_neighbor_distance) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_neighbor_distance");
      this.#_bindings.method_get_neighbor_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_max_neighbors() {
    if (!this.#_bindings.method_set_max_neighbors) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_max_neighbors");
      this.#_bindings.method_set_max_neighbors = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_max_neighbors() {
    if (!this.#_bindings.method_get_max_neighbors) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_max_neighbors");
      this.#_bindings.method_get_max_neighbors = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_time_horizon_agents() {
    if (!this.#_bindings.method_set_time_horizon_agents) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_time_horizon_agents");
      this.#_bindings.method_set_time_horizon_agents = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_time_horizon_agents() {
    if (!this.#_bindings.method_get_time_horizon_agents) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_time_horizon_agents");
      this.#_bindings.method_get_time_horizon_agents = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_time_horizon_obstacles() {
    if (!this.#_bindings.method_set_time_horizon_obstacles) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_time_horizon_obstacles");
      this.#_bindings.method_set_time_horizon_obstacles = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_time_horizon_obstacles() {
    if (!this.#_bindings.method_get_time_horizon_obstacles) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_time_horizon_obstacles");
      this.#_bindings.method_get_time_horizon_obstacles = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_max_speed() {
    if (!this.#_bindings.method_set_max_speed) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_max_speed");
      this.#_bindings.method_set_max_speed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_max_speed() {
    if (!this.#_bindings.method_get_max_speed) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_max_speed");
      this.#_bindings.method_get_max_speed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_path_max_distance() {
    if (!this.#_bindings.method_set_path_max_distance) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_path_max_distance");
      this.#_bindings.method_set_path_max_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_path_max_distance() {
    if (!this.#_bindings.method_get_path_max_distance) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_path_max_distance");
      this.#_bindings.method_get_path_max_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        191475506
      );
    }
  }
  static init_method_set_navigation_layers() {
    if (!this.#_bindings.method_set_navigation_layers) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_navigation_layers");
      this.#_bindings.method_set_navigation_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_navigation_layers() {
    if (!this.#_bindings.method_get_navigation_layers) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_navigation_layers");
      this.#_bindings.method_get_navigation_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_navigation_layer_value() {
    if (!this.#_bindings.method_set_navigation_layer_value) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_navigation_layer_value");
      this.#_bindings.method_set_navigation_layer_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_navigation_layer_value() {
    if (!this.#_bindings.method_get_navigation_layer_value) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_navigation_layer_value");
      this.#_bindings.method_get_navigation_layer_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_pathfinding_algorithm() {
    if (!this.#_bindings.method_set_pathfinding_algorithm) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_pathfinding_algorithm");
      this.#_bindings.method_set_pathfinding_algorithm = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2783519915
      );
    }
  }
  static init_method_get_pathfinding_algorithm() {
    if (!this.#_bindings.method_get_pathfinding_algorithm) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_pathfinding_algorithm");
      this.#_bindings.method_get_pathfinding_algorithm = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3000421146
      );
    }
  }
  static init_method_set_path_postprocessing() {
    if (!this.#_bindings.method_set_path_postprocessing) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_path_postprocessing");
      this.#_bindings.method_set_path_postprocessing = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2864409082
      );
    }
  }
  static init_method_get_path_postprocessing() {
    if (!this.#_bindings.method_get_path_postprocessing) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_path_postprocessing");
      this.#_bindings.method_get_path_postprocessing = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3798118993
      );
    }
  }
  static init_method_set_path_metadata_flags() {
    if (!this.#_bindings.method_set_path_metadata_flags) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_path_metadata_flags");
      this.#_bindings.method_set_path_metadata_flags = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        24274129
      );
    }
  }
  static init_method_get_path_metadata_flags() {
    if (!this.#_bindings.method_get_path_metadata_flags) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_path_metadata_flags");
      this.#_bindings.method_get_path_metadata_flags = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        488152976
      );
    }
  }
  static init_method_set_navigation_map() {
    if (!this.#_bindings.method_set_navigation_map) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_navigation_map");
      this.#_bindings.method_set_navigation_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2722037293
      );
    }
  }
  static init_method_get_navigation_map() {
    if (!this.#_bindings.method_get_navigation_map) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_navigation_map");
      this.#_bindings.method_get_navigation_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_set_target_position() {
    if (!this.#_bindings.method_set_target_position) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_target_position");
      this.#_bindings.method_set_target_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_target_position() {
    if (!this.#_bindings.method_get_target_position) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_target_position");
      this.#_bindings.method_get_target_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_simplify_path() {
    if (!this.#_bindings.method_set_simplify_path) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_simplify_path");
      this.#_bindings.method_set_simplify_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_simplify_path() {
    if (!this.#_bindings.method_get_simplify_path) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_simplify_path");
      this.#_bindings.method_get_simplify_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_simplify_epsilon() {
    if (!this.#_bindings.method_set_simplify_epsilon) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_simplify_epsilon");
      this.#_bindings.method_set_simplify_epsilon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_simplify_epsilon() {
    if (!this.#_bindings.method_get_simplify_epsilon) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_simplify_epsilon");
      this.#_bindings.method_get_simplify_epsilon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_next_path_position() {
    if (!this.#_bindings.method_get_next_path_position) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_next_path_position");
      this.#_bindings.method_get_next_path_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1497962370
      );
    }
  }
  static init_method_set_velocity_forced() {
    if (!this.#_bindings.method_set_velocity_forced) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_velocity_forced");
      this.#_bindings.method_set_velocity_forced = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_set_velocity() {
    if (!this.#_bindings.method_set_velocity) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_velocity");
      this.#_bindings.method_set_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_velocity() {
    if (!this.#_bindings.method_get_velocity) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_velocity");
      this.#_bindings.method_get_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1497962370
      );
    }
  }
  static init_method_distance_to_target() {
    if (!this.#_bindings.method_distance_to_target) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("distance_to_target");
      this.#_bindings.method_distance_to_target = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_current_navigation_result() {
    if (!this.#_bindings.method_get_current_navigation_result) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_current_navigation_result");
      this.#_bindings.method_get_current_navigation_result = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166799483
      );
    }
  }
  static init_method_get_current_navigation_path() {
    if (!this.#_bindings.method_get_current_navigation_path) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_current_navigation_path");
      this.#_bindings.method_get_current_navigation_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2961356807
      );
    }
  }
  static init_method_get_current_navigation_path_index() {
    if (!this.#_bindings.method_get_current_navigation_path_index) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_current_navigation_path_index");
      this.#_bindings.method_get_current_navigation_path_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_is_target_reached() {
    if (!this.#_bindings.method_is_target_reached) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("is_target_reached");
      this.#_bindings.method_is_target_reached = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_target_reachable() {
    if (!this.#_bindings.method_is_target_reachable) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("is_target_reachable");
      this.#_bindings.method_is_target_reachable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_is_navigation_finished() {
    if (!this.#_bindings.method_is_navigation_finished) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("is_navigation_finished");
      this.#_bindings.method_is_navigation_finished = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_get_final_position() {
    if (!this.#_bindings.method_get_final_position) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_final_position");
      this.#_bindings.method_get_final_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1497962370
      );
    }
  }
  static init_method_set_avoidance_layers() {
    if (!this.#_bindings.method_set_avoidance_layers) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_avoidance_layers");
      this.#_bindings.method_set_avoidance_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_avoidance_layers() {
    if (!this.#_bindings.method_get_avoidance_layers) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_avoidance_layers");
      this.#_bindings.method_get_avoidance_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_avoidance_mask() {
    if (!this.#_bindings.method_set_avoidance_mask) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_avoidance_mask");
      this.#_bindings.method_set_avoidance_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_avoidance_mask() {
    if (!this.#_bindings.method_get_avoidance_mask) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_avoidance_mask");
      this.#_bindings.method_get_avoidance_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_avoidance_layer_value() {
    if (!this.#_bindings.method_set_avoidance_layer_value) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_avoidance_layer_value");
      this.#_bindings.method_set_avoidance_layer_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_avoidance_layer_value() {
    if (!this.#_bindings.method_get_avoidance_layer_value) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_avoidance_layer_value");
      this.#_bindings.method_get_avoidance_layer_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_avoidance_mask_value() {
    if (!this.#_bindings.method_set_avoidance_mask_value) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_avoidance_mask_value");
      this.#_bindings.method_set_avoidance_mask_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_avoidance_mask_value() {
    if (!this.#_bindings.method_get_avoidance_mask_value) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_avoidance_mask_value");
      this.#_bindings.method_get_avoidance_mask_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_avoidance_priority() {
    if (!this.#_bindings.method_set_avoidance_priority) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_avoidance_priority");
      this.#_bindings.method_set_avoidance_priority = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_avoidance_priority() {
    if (!this.#_bindings.method_get_avoidance_priority) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_avoidance_priority");
      this.#_bindings.method_get_avoidance_priority = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_debug_enabled() {
    if (!this.#_bindings.method_set_debug_enabled) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_debug_enabled");
      this.#_bindings.method_set_debug_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_debug_enabled() {
    if (!this.#_bindings.method_get_debug_enabled) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_debug_enabled");
      this.#_bindings.method_get_debug_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_debug_use_custom() {
    if (!this.#_bindings.method_set_debug_use_custom) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_debug_use_custom");
      this.#_bindings.method_set_debug_use_custom = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_debug_use_custom() {
    if (!this.#_bindings.method_get_debug_use_custom) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_debug_use_custom");
      this.#_bindings.method_get_debug_use_custom = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_debug_path_custom_color() {
    if (!this.#_bindings.method_set_debug_path_custom_color) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_debug_path_custom_color");
      this.#_bindings.method_set_debug_path_custom_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_debug_path_custom_color() {
    if (!this.#_bindings.method_get_debug_path_custom_color) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_debug_path_custom_color");
      this.#_bindings.method_get_debug_path_custom_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_debug_path_custom_point_size() {
    if (!this.#_bindings.method_set_debug_path_custom_point_size) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_debug_path_custom_point_size");
      this.#_bindings.method_set_debug_path_custom_point_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_debug_path_custom_point_size() {
    if (!this.#_bindings.method_get_debug_path_custom_point_size) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_debug_path_custom_point_size");
      this.#_bindings.method_get_debug_path_custom_point_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_debug_path_custom_line_width() {
    if (!this.#_bindings.method_set_debug_path_custom_line_width) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("set_debug_path_custom_line_width");
      this.#_bindings.method_set_debug_path_custom_line_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_debug_path_custom_line_width() {
    if (!this.#_bindings.method_get_debug_path_custom_line_width) {
      let classname = new StringName("NavigationAgent2D");
      let methodname = new StringName("get_debug_path_custom_line_width");
      this.#_bindings.method_get_debug_path_custom_line_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  get_rid() {
    NavigationAgent2D.init_method_get_rid();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_rid,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  set_avoidance_enabled(_enabled) {
    NavigationAgent2D.init_method_set_avoidance_enabled();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_avoidance_enabled,
      this._owner,
      _enabled
    );
    
  }
  get_avoidance_enabled() {
    NavigationAgent2D.init_method_get_avoidance_enabled();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_avoidance_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_path_desired_distance(_desired_distance) {
    NavigationAgent2D.init_method_set_path_desired_distance();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_path_desired_distance,
      this._owner,
      _desired_distance
    );
    
  }
  get_path_desired_distance() {
    NavigationAgent2D.init_method_get_path_desired_distance();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_path_desired_distance,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_target_desired_distance(_desired_distance) {
    NavigationAgent2D.init_method_set_target_desired_distance();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_target_desired_distance,
      this._owner,
      _desired_distance
    );
    
  }
  get_target_desired_distance() {
    NavigationAgent2D.init_method_get_target_desired_distance();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_target_desired_distance,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_radius(_radius) {
    NavigationAgent2D.init_method_set_radius();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_radius,
      this._owner,
      _radius
    );
    
  }
  get_radius() {
    NavigationAgent2D.init_method_get_radius();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_radius,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_neighbor_distance(_neighbor_distance) {
    NavigationAgent2D.init_method_set_neighbor_distance();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_neighbor_distance,
      this._owner,
      _neighbor_distance
    );
    
  }
  get_neighbor_distance() {
    NavigationAgent2D.init_method_get_neighbor_distance();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_neighbor_distance,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_max_neighbors(_max_neighbors) {
    NavigationAgent2D.init_method_set_max_neighbors();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_max_neighbors,
      this._owner,
      _max_neighbors
    );
    
  }
  get_max_neighbors() {
    NavigationAgent2D.init_method_get_max_neighbors();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_max_neighbors,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_time_horizon_agents(_time_horizon) {
    NavigationAgent2D.init_method_set_time_horizon_agents();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_time_horizon_agents,
      this._owner,
      _time_horizon
    );
    
  }
  get_time_horizon_agents() {
    NavigationAgent2D.init_method_get_time_horizon_agents();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_time_horizon_agents,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_time_horizon_obstacles(_time_horizon) {
    NavigationAgent2D.init_method_set_time_horizon_obstacles();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_time_horizon_obstacles,
      this._owner,
      _time_horizon
    );
    
  }
  get_time_horizon_obstacles() {
    NavigationAgent2D.init_method_get_time_horizon_obstacles();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_time_horizon_obstacles,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_max_speed(_max_speed) {
    NavigationAgent2D.init_method_set_max_speed();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_max_speed,
      this._owner,
      _max_speed
    );
    
  }
  get_max_speed() {
    NavigationAgent2D.init_method_get_max_speed();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_max_speed,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_path_max_distance(_max_speed) {
    NavigationAgent2D.init_method_set_path_max_distance();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_path_max_distance,
      this._owner,
      _max_speed
    );
    
  }
  get_path_max_distance() {
    NavigationAgent2D.init_method_get_path_max_distance();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_path_max_distance,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_navigation_layers(_navigation_layers) {
    NavigationAgent2D.init_method_set_navigation_layers();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_navigation_layers,
      this._owner,
      _navigation_layers
    );
    
  }
  get_navigation_layers() {
    NavigationAgent2D.init_method_get_navigation_layers();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_navigation_layers,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_navigation_layer_value(_layer_number, _value) {
    NavigationAgent2D.init_method_set_navigation_layer_value();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_navigation_layer_value,
      this._owner,
      _layer_number, _value
    );
    
  }
  get_navigation_layer_value(_layer_number) {
    NavigationAgent2D.init_method_get_navigation_layer_value();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_navigation_layer_value,
      this._owner,
			Variant.Type.BOOL,
    
      _layer_number
    );
    
  }
  set_pathfinding_algorithm(_pathfinding_algorithm) {
    NavigationAgent2D.init_method_set_pathfinding_algorithm();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_pathfinding_algorithm,
      this._owner,
      _pathfinding_algorithm
    );
    
  }
  get_pathfinding_algorithm() {
    NavigationAgent2D.init_method_get_pathfinding_algorithm();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_pathfinding_algorithm,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_path_postprocessing(_path_postprocessing) {
    NavigationAgent2D.init_method_set_path_postprocessing();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_path_postprocessing,
      this._owner,
      _path_postprocessing
    );
    
  }
  get_path_postprocessing() {
    NavigationAgent2D.init_method_get_path_postprocessing();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_path_postprocessing,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_path_metadata_flags(_flags) {
    NavigationAgent2D.init_method_set_path_metadata_flags();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_path_metadata_flags,
      this._owner,
      _flags
    );
    
  }
  get_path_metadata_flags() {
    NavigationAgent2D.init_method_get_path_metadata_flags();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_path_metadata_flags,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_navigation_map(_navigation_map) {
    NavigationAgent2D.init_method_set_navigation_map();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_navigation_map,
      this._owner,
      _navigation_map
    );
    
  }
  get_navigation_map() {
    NavigationAgent2D.init_method_get_navigation_map();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_navigation_map,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  set_target_position(_position) {
    NavigationAgent2D.init_method_set_target_position();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_target_position,
      this._owner,
      _position
    );
    
  }
  get_target_position() {
    NavigationAgent2D.init_method_get_target_position();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_target_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_simplify_path(_enabled) {
    NavigationAgent2D.init_method_set_simplify_path();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_simplify_path,
      this._owner,
      _enabled
    );
    
  }
  get_simplify_path() {
    NavigationAgent2D.init_method_get_simplify_path();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_simplify_path,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_simplify_epsilon(_epsilon) {
    NavigationAgent2D.init_method_set_simplify_epsilon();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_simplify_epsilon,
      this._owner,
      _epsilon
    );
    
  }
  get_simplify_epsilon() {
    NavigationAgent2D.init_method_get_simplify_epsilon();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_simplify_epsilon,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_next_path_position() {
    NavigationAgent2D.init_method_get_next_path_position();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_next_path_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_velocity_forced(_velocity) {
    NavigationAgent2D.init_method_set_velocity_forced();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_velocity_forced,
      this._owner,
      _velocity
    );
    
  }
  set_velocity(_velocity) {
    NavigationAgent2D.init_method_set_velocity();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_velocity,
      this._owner,
      _velocity
    );
    
  }
  get_velocity() {
    NavigationAgent2D.init_method_get_velocity();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_velocity,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  distance_to_target() {
    NavigationAgent2D.init_method_distance_to_target();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_distance_to_target,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_current_navigation_result() {
    NavigationAgent2D.init_method_get_current_navigation_result();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_current_navigation_result,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_current_navigation_path() {
    NavigationAgent2D.init_method_get_current_navigation_path();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_current_navigation_path,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      
    );
    
  }
  get_current_navigation_path_index() {
    NavigationAgent2D.init_method_get_current_navigation_path_index();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_current_navigation_path_index,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  is_target_reached() {
    NavigationAgent2D.init_method_is_target_reached();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_is_target_reached,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_target_reachable() {
    NavigationAgent2D.init_method_is_target_reachable();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_is_target_reachable,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_navigation_finished() {
    NavigationAgent2D.init_method_is_navigation_finished();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_is_navigation_finished,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_final_position() {
    NavigationAgent2D.init_method_get_final_position();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_final_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_avoidance_layers(_layers) {
    NavigationAgent2D.init_method_set_avoidance_layers();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_avoidance_layers,
      this._owner,
      _layers
    );
    
  }
  get_avoidance_layers() {
    NavigationAgent2D.init_method_get_avoidance_layers();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_avoidance_layers,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_avoidance_mask(_mask) {
    NavigationAgent2D.init_method_set_avoidance_mask();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_avoidance_mask,
      this._owner,
      _mask
    );
    
  }
  get_avoidance_mask() {
    NavigationAgent2D.init_method_get_avoidance_mask();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_avoidance_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_avoidance_layer_value(_layer_number, _value) {
    NavigationAgent2D.init_method_set_avoidance_layer_value();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_avoidance_layer_value,
      this._owner,
      _layer_number, _value
    );
    
  }
  get_avoidance_layer_value(_layer_number) {
    NavigationAgent2D.init_method_get_avoidance_layer_value();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_avoidance_layer_value,
      this._owner,
			Variant.Type.BOOL,
    
      _layer_number
    );
    
  }
  set_avoidance_mask_value(_mask_number, _value) {
    NavigationAgent2D.init_method_set_avoidance_mask_value();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_avoidance_mask_value,
      this._owner,
      _mask_number, _value
    );
    
  }
  get_avoidance_mask_value(_mask_number) {
    NavigationAgent2D.init_method_get_avoidance_mask_value();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_avoidance_mask_value,
      this._owner,
			Variant.Type.BOOL,
    
      _mask_number
    );
    
  }
  set_avoidance_priority(_priority) {
    NavigationAgent2D.init_method_set_avoidance_priority();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_avoidance_priority,
      this._owner,
      _priority
    );
    
  }
  get_avoidance_priority() {
    NavigationAgent2D.init_method_get_avoidance_priority();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_avoidance_priority,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_debug_enabled(_enabled) {
    NavigationAgent2D.init_method_set_debug_enabled();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_debug_enabled,
      this._owner,
      _enabled
    );
    
  }
  get_debug_enabled() {
    NavigationAgent2D.init_method_get_debug_enabled();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_debug_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_debug_use_custom(_enabled) {
    NavigationAgent2D.init_method_set_debug_use_custom();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_debug_use_custom,
      this._owner,
      _enabled
    );
    
  }
  get_debug_use_custom() {
    NavigationAgent2D.init_method_get_debug_use_custom();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_debug_use_custom,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_debug_path_custom_color(_color) {
    NavigationAgent2D.init_method_set_debug_path_custom_color();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_debug_path_custom_color,
      this._owner,
      _color
    );
    
  }
  get_debug_path_custom_color() {
    NavigationAgent2D.init_method_get_debug_path_custom_color();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_debug_path_custom_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_debug_path_custom_point_size(_point_size) {
    NavigationAgent2D.init_method_set_debug_path_custom_point_size();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_debug_path_custom_point_size,
      this._owner,
      _point_size
    );
    
  }
  get_debug_path_custom_point_size() {
    NavigationAgent2D.init_method_get_debug_path_custom_point_size();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_debug_path_custom_point_size,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_debug_path_custom_line_width(_line_width) {
    NavigationAgent2D.init_method_set_debug_path_custom_line_width();
    return _call_native_mb_no_ret(
      NavigationAgent2D.#_bindings.method_set_debug_path_custom_line_width,
      this._owner,
      _line_width
    );
    
  }
  get_debug_path_custom_line_width() {
    NavigationAgent2D.init_method_get_debug_path_custom_line_width();
    return _call_native_mb_ret(
      NavigationAgent2D.#_bindings.method_get_debug_path_custom_line_width,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get target_position () {
  return this.get_target_position();
}
set target_position (new_value) {
  this.set_target_position(new_value);
}
get path_desired_distance () {
  return this.get_path_desired_distance();
}
set path_desired_distance (new_value) {
  this.set_path_desired_distance(new_value);
}
get target_desired_distance () {
  return this.get_target_desired_distance();
}
set target_desired_distance (new_value) {
  this.set_target_desired_distance(new_value);
}
get path_max_distance () {
  return this.get_path_max_distance();
}
set path_max_distance (new_value) {
  this.set_path_max_distance(new_value);
}
get navigation_layers () {
  return this.get_navigation_layers();
}
set navigation_layers (new_value) {
  this.set_navigation_layers(new_value);
}
get pathfinding_algorithm () {
  return this.get_pathfinding_algorithm();
}
set pathfinding_algorithm (new_value) {
  this.set_pathfinding_algorithm(new_value);
}
get path_postprocessing () {
  return this.get_path_postprocessing();
}
set path_postprocessing (new_value) {
  this.set_path_postprocessing(new_value);
}
get path_metadata_flags () {
  return this.get_path_metadata_flags();
}
set path_metadata_flags (new_value) {
  this.set_path_metadata_flags(new_value);
}
get simplify_path () {
  return this.get_simplify_path();
}
set simplify_path (new_value) {
  this.set_simplify_path(new_value);
}
get simplify_epsilon () {
  return this.get_simplify_epsilon();
}
set simplify_epsilon (new_value) {
  this.set_simplify_epsilon(new_value);
}
get avoidance_enabled () {
  return this.get_avoidance_enabled();
}
set avoidance_enabled (new_value) {
  this.set_avoidance_enabled(new_value);
}
get velocity () {
  return this.get_velocity();
}
set velocity (new_value) {
  this.set_velocity(new_value);
}
get radius () {
  return this.get_radius();
}
set radius (new_value) {
  this.set_radius(new_value);
}
get neighbor_distance () {
  return this.get_neighbor_distance();
}
set neighbor_distance (new_value) {
  this.set_neighbor_distance(new_value);
}
get max_neighbors () {
  return this.get_max_neighbors();
}
set max_neighbors (new_value) {
  this.set_max_neighbors(new_value);
}
get time_horizon_agents () {
  return this.get_time_horizon_agents();
}
set time_horizon_agents (new_value) {
  this.set_time_horizon_agents(new_value);
}
get time_horizon_obstacles () {
  return this.get_time_horizon_obstacles();
}
set time_horizon_obstacles (new_value) {
  this.set_time_horizon_obstacles(new_value);
}
get max_speed () {
  return this.get_max_speed();
}
set max_speed (new_value) {
  this.set_max_speed(new_value);
}
get avoidance_layers () {
  return this.get_avoidance_layers();
}
set avoidance_layers (new_value) {
  this.set_avoidance_layers(new_value);
}
get avoidance_mask () {
  return this.get_avoidance_mask();
}
set avoidance_mask (new_value) {
  this.set_avoidance_mask(new_value);
}
get avoidance_priority () {
  return this.get_avoidance_priority();
}
set avoidance_priority (new_value) {
  this.set_avoidance_priority(new_value);
}
get debug_enabled () {
  return this.get_debug_enabled();
}
set debug_enabled (new_value) {
  this.set_debug_enabled(new_value);
}
get debug_use_custom () {
  return this.get_debug_use_custom();
}
set debug_use_custom (new_value) {
  this.set_debug_use_custom(new_value);
}
get debug_path_custom_color () {
  return this.get_debug_path_custom_color();
}
set debug_path_custom_color (new_value) {
  this.set_debug_path_custom_color(new_value);
}
get debug_path_custom_point_size () {
  return this.get_debug_path_custom_point_size();
}
set debug_path_custom_point_size (new_value) {
  this.set_debug_path_custom_point_size(new_value);
}
get debug_path_custom_line_width () {
  return this.get_debug_path_custom_line_width();
}
set debug_path_custom_line_width (new_value) {
  this.set_debug_path_custom_line_width(new_value);
}

}