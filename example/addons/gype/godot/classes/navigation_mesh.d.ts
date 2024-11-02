
import { Resource } from "@godot/classes/resource";
import { Mesh } from "@godot/classes/mesh";


export declare class NavigationMesh extends Resource{
  public set_sample_partition_type(_sample_partition_type: number): void;
  public get_sample_partition_type(): number;
  public set_parsed_geometry_type(_geometry_type: number): void;
  public get_parsed_geometry_type(): number;
  public set_collision_mask(_mask: number): void;
  public get_collision_mask(): number;
  public set_collision_mask_value(_layer_number: number, _value: boolean): void;
  public get_collision_mask_value(_layer_number: number): boolean;
  public set_source_geometry_mode(_mask: number): void;
  public get_source_geometry_mode(): number;
  public set_source_group_name(_mask: GDString | StringName | string): void;
  public get_source_group_name(): StringName;
  public set_cell_size(_cell_size: number): void;
  public get_cell_size(): number;
  public set_cell_height(_cell_height: number): void;
  public get_cell_height(): number;
  public set_border_size(_border_size: number): void;
  public get_border_size(): number;
  public set_agent_height(_agent_height: number): void;
  public get_agent_height(): number;
  public set_agent_radius(_agent_radius: number): void;
  public get_agent_radius(): number;
  public set_agent_max_climb(_agent_max_climb: number): void;
  public get_agent_max_climb(): number;
  public set_agent_max_slope(_agent_max_slope: number): void;
  public get_agent_max_slope(): number;
  public set_region_min_size(_region_min_size: number): void;
  public get_region_min_size(): number;
  public set_region_merge_size(_region_merge_size: number): void;
  public get_region_merge_size(): number;
  public set_edge_max_length(_edge_max_length: number): void;
  public get_edge_max_length(): number;
  public set_edge_max_error(_edge_max_error: number): void;
  public get_edge_max_error(): number;
  public set_vertices_per_polygon(_vertices_per_polygon: number): void;
  public get_vertices_per_polygon(): number;
  public set_detail_sample_distance(_detail_sample_dist: number): void;
  public get_detail_sample_distance(): number;
  public set_detail_sample_max_error(_detail_sample_max_error: number): void;
  public get_detail_sample_max_error(): number;
  public set_filter_low_hanging_obstacles(_filter_low_hanging_obstacles: boolean): void;
  public get_filter_low_hanging_obstacles(): boolean;
  public set_filter_ledge_spans(_filter_ledge_spans: boolean): void;
  public get_filter_ledge_spans(): boolean;
  public set_filter_walkable_low_height_spans(_filter_walkable_low_height_spans: boolean): void;
  public get_filter_walkable_low_height_spans(): boolean;
  public set_filter_baking_aabb(_baking_aabb: AABB): void;
  public get_filter_baking_aabb(): AABB;
  public set_filter_baking_aabb_offset(_baking_aabb_offset: Vector3): void;
  public get_filter_baking_aabb_offset(): Vector3;
  public set_vertices(_vertices: PackedVector3Array): void;
  public get_vertices(): PackedVector3Array;
  public add_polygon(_polygon: PackedInt32Array): void;
  public get_polygon_count(): number;
  public get_polygon(_idx: number): PackedInt32Array;
  public clear_polygons(): void;
  public create_from_mesh(_mesh: Mesh): void;
  public clear(): void;
  public get vertices(): PackedVector3Array;
  public set vertices(value): void;
  public get polygons(): GDArray;
  public set polygons(value): void;
  public get sample_partition_type(): number;
  public set sample_partition_type(value): void;
  public get geometry_parsed_geometry_type(): number;
  public set geometry_parsed_geometry_type(value): void;
  public get geometry_collision_mask(): number;
  public set geometry_collision_mask(value): void;
  public get geometry_source_geometry_mode(): number;
  public set geometry_source_geometry_mode(value): void;
  public get geometry_source_group_name(): String;
  public set geometry_source_group_name(value): void;
  public get cell_size(): number;
  public set cell_size(value): void;
  public get cell_height(): number;
  public set cell_height(value): void;
  public get border_size(): number;
  public set border_size(value): void;
  public get agent_height(): number;
  public set agent_height(value): void;
  public get agent_radius(): number;
  public set agent_radius(value): void;
  public get agent_max_climb(): number;
  public set agent_max_climb(value): void;
  public get agent_max_slope(): number;
  public set agent_max_slope(value): void;
  public get region_min_size(): number;
  public set region_min_size(value): void;
  public get region_merge_size(): number;
  public set region_merge_size(value): void;
  public get edge_max_length(): number;
  public set edge_max_length(value): void;
  public get edge_max_error(): number;
  public set edge_max_error(value): void;
  public get vertices_per_polygon(): number;
  public set vertices_per_polygon(value): void;
  public get detail_sample_distance(): number;
  public set detail_sample_distance(value): void;
  public get detail_sample_max_error(): number;
  public set detail_sample_max_error(value): void;
  public get filter_low_hanging_obstacles(): boolean;
  public set filter_low_hanging_obstacles(value): void;
  public get filter_ledge_spans(): boolean;
  public set filter_ledge_spans(value): void;
  public get filter_walkable_low_height_spans(): boolean;
  public set filter_walkable_low_height_spans(value): void;
  public get filter_baking_aabb(): AABB;
  public set filter_baking_aabb(value): void;
  public get filter_baking_aabb_offset(): Vector3;
  public set filter_baking_aabb_offset(value): void;
  static SamplePartitionType = {
    SAMPLE_PARTITION_WATERSHED = 0,
    SAMPLE_PARTITION_MONOTONE = 1,
    SAMPLE_PARTITION_LAYERS = 2,
    SAMPLE_PARTITION_MAX = 3,
  }
  static ParsedGeometryType = {
    PARSED_GEOMETRY_MESH_INSTANCES = 0,
    PARSED_GEOMETRY_STATIC_COLLIDERS = 1,
    PARSED_GEOMETRY_BOTH = 2,
    PARSED_GEOMETRY_MAX = 3,
  }
  static SourceGeometryMode = {
    SOURCE_GEOMETRY_ROOT_NODE_CHILDREN = 0,
    SOURCE_GEOMETRY_GROUPS_WITH_CHILDREN = 1,
    SOURCE_GEOMETRY_GROUPS_EXPLICIT = 2,
    SOURCE_GEOMETRY_MAX = 3,
  }
}