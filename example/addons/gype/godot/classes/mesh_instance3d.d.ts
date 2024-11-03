
import { MeshConvexDecompositionSettings } from "@godot/classes/mesh_convex_decomposition_settings";
import { ArrayMesh } from "@godot/classes/array_mesh";
import { Skin } from "@godot/classes/skin";
import { Mesh } from "@godot/classes/mesh";
import { SkinReference } from "@godot/classes/skin_reference";
import { GeometryInstance3D } from "@godot/classes/geometry_instance3d";
import { Material } from "@godot/classes/material";
export declare class MeshInstance3D extends GeometryInstance3D{
  public set_mesh(_mesh: Mesh): void;
  public get_mesh(): Mesh;
  public set_skeleton_path(_skeleton_path: GDString | NodePath | string): void;
  public get_skeleton_path(): NodePath;
  public set_skin(_skin: Skin): void;
  public get_skin(): Skin;
  public get_skin_reference(): SkinReference;
  public get_surface_override_material_count(): number;
  public set_surface_override_material(_surface: number, _material: Material): void;
  public get_surface_override_material(_surface: number): Material;
  public get_active_material(_surface: number): Material;
  public create_trimesh_collision(): void;
  public create_convex_collision(_clean: boolean = true, _simplify: boolean = false): void;
  public create_multiple_convex_collisions(_settings: MeshConvexDecompositionSettings = null): void;
  public get_blend_shape_count(): number;
  public find_blend_shape_by_name(_name: GDString | StringName | string): number;
  public get_blend_shape_value(_blend_shape_idx: number): number;
  public set_blend_shape_value(_blend_shape_idx: number, _value: number): void;
  public create_debug_tangents(): void;
  public bake_mesh_from_current_blend_shape_mix(_existing: ArrayMesh = null): ArrayMesh;
  public get mesh(): Mesh;
  public set mesh(value): void;
  public get skin(): Skin;
  public set skin(value): void;
  public get skeleton(): NodePath;
  public set skeleton(value): void;
}