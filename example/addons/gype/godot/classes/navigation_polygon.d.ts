
import { NavigationMesh } from "@godot/classes/navigation_mesh";
import { Resource } from "@godot/classes/resource";

export declare class NavigationPolygon extends Resource{
  public set_vertices(_vertices: PackedVector2Array): void;
  public get_vertices(): PackedVector2Array;
  public add_polygon(_polygon: PackedInt32Array): void;
  public get_polygon_count(): number;
  public get_polygon(_idx: number): PackedInt32Array;
  public clear_polygons(): void;
  public get_navigation_mesh(): NavigationMesh;
  public add_outline(_outline: PackedVector2Array): void;
  public add_outline_at_index(_outline: PackedVector2Array, _index: number): void;
  public get_outline_count(): number;
  public set_outline(_idx: number, _outline: PackedVector2Array): void;
  public get_outline(_idx: number): PackedVector2Array;
  public remove_outline(_idx: number): void;
  public clear_outlines(): void;
  public make_polygons_from_outlines(): void;
  public set_cell_size(_cell_size: number): void;
  public get_cell_size(): number;
  public set_border_size(_border_size: number): void;
  public get_border_size(): number;
  public set_parsed_geometry_type(_geometry_type: number): void;
  public get_parsed_geometry_type(): number;
  public set_parsed_collision_mask(_mask: number): void;
  public get_parsed_collision_mask(): number;
  public set_parsed_collision_mask_value(_layer_number: number, _value: boolean): void;
  public get_parsed_collision_mask_value(_layer_number: number): boolean;
  public set_source_geometry_mode(_geometry_mode: number): void;
  public get_source_geometry_mode(): number;
  public set_source_geometry_group_name(_group_name: StringName): void;
  public get_source_geometry_group_name(): StringName;
  public set_agent_radius(_agent_radius: number): void;
  public get_agent_radius(): number;
  public set_baking_rect(_rect: Rect2): void;
  public get_baking_rect(): Rect2;
  public set_baking_rect_offset(_rect_offset: Vector2): void;
  public get_baking_rect_offset(): Vector2;
  public clear(): void;
  public get vertices(): PackedVector2Array {
    get_vertices();
  }
  public set vertices(value): void {
    set_vertices(value);
  }
  public get polygons(): GDArray {
    _get_polygons();
  }
  public set polygons(value): void {
    _set_polygons(value);
  }
  public get outlines(): GDArray {
    _get_outlines();
  }
  public set outlines(value): void {
    _set_outlines(value);
  }
  public get parsed_geometry_type(): number {
    get_parsed_geometry_type();
  }
  public set parsed_geometry_type(value): void {
    set_parsed_geometry_type(value);
  }
  public get parsed_collision_mask(): number {
    get_parsed_collision_mask();
  }
  public set parsed_collision_mask(value): void {
    set_parsed_collision_mask(value);
  }
  public get source_geometry_mode(): number {
    get_source_geometry_mode();
  }
  public set source_geometry_mode(value): void {
    set_source_geometry_mode(value);
  }
  public get source_geometry_group_name(): String {
    get_source_geometry_group_name();
  }
  public set source_geometry_group_name(value): void {
    set_source_geometry_group_name(value);
  }
  public get cell_size(): number {
    get_cell_size();
  }
  public set cell_size(value): void {
    set_cell_size(value);
  }
  public get border_size(): number {
    get_border_size();
  }
  public set border_size(value): void {
    set_border_size(value);
  }
  public get agent_radius(): number {
    get_agent_radius();
  }
  public set agent_radius(value): void {
    set_agent_radius(value);
  }
  public get baking_rect(): Rect2 {
    get_baking_rect();
  }
  public set baking_rect(value): void {
    set_baking_rect(value);
  }
  public get baking_rect_offset(): Vector2 {
    get_baking_rect_offset();
  }
  public set baking_rect_offset(value): void {
    set_baking_rect_offset(value);
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