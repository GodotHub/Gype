
import { Resource } from "@godot/classes/resource";
import { NavigationMesh } from "@godot/classes/navigation_mesh";


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
  public set_source_geometry_group_name(_group_name: GDString | StringName | string): void;
  public get_source_geometry_group_name(): StringName;
  public set_agent_radius(_agent_radius: number): void;
  public get_agent_radius(): number;
  public set_baking_rect(_rect: Rect2): void;
  public get_baking_rect(): Rect2;
  public set_baking_rect_offset(_rect_offset: Vector2): void;
  public get_baking_rect_offset(): Vector2;
  public clear(): void;
  public get vertices(): PackedVector2Array;
  public set vertices(value): void;
  public get polygons(): GDArray;
  public set polygons(value): void;
  public get outlines(): GDArray;
  public set outlines(value): void;
  public get parsed_geometry_type(): number;
  public set parsed_geometry_type(value): void;
  public get parsed_collision_mask(): number;
  public set parsed_collision_mask(value): void;
  public get source_geometry_mode(): number;
  public set source_geometry_mode(value): void;
  public get source_geometry_group_name(): String;
  public set source_geometry_group_name(value): void;
  public get cell_size(): number;
  public set cell_size(value): void;
  public get border_size(): number;
  public set border_size(value): void;
  public get agent_radius(): number;
  public set agent_radius(value): void;
  public get baking_rect(): Rect2;
  public set baking_rect(value): void;
  public get baking_rect_offset(): Vector2;
  public set baking_rect_offset(value): void;
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