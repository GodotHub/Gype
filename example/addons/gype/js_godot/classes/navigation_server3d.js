import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { GodotObject } from '@js_godot/classes/godot_object'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_get_maps;
  method_map_create;
  method_map_set_active;
  method_map_is_active;
  method_map_set_up;
  method_map_get_up;
  method_map_set_cell_size;
  method_map_get_cell_size;
  method_map_set_cell_height;
  method_map_get_cell_height;
  method_map_set_merge_rasterizer_cell_scale;
  method_map_get_merge_rasterizer_cell_scale;
  method_map_set_use_edge_connections;
  method_map_get_use_edge_connections;
  method_map_set_edge_connection_margin;
  method_map_get_edge_connection_margin;
  method_map_set_link_connection_radius;
  method_map_get_link_connection_radius;
  method_map_get_path;
  method_map_get_closest_point_to_segment;
  method_map_get_closest_point;
  method_map_get_closest_point_normal;
  method_map_get_closest_point_owner;
  method_map_get_links;
  method_map_get_regions;
  method_map_get_agents;
  method_map_get_obstacles;
  method_map_force_update;
  method_map_get_iteration_id;
  method_map_get_random_point;
  method_query_path;
  method_region_create;
  method_region_set_enabled;
  method_region_get_enabled;
  method_region_set_use_edge_connections;
  method_region_get_use_edge_connections;
  method_region_set_enter_cost;
  method_region_get_enter_cost;
  method_region_set_travel_cost;
  method_region_get_travel_cost;
  method_region_set_owner_id;
  method_region_get_owner_id;
  method_region_owns_point;
  method_region_set_map;
  method_region_get_map;
  method_region_set_navigation_layers;
  method_region_get_navigation_layers;
  method_region_set_transform;
  method_region_get_transform;
  method_region_set_navigation_mesh;
  method_region_bake_navigation_mesh;
  method_region_get_connections_count;
  method_region_get_connection_pathway_start;
  method_region_get_connection_pathway_end;
  method_region_get_random_point;
  method_link_create;
  method_link_set_map;
  method_link_get_map;
  method_link_set_enabled;
  method_link_get_enabled;
  method_link_set_bidirectional;
  method_link_is_bidirectional;
  method_link_set_navigation_layers;
  method_link_get_navigation_layers;
  method_link_set_start_position;
  method_link_get_start_position;
  method_link_set_end_position;
  method_link_get_end_position;
  method_link_set_enter_cost;
  method_link_get_enter_cost;
  method_link_set_travel_cost;
  method_link_get_travel_cost;
  method_link_set_owner_id;
  method_link_get_owner_id;
  method_agent_create;
  method_agent_set_avoidance_enabled;
  method_agent_get_avoidance_enabled;
  method_agent_set_use_3d_avoidance;
  method_agent_get_use_3d_avoidance;
  method_agent_set_map;
  method_agent_get_map;
  method_agent_set_paused;
  method_agent_get_paused;
  method_agent_set_neighbor_distance;
  method_agent_get_neighbor_distance;
  method_agent_set_max_neighbors;
  method_agent_get_max_neighbors;
  method_agent_set_time_horizon_agents;
  method_agent_get_time_horizon_agents;
  method_agent_set_time_horizon_obstacles;
  method_agent_get_time_horizon_obstacles;
  method_agent_set_radius;
  method_agent_get_radius;
  method_agent_set_height;
  method_agent_get_height;
  method_agent_set_max_speed;
  method_agent_get_max_speed;
  method_agent_set_velocity_forced;
  method_agent_set_velocity;
  method_agent_get_velocity;
  method_agent_set_position;
  method_agent_get_position;
  method_agent_is_map_changed;
  method_agent_set_avoidance_callback;
  method_agent_has_avoidance_callback;
  method_agent_set_avoidance_layers;
  method_agent_get_avoidance_layers;
  method_agent_set_avoidance_mask;
  method_agent_get_avoidance_mask;
  method_agent_set_avoidance_priority;
  method_agent_get_avoidance_priority;
  method_obstacle_create;
  method_obstacle_set_avoidance_enabled;
  method_obstacle_get_avoidance_enabled;
  method_obstacle_set_use_3d_avoidance;
  method_obstacle_get_use_3d_avoidance;
  method_obstacle_set_map;
  method_obstacle_get_map;
  method_obstacle_set_paused;
  method_obstacle_get_paused;
  method_obstacle_set_radius;
  method_obstacle_get_radius;
  method_obstacle_set_height;
  method_obstacle_get_height;
  method_obstacle_set_velocity;
  method_obstacle_get_velocity;
  method_obstacle_set_position;
  method_obstacle_get_position;
  method_obstacle_set_vertices;
  method_obstacle_get_vertices;
  method_obstacle_set_avoidance_layers;
  method_obstacle_get_avoidance_layers;
  method_parse_source_geometry_data;
  method_bake_from_source_geometry_data;
  method_bake_from_source_geometry_data_async;
  method_is_baking_navigation_mesh;
  method_source_geometry_parser_create;
  method_source_geometry_parser_set_callback;
  method_simplify_path;
  method_free_rid;
  method_set_active;
  method_set_debug_enabled;
  method_get_debug_enabled;
  method_get_process_info;
}class _NavigationServer3D extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("NavigationServer3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_maps() {
    if (!this._bindings.method_get_maps) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("get_maps");
      this._bindings.method_get_maps = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_map_create() {
    if (!this._bindings.method_map_create) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_create");
      this._bindings.method_map_create = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        529393457
      );
    }
  }
  static init_method_map_set_active() {
    if (!this._bindings.method_map_set_active) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_set_active");
      this._bindings.method_map_set_active = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1265174801
      );
    }
  }
  static init_method_map_is_active() {
    if (!this._bindings.method_map_is_active) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_is_active");
      this._bindings.method_map_is_active = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155700596
      );
    }
  }
  static init_method_map_set_up() {
    if (!this._bindings.method_map_set_up) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_set_up");
      this._bindings.method_map_set_up = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3227306858
      );
    }
  }
  static init_method_map_get_up() {
    if (!this._bindings.method_map_get_up) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_get_up");
      this._bindings.method_map_get_up = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        531438156
      );
    }
  }
  static init_method_map_set_cell_size() {
    if (!this._bindings.method_map_set_cell_size) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_set_cell_size");
      this._bindings.method_map_set_cell_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1794382983
      );
    }
  }
  static init_method_map_get_cell_size() {
    if (!this._bindings.method_map_get_cell_size) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_get_cell_size");
      this._bindings.method_map_get_cell_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        866169185
      );
    }
  }
  static init_method_map_set_cell_height() {
    if (!this._bindings.method_map_set_cell_height) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_set_cell_height");
      this._bindings.method_map_set_cell_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1794382983
      );
    }
  }
  static init_method_map_get_cell_height() {
    if (!this._bindings.method_map_get_cell_height) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_get_cell_height");
      this._bindings.method_map_get_cell_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        866169185
      );
    }
  }
  static init_method_map_set_merge_rasterizer_cell_scale() {
    if (!this._bindings.method_map_set_merge_rasterizer_cell_scale) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_set_merge_rasterizer_cell_scale");
      this._bindings.method_map_set_merge_rasterizer_cell_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1794382983
      );
    }
  }
  static init_method_map_get_merge_rasterizer_cell_scale() {
    if (!this._bindings.method_map_get_merge_rasterizer_cell_scale) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_get_merge_rasterizer_cell_scale");
      this._bindings.method_map_get_merge_rasterizer_cell_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        866169185
      );
    }
  }
  static init_method_map_set_use_edge_connections() {
    if (!this._bindings.method_map_set_use_edge_connections) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_set_use_edge_connections");
      this._bindings.method_map_set_use_edge_connections = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1265174801
      );
    }
  }
  static init_method_map_get_use_edge_connections() {
    if (!this._bindings.method_map_get_use_edge_connections) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_get_use_edge_connections");
      this._bindings.method_map_get_use_edge_connections = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155700596
      );
    }
  }
  static init_method_map_set_edge_connection_margin() {
    if (!this._bindings.method_map_set_edge_connection_margin) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_set_edge_connection_margin");
      this._bindings.method_map_set_edge_connection_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1794382983
      );
    }
  }
  static init_method_map_get_edge_connection_margin() {
    if (!this._bindings.method_map_get_edge_connection_margin) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_get_edge_connection_margin");
      this._bindings.method_map_get_edge_connection_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        866169185
      );
    }
  }
  static init_method_map_set_link_connection_radius() {
    if (!this._bindings.method_map_set_link_connection_radius) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_set_link_connection_radius");
      this._bindings.method_map_set_link_connection_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1794382983
      );
    }
  }
  static init_method_map_get_link_connection_radius() {
    if (!this._bindings.method_map_get_link_connection_radius) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_get_link_connection_radius");
      this._bindings.method_map_get_link_connection_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        866169185
      );
    }
  }
  static init_method_map_get_path() {
    if (!this._bindings.method_map_get_path) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_get_path");
      this._bindings.method_map_get_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1187418690
      );
    }
  }
  static init_method_map_get_closest_point_to_segment() {
    if (!this._bindings.method_map_get_closest_point_to_segment) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_get_closest_point_to_segment");
      this._bindings.method_map_get_closest_point_to_segment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3830095642
      );
    }
  }
  static init_method_map_get_closest_point() {
    if (!this._bindings.method_map_get_closest_point) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_get_closest_point");
      this._bindings.method_map_get_closest_point = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2056183332
      );
    }
  }
  static init_method_map_get_closest_point_normal() {
    if (!this._bindings.method_map_get_closest_point_normal) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_get_closest_point_normal");
      this._bindings.method_map_get_closest_point_normal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2056183332
      );
    }
  }
  static init_method_map_get_closest_point_owner() {
    if (!this._bindings.method_map_get_closest_point_owner) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_get_closest_point_owner");
      this._bindings.method_map_get_closest_point_owner = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        553364610
      );
    }
  }
  static init_method_map_get_links() {
    if (!this._bindings.method_map_get_links) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_get_links");
      this._bindings.method_map_get_links = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2684255073
      );
    }
  }
  static init_method_map_get_regions() {
    if (!this._bindings.method_map_get_regions) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_get_regions");
      this._bindings.method_map_get_regions = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2684255073
      );
    }
  }
  static init_method_map_get_agents() {
    if (!this._bindings.method_map_get_agents) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_get_agents");
      this._bindings.method_map_get_agents = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2684255073
      );
    }
  }
  static init_method_map_get_obstacles() {
    if (!this._bindings.method_map_get_obstacles) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_get_obstacles");
      this._bindings.method_map_get_obstacles = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2684255073
      );
    }
  }
  static init_method_map_force_update() {
    if (!this._bindings.method_map_force_update) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_force_update");
      this._bindings.method_map_force_update = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2722037293
      );
    }
  }
  static init_method_map_get_iteration_id() {
    if (!this._bindings.method_map_get_iteration_id) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_get_iteration_id");
      this._bindings.method_map_get_iteration_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2198884583
      );
    }
  }
  static init_method_map_get_random_point() {
    if (!this._bindings.method_map_get_random_point) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("map_get_random_point");
      this._bindings.method_map_get_random_point = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        722801526
      );
    }
  }
  static init_method_query_path() {
    if (!this._bindings.method_query_path) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("query_path");
      this._bindings.method_query_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3415008901
      );
    }
  }
  static init_method_region_create() {
    if (!this._bindings.method_region_create) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("region_create");
      this._bindings.method_region_create = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        529393457
      );
    }
  }
  static init_method_region_set_enabled() {
    if (!this._bindings.method_region_set_enabled) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("region_set_enabled");
      this._bindings.method_region_set_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1265174801
      );
    }
  }
  static init_method_region_get_enabled() {
    if (!this._bindings.method_region_get_enabled) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("region_get_enabled");
      this._bindings.method_region_get_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155700596
      );
    }
  }
  static init_method_region_set_use_edge_connections() {
    if (!this._bindings.method_region_set_use_edge_connections) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("region_set_use_edge_connections");
      this._bindings.method_region_set_use_edge_connections = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1265174801
      );
    }
  }
  static init_method_region_get_use_edge_connections() {
    if (!this._bindings.method_region_get_use_edge_connections) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("region_get_use_edge_connections");
      this._bindings.method_region_get_use_edge_connections = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155700596
      );
    }
  }
  static init_method_region_set_enter_cost() {
    if (!this._bindings.method_region_set_enter_cost) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("region_set_enter_cost");
      this._bindings.method_region_set_enter_cost = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1794382983
      );
    }
  }
  static init_method_region_get_enter_cost() {
    if (!this._bindings.method_region_get_enter_cost) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("region_get_enter_cost");
      this._bindings.method_region_get_enter_cost = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        866169185
      );
    }
  }
  static init_method_region_set_travel_cost() {
    if (!this._bindings.method_region_set_travel_cost) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("region_set_travel_cost");
      this._bindings.method_region_set_travel_cost = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1794382983
      );
    }
  }
  static init_method_region_get_travel_cost() {
    if (!this._bindings.method_region_get_travel_cost) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("region_get_travel_cost");
      this._bindings.method_region_get_travel_cost = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        866169185
      );
    }
  }
  static init_method_region_set_owner_id() {
    if (!this._bindings.method_region_set_owner_id) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("region_set_owner_id");
      this._bindings.method_region_set_owner_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3411492887
      );
    }
  }
  static init_method_region_get_owner_id() {
    if (!this._bindings.method_region_get_owner_id) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("region_get_owner_id");
      this._bindings.method_region_get_owner_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2198884583
      );
    }
  }
  static init_method_region_owns_point() {
    if (!this._bindings.method_region_owns_point) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("region_owns_point");
      this._bindings.method_region_owns_point = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2360011153
      );
    }
  }
  static init_method_region_set_map() {
    if (!this._bindings.method_region_set_map) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("region_set_map");
      this._bindings.method_region_set_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        395945892
      );
    }
  }
  static init_method_region_get_map() {
    if (!this._bindings.method_region_get_map) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("region_get_map");
      this._bindings.method_region_get_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3814569979
      );
    }
  }
  static init_method_region_set_navigation_layers() {
    if (!this._bindings.method_region_set_navigation_layers) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("region_set_navigation_layers");
      this._bindings.method_region_set_navigation_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3411492887
      );
    }
  }
  static init_method_region_get_navigation_layers() {
    if (!this._bindings.method_region_get_navigation_layers) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("region_get_navigation_layers");
      this._bindings.method_region_get_navigation_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2198884583
      );
    }
  }
  static init_method_region_set_transform() {
    if (!this._bindings.method_region_set_transform) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("region_set_transform");
      this._bindings.method_region_set_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3935195649
      );
    }
  }
  static init_method_region_get_transform() {
    if (!this._bindings.method_region_get_transform) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("region_get_transform");
      this._bindings.method_region_get_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1128465797
      );
    }
  }
  static init_method_region_set_navigation_mesh() {
    if (!this._bindings.method_region_set_navigation_mesh) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("region_set_navigation_mesh");
      this._bindings.method_region_set_navigation_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2764952978
      );
    }
  }
  static init_method_region_bake_navigation_mesh() {
    if (!this._bindings.method_region_bake_navigation_mesh) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("region_bake_navigation_mesh");
      this._bindings.method_region_bake_navigation_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1401173477
      );
    }
  }
  static init_method_region_get_connections_count() {
    if (!this._bindings.method_region_get_connections_count) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("region_get_connections_count");
      this._bindings.method_region_get_connections_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2198884583
      );
    }
  }
  static init_method_region_get_connection_pathway_start() {
    if (!this._bindings.method_region_get_connection_pathway_start) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("region_get_connection_pathway_start");
      this._bindings.method_region_get_connection_pathway_start = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3440143363
      );
    }
  }
  static init_method_region_get_connection_pathway_end() {
    if (!this._bindings.method_region_get_connection_pathway_end) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("region_get_connection_pathway_end");
      this._bindings.method_region_get_connection_pathway_end = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3440143363
      );
    }
  }
  static init_method_region_get_random_point() {
    if (!this._bindings.method_region_get_random_point) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("region_get_random_point");
      this._bindings.method_region_get_random_point = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        722801526
      );
    }
  }
  static init_method_link_create() {
    if (!this._bindings.method_link_create) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("link_create");
      this._bindings.method_link_create = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        529393457
      );
    }
  }
  static init_method_link_set_map() {
    if (!this._bindings.method_link_set_map) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("link_set_map");
      this._bindings.method_link_set_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        395945892
      );
    }
  }
  static init_method_link_get_map() {
    if (!this._bindings.method_link_get_map) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("link_get_map");
      this._bindings.method_link_get_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3814569979
      );
    }
  }
  static init_method_link_set_enabled() {
    if (!this._bindings.method_link_set_enabled) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("link_set_enabled");
      this._bindings.method_link_set_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1265174801
      );
    }
  }
  static init_method_link_get_enabled() {
    if (!this._bindings.method_link_get_enabled) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("link_get_enabled");
      this._bindings.method_link_get_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155700596
      );
    }
  }
  static init_method_link_set_bidirectional() {
    if (!this._bindings.method_link_set_bidirectional) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("link_set_bidirectional");
      this._bindings.method_link_set_bidirectional = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1265174801
      );
    }
  }
  static init_method_link_is_bidirectional() {
    if (!this._bindings.method_link_is_bidirectional) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("link_is_bidirectional");
      this._bindings.method_link_is_bidirectional = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155700596
      );
    }
  }
  static init_method_link_set_navigation_layers() {
    if (!this._bindings.method_link_set_navigation_layers) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("link_set_navigation_layers");
      this._bindings.method_link_set_navigation_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3411492887
      );
    }
  }
  static init_method_link_get_navigation_layers() {
    if (!this._bindings.method_link_get_navigation_layers) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("link_get_navigation_layers");
      this._bindings.method_link_get_navigation_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2198884583
      );
    }
  }
  static init_method_link_set_start_position() {
    if (!this._bindings.method_link_set_start_position) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("link_set_start_position");
      this._bindings.method_link_set_start_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3227306858
      );
    }
  }
  static init_method_link_get_start_position() {
    if (!this._bindings.method_link_get_start_position) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("link_get_start_position");
      this._bindings.method_link_get_start_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        531438156
      );
    }
  }
  static init_method_link_set_end_position() {
    if (!this._bindings.method_link_set_end_position) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("link_set_end_position");
      this._bindings.method_link_set_end_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3227306858
      );
    }
  }
  static init_method_link_get_end_position() {
    if (!this._bindings.method_link_get_end_position) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("link_get_end_position");
      this._bindings.method_link_get_end_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        531438156
      );
    }
  }
  static init_method_link_set_enter_cost() {
    if (!this._bindings.method_link_set_enter_cost) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("link_set_enter_cost");
      this._bindings.method_link_set_enter_cost = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1794382983
      );
    }
  }
  static init_method_link_get_enter_cost() {
    if (!this._bindings.method_link_get_enter_cost) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("link_get_enter_cost");
      this._bindings.method_link_get_enter_cost = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        866169185
      );
    }
  }
  static init_method_link_set_travel_cost() {
    if (!this._bindings.method_link_set_travel_cost) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("link_set_travel_cost");
      this._bindings.method_link_set_travel_cost = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1794382983
      );
    }
  }
  static init_method_link_get_travel_cost() {
    if (!this._bindings.method_link_get_travel_cost) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("link_get_travel_cost");
      this._bindings.method_link_get_travel_cost = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        866169185
      );
    }
  }
  static init_method_link_set_owner_id() {
    if (!this._bindings.method_link_set_owner_id) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("link_set_owner_id");
      this._bindings.method_link_set_owner_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3411492887
      );
    }
  }
  static init_method_link_get_owner_id() {
    if (!this._bindings.method_link_get_owner_id) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("link_get_owner_id");
      this._bindings.method_link_get_owner_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2198884583
      );
    }
  }
  static init_method_agent_create() {
    if (!this._bindings.method_agent_create) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_create");
      this._bindings.method_agent_create = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        529393457
      );
    }
  }
  static init_method_agent_set_avoidance_enabled() {
    if (!this._bindings.method_agent_set_avoidance_enabled) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_set_avoidance_enabled");
      this._bindings.method_agent_set_avoidance_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1265174801
      );
    }
  }
  static init_method_agent_get_avoidance_enabled() {
    if (!this._bindings.method_agent_get_avoidance_enabled) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_get_avoidance_enabled");
      this._bindings.method_agent_get_avoidance_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155700596
      );
    }
  }
  static init_method_agent_set_use_3d_avoidance() {
    if (!this._bindings.method_agent_set_use_3d_avoidance) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_set_use_3d_avoidance");
      this._bindings.method_agent_set_use_3d_avoidance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1265174801
      );
    }
  }
  static init_method_agent_get_use_3d_avoidance() {
    if (!this._bindings.method_agent_get_use_3d_avoidance) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_get_use_3d_avoidance");
      this._bindings.method_agent_get_use_3d_avoidance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155700596
      );
    }
  }
  static init_method_agent_set_map() {
    if (!this._bindings.method_agent_set_map) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_set_map");
      this._bindings.method_agent_set_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        395945892
      );
    }
  }
  static init_method_agent_get_map() {
    if (!this._bindings.method_agent_get_map) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_get_map");
      this._bindings.method_agent_get_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3814569979
      );
    }
  }
  static init_method_agent_set_paused() {
    if (!this._bindings.method_agent_set_paused) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_set_paused");
      this._bindings.method_agent_set_paused = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1265174801
      );
    }
  }
  static init_method_agent_get_paused() {
    if (!this._bindings.method_agent_get_paused) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_get_paused");
      this._bindings.method_agent_get_paused = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155700596
      );
    }
  }
  static init_method_agent_set_neighbor_distance() {
    if (!this._bindings.method_agent_set_neighbor_distance) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_set_neighbor_distance");
      this._bindings.method_agent_set_neighbor_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1794382983
      );
    }
  }
  static init_method_agent_get_neighbor_distance() {
    if (!this._bindings.method_agent_get_neighbor_distance) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_get_neighbor_distance");
      this._bindings.method_agent_get_neighbor_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        866169185
      );
    }
  }
  static init_method_agent_set_max_neighbors() {
    if (!this._bindings.method_agent_set_max_neighbors) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_set_max_neighbors");
      this._bindings.method_agent_set_max_neighbors = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3411492887
      );
    }
  }
  static init_method_agent_get_max_neighbors() {
    if (!this._bindings.method_agent_get_max_neighbors) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_get_max_neighbors");
      this._bindings.method_agent_get_max_neighbors = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2198884583
      );
    }
  }
  static init_method_agent_set_time_horizon_agents() {
    if (!this._bindings.method_agent_set_time_horizon_agents) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_set_time_horizon_agents");
      this._bindings.method_agent_set_time_horizon_agents = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1794382983
      );
    }
  }
  static init_method_agent_get_time_horizon_agents() {
    if (!this._bindings.method_agent_get_time_horizon_agents) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_get_time_horizon_agents");
      this._bindings.method_agent_get_time_horizon_agents = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        866169185
      );
    }
  }
  static init_method_agent_set_time_horizon_obstacles() {
    if (!this._bindings.method_agent_set_time_horizon_obstacles) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_set_time_horizon_obstacles");
      this._bindings.method_agent_set_time_horizon_obstacles = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1794382983
      );
    }
  }
  static init_method_agent_get_time_horizon_obstacles() {
    if (!this._bindings.method_agent_get_time_horizon_obstacles) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_get_time_horizon_obstacles");
      this._bindings.method_agent_get_time_horizon_obstacles = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        866169185
      );
    }
  }
  static init_method_agent_set_radius() {
    if (!this._bindings.method_agent_set_radius) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_set_radius");
      this._bindings.method_agent_set_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1794382983
      );
    }
  }
  static init_method_agent_get_radius() {
    if (!this._bindings.method_agent_get_radius) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_get_radius");
      this._bindings.method_agent_get_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        866169185
      );
    }
  }
  static init_method_agent_set_height() {
    if (!this._bindings.method_agent_set_height) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_set_height");
      this._bindings.method_agent_set_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1794382983
      );
    }
  }
  static init_method_agent_get_height() {
    if (!this._bindings.method_agent_get_height) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_get_height");
      this._bindings.method_agent_get_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        866169185
      );
    }
  }
  static init_method_agent_set_max_speed() {
    if (!this._bindings.method_agent_set_max_speed) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_set_max_speed");
      this._bindings.method_agent_set_max_speed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1794382983
      );
    }
  }
  static init_method_agent_get_max_speed() {
    if (!this._bindings.method_agent_get_max_speed) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_get_max_speed");
      this._bindings.method_agent_get_max_speed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        866169185
      );
    }
  }
  static init_method_agent_set_velocity_forced() {
    if (!this._bindings.method_agent_set_velocity_forced) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_set_velocity_forced");
      this._bindings.method_agent_set_velocity_forced = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3227306858
      );
    }
  }
  static init_method_agent_set_velocity() {
    if (!this._bindings.method_agent_set_velocity) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_set_velocity");
      this._bindings.method_agent_set_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3227306858
      );
    }
  }
  static init_method_agent_get_velocity() {
    if (!this._bindings.method_agent_get_velocity) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_get_velocity");
      this._bindings.method_agent_get_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        531438156
      );
    }
  }
  static init_method_agent_set_position() {
    if (!this._bindings.method_agent_set_position) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_set_position");
      this._bindings.method_agent_set_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3227306858
      );
    }
  }
  static init_method_agent_get_position() {
    if (!this._bindings.method_agent_get_position) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_get_position");
      this._bindings.method_agent_get_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        531438156
      );
    }
  }
  static init_method_agent_is_map_changed() {
    if (!this._bindings.method_agent_is_map_changed) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_is_map_changed");
      this._bindings.method_agent_is_map_changed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155700596
      );
    }
  }
  static init_method_agent_set_avoidance_callback() {
    if (!this._bindings.method_agent_set_avoidance_callback) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_set_avoidance_callback");
      this._bindings.method_agent_set_avoidance_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3379118538
      );
    }
  }
  static init_method_agent_has_avoidance_callback() {
    if (!this._bindings.method_agent_has_avoidance_callback) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_has_avoidance_callback");
      this._bindings.method_agent_has_avoidance_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155700596
      );
    }
  }
  static init_method_agent_set_avoidance_layers() {
    if (!this._bindings.method_agent_set_avoidance_layers) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_set_avoidance_layers");
      this._bindings.method_agent_set_avoidance_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3411492887
      );
    }
  }
  static init_method_agent_get_avoidance_layers() {
    if (!this._bindings.method_agent_get_avoidance_layers) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_get_avoidance_layers");
      this._bindings.method_agent_get_avoidance_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2198884583
      );
    }
  }
  static init_method_agent_set_avoidance_mask() {
    if (!this._bindings.method_agent_set_avoidance_mask) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_set_avoidance_mask");
      this._bindings.method_agent_set_avoidance_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3411492887
      );
    }
  }
  static init_method_agent_get_avoidance_mask() {
    if (!this._bindings.method_agent_get_avoidance_mask) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_get_avoidance_mask");
      this._bindings.method_agent_get_avoidance_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2198884583
      );
    }
  }
  static init_method_agent_set_avoidance_priority() {
    if (!this._bindings.method_agent_set_avoidance_priority) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_set_avoidance_priority");
      this._bindings.method_agent_set_avoidance_priority = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1794382983
      );
    }
  }
  static init_method_agent_get_avoidance_priority() {
    if (!this._bindings.method_agent_get_avoidance_priority) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("agent_get_avoidance_priority");
      this._bindings.method_agent_get_avoidance_priority = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        866169185
      );
    }
  }
  static init_method_obstacle_create() {
    if (!this._bindings.method_obstacle_create) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("obstacle_create");
      this._bindings.method_obstacle_create = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        529393457
      );
    }
  }
  static init_method_obstacle_set_avoidance_enabled() {
    if (!this._bindings.method_obstacle_set_avoidance_enabled) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("obstacle_set_avoidance_enabled");
      this._bindings.method_obstacle_set_avoidance_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1265174801
      );
    }
  }
  static init_method_obstacle_get_avoidance_enabled() {
    if (!this._bindings.method_obstacle_get_avoidance_enabled) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("obstacle_get_avoidance_enabled");
      this._bindings.method_obstacle_get_avoidance_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155700596
      );
    }
  }
  static init_method_obstacle_set_use_3d_avoidance() {
    if (!this._bindings.method_obstacle_set_use_3d_avoidance) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("obstacle_set_use_3d_avoidance");
      this._bindings.method_obstacle_set_use_3d_avoidance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1265174801
      );
    }
  }
  static init_method_obstacle_get_use_3d_avoidance() {
    if (!this._bindings.method_obstacle_get_use_3d_avoidance) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("obstacle_get_use_3d_avoidance");
      this._bindings.method_obstacle_get_use_3d_avoidance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155700596
      );
    }
  }
  static init_method_obstacle_set_map() {
    if (!this._bindings.method_obstacle_set_map) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("obstacle_set_map");
      this._bindings.method_obstacle_set_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        395945892
      );
    }
  }
  static init_method_obstacle_get_map() {
    if (!this._bindings.method_obstacle_get_map) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("obstacle_get_map");
      this._bindings.method_obstacle_get_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3814569979
      );
    }
  }
  static init_method_obstacle_set_paused() {
    if (!this._bindings.method_obstacle_set_paused) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("obstacle_set_paused");
      this._bindings.method_obstacle_set_paused = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1265174801
      );
    }
  }
  static init_method_obstacle_get_paused() {
    if (!this._bindings.method_obstacle_get_paused) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("obstacle_get_paused");
      this._bindings.method_obstacle_get_paused = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155700596
      );
    }
  }
  static init_method_obstacle_set_radius() {
    if (!this._bindings.method_obstacle_set_radius) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("obstacle_set_radius");
      this._bindings.method_obstacle_set_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1794382983
      );
    }
  }
  static init_method_obstacle_get_radius() {
    if (!this._bindings.method_obstacle_get_radius) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("obstacle_get_radius");
      this._bindings.method_obstacle_get_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        866169185
      );
    }
  }
  static init_method_obstacle_set_height() {
    if (!this._bindings.method_obstacle_set_height) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("obstacle_set_height");
      this._bindings.method_obstacle_set_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1794382983
      );
    }
  }
  static init_method_obstacle_get_height() {
    if (!this._bindings.method_obstacle_get_height) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("obstacle_get_height");
      this._bindings.method_obstacle_get_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        866169185
      );
    }
  }
  static init_method_obstacle_set_velocity() {
    if (!this._bindings.method_obstacle_set_velocity) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("obstacle_set_velocity");
      this._bindings.method_obstacle_set_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3227306858
      );
    }
  }
  static init_method_obstacle_get_velocity() {
    if (!this._bindings.method_obstacle_get_velocity) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("obstacle_get_velocity");
      this._bindings.method_obstacle_get_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        531438156
      );
    }
  }
  static init_method_obstacle_set_position() {
    if (!this._bindings.method_obstacle_set_position) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("obstacle_set_position");
      this._bindings.method_obstacle_set_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3227306858
      );
    }
  }
  static init_method_obstacle_get_position() {
    if (!this._bindings.method_obstacle_get_position) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("obstacle_get_position");
      this._bindings.method_obstacle_get_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        531438156
      );
    }
  }
  static init_method_obstacle_set_vertices() {
    if (!this._bindings.method_obstacle_set_vertices) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("obstacle_set_vertices");
      this._bindings.method_obstacle_set_vertices = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4030257846
      );
    }
  }
  static init_method_obstacle_get_vertices() {
    if (!this._bindings.method_obstacle_get_vertices) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("obstacle_get_vertices");
      this._bindings.method_obstacle_get_vertices = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        808965560
      );
    }
  }
  static init_method_obstacle_set_avoidance_layers() {
    if (!this._bindings.method_obstacle_set_avoidance_layers) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("obstacle_set_avoidance_layers");
      this._bindings.method_obstacle_set_avoidance_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3411492887
      );
    }
  }
  static init_method_obstacle_get_avoidance_layers() {
    if (!this._bindings.method_obstacle_get_avoidance_layers) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("obstacle_get_avoidance_layers");
      this._bindings.method_obstacle_get_avoidance_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2198884583
      );
    }
  }
  static init_method_parse_source_geometry_data() {
    if (!this._bindings.method_parse_source_geometry_data) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("parse_source_geometry_data");
      this._bindings.method_parse_source_geometry_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        685862123
      );
    }
  }
  static init_method_bake_from_source_geometry_data() {
    if (!this._bindings.method_bake_from_source_geometry_data) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("bake_from_source_geometry_data");
      this._bindings.method_bake_from_source_geometry_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2469318639
      );
    }
  }
  static init_method_bake_from_source_geometry_data_async() {
    if (!this._bindings.method_bake_from_source_geometry_data_async) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("bake_from_source_geometry_data_async");
      this._bindings.method_bake_from_source_geometry_data_async = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2469318639
      );
    }
  }
  static init_method_is_baking_navigation_mesh() {
    if (!this._bindings.method_is_baking_navigation_mesh) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("is_baking_navigation_mesh");
      this._bindings.method_is_baking_navigation_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3142026141
      );
    }
  }
  static init_method_source_geometry_parser_create() {
    if (!this._bindings.method_source_geometry_parser_create) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("source_geometry_parser_create");
      this._bindings.method_source_geometry_parser_create = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        529393457
      );
    }
  }
  static init_method_source_geometry_parser_set_callback() {
    if (!this._bindings.method_source_geometry_parser_set_callback) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("source_geometry_parser_set_callback");
      this._bindings.method_source_geometry_parser_set_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3379118538
      );
    }
  }
  static init_method_simplify_path() {
    if (!this._bindings.method_simplify_path) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("simplify_path");
      this._bindings.method_simplify_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2344122170
      );
    }
  }
  static init_method_free_rid() {
    if (!this._bindings.method_free_rid) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("free_rid");
      this._bindings.method_free_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2722037293
      );
    }
  }
  static init_method_set_active() {
    if (!this._bindings.method_set_active) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("set_active");
      this._bindings.method_set_active = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_set_debug_enabled() {
    if (!this._bindings.method_set_debug_enabled) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("set_debug_enabled");
      this._bindings.method_set_debug_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_debug_enabled() {
    if (!this._bindings.method_get_debug_enabled) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("get_debug_enabled");
      this._bindings.method_get_debug_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_process_info() {
    if (!this._bindings.method_get_process_info) {
      let classname = new StringName("NavigationServer3D");
      let methodname = new StringName("get_process_info");
      this._bindings.method_get_process_info = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1938440894
      );
    }
  }

  
  
  get_maps() {
    NavigationServer3D.init_method_get_maps();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_get_maps,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  map_create() {
    NavigationServer3D.init_method_map_create();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_map_create,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  map_set_active(_map, _active) {
    NavigationServer3D.init_method_map_set_active();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_map_set_active,
      this._owner,
      _map, _active
    );
    
  }
  map_is_active(_map) {
    NavigationServer3D.init_method_map_is_active();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_map_is_active,
      this._owner,
			Variant.Type.BOOL,
    
      _map
    );
    
  }
  map_set_up(_map, _up) {
    NavigationServer3D.init_method_map_set_up();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_map_set_up,
      this._owner,
      _map, _up
    );
    
  }
  map_get_up(_map) {
    NavigationServer3D.init_method_map_get_up();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_map_get_up,
      this._owner,
			Variant.Type.VECTOR3,
    
      _map
    );
    
  }
  map_set_cell_size(_map, _cell_size) {
    NavigationServer3D.init_method_map_set_cell_size();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_map_set_cell_size,
      this._owner,
      _map, _cell_size
    );
    
  }
  map_get_cell_size(_map) {
    NavigationServer3D.init_method_map_get_cell_size();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_map_get_cell_size,
      this._owner,
			Variant.Type.FLOAT,
    
      _map
    );
    
  }
  map_set_cell_height(_map, _cell_height) {
    NavigationServer3D.init_method_map_set_cell_height();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_map_set_cell_height,
      this._owner,
      _map, _cell_height
    );
    
  }
  map_get_cell_height(_map) {
    NavigationServer3D.init_method_map_get_cell_height();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_map_get_cell_height,
      this._owner,
			Variant.Type.FLOAT,
    
      _map
    );
    
  }
  map_set_merge_rasterizer_cell_scale(_map, _scale) {
    NavigationServer3D.init_method_map_set_merge_rasterizer_cell_scale();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_map_set_merge_rasterizer_cell_scale,
      this._owner,
      _map, _scale
    );
    
  }
  map_get_merge_rasterizer_cell_scale(_map) {
    NavigationServer3D.init_method_map_get_merge_rasterizer_cell_scale();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_map_get_merge_rasterizer_cell_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      _map
    );
    
  }
  map_set_use_edge_connections(_map, _enabled) {
    NavigationServer3D.init_method_map_set_use_edge_connections();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_map_set_use_edge_connections,
      this._owner,
      _map, _enabled
    );
    
  }
  map_get_use_edge_connections(_map) {
    NavigationServer3D.init_method_map_get_use_edge_connections();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_map_get_use_edge_connections,
      this._owner,
			Variant.Type.BOOL,
    
      _map
    );
    
  }
  map_set_edge_connection_margin(_map, _margin) {
    NavigationServer3D.init_method_map_set_edge_connection_margin();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_map_set_edge_connection_margin,
      this._owner,
      _map, _margin
    );
    
  }
  map_get_edge_connection_margin(_map) {
    NavigationServer3D.init_method_map_get_edge_connection_margin();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_map_get_edge_connection_margin,
      this._owner,
			Variant.Type.FLOAT,
    
      _map
    );
    
  }
  map_set_link_connection_radius(_map, _radius) {
    NavigationServer3D.init_method_map_set_link_connection_radius();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_map_set_link_connection_radius,
      this._owner,
      _map, _radius
    );
    
  }
  map_get_link_connection_radius(_map) {
    NavigationServer3D.init_method_map_get_link_connection_radius();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_map_get_link_connection_radius,
      this._owner,
			Variant.Type.FLOAT,
    
      _map
    );
    
  }
  map_get_path(_map, _origin, _destination, _optimize, _navigation_layers) {
    NavigationServer3D.init_method_map_get_path();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_map_get_path,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY,
    
      _map, _origin, _destination, _optimize, _navigation_layers
    );
    
  }
  map_get_closest_point_to_segment(_map, _start, _end, _use_collision) {
    NavigationServer3D.init_method_map_get_closest_point_to_segment();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_map_get_closest_point_to_segment,
      this._owner,
			Variant.Type.VECTOR3,
    
      _map, _start, _end, _use_collision
    );
    
  }
  map_get_closest_point(_map, _to_point) {
    NavigationServer3D.init_method_map_get_closest_point();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_map_get_closest_point,
      this._owner,
			Variant.Type.VECTOR3,
    
      _map, _to_point
    );
    
  }
  map_get_closest_point_normal(_map, _to_point) {
    NavigationServer3D.init_method_map_get_closest_point_normal();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_map_get_closest_point_normal,
      this._owner,
			Variant.Type.VECTOR3,
    
      _map, _to_point
    );
    
  }
  map_get_closest_point_owner(_map, _to_point) {
    NavigationServer3D.init_method_map_get_closest_point_owner();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_map_get_closest_point_owner,
      this._owner,
			Variant.Type.RID,
    
      _map, _to_point
    );
    
  }
  map_get_links(_map) {
    NavigationServer3D.init_method_map_get_links();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_map_get_links,
      this._owner,
			Variant.Type.ARRAY,
      _map
    );
    
  }
  map_get_regions(_map) {
    NavigationServer3D.init_method_map_get_regions();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_map_get_regions,
      this._owner,
			Variant.Type.ARRAY,
      _map
    );
    
  }
  map_get_agents(_map) {
    NavigationServer3D.init_method_map_get_agents();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_map_get_agents,
      this._owner,
			Variant.Type.ARRAY,
      _map
    );
    
  }
  map_get_obstacles(_map) {
    NavigationServer3D.init_method_map_get_obstacles();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_map_get_obstacles,
      this._owner,
			Variant.Type.ARRAY,
      _map
    );
    
  }
  map_force_update(_map) {
    NavigationServer3D.init_method_map_force_update();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_map_force_update,
      this._owner,
      _map
    );
    
  }
  map_get_iteration_id(_map) {
    NavigationServer3D.init_method_map_get_iteration_id();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_map_get_iteration_id,
      this._owner,
			Variant.Type.INT,
    
      _map
    );
    
  }
  map_get_random_point(_map, _navigation_layers, _uniformly) {
    NavigationServer3D.init_method_map_get_random_point();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_map_get_random_point,
      this._owner,
			Variant.Type.VECTOR3,
    
      _map, _navigation_layers, _uniformly
    );
    
  }
  query_path(_parameters, _result) {
    NavigationServer3D.init_method_query_path();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_query_path,
      this._owner,
      _parameters, _result
    );
    
  }
  region_create() {
    NavigationServer3D.init_method_region_create();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_region_create,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  region_set_enabled(_region, _enabled) {
    NavigationServer3D.init_method_region_set_enabled();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_region_set_enabled,
      this._owner,
      _region, _enabled
    );
    
  }
  region_get_enabled(_region) {
    NavigationServer3D.init_method_region_get_enabled();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_region_get_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      _region
    );
    
  }
  region_set_use_edge_connections(_region, _enabled) {
    NavigationServer3D.init_method_region_set_use_edge_connections();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_region_set_use_edge_connections,
      this._owner,
      _region, _enabled
    );
    
  }
  region_get_use_edge_connections(_region) {
    NavigationServer3D.init_method_region_get_use_edge_connections();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_region_get_use_edge_connections,
      this._owner,
			Variant.Type.BOOL,
    
      _region
    );
    
  }
  region_set_enter_cost(_region, _enter_cost) {
    NavigationServer3D.init_method_region_set_enter_cost();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_region_set_enter_cost,
      this._owner,
      _region, _enter_cost
    );
    
  }
  region_get_enter_cost(_region) {
    NavigationServer3D.init_method_region_get_enter_cost();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_region_get_enter_cost,
      this._owner,
			Variant.Type.FLOAT,
    
      _region
    );
    
  }
  region_set_travel_cost(_region, _travel_cost) {
    NavigationServer3D.init_method_region_set_travel_cost();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_region_set_travel_cost,
      this._owner,
      _region, _travel_cost
    );
    
  }
  region_get_travel_cost(_region) {
    NavigationServer3D.init_method_region_get_travel_cost();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_region_get_travel_cost,
      this._owner,
			Variant.Type.FLOAT,
    
      _region
    );
    
  }
  region_set_owner_id(_region, _owner_id) {
    NavigationServer3D.init_method_region_set_owner_id();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_region_set_owner_id,
      this._owner,
      _region, _owner_id
    );
    
  }
  region_get_owner_id(_region) {
    NavigationServer3D.init_method_region_get_owner_id();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_region_get_owner_id,
      this._owner,
			Variant.Type.INT,
    
      _region
    );
    
  }
  region_owns_point(_region, _point) {
    NavigationServer3D.init_method_region_owns_point();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_region_owns_point,
      this._owner,
			Variant.Type.BOOL,
    
      _region, _point
    );
    
  }
  region_set_map(_region, _map) {
    NavigationServer3D.init_method_region_set_map();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_region_set_map,
      this._owner,
      _region, _map
    );
    
  }
  region_get_map(_region) {
    NavigationServer3D.init_method_region_get_map();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_region_get_map,
      this._owner,
			Variant.Type.RID,
    
      _region
    );
    
  }
  region_set_navigation_layers(_region, _navigation_layers) {
    NavigationServer3D.init_method_region_set_navigation_layers();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_region_set_navigation_layers,
      this._owner,
      _region, _navigation_layers
    );
    
  }
  region_get_navigation_layers(_region) {
    NavigationServer3D.init_method_region_get_navigation_layers();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_region_get_navigation_layers,
      this._owner,
			Variant.Type.INT,
    
      _region
    );
    
  }
  region_set_transform(_region, _transform) {
    NavigationServer3D.init_method_region_set_transform();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_region_set_transform,
      this._owner,
      _region, _transform
    );
    
  }
  region_get_transform(_region) {
    NavigationServer3D.init_method_region_get_transform();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_region_get_transform,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      _region
    );
    
  }
  region_set_navigation_mesh(_region, _navigation_mesh) {
    NavigationServer3D.init_method_region_set_navigation_mesh();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_region_set_navigation_mesh,
      this._owner,
      _region, _navigation_mesh
    );
    
  }
  region_bake_navigation_mesh(_navigation_mesh, _root_node) {
    NavigationServer3D.init_method_region_bake_navigation_mesh();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_region_bake_navigation_mesh,
      this._owner,
      _navigation_mesh, _root_node
    );
    
  }
  region_get_connections_count(_region) {
    NavigationServer3D.init_method_region_get_connections_count();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_region_get_connections_count,
      this._owner,
			Variant.Type.INT,
    
      _region
    );
    
  }
  region_get_connection_pathway_start(_region, _connection) {
    NavigationServer3D.init_method_region_get_connection_pathway_start();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_region_get_connection_pathway_start,
      this._owner,
			Variant.Type.VECTOR3,
    
      _region, _connection
    );
    
  }
  region_get_connection_pathway_end(_region, _connection) {
    NavigationServer3D.init_method_region_get_connection_pathway_end();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_region_get_connection_pathway_end,
      this._owner,
			Variant.Type.VECTOR3,
    
      _region, _connection
    );
    
  }
  region_get_random_point(_region, _navigation_layers, _uniformly) {
    NavigationServer3D.init_method_region_get_random_point();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_region_get_random_point,
      this._owner,
			Variant.Type.VECTOR3,
    
      _region, _navigation_layers, _uniformly
    );
    
  }
  link_create() {
    NavigationServer3D.init_method_link_create();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_link_create,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  link_set_map(_link, _map) {
    NavigationServer3D.init_method_link_set_map();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_link_set_map,
      this._owner,
      _link, _map
    );
    
  }
  link_get_map(_link) {
    NavigationServer3D.init_method_link_get_map();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_link_get_map,
      this._owner,
			Variant.Type.RID,
    
      _link
    );
    
  }
  link_set_enabled(_link, _enabled) {
    NavigationServer3D.init_method_link_set_enabled();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_link_set_enabled,
      this._owner,
      _link, _enabled
    );
    
  }
  link_get_enabled(_link) {
    NavigationServer3D.init_method_link_get_enabled();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_link_get_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      _link
    );
    
  }
  link_set_bidirectional(_link, _bidirectional) {
    NavigationServer3D.init_method_link_set_bidirectional();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_link_set_bidirectional,
      this._owner,
      _link, _bidirectional
    );
    
  }
  link_is_bidirectional(_link) {
    NavigationServer3D.init_method_link_is_bidirectional();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_link_is_bidirectional,
      this._owner,
			Variant.Type.BOOL,
    
      _link
    );
    
  }
  link_set_navigation_layers(_link, _navigation_layers) {
    NavigationServer3D.init_method_link_set_navigation_layers();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_link_set_navigation_layers,
      this._owner,
      _link, _navigation_layers
    );
    
  }
  link_get_navigation_layers(_link) {
    NavigationServer3D.init_method_link_get_navigation_layers();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_link_get_navigation_layers,
      this._owner,
			Variant.Type.INT,
    
      _link
    );
    
  }
  link_set_start_position(_link, _position) {
    NavigationServer3D.init_method_link_set_start_position();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_link_set_start_position,
      this._owner,
      _link, _position
    );
    
  }
  link_get_start_position(_link) {
    NavigationServer3D.init_method_link_get_start_position();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_link_get_start_position,
      this._owner,
			Variant.Type.VECTOR3,
    
      _link
    );
    
  }
  link_set_end_position(_link, _position) {
    NavigationServer3D.init_method_link_set_end_position();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_link_set_end_position,
      this._owner,
      _link, _position
    );
    
  }
  link_get_end_position(_link) {
    NavigationServer3D.init_method_link_get_end_position();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_link_get_end_position,
      this._owner,
			Variant.Type.VECTOR3,
    
      _link
    );
    
  }
  link_set_enter_cost(_link, _enter_cost) {
    NavigationServer3D.init_method_link_set_enter_cost();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_link_set_enter_cost,
      this._owner,
      _link, _enter_cost
    );
    
  }
  link_get_enter_cost(_link) {
    NavigationServer3D.init_method_link_get_enter_cost();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_link_get_enter_cost,
      this._owner,
			Variant.Type.FLOAT,
    
      _link
    );
    
  }
  link_set_travel_cost(_link, _travel_cost) {
    NavigationServer3D.init_method_link_set_travel_cost();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_link_set_travel_cost,
      this._owner,
      _link, _travel_cost
    );
    
  }
  link_get_travel_cost(_link) {
    NavigationServer3D.init_method_link_get_travel_cost();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_link_get_travel_cost,
      this._owner,
			Variant.Type.FLOAT,
    
      _link
    );
    
  }
  link_set_owner_id(_link, _owner_id) {
    NavigationServer3D.init_method_link_set_owner_id();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_link_set_owner_id,
      this._owner,
      _link, _owner_id
    );
    
  }
  link_get_owner_id(_link) {
    NavigationServer3D.init_method_link_get_owner_id();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_link_get_owner_id,
      this._owner,
			Variant.Type.INT,
    
      _link
    );
    
  }
  agent_create() {
    NavigationServer3D.init_method_agent_create();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_agent_create,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  agent_set_avoidance_enabled(_agent, _enabled) {
    NavigationServer3D.init_method_agent_set_avoidance_enabled();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_agent_set_avoidance_enabled,
      this._owner,
      _agent, _enabled
    );
    
  }
  agent_get_avoidance_enabled(_agent) {
    NavigationServer3D.init_method_agent_get_avoidance_enabled();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_agent_get_avoidance_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      _agent
    );
    
  }
  agent_set_use_3d_avoidance(_agent, _enabled) {
    NavigationServer3D.init_method_agent_set_use_3d_avoidance();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_agent_set_use_3d_avoidance,
      this._owner,
      _agent, _enabled
    );
    
  }
  agent_get_use_3d_avoidance(_agent) {
    NavigationServer3D.init_method_agent_get_use_3d_avoidance();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_agent_get_use_3d_avoidance,
      this._owner,
			Variant.Type.BOOL,
    
      _agent
    );
    
  }
  agent_set_map(_agent, _map) {
    NavigationServer3D.init_method_agent_set_map();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_agent_set_map,
      this._owner,
      _agent, _map
    );
    
  }
  agent_get_map(_agent) {
    NavigationServer3D.init_method_agent_get_map();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_agent_get_map,
      this._owner,
			Variant.Type.RID,
    
      _agent
    );
    
  }
  agent_set_paused(_agent, _paused) {
    NavigationServer3D.init_method_agent_set_paused();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_agent_set_paused,
      this._owner,
      _agent, _paused
    );
    
  }
  agent_get_paused(_agent) {
    NavigationServer3D.init_method_agent_get_paused();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_agent_get_paused,
      this._owner,
			Variant.Type.BOOL,
    
      _agent
    );
    
  }
  agent_set_neighbor_distance(_agent, _distance) {
    NavigationServer3D.init_method_agent_set_neighbor_distance();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_agent_set_neighbor_distance,
      this._owner,
      _agent, _distance
    );
    
  }
  agent_get_neighbor_distance(_agent) {
    NavigationServer3D.init_method_agent_get_neighbor_distance();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_agent_get_neighbor_distance,
      this._owner,
			Variant.Type.FLOAT,
    
      _agent
    );
    
  }
  agent_set_max_neighbors(_agent, _count) {
    NavigationServer3D.init_method_agent_set_max_neighbors();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_agent_set_max_neighbors,
      this._owner,
      _agent, _count
    );
    
  }
  agent_get_max_neighbors(_agent) {
    NavigationServer3D.init_method_agent_get_max_neighbors();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_agent_get_max_neighbors,
      this._owner,
			Variant.Type.INT,
    
      _agent
    );
    
  }
  agent_set_time_horizon_agents(_agent, _time_horizon) {
    NavigationServer3D.init_method_agent_set_time_horizon_agents();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_agent_set_time_horizon_agents,
      this._owner,
      _agent, _time_horizon
    );
    
  }
  agent_get_time_horizon_agents(_agent) {
    NavigationServer3D.init_method_agent_get_time_horizon_agents();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_agent_get_time_horizon_agents,
      this._owner,
			Variant.Type.FLOAT,
    
      _agent
    );
    
  }
  agent_set_time_horizon_obstacles(_agent, _time_horizon) {
    NavigationServer3D.init_method_agent_set_time_horizon_obstacles();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_agent_set_time_horizon_obstacles,
      this._owner,
      _agent, _time_horizon
    );
    
  }
  agent_get_time_horizon_obstacles(_agent) {
    NavigationServer3D.init_method_agent_get_time_horizon_obstacles();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_agent_get_time_horizon_obstacles,
      this._owner,
			Variant.Type.FLOAT,
    
      _agent
    );
    
  }
  agent_set_radius(_agent, _radius) {
    NavigationServer3D.init_method_agent_set_radius();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_agent_set_radius,
      this._owner,
      _agent, _radius
    );
    
  }
  agent_get_radius(_agent) {
    NavigationServer3D.init_method_agent_get_radius();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_agent_get_radius,
      this._owner,
			Variant.Type.FLOAT,
    
      _agent
    );
    
  }
  agent_set_height(_agent, _height) {
    NavigationServer3D.init_method_agent_set_height();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_agent_set_height,
      this._owner,
      _agent, _height
    );
    
  }
  agent_get_height(_agent) {
    NavigationServer3D.init_method_agent_get_height();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_agent_get_height,
      this._owner,
			Variant.Type.FLOAT,
    
      _agent
    );
    
  }
  agent_set_max_speed(_agent, _max_speed) {
    NavigationServer3D.init_method_agent_set_max_speed();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_agent_set_max_speed,
      this._owner,
      _agent, _max_speed
    );
    
  }
  agent_get_max_speed(_agent) {
    NavigationServer3D.init_method_agent_get_max_speed();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_agent_get_max_speed,
      this._owner,
			Variant.Type.FLOAT,
    
      _agent
    );
    
  }
  agent_set_velocity_forced(_agent, _velocity) {
    NavigationServer3D.init_method_agent_set_velocity_forced();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_agent_set_velocity_forced,
      this._owner,
      _agent, _velocity
    );
    
  }
  agent_set_velocity(_agent, _velocity) {
    NavigationServer3D.init_method_agent_set_velocity();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_agent_set_velocity,
      this._owner,
      _agent, _velocity
    );
    
  }
  agent_get_velocity(_agent) {
    NavigationServer3D.init_method_agent_get_velocity();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_agent_get_velocity,
      this._owner,
			Variant.Type.VECTOR3,
    
      _agent
    );
    
  }
  agent_set_position(_agent, _position) {
    NavigationServer3D.init_method_agent_set_position();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_agent_set_position,
      this._owner,
      _agent, _position
    );
    
  }
  agent_get_position(_agent) {
    NavigationServer3D.init_method_agent_get_position();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_agent_get_position,
      this._owner,
			Variant.Type.VECTOR3,
    
      _agent
    );
    
  }
  agent_is_map_changed(_agent) {
    NavigationServer3D.init_method_agent_is_map_changed();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_agent_is_map_changed,
      this._owner,
			Variant.Type.BOOL,
    
      _agent
    );
    
  }
  agent_set_avoidance_callback(_agent, _callback) {
    NavigationServer3D.init_method_agent_set_avoidance_callback();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_agent_set_avoidance_callback,
      this._owner,
      _agent, _callback
    );
    
  }
  agent_has_avoidance_callback(_agent) {
    NavigationServer3D.init_method_agent_has_avoidance_callback();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_agent_has_avoidance_callback,
      this._owner,
			Variant.Type.BOOL,
    
      _agent
    );
    
  }
  agent_set_avoidance_layers(_agent, _layers) {
    NavigationServer3D.init_method_agent_set_avoidance_layers();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_agent_set_avoidance_layers,
      this._owner,
      _agent, _layers
    );
    
  }
  agent_get_avoidance_layers(_agent) {
    NavigationServer3D.init_method_agent_get_avoidance_layers();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_agent_get_avoidance_layers,
      this._owner,
			Variant.Type.INT,
    
      _agent
    );
    
  }
  agent_set_avoidance_mask(_agent, _mask) {
    NavigationServer3D.init_method_agent_set_avoidance_mask();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_agent_set_avoidance_mask,
      this._owner,
      _agent, _mask
    );
    
  }
  agent_get_avoidance_mask(_agent) {
    NavigationServer3D.init_method_agent_get_avoidance_mask();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_agent_get_avoidance_mask,
      this._owner,
			Variant.Type.INT,
    
      _agent
    );
    
  }
  agent_set_avoidance_priority(_agent, _priority) {
    NavigationServer3D.init_method_agent_set_avoidance_priority();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_agent_set_avoidance_priority,
      this._owner,
      _agent, _priority
    );
    
  }
  agent_get_avoidance_priority(_agent) {
    NavigationServer3D.init_method_agent_get_avoidance_priority();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_agent_get_avoidance_priority,
      this._owner,
			Variant.Type.FLOAT,
    
      _agent
    );
    
  }
  obstacle_create() {
    NavigationServer3D.init_method_obstacle_create();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_obstacle_create,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  obstacle_set_avoidance_enabled(_obstacle, _enabled) {
    NavigationServer3D.init_method_obstacle_set_avoidance_enabled();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_obstacle_set_avoidance_enabled,
      this._owner,
      _obstacle, _enabled
    );
    
  }
  obstacle_get_avoidance_enabled(_obstacle) {
    NavigationServer3D.init_method_obstacle_get_avoidance_enabled();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_obstacle_get_avoidance_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      _obstacle
    );
    
  }
  obstacle_set_use_3d_avoidance(_obstacle, _enabled) {
    NavigationServer3D.init_method_obstacle_set_use_3d_avoidance();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_obstacle_set_use_3d_avoidance,
      this._owner,
      _obstacle, _enabled
    );
    
  }
  obstacle_get_use_3d_avoidance(_obstacle) {
    NavigationServer3D.init_method_obstacle_get_use_3d_avoidance();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_obstacle_get_use_3d_avoidance,
      this._owner,
			Variant.Type.BOOL,
    
      _obstacle
    );
    
  }
  obstacle_set_map(_obstacle, _map) {
    NavigationServer3D.init_method_obstacle_set_map();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_obstacle_set_map,
      this._owner,
      _obstacle, _map
    );
    
  }
  obstacle_get_map(_obstacle) {
    NavigationServer3D.init_method_obstacle_get_map();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_obstacle_get_map,
      this._owner,
			Variant.Type.RID,
    
      _obstacle
    );
    
  }
  obstacle_set_paused(_obstacle, _paused) {
    NavigationServer3D.init_method_obstacle_set_paused();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_obstacle_set_paused,
      this._owner,
      _obstacle, _paused
    );
    
  }
  obstacle_get_paused(_obstacle) {
    NavigationServer3D.init_method_obstacle_get_paused();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_obstacle_get_paused,
      this._owner,
			Variant.Type.BOOL,
    
      _obstacle
    );
    
  }
  obstacle_set_radius(_obstacle, _radius) {
    NavigationServer3D.init_method_obstacle_set_radius();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_obstacle_set_radius,
      this._owner,
      _obstacle, _radius
    );
    
  }
  obstacle_get_radius(_obstacle) {
    NavigationServer3D.init_method_obstacle_get_radius();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_obstacle_get_radius,
      this._owner,
			Variant.Type.FLOAT,
    
      _obstacle
    );
    
  }
  obstacle_set_height(_obstacle, _height) {
    NavigationServer3D.init_method_obstacle_set_height();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_obstacle_set_height,
      this._owner,
      _obstacle, _height
    );
    
  }
  obstacle_get_height(_obstacle) {
    NavigationServer3D.init_method_obstacle_get_height();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_obstacle_get_height,
      this._owner,
			Variant.Type.FLOAT,
    
      _obstacle
    );
    
  }
  obstacle_set_velocity(_obstacle, _velocity) {
    NavigationServer3D.init_method_obstacle_set_velocity();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_obstacle_set_velocity,
      this._owner,
      _obstacle, _velocity
    );
    
  }
  obstacle_get_velocity(_obstacle) {
    NavigationServer3D.init_method_obstacle_get_velocity();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_obstacle_get_velocity,
      this._owner,
			Variant.Type.VECTOR3,
    
      _obstacle
    );
    
  }
  obstacle_set_position(_obstacle, _position) {
    NavigationServer3D.init_method_obstacle_set_position();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_obstacle_set_position,
      this._owner,
      _obstacle, _position
    );
    
  }
  obstacle_get_position(_obstacle) {
    NavigationServer3D.init_method_obstacle_get_position();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_obstacle_get_position,
      this._owner,
			Variant.Type.VECTOR3,
    
      _obstacle
    );
    
  }
  obstacle_set_vertices(_obstacle, _vertices) {
    NavigationServer3D.init_method_obstacle_set_vertices();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_obstacle_set_vertices,
      this._owner,
      _obstacle, _vertices
    );
    
  }
  obstacle_get_vertices(_obstacle) {
    NavigationServer3D.init_method_obstacle_get_vertices();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_obstacle_get_vertices,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY,
    
      _obstacle
    );
    
  }
  obstacle_set_avoidance_layers(_obstacle, _layers) {
    NavigationServer3D.init_method_obstacle_set_avoidance_layers();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_obstacle_set_avoidance_layers,
      this._owner,
      _obstacle, _layers
    );
    
  }
  obstacle_get_avoidance_layers(_obstacle) {
    NavigationServer3D.init_method_obstacle_get_avoidance_layers();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_obstacle_get_avoidance_layers,
      this._owner,
			Variant.Type.INT,
    
      _obstacle
    );
    
  }
  parse_source_geometry_data(_navigation_mesh, _source_geometry_data, _root_node, _callback) {
    NavigationServer3D.init_method_parse_source_geometry_data();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_parse_source_geometry_data,
      this._owner,
      _navigation_mesh, _source_geometry_data, _root_node, _callback
    );
    
  }
  bake_from_source_geometry_data(_navigation_mesh, _source_geometry_data, _callback) {
    NavigationServer3D.init_method_bake_from_source_geometry_data();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_bake_from_source_geometry_data,
      this._owner,
      _navigation_mesh, _source_geometry_data, _callback
    );
    
  }
  bake_from_source_geometry_data_async(_navigation_mesh, _source_geometry_data, _callback) {
    NavigationServer3D.init_method_bake_from_source_geometry_data_async();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_bake_from_source_geometry_data_async,
      this._owner,
      _navigation_mesh, _source_geometry_data, _callback
    );
    
  }
  is_baking_navigation_mesh(_navigation_mesh) {
    NavigationServer3D.init_method_is_baking_navigation_mesh();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_is_baking_navigation_mesh,
      this._owner,
			Variant.Type.BOOL,
    
      _navigation_mesh
    );
    
  }
  source_geometry_parser_create() {
    NavigationServer3D.init_method_source_geometry_parser_create();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_source_geometry_parser_create,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  source_geometry_parser_set_callback(_parser, _callback) {
    NavigationServer3D.init_method_source_geometry_parser_set_callback();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_source_geometry_parser_set_callback,
      this._owner,
      _parser, _callback
    );
    
  }
  simplify_path(_path, _epsilon) {
    NavigationServer3D.init_method_simplify_path();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_simplify_path,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY,
    
      _path, _epsilon
    );
    
  }
  free_rid(_rid) {
    NavigationServer3D.init_method_free_rid();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_free_rid,
      this._owner,
      _rid
    );
    
  }
  set_active(_active) {
    NavigationServer3D.init_method_set_active();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_set_active,
      this._owner,
      _active
    );
    
  }
  set_debug_enabled(_enabled) {
    NavigationServer3D.init_method_set_debug_enabled();
    return _call_native_mb_no_ret(
      _NavigationServer3D._bindings.method_set_debug_enabled,
      this._owner,
      _enabled
    );
    
  }
  get_debug_enabled() {
    NavigationServer3D.init_method_get_debug_enabled();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_get_debug_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_process_info(_process_info) {
    NavigationServer3D.init_method_get_process_info();
    return _call_native_mb_ret(
      _NavigationServer3D._bindings.method_get_process_info,
      this._owner,
			Variant.Type.INT,
    
      _process_info
    );
    
  }
  

  static ProcessInfo = {
    INFO_ACTIVE_MAPS: 0,
    INFO_REGION_COUNT: 1,
    INFO_AGENT_COUNT: 2,
    INFO_LINK_COUNT: 3,
    INFO_POLYGON_COUNT: 4,
    INFO_EDGE_COUNT: 5,
    INFO_EDGE_MERGE_COUNT: 6,
    INFO_EDGE_CONNECTION_COUNT: 7,
    INFO_EDGE_FREE_COUNT: 8,
  }
}
export const NavigationServer3D = (function () {
  let _instance;
  function create_instance() {
    return new _NavigationServer3D();
  }
  return {
    instance: function () {
      if (!_instance) {
        _instance = create_instance();
      }
      return _instance;
    },
  };
})();