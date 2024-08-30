import * as internal from '__internal__';
import { GodotObject } from 'src/js_godot/classes/godot_object'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { StringName } from 'src/js_godot/variant/string_name'
import { Transform2D } from 'src/js_godot/variant/transform2d'
import { Callable } from 'src/js_godot/variant/callable'
import { RID } from 'src/js_godot/variant/rid'
import { PackedVector2Array } from 'src/js_godot/variant/packed_vector2_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_get_maps;
    method_map_create;
    method_map_set_active;
    method_map_is_active;
    method_map_set_cell_size;
    method_map_get_cell_size;
    method_map_set_use_edge_connections;
    method_map_get_use_edge_connections;
    method_map_set_edge_connection_margin;
    method_map_get_edge_connection_margin;
    method_map_set_link_connection_radius;
    method_map_get_link_connection_radius;
    method_map_get_path;
    method_map_get_closest_point;
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
    method_region_set_navigation_polygon;
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
    method_obstacle_set_map;
    method_obstacle_get_map;
    method_obstacle_set_paused;
    method_obstacle_get_paused;
    method_obstacle_set_radius;
    method_obstacle_get_radius;
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
    method_is_baking_navigation_polygon;
    method_source_geometry_parser_create;
    method_source_geometry_parser_set_callback;
    method_simplify_path;
    method_free_rid;
    method_set_debug_enabled;
    method_get_debug_enabled;
}

export const NavigationServer2D = new _NavigationServer2D();

