
import { NavigationPathQueryResult3D } from "@godot/classes/navigation_path_query_result3d";
import { Node } from "@godot/classes/node";

export declare class NavigationAgent3D extends Node{
  public get_rid(): RID;
  public set_avoidance_enabled(_enabled: boolean): void;
  public get_avoidance_enabled(): boolean;
  public set_path_desired_distance(_desired_distance: number): void;
  public get_path_desired_distance(): number;
  public set_target_desired_distance(_desired_distance: number): void;
  public get_target_desired_distance(): number;
  public set_radius(_radius: number): void;
  public get_radius(): number;
  public set_height(_height: number): void;
  public get_height(): number;
  public set_path_height_offset(_path_height_offset: number): void;
  public get_path_height_offset(): number;
  public set_use_3d_avoidance(_enabled: boolean): void;
  public get_use_3d_avoidance(): boolean;
  public set_keep_y_velocity(_enabled: boolean): void;
  public get_keep_y_velocity(): boolean;
  public set_neighbor_distance(_neighbor_distance: number): void;
  public get_neighbor_distance(): number;
  public set_max_neighbors(_max_neighbors: number): void;
  public get_max_neighbors(): number;
  public set_time_horizon_agents(_time_horizon: number): void;
  public get_time_horizon_agents(): number;
  public set_time_horizon_obstacles(_time_horizon: number): void;
  public get_time_horizon_obstacles(): number;
  public set_max_speed(_max_speed: number): void;
  public get_max_speed(): number;
  public set_path_max_distance(_max_speed: number): void;
  public get_path_max_distance(): number;
  public set_navigation_layers(_navigation_layers: number): void;
  public get_navigation_layers(): number;
  public set_navigation_layer_value(_layer_number: number, _value: boolean): void;
  public get_navigation_layer_value(_layer_number: number): boolean;
  public set_pathfinding_algorithm(_pathfinding_algorithm: number): void;
  public get_pathfinding_algorithm(): number;
  public set_path_postprocessing(_path_postprocessing: number): void;
  public get_path_postprocessing(): number;
  public set_path_metadata_flags(_flags: number): void;
  public get_path_metadata_flags(): number;
  public set_navigation_map(_navigation_map: RID): void;
  public get_navigation_map(): RID;
  public set_target_position(_position: Vector3): void;
  public get_target_position(): Vector3;
  public set_simplify_path(_enabled: boolean): void;
  public get_simplify_path(): boolean;
  public set_simplify_epsilon(_epsilon: number): void;
  public get_simplify_epsilon(): number;
  public get_next_path_position(): Vector3;
  public set_velocity_forced(_velocity: Vector3): void;
  public set_velocity(_velocity: Vector3): void;
  public get_velocity(): Vector3;
  public distance_to_target(): number;
  public get_current_navigation_result(): NavigationPathQueryResult3D;
  public get_current_navigation_path(): PackedVector3Array;
  public get_current_navigation_path_index(): number;
  public is_target_reached(): boolean;
  public is_target_reachable(): boolean;
  public is_navigation_finished(): boolean;
  public get_final_position(): Vector3;
  public set_avoidance_layers(_layers: number): void;
  public get_avoidance_layers(): number;
  public set_avoidance_mask(_mask: number): void;
  public get_avoidance_mask(): number;
  public set_avoidance_layer_value(_layer_number: number, _value: boolean): void;
  public get_avoidance_layer_value(_layer_number: number): boolean;
  public set_avoidance_mask_value(_mask_number: number, _value: boolean): void;
  public get_avoidance_mask_value(_mask_number: number): boolean;
  public set_avoidance_priority(_priority: number): void;
  public get_avoidance_priority(): number;
  public set_debug_enabled(_enabled: boolean): void;
  public get_debug_enabled(): boolean;
  public set_debug_use_custom(_enabled: boolean): void;
  public get_debug_use_custom(): boolean;
  public set_debug_path_custom_color(_color: Color): void;
  public get_debug_path_custom_color(): Color;
  public set_debug_path_custom_point_size(_point_size: number): void;
  public get_debug_path_custom_point_size(): number;
  public get target_position(): Vector3 {
    get_target_position();
  }
  public set target_position(value): void {
    set_target_position(value);
  }
  public get path_desired_distance(): number {
    get_path_desired_distance();
  }
  public set path_desired_distance(value): void {
    set_path_desired_distance(value);
  }
  public get target_desired_distance(): number {
    get_target_desired_distance();
  }
  public set target_desired_distance(value): void {
    set_target_desired_distance(value);
  }
  public get path_height_offset(): number {
    get_path_height_offset();
  }
  public set path_height_offset(value): void {
    set_path_height_offset(value);
  }
  public get path_max_distance(): number {
    get_path_max_distance();
  }
  public set path_max_distance(value): void {
    set_path_max_distance(value);
  }
  public get navigation_layers(): number {
    get_navigation_layers();
  }
  public set navigation_layers(value): void {
    set_navigation_layers(value);
  }
  public get pathfinding_algorithm(): number {
    get_pathfinding_algorithm();
  }
  public set pathfinding_algorithm(value): void {
    set_pathfinding_algorithm(value);
  }
  public get path_postprocessing(): number {
    get_path_postprocessing();
  }
  public set path_postprocessing(value): void {
    set_path_postprocessing(value);
  }
  public get path_metadata_flags(): number {
    get_path_metadata_flags();
  }
  public set path_metadata_flags(value): void {
    set_path_metadata_flags(value);
  }
  public get simplify_path(): boolean {
    get_simplify_path();
  }
  public set simplify_path(value): void {
    set_simplify_path(value);
  }
  public get simplify_epsilon(): number {
    get_simplify_epsilon();
  }
  public set simplify_epsilon(value): void {
    set_simplify_epsilon(value);
  }
  public get avoidance_enabled(): boolean {
    get_avoidance_enabled();
  }
  public set avoidance_enabled(value): void {
    set_avoidance_enabled(value);
  }
  public get velocity(): Vector3 {
    get_velocity();
  }
  public set velocity(value): void {
    set_velocity(value);
  }
  public get height(): number {
    get_height();
  }
  public set height(value): void {
    set_height(value);
  }
  public get radius(): number {
    get_radius();
  }
  public set radius(value): void {
    set_radius(value);
  }
  public get neighbor_distance(): number {
    get_neighbor_distance();
  }
  public set neighbor_distance(value): void {
    set_neighbor_distance(value);
  }
  public get max_neighbors(): number {
    get_max_neighbors();
  }
  public set max_neighbors(value): void {
    set_max_neighbors(value);
  }
  public get time_horizon_agents(): number {
    get_time_horizon_agents();
  }
  public set time_horizon_agents(value): void {
    set_time_horizon_agents(value);
  }
  public get time_horizon_obstacles(): number {
    get_time_horizon_obstacles();
  }
  public set time_horizon_obstacles(value): void {
    set_time_horizon_obstacles(value);
  }
  public get max_speed(): number {
    get_max_speed();
  }
  public set max_speed(value): void {
    set_max_speed(value);
  }
  public get use_3d_avoidance(): boolean {
    get_use_3d_avoidance();
  }
  public set use_3d_avoidance(value): void {
    set_use_3d_avoidance(value);
  }
  public get keep_y_velocity(): boolean {
    get_keep_y_velocity();
  }
  public set keep_y_velocity(value): void {
    set_keep_y_velocity(value);
  }
  public get avoidance_layers(): number {
    get_avoidance_layers();
  }
  public set avoidance_layers(value): void {
    set_avoidance_layers(value);
  }
  public get avoidance_mask(): number {
    get_avoidance_mask();
  }
  public set avoidance_mask(value): void {
    set_avoidance_mask(value);
  }
  public get avoidance_priority(): number {
    get_avoidance_priority();
  }
  public set avoidance_priority(value): void {
    set_avoidance_priority(value);
  }
  public get debug_enabled(): boolean {
    get_debug_enabled();
  }
  public set debug_enabled(value): void {
    set_debug_enabled(value);
  }
  public get debug_use_custom(): boolean {
    get_debug_use_custom();
  }
  public set debug_use_custom(value): void {
    set_debug_use_custom(value);
  }
  public get debug_path_custom_color(): Color {
    get_debug_path_custom_color();
  }
  public set debug_path_custom_color(value): void {
    set_debug_path_custom_color(value);
  }
  public get debug_path_custom_point_size(): number {
    get_debug_path_custom_point_size();
  }
  public set debug_path_custom_point_size(value): void {
    set_debug_path_custom_point_size(value);
  }
}