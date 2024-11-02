
import { Node } from "@godot/classes/node";
import { GodotObject } from "@godot/classes/godot_object";
import { NavigationMeshSourceGeometryData3D } from "@godot/classes/navigation_mesh_source_geometry_data3d";
import { NavigationPathQueryResult3D } from "@godot/classes/navigation_path_query_result3d";
import { NavigationMesh } from "@godot/classes/navigation_mesh";
import { NavigationPathQueryParameters3D } from "@godot/classes/navigation_path_query_parameters3d";


export declare class NavigationServer3D extends GodotObject{
  public get_maps(): GDArray;
  public map_create(): RID;
  public map_set_active(_map: RID, _active: boolean): void;
  public map_is_active(_map: RID): boolean;
  public map_set_up(_map: RID, _up: Vector3): void;
  public map_get_up(_map: RID): Vector3;
  public map_set_cell_size(_map: RID, _cell_size: number): void;
  public map_get_cell_size(_map: RID): number;
  public map_set_cell_height(_map: RID, _cell_height: number): void;
  public map_get_cell_height(_map: RID): number;
  public map_set_merge_rasterizer_cell_scale(_map: RID, _scale: number): void;
  public map_get_merge_rasterizer_cell_scale(_map: RID): number;
  public map_set_use_edge_connections(_map: RID, _enabled: boolean): void;
  public map_get_use_edge_connections(_map: RID): boolean;
  public map_set_edge_connection_margin(_map: RID, _margin: number): void;
  public map_get_edge_connection_margin(_map: RID): number;
  public map_set_link_connection_radius(_map: RID, _radius: number): void;
  public map_get_link_connection_radius(_map: RID): number;
  public map_get_path(_map: RID, _origin: Vector3, _destination: Vector3, _optimize: boolean, _navigation_layers: number): PackedVector3Array;
  public map_get_closest_point_to_segment(_map: RID, _start: Vector3, _end: Vector3, _use_collision: boolean): Vector3;
  public map_get_closest_point(_map: RID, _to_point: Vector3): Vector3;
  public map_get_closest_point_normal(_map: RID, _to_point: Vector3): Vector3;
  public map_get_closest_point_owner(_map: RID, _to_point: Vector3): RID;
  public map_get_links(_map: RID): GDArray;
  public map_get_regions(_map: RID): GDArray;
  public map_get_agents(_map: RID): GDArray;
  public map_get_obstacles(_map: RID): GDArray;
  public map_force_update(_map: RID): void;
  public map_get_iteration_id(_map: RID): number;
  public map_get_random_point(_map: RID, _navigation_layers: number, _uniformly: boolean): Vector3;
  public query_path(_parameters: NavigationPathQueryParameters3D, _result: NavigationPathQueryResult3D): void;
  public region_create(): RID;
  public region_set_enabled(_region: RID, _enabled: boolean): void;
  public region_get_enabled(_region: RID): boolean;
  public region_set_use_edge_connections(_region: RID, _enabled: boolean): void;
  public region_get_use_edge_connections(_region: RID): boolean;
  public region_set_enter_cost(_region: RID, _enter_cost: number): void;
  public region_get_enter_cost(_region: RID): number;
  public region_set_travel_cost(_region: RID, _travel_cost: number): void;
  public region_get_travel_cost(_region: RID): number;
  public region_set_owner_id(_region: RID, _owner_id: number): void;
  public region_get_owner_id(_region: RID): number;
  public region_owns_point(_region: RID, _point: Vector3): boolean;
  public region_set_map(_region: RID, _map: RID): void;
  public region_get_map(_region: RID): RID;
  public region_set_navigation_layers(_region: RID, _navigation_layers: number): void;
  public region_get_navigation_layers(_region: RID): number;
  public region_set_transform(_region: RID, _transform: Transform3D): void;
  public region_get_transform(_region: RID): Transform3D;
  public region_set_navigation_mesh(_region: RID, _navigation_mesh: NavigationMesh): void;
  public region_bake_navigation_mesh(_navigation_mesh: NavigationMesh, _root_node: Node): void;
  public region_get_connections_count(_region: RID): number;
  public region_get_connection_pathway_start(_region: RID, _connection: number): Vector3;
  public region_get_connection_pathway_end(_region: RID, _connection: number): Vector3;
  public region_get_random_point(_region: RID, _navigation_layers: number, _uniformly: boolean): Vector3;
  public link_create(): RID;
  public link_set_map(_link: RID, _map: RID): void;
  public link_get_map(_link: RID): RID;
  public link_set_enabled(_link: RID, _enabled: boolean): void;
  public link_get_enabled(_link: RID): boolean;
  public link_set_bidirectional(_link: RID, _bidirectional: boolean): void;
  public link_is_bidirectional(_link: RID): boolean;
  public link_set_navigation_layers(_link: RID, _navigation_layers: number): void;
  public link_get_navigation_layers(_link: RID): number;
  public link_set_start_position(_link: RID, _position: Vector3): void;
  public link_get_start_position(_link: RID): Vector3;
  public link_set_end_position(_link: RID, _position: Vector3): void;
  public link_get_end_position(_link: RID): Vector3;
  public link_set_enter_cost(_link: RID, _enter_cost: number): void;
  public link_get_enter_cost(_link: RID): number;
  public link_set_travel_cost(_link: RID, _travel_cost: number): void;
  public link_get_travel_cost(_link: RID): number;
  public link_set_owner_id(_link: RID, _owner_id: number): void;
  public link_get_owner_id(_link: RID): number;
  public agent_create(): RID;
  public agent_set_avoidance_enabled(_agent: RID, _enabled: boolean): void;
  public agent_get_avoidance_enabled(_agent: RID): boolean;
  public agent_set_use_3d_avoidance(_agent: RID, _enabled: boolean): void;
  public agent_get_use_3d_avoidance(_agent: RID): boolean;
  public agent_set_map(_agent: RID, _map: RID): void;
  public agent_get_map(_agent: RID): RID;
  public agent_set_paused(_agent: RID, _paused: boolean): void;
  public agent_get_paused(_agent: RID): boolean;
  public agent_set_neighbor_distance(_agent: RID, _distance: number): void;
  public agent_get_neighbor_distance(_agent: RID): number;
  public agent_set_max_neighbors(_agent: RID, _count: number): void;
  public agent_get_max_neighbors(_agent: RID): number;
  public agent_set_time_horizon_agents(_agent: RID, _time_horizon: number): void;
  public agent_get_time_horizon_agents(_agent: RID): number;
  public agent_set_time_horizon_obstacles(_agent: RID, _time_horizon: number): void;
  public agent_get_time_horizon_obstacles(_agent: RID): number;
  public agent_set_radius(_agent: RID, _radius: number): void;
  public agent_get_radius(_agent: RID): number;
  public agent_set_height(_agent: RID, _height: number): void;
  public agent_get_height(_agent: RID): number;
  public agent_set_max_speed(_agent: RID, _max_speed: number): void;
  public agent_get_max_speed(_agent: RID): number;
  public agent_set_velocity_forced(_agent: RID, _velocity: Vector3): void;
  public agent_set_velocity(_agent: RID, _velocity: Vector3): void;
  public agent_get_velocity(_agent: RID): Vector3;
  public agent_set_position(_agent: RID, _position: Vector3): void;
  public agent_get_position(_agent: RID): Vector3;
  public agent_is_map_changed(_agent: RID): boolean;
  public agent_set_avoidance_callback(_agent: RID, _callback: Callable): void;
  public agent_has_avoidance_callback(_agent: RID): boolean;
  public agent_set_avoidance_layers(_agent: RID, _layers: number): void;
  public agent_get_avoidance_layers(_agent: RID): number;
  public agent_set_avoidance_mask(_agent: RID, _mask: number): void;
  public agent_get_avoidance_mask(_agent: RID): number;
  public agent_set_avoidance_priority(_agent: RID, _priority: number): void;
  public agent_get_avoidance_priority(_agent: RID): number;
  public obstacle_create(): RID;
  public obstacle_set_avoidance_enabled(_obstacle: RID, _enabled: boolean): void;
  public obstacle_get_avoidance_enabled(_obstacle: RID): boolean;
  public obstacle_set_use_3d_avoidance(_obstacle: RID, _enabled: boolean): void;
  public obstacle_get_use_3d_avoidance(_obstacle: RID): boolean;
  public obstacle_set_map(_obstacle: RID, _map: RID): void;
  public obstacle_get_map(_obstacle: RID): RID;
  public obstacle_set_paused(_obstacle: RID, _paused: boolean): void;
  public obstacle_get_paused(_obstacle: RID): boolean;
  public obstacle_set_radius(_obstacle: RID, _radius: number): void;
  public obstacle_get_radius(_obstacle: RID): number;
  public obstacle_set_height(_obstacle: RID, _height: number): void;
  public obstacle_get_height(_obstacle: RID): number;
  public obstacle_set_velocity(_obstacle: RID, _velocity: Vector3): void;
  public obstacle_get_velocity(_obstacle: RID): Vector3;
  public obstacle_set_position(_obstacle: RID, _position: Vector3): void;
  public obstacle_get_position(_obstacle: RID): Vector3;
  public obstacle_set_vertices(_obstacle: RID, _vertices: PackedVector3Array): void;
  public obstacle_get_vertices(_obstacle: RID): PackedVector3Array;
  public obstacle_set_avoidance_layers(_obstacle: RID, _layers: number): void;
  public obstacle_get_avoidance_layers(_obstacle: RID): number;
  public parse_source_geometry_data(_navigation_mesh: NavigationMesh, _source_geometry_data: NavigationMeshSourceGeometryData3D, _root_node: Node, _callback: Callable): void;
  public bake_from_source_geometry_data(_navigation_mesh: NavigationMesh, _source_geometry_data: NavigationMeshSourceGeometryData3D, _callback: Callable): void;
  public bake_from_source_geometry_data_async(_navigation_mesh: NavigationMesh, _source_geometry_data: NavigationMeshSourceGeometryData3D, _callback: Callable): void;
  public is_baking_navigation_mesh(_navigation_mesh: NavigationMesh): boolean;
  public source_geometry_parser_create(): RID;
  public source_geometry_parser_set_callback(_parser: RID, _callback: Callable): void;
  public simplify_path(_path: PackedVector3Array, _epsilon: number): PackedVector3Array;
  public free_rid(_rid: RID): void;
  public set_active(_active: boolean): void;
  public set_debug_enabled(_enabled: boolean): void;
  public get_debug_enabled(): boolean;
  public get_process_info(_process_info: number): number;
  static ProcessInfo = {
    INFO_ACTIVE_MAPS = 0,
    INFO_REGION_COUNT = 1,
    INFO_AGENT_COUNT = 2,
    INFO_LINK_COUNT = 3,
    INFO_POLYGON_COUNT = 4,
    INFO_EDGE_COUNT = 5,
    INFO_EDGE_MERGE_COUNT = 6,
    INFO_EDGE_CONNECTION_COUNT = 7,
    INFO_EDGE_FREE_COUNT = 8,
  }
  public get map_changed(): Signal;
  public get navigation_debug_changed(): Signal;
  public get avoidance_debug_changed(): Signal;
}