class _NavigationServer2D extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("NavigationServer2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("get_maps");
        this._bindings.method_get_maps = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3995934104
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("map_create");
        this._bindings.method_map_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("map_set_active");
        this._bindings.method_map_set_active = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("map_is_active");
        this._bindings.method_map_is_active = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155700596
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("map_set_cell_size");
        this._bindings.method_map_set_cell_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("map_get_cell_size");
        this._bindings.method_map_get_cell_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          866169185
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("map_set_use_edge_connections");
        this._bindings.method_map_set_use_edge_connections = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("map_get_use_edge_connections");
        this._bindings.method_map_get_use_edge_connections = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155700596
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("map_set_edge_connection_margin");
        this._bindings.method_map_set_edge_connection_margin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("map_get_edge_connection_margin");
        this._bindings.method_map_get_edge_connection_margin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          866169185
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("map_set_link_connection_radius");
        this._bindings.method_map_set_link_connection_radius = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("map_get_link_connection_radius");
        this._bindings.method_map_get_link_connection_radius = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          866169185
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("map_get_path");
        this._bindings.method_map_get_path = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3146466012
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("map_get_closest_point");
        this._bindings.method_map_get_closest_point = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1358334418
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("map_get_closest_point_owner");
        this._bindings.method_map_get_closest_point_owner = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1353467510
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("map_get_links");
        this._bindings.method_map_get_links = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2684255073
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("map_get_regions");
        this._bindings.method_map_get_regions = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2684255073
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("map_get_agents");
        this._bindings.method_map_get_agents = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2684255073
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("map_get_obstacles");
        this._bindings.method_map_get_obstacles = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2684255073
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("map_force_update");
        this._bindings.method_map_force_update = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("map_get_iteration_id");
        this._bindings.method_map_get_iteration_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("map_get_random_point");
        this._bindings.method_map_get_random_point = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3271000763
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("query_path");
        this._bindings.method_query_path = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3394638789
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("region_create");
        this._bindings.method_region_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("region_set_enabled");
        this._bindings.method_region_set_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("region_get_enabled");
        this._bindings.method_region_get_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155700596
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("region_set_use_edge_connections");
        this._bindings.method_region_set_use_edge_connections = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("region_get_use_edge_connections");
        this._bindings.method_region_get_use_edge_connections = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155700596
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("region_set_enter_cost");
        this._bindings.method_region_set_enter_cost = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("region_get_enter_cost");
        this._bindings.method_region_get_enter_cost = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          866169185
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("region_set_travel_cost");
        this._bindings.method_region_set_travel_cost = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("region_get_travel_cost");
        this._bindings.method_region_get_travel_cost = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          866169185
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("region_set_owner_id");
        this._bindings.method_region_set_owner_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("region_get_owner_id");
        this._bindings.method_region_get_owner_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("region_owns_point");
        this._bindings.method_region_owns_point = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          219849798
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("region_set_map");
        this._bindings.method_region_set_map = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("region_get_map");
        this._bindings.method_region_get_map = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3814569979
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("region_set_navigation_layers");
        this._bindings.method_region_set_navigation_layers = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("region_get_navigation_layers");
        this._bindings.method_region_get_navigation_layers = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("region_set_transform");
        this._bindings.method_region_set_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1246044741
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("region_get_transform");
        this._bindings.method_region_get_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          213527486
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("region_set_navigation_polygon");
        this._bindings.method_region_set_navigation_polygon = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3633623451
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("region_get_connections_count");
        this._bindings.method_region_get_connections_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("region_get_connection_pathway_start");
        this._bindings.method_region_get_connection_pathway_start = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2546185844
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("region_get_connection_pathway_end");
        this._bindings.method_region_get_connection_pathway_end = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2546185844
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("region_get_random_point");
        this._bindings.method_region_get_random_point = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3271000763
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("link_create");
        this._bindings.method_link_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("link_set_map");
        this._bindings.method_link_set_map = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("link_get_map");
        this._bindings.method_link_get_map = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3814569979
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("link_set_enabled");
        this._bindings.method_link_set_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("link_get_enabled");
        this._bindings.method_link_get_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155700596
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("link_set_bidirectional");
        this._bindings.method_link_set_bidirectional = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("link_is_bidirectional");
        this._bindings.method_link_is_bidirectional = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155700596
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("link_set_navigation_layers");
        this._bindings.method_link_set_navigation_layers = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("link_get_navigation_layers");
        this._bindings.method_link_get_navigation_layers = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("link_set_start_position");
        this._bindings.method_link_set_start_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3201125042
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("link_get_start_position");
        this._bindings.method_link_get_start_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2440833711
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("link_set_end_position");
        this._bindings.method_link_set_end_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3201125042
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("link_get_end_position");
        this._bindings.method_link_get_end_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2440833711
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("link_set_enter_cost");
        this._bindings.method_link_set_enter_cost = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("link_get_enter_cost");
        this._bindings.method_link_get_enter_cost = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          866169185
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("link_set_travel_cost");
        this._bindings.method_link_set_travel_cost = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("link_get_travel_cost");
        this._bindings.method_link_get_travel_cost = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          866169185
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("link_set_owner_id");
        this._bindings.method_link_set_owner_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("link_get_owner_id");
        this._bindings.method_link_get_owner_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_create");
        this._bindings.method_agent_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_set_avoidance_enabled");
        this._bindings.method_agent_set_avoidance_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_get_avoidance_enabled");
        this._bindings.method_agent_get_avoidance_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155700596
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_set_map");
        this._bindings.method_agent_set_map = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_get_map");
        this._bindings.method_agent_get_map = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3814569979
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_set_paused");
        this._bindings.method_agent_set_paused = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_get_paused");
        this._bindings.method_agent_get_paused = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155700596
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_set_neighbor_distance");
        this._bindings.method_agent_set_neighbor_distance = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_get_neighbor_distance");
        this._bindings.method_agent_get_neighbor_distance = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          866169185
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_set_max_neighbors");
        this._bindings.method_agent_set_max_neighbors = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_get_max_neighbors");
        this._bindings.method_agent_get_max_neighbors = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_set_time_horizon_agents");
        this._bindings.method_agent_set_time_horizon_agents = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_get_time_horizon_agents");
        this._bindings.method_agent_get_time_horizon_agents = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          866169185
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_set_time_horizon_obstacles");
        this._bindings.method_agent_set_time_horizon_obstacles = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_get_time_horizon_obstacles");
        this._bindings.method_agent_get_time_horizon_obstacles = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          866169185
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_set_radius");
        this._bindings.method_agent_set_radius = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_get_radius");
        this._bindings.method_agent_get_radius = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          866169185
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_set_max_speed");
        this._bindings.method_agent_set_max_speed = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_get_max_speed");
        this._bindings.method_agent_get_max_speed = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          866169185
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_set_velocity_forced");
        this._bindings.method_agent_set_velocity_forced = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3201125042
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_set_velocity");
        this._bindings.method_agent_set_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3201125042
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_get_velocity");
        this._bindings.method_agent_get_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2440833711
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_set_position");
        this._bindings.method_agent_set_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3201125042
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_get_position");
        this._bindings.method_agent_get_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2440833711
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_is_map_changed");
        this._bindings.method_agent_is_map_changed = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155700596
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_set_avoidance_callback");
        this._bindings.method_agent_set_avoidance_callback = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3379118538
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_has_avoidance_callback");
        this._bindings.method_agent_has_avoidance_callback = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155700596
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_set_avoidance_layers");
        this._bindings.method_agent_set_avoidance_layers = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_get_avoidance_layers");
        this._bindings.method_agent_get_avoidance_layers = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_set_avoidance_mask");
        this._bindings.method_agent_set_avoidance_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_get_avoidance_mask");
        this._bindings.method_agent_get_avoidance_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_set_avoidance_priority");
        this._bindings.method_agent_set_avoidance_priority = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("agent_get_avoidance_priority");
        this._bindings.method_agent_get_avoidance_priority = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          866169185
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("obstacle_create");
        this._bindings.method_obstacle_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("obstacle_set_avoidance_enabled");
        this._bindings.method_obstacle_set_avoidance_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("obstacle_get_avoidance_enabled");
        this._bindings.method_obstacle_get_avoidance_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155700596
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("obstacle_set_map");
        this._bindings.method_obstacle_set_map = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("obstacle_get_map");
        this._bindings.method_obstacle_get_map = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3814569979
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("obstacle_set_paused");
        this._bindings.method_obstacle_set_paused = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("obstacle_get_paused");
        this._bindings.method_obstacle_get_paused = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155700596
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("obstacle_set_radius");
        this._bindings.method_obstacle_set_radius = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("obstacle_get_radius");
        this._bindings.method_obstacle_get_radius = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          866169185
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("obstacle_set_velocity");
        this._bindings.method_obstacle_set_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3201125042
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("obstacle_get_velocity");
        this._bindings.method_obstacle_get_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2440833711
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("obstacle_set_position");
        this._bindings.method_obstacle_set_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3201125042
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("obstacle_get_position");
        this._bindings.method_obstacle_get_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2440833711
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("obstacle_set_vertices");
        this._bindings.method_obstacle_set_vertices = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          29476483
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("obstacle_get_vertices");
        this._bindings.method_obstacle_get_vertices = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2222557395
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("obstacle_set_avoidance_layers");
        this._bindings.method_obstacle_set_avoidance_layers = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("obstacle_get_avoidance_layers");
        this._bindings.method_obstacle_get_avoidance_layers = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("parse_source_geometry_data");
        this._bindings.method_parse_source_geometry_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1176164995
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("bake_from_source_geometry_data");
        this._bindings.method_bake_from_source_geometry_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2909414286
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("bake_from_source_geometry_data_async");
        this._bindings.method_bake_from_source_geometry_data_async = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2909414286
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("is_baking_navigation_polygon");
        this._bindings.method_is_baking_navigation_polygon = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3729405808
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("source_geometry_parser_create");
        this._bindings.method_source_geometry_parser_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("source_geometry_parser_set_callback");
        this._bindings.method_source_geometry_parser_set_callback = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3379118538
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("simplify_path");
        this._bindings.method_simplify_path = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2457191505
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("free_rid");
        this._bindings.method_free_rid = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("set_debug_enabled");
        this._bindings.method_set_debug_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("NavigationServer2D");
        let methodname = new StringName("get_debug_enabled");
        this._bindings.method_get_debug_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
  }
  get_maps() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_maps,
      this._owner,
			Variant.INT,
      
    );
    
  }
  map_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_map_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  map_set_active(_map, _active) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_map_set_active,
      this._owner,
      _map, _active
    );
    
  }
  map_is_active(_map) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_map_is_active,
      this._owner,
			Variant.Type.BOOL,
      _map
    );
    
  }
  map_set_cell_size(_map, _cell_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_map_set_cell_size,
      this._owner,
      _map, _cell_size
    );
    
  }
  map_get_cell_size(_map) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_map_get_cell_size,
      this._owner,
			Variant.Type.FLOAT,
      _map
    );
    
  }
  map_set_use_edge_connections(_map, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_map_set_use_edge_connections,
      this._owner,
      _map, _enabled
    );
    
  }
  map_get_use_edge_connections(_map) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_map_get_use_edge_connections,
      this._owner,
			Variant.Type.BOOL,
      _map
    );
    
  }
  map_set_edge_connection_margin(_map, _margin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_map_set_edge_connection_margin,
      this._owner,
      _map, _margin
    );
    
  }
  map_get_edge_connection_margin(_map) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_map_get_edge_connection_margin,
      this._owner,
			Variant.Type.FLOAT,
      _map
    );
    
  }
  map_set_link_connection_radius(_map, _radius) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_map_set_link_connection_radius,
      this._owner,
      _map, _radius
    );
    
  }
  map_get_link_connection_radius(_map) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_map_get_link_connection_radius,
      this._owner,
			Variant.Type.FLOAT,
      _map
    );
    
  }
  map_get_path(_map, _origin, _destination, _optimize, _navigation_layers) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_map_get_path,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY
    ,
      _map, _origin, _destination, _optimize, _navigation_layers
    );
    
  }
  map_get_closest_point(_map, _to_point) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_map_get_closest_point,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _map, _to_point
    );
    
  }
  map_get_closest_point_owner(_map, _to_point) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_map_get_closest_point_owner,
      this._owner,
			Variant.Type.RID
    ,
      _map, _to_point
    );
    
  }
  map_get_links(_map) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_map_get_links,
      this._owner,
			Variant.INT,
      _map
    );
    
  }
  map_get_regions(_map) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_map_get_regions,
      this._owner,
			Variant.INT,
      _map
    );
    
  }
  map_get_agents(_map) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_map_get_agents,
      this._owner,
			Variant.INT,
      _map
    );
    
  }
  map_get_obstacles(_map) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_map_get_obstacles,
      this._owner,
			Variant.INT,
      _map
    );
    
  }
  map_force_update(_map) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_map_force_update,
      this._owner,
      _map
    );
    
  }
  map_get_iteration_id(_map) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_map_get_iteration_id,
      this._owner,
			Variant.Type.INT,
      _map
    );
    
  }
  map_get_random_point(_map, _navigation_layers, _uniformly) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_map_get_random_point,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _map, _navigation_layers, _uniformly
    );
    
  }
  query_path(_parameters, _result) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_query_path,
      this._owner,
      _parameters, _result
    );
    
  }
  region_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_region_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  region_set_enabled(_region, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_region_set_enabled,
      this._owner,
      _region, _enabled
    );
    
  }
  region_get_enabled(_region) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_region_get_enabled,
      this._owner,
			Variant.Type.BOOL,
      _region
    );
    
  }
  region_set_use_edge_connections(_region, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_region_set_use_edge_connections,
      this._owner,
      _region, _enabled
    );
    
  }
  region_get_use_edge_connections(_region) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_region_get_use_edge_connections,
      this._owner,
			Variant.Type.BOOL,
      _region
    );
    
  }
  region_set_enter_cost(_region, _enter_cost) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_region_set_enter_cost,
      this._owner,
      _region, _enter_cost
    );
    
  }
  region_get_enter_cost(_region) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_region_get_enter_cost,
      this._owner,
			Variant.Type.FLOAT,
      _region
    );
    
  }
  region_set_travel_cost(_region, _travel_cost) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_region_set_travel_cost,
      this._owner,
      _region, _travel_cost
    );
    
  }
  region_get_travel_cost(_region) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_region_get_travel_cost,
      this._owner,
			Variant.Type.FLOAT,
      _region
    );
    
  }
  region_set_owner_id(_region, _owner_id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_region_set_owner_id,
      this._owner,
      _region, _owner_id
    );
    
  }
  region_get_owner_id(_region) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_region_get_owner_id,
      this._owner,
			Variant.Type.INT,
      _region
    );
    
  }
  region_owns_point(_region, _point) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_region_owns_point,
      this._owner,
			Variant.Type.BOOL,
      _region, _point
    );
    
  }
  region_set_map(_region, _map) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_region_set_map,
      this._owner,
      _region, _map
    );
    
  }
  region_get_map(_region) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_region_get_map,
      this._owner,
			Variant.Type.RID
    ,
      _region
    );
    
  }
  region_set_navigation_layers(_region, _navigation_layers) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_region_set_navigation_layers,
      this._owner,
      _region, _navigation_layers
    );
    
  }
  region_get_navigation_layers(_region) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_region_get_navigation_layers,
      this._owner,
			Variant.Type.INT,
      _region
    );
    
  }
  region_set_transform(_region, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_region_set_transform,
      this._owner,
      _region, _transform
    );
    
  }
  region_get_transform(_region) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_region_get_transform,
      this._owner,
			Variant.Type.TRANSFORM2D
    ,
      _region
    );
    
  }
  region_set_navigation_polygon(_region, _navigation_polygon) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_region_set_navigation_polygon,
      this._owner,
      _region, _navigation_polygon
    );
    
  }
  region_get_connections_count(_region) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_region_get_connections_count,
      this._owner,
			Variant.Type.INT,
      _region
    );
    
  }
  region_get_connection_pathway_start(_region, _connection) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_region_get_connection_pathway_start,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _region, _connection
    );
    
  }
  region_get_connection_pathway_end(_region, _connection) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_region_get_connection_pathway_end,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _region, _connection
    );
    
  }
  region_get_random_point(_region, _navigation_layers, _uniformly) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_region_get_random_point,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _region, _navigation_layers, _uniformly
    );
    
  }
  link_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_link_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  link_set_map(_link, _map) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_link_set_map,
      this._owner,
      _link, _map
    );
    
  }
  link_get_map(_link) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_link_get_map,
      this._owner,
			Variant.Type.RID
    ,
      _link
    );
    
  }
  link_set_enabled(_link, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_link_set_enabled,
      this._owner,
      _link, _enabled
    );
    
  }
  link_get_enabled(_link) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_link_get_enabled,
      this._owner,
			Variant.Type.BOOL,
      _link
    );
    
  }
  link_set_bidirectional(_link, _bidirectional) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_link_set_bidirectional,
      this._owner,
      _link, _bidirectional
    );
    
  }
  link_is_bidirectional(_link) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_link_is_bidirectional,
      this._owner,
			Variant.Type.BOOL,
      _link
    );
    
  }
  link_set_navigation_layers(_link, _navigation_layers) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_link_set_navigation_layers,
      this._owner,
      _link, _navigation_layers
    );
    
  }
  link_get_navigation_layers(_link) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_link_get_navigation_layers,
      this._owner,
			Variant.Type.INT,
      _link
    );
    
  }
  link_set_start_position(_link, _position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_link_set_start_position,
      this._owner,
      _link, _position
    );
    
  }
  link_get_start_position(_link) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_link_get_start_position,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _link
    );
    
  }
  link_set_end_position(_link, _position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_link_set_end_position,
      this._owner,
      _link, _position
    );
    
  }
  link_get_end_position(_link) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_link_get_end_position,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _link
    );
    
  }
  link_set_enter_cost(_link, _enter_cost) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_link_set_enter_cost,
      this._owner,
      _link, _enter_cost
    );
    
  }
  link_get_enter_cost(_link) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_link_get_enter_cost,
      this._owner,
			Variant.Type.FLOAT,
      _link
    );
    
  }
  link_set_travel_cost(_link, _travel_cost) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_link_set_travel_cost,
      this._owner,
      _link, _travel_cost
    );
    
  }
  link_get_travel_cost(_link) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_link_get_travel_cost,
      this._owner,
			Variant.Type.FLOAT,
      _link
    );
    
  }
  link_set_owner_id(_link, _owner_id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_link_set_owner_id,
      this._owner,
      _link, _owner_id
    );
    
  }
  link_get_owner_id(_link) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_link_get_owner_id,
      this._owner,
			Variant.Type.INT,
      _link
    );
    
  }
  agent_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_agent_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  agent_set_avoidance_enabled(_agent, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_agent_set_avoidance_enabled,
      this._owner,
      _agent, _enabled
    );
    
  }
  agent_get_avoidance_enabled(_agent) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_agent_get_avoidance_enabled,
      this._owner,
			Variant.Type.BOOL,
      _agent
    );
    
  }
  agent_set_map(_agent, _map) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_agent_set_map,
      this._owner,
      _agent, _map
    );
    
  }
  agent_get_map(_agent) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_agent_get_map,
      this._owner,
			Variant.Type.RID
    ,
      _agent
    );
    
  }
  agent_set_paused(_agent, _paused) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_agent_set_paused,
      this._owner,
      _agent, _paused
    );
    
  }
  agent_get_paused(_agent) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_agent_get_paused,
      this._owner,
			Variant.Type.BOOL,
      _agent
    );
    
  }
  agent_set_neighbor_distance(_agent, _distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_agent_set_neighbor_distance,
      this._owner,
      _agent, _distance
    );
    
  }
  agent_get_neighbor_distance(_agent) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_agent_get_neighbor_distance,
      this._owner,
			Variant.Type.FLOAT,
      _agent
    );
    
  }
  agent_set_max_neighbors(_agent, _count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_agent_set_max_neighbors,
      this._owner,
      _agent, _count
    );
    
  }
  agent_get_max_neighbors(_agent) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_agent_get_max_neighbors,
      this._owner,
			Variant.Type.INT,
      _agent
    );
    
  }
  agent_set_time_horizon_agents(_agent, _time_horizon) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_agent_set_time_horizon_agents,
      this._owner,
      _agent, _time_horizon
    );
    
  }
  agent_get_time_horizon_agents(_agent) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_agent_get_time_horizon_agents,
      this._owner,
			Variant.Type.FLOAT,
      _agent
    );
    
  }
  agent_set_time_horizon_obstacles(_agent, _time_horizon) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_agent_set_time_horizon_obstacles,
      this._owner,
      _agent, _time_horizon
    );
    
  }
  agent_get_time_horizon_obstacles(_agent) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_agent_get_time_horizon_obstacles,
      this._owner,
			Variant.Type.FLOAT,
      _agent
    );
    
  }
  agent_set_radius(_agent, _radius) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_agent_set_radius,
      this._owner,
      _agent, _radius
    );
    
  }
  agent_get_radius(_agent) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_agent_get_radius,
      this._owner,
			Variant.Type.FLOAT,
      _agent
    );
    
  }
  agent_set_max_speed(_agent, _max_speed) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_agent_set_max_speed,
      this._owner,
      _agent, _max_speed
    );
    
  }
  agent_get_max_speed(_agent) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_agent_get_max_speed,
      this._owner,
			Variant.Type.FLOAT,
      _agent
    );
    
  }
  agent_set_velocity_forced(_agent, _velocity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_agent_set_velocity_forced,
      this._owner,
      _agent, _velocity
    );
    
  }
  agent_set_velocity(_agent, _velocity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_agent_set_velocity,
      this._owner,
      _agent, _velocity
    );
    
  }
  agent_get_velocity(_agent) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_agent_get_velocity,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _agent
    );
    
  }
  agent_set_position(_agent, _position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_agent_set_position,
      this._owner,
      _agent, _position
    );
    
  }
  agent_get_position(_agent) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_agent_get_position,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _agent
    );
    
  }
  agent_is_map_changed(_agent) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_agent_is_map_changed,
      this._owner,
			Variant.Type.BOOL,
      _agent
    );
    
  }
  agent_set_avoidance_callback(_agent, _callback) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_agent_set_avoidance_callback,
      this._owner,
      _agent, _callback
    );
    
  }
  agent_has_avoidance_callback(_agent) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_agent_has_avoidance_callback,
      this._owner,
			Variant.Type.BOOL,
      _agent
    );
    
  }
  agent_set_avoidance_layers(_agent, _layers) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_agent_set_avoidance_layers,
      this._owner,
      _agent, _layers
    );
    
  }
  agent_get_avoidance_layers(_agent) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_agent_get_avoidance_layers,
      this._owner,
			Variant.Type.INT,
      _agent
    );
    
  }
  agent_set_avoidance_mask(_agent, _mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_agent_set_avoidance_mask,
      this._owner,
      _agent, _mask
    );
    
  }
  agent_get_avoidance_mask(_agent) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_agent_get_avoidance_mask,
      this._owner,
			Variant.Type.INT,
      _agent
    );
    
  }
  agent_set_avoidance_priority(_agent, _priority) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_agent_set_avoidance_priority,
      this._owner,
      _agent, _priority
    );
    
  }
  agent_get_avoidance_priority(_agent) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_agent_get_avoidance_priority,
      this._owner,
			Variant.Type.FLOAT,
      _agent
    );
    
  }
  obstacle_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_obstacle_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  obstacle_set_avoidance_enabled(_obstacle, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_obstacle_set_avoidance_enabled,
      this._owner,
      _obstacle, _enabled
    );
    
  }
  obstacle_get_avoidance_enabled(_obstacle) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_obstacle_get_avoidance_enabled,
      this._owner,
			Variant.Type.BOOL,
      _obstacle
    );
    
  }
  obstacle_set_map(_obstacle, _map) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_obstacle_set_map,
      this._owner,
      _obstacle, _map
    );
    
  }
  obstacle_get_map(_obstacle) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_obstacle_get_map,
      this._owner,
			Variant.Type.RID
    ,
      _obstacle
    );
    
  }
  obstacle_set_paused(_obstacle, _paused) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_obstacle_set_paused,
      this._owner,
      _obstacle, _paused
    );
    
  }
  obstacle_get_paused(_obstacle) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_obstacle_get_paused,
      this._owner,
			Variant.Type.BOOL,
      _obstacle
    );
    
  }
  obstacle_set_radius(_obstacle, _radius) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_obstacle_set_radius,
      this._owner,
      _obstacle, _radius
    );
    
  }
  obstacle_get_radius(_obstacle) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_obstacle_get_radius,
      this._owner,
			Variant.Type.FLOAT,
      _obstacle
    );
    
  }
  obstacle_set_velocity(_obstacle, _velocity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_obstacle_set_velocity,
      this._owner,
      _obstacle, _velocity
    );
    
  }
  obstacle_get_velocity(_obstacle) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_obstacle_get_velocity,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _obstacle
    );
    
  }
  obstacle_set_position(_obstacle, _position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_obstacle_set_position,
      this._owner,
      _obstacle, _position
    );
    
  }
  obstacle_get_position(_obstacle) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_obstacle_get_position,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _obstacle
    );
    
  }
  obstacle_set_vertices(_obstacle, _vertices) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_obstacle_set_vertices,
      this._owner,
      _obstacle, _vertices
    );
    
  }
  obstacle_get_vertices(_obstacle) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_obstacle_get_vertices,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY
    ,
      _obstacle
    );
    
  }
  obstacle_set_avoidance_layers(_obstacle, _layers) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_obstacle_set_avoidance_layers,
      this._owner,
      _obstacle, _layers
    );
    
  }
  obstacle_get_avoidance_layers(_obstacle) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_obstacle_get_avoidance_layers,
      this._owner,
			Variant.Type.INT,
      _obstacle
    );
    
  }
  parse_source_geometry_data(_navigation_polygon, _source_geometry_data, _root_node, _callback) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_parse_source_geometry_data,
      this._owner,
      _navigation_polygon, _source_geometry_data, _root_node, _callback
    );
    
  }
  bake_from_source_geometry_data(_navigation_polygon, _source_geometry_data, _callback) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_bake_from_source_geometry_data,
      this._owner,
      _navigation_polygon, _source_geometry_data, _callback
    );
    
  }
  bake_from_source_geometry_data_async(_navigation_polygon, _source_geometry_data, _callback) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_bake_from_source_geometry_data_async,
      this._owner,
      _navigation_polygon, _source_geometry_data, _callback
    );
    
  }
  is_baking_navigation_polygon(_navigation_polygon) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_baking_navigation_polygon,
      this._owner,
			Variant.Type.BOOL,
      _navigation_polygon
    );
    
  }
  source_geometry_parser_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_source_geometry_parser_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  source_geometry_parser_set_callback(_parser, _callback) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_source_geometry_parser_set_callback,
      this._owner,
      _parser, _callback
    );
    
  }
  simplify_path(_path, _epsilon) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_simplify_path,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY
    ,
      _path, _epsilon
    );
    
  }
  free_rid(_rid) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_free_rid,
      this._owner,
      _rid
    );
    
  }
  set_debug_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_debug_enabled,
      this._owner,
      _enabled
    );
    
  }
  get_debug_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_debug_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
}