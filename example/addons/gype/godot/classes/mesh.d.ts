
import { TriangleMesh } from "@godot/classes/triangle_mesh";
import { Resource } from "@godot/classes/resource";
import { Material } from "@godot/classes/material";
import { ConcavePolygonShape3D } from "@godot/classes/concave_polygon_shape3d";
import { ConvexPolygonShape3D } from "@godot/classes/convex_polygon_shape3d";

export declare class Mesh extends Resource{
  public _get_surface_count(): number;
  public _surface_get_array_len(_index: number): number;
  public _surface_get_array_index_len(_index: number): number;
  public _surface_get_arrays(_index: number): GDArray;
  public _surface_get_blend_shape_arrays(_index: number): GDArray;
  public _surface_get_lods(_index: number): Dictionary;
  public _surface_get_format(_index: number): number;
  public _surface_get_primitive_type(_index: number): number;
  public _surface_set_material(_index: number, _material: Material): void;
  public _surface_get_material(_index: number): Material;
  public _get_blend_shape_count(): number;
  public _get_blend_shape_name(_index: number): StringName;
  public _set_blend_shape_name(_index: number, _name: String | StringName | string): void;
  public _get_aabb(): AABB;
  public set_lightmap_size_hint(_size: Vector2i): void;
  public get_lightmap_size_hint(): Vector2i;
  public get_aabb(): AABB;
  public get_faces(): PackedVector3Array;
  public get_surface_count(): number;
  public surface_get_arrays(_surf_idx: number): GDArray;
  public surface_get_blend_shape_arrays(_surf_idx: number): GDArray;
  public surface_set_material(_surf_idx: number, _material: Material): void;
  public surface_get_material(_surf_idx: number): Material;
  public create_placeholder(): Resource;
  public create_trimesh_shape(): ConcavePolygonShape3D;
  public create_convex_shape(_clean: boolean, _simplify: boolean): ConvexPolygonShape3D;
  public create_outline(_margin: number): Mesh;
  public generate_triangle_mesh(): TriangleMesh;
  public get lightmap_size_hint(): Vector2i {
    get_lightmap_size_hint();
  }
  public set lightmap_size_hint(value): void {
    set_lightmap_size_hint(value);
  }
  static PrimitiveType = {
    PRIMITIVE_POINTS = 0,
    PRIMITIVE_LINES = 1,
    PRIMITIVE_LINE_STRIP = 2,
    PRIMITIVE_TRIANGLES = 3,
    PRIMITIVE_TRIANGLE_STRIP = 4,
  }
  static ArrayType = {
    ARRAY_VERTEX = 0,
    ARRAY_NORMAL = 1,
    ARRAY_TANGENT = 2,
    ARRAY_COLOR = 3,
    ARRAY_TEX_UV = 4,
    ARRAY_TEX_UV2 = 5,
    ARRAY_CUSTOM0 = 6,
    ARRAY_CUSTOM1 = 7,
    ARRAY_CUSTOM2 = 8,
    ARRAY_CUSTOM3 = 9,
    ARRAY_BONES = 10,
    ARRAY_WEIGHTS = 11,
    ARRAY_INDEX = 12,
    ARRAY_MAX = 13,
  }
  static ArrayCustomFormat = {
    ARRAY_CUSTOM_RGBA8_UNORM = 0,
    ARRAY_CUSTOM_RGBA8_SNORM = 1,
    ARRAY_CUSTOM_RG_HALF = 2,
    ARRAY_CUSTOM_RGBA_HALF = 3,
    ARRAY_CUSTOM_R_FLOAT = 4,
    ARRAY_CUSTOM_RG_FLOAT = 5,
    ARRAY_CUSTOM_RGB_FLOAT = 6,
    ARRAY_CUSTOM_RGBA_FLOAT = 7,
    ARRAY_CUSTOM_MAX = 8,
  }
  static ArrayFormat = {
    ARRAY_FORMAT_VERTEX = 1,
    ARRAY_FORMAT_NORMAL = 2,
    ARRAY_FORMAT_TANGENT = 4,
    ARRAY_FORMAT_COLOR = 8,
    ARRAY_FORMAT_TEX_UV = 16,
    ARRAY_FORMAT_TEX_UV2 = 32,
    ARRAY_FORMAT_CUSTOM0 = 64,
    ARRAY_FORMAT_CUSTOM1 = 128,
    ARRAY_FORMAT_CUSTOM2 = 256,
    ARRAY_FORMAT_CUSTOM3 = 512,
    ARRAY_FORMAT_BONES = 1024,
    ARRAY_FORMAT_WEIGHTS = 2048,
    ARRAY_FORMAT_INDEX = 4096,
    ARRAY_FORMAT_BLEND_SHAPE_MASK = 7,
    ARRAY_FORMAT_CUSTOM_BASE = 13,
    ARRAY_FORMAT_CUSTOM_BITS = 3,
    ARRAY_FORMAT_CUSTOM0_SHIFT = 13,
    ARRAY_FORMAT_CUSTOM1_SHIFT = 16,
    ARRAY_FORMAT_CUSTOM2_SHIFT = 19,
    ARRAY_FORMAT_CUSTOM3_SHIFT = 22,
    ARRAY_FORMAT_CUSTOM_MASK = 7,
    ARRAY_COMPRESS_FLAGS_BASE = 25,
    ARRAY_FLAG_USE_2D_VERTICES = 33554432,
    ARRAY_FLAG_USE_DYNAMIC_UPDATE = 67108864,
    ARRAY_FLAG_USE_8_BONE_WEIGHTS = 134217728,
    ARRAY_FLAG_USES_EMPTY_VERTEX_ARRAY = 268435456,
    ARRAY_FLAG_COMPRESS_ATTRIBUTES = 536870912,
  }
  static BlendShapeMode = {
    BLEND_SHAPE_MODE_NORMALIZED = 0,
    BLEND_SHAPE_MODE_RELATIVE = 1,
  }
}