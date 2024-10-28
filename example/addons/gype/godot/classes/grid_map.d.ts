
import { Node3D } from "@godot/classes/node3d";
import { Resource } from "@godot/classes/resource";
import { MeshLibrary } from "@godot/classes/mesh_library";
import { PhysicsMaterial } from "@godot/classes/physics_material";

export declare class GridMap extends Node3D{
  public set_collision_layer(_layer: number): void;
  public get_collision_layer(): number;
  public set_collision_mask(_mask: number): void;
  public get_collision_mask(): number;
  public set_collision_mask_value(_layer_number: number, _value: boolean): void;
  public get_collision_mask_value(_layer_number: number): boolean;
  public set_collision_layer_value(_layer_number: number, _value: boolean): void;
  public get_collision_layer_value(_layer_number: number): boolean;
  public set_collision_priority(_priority: number): void;
  public get_collision_priority(): number;
  public set_physics_material(_material: PhysicsMaterial): void;
  public get_physics_material(): PhysicsMaterial;
  public set_bake_navigation(_bake_navigation: boolean): void;
  public is_baking_navigation(): boolean;
  public set_navigation_map(_navigation_map: RID): void;
  public get_navigation_map(): RID;
  public set_mesh_library(_mesh_library: MeshLibrary): void;
  public get_mesh_library(): MeshLibrary;
  public set_cell_size(_size: Vector3): void;
  public get_cell_size(): Vector3;
  public set_cell_scale(_scale: number): void;
  public get_cell_scale(): number;
  public set_octant_size(_size: number): void;
  public get_octant_size(): number;
  public set_cell_item(_position: Vector3i, _item: number, _orientation: number): void;
  public get_cell_item(_position: Vector3i): number;
  public get_cell_item_orientation(_position: Vector3i): number;
  public get_cell_item_basis(_position: Vector3i): Basis;
  public get_basis_with_orthogonal_index(_index: number): Basis;
  public get_orthogonal_index_from_basis(_basis: Basis): number;
  public local_to_map(_local_position: Vector3): Vector3i;
  public map_to_local(_map_position: Vector3i): Vector3;
  public resource_changed(_resource: Resource): void;
  public set_center_x(_enable: boolean): void;
  public get_center_x(): boolean;
  public set_center_y(_enable: boolean): void;
  public get_center_y(): boolean;
  public set_center_z(_enable: boolean): void;
  public get_center_z(): boolean;
  public clear(): void;
  public get_used_cells(): Array;
  public get_used_cells_by_item(_item: number): Array;
  public get_meshes(): GDArray;
  public get_bake_meshes(): GDArray;
  public get_bake_mesh_instance(_idx: number): RID;
  public clear_baked_meshes(): void;
  public make_baked_meshes(_gen_lightmap_uv: boolean, _lightmap_uv_texel_size: number): void;
  public get mesh_library(): MeshLibrary {
    get_mesh_library();
  }
  public set mesh_library(value: MeshLibrary): void {
    set_mesh_library(value);
  }
  public get physics_material(): PhysicsMaterial {
    get_physics_material();
  }
  public set physics_material(value: PhysicsMaterial): void {
    set_physics_material(value);
  }
  public get cell_size(): Vector3 {
    get_cell_size();
  }
  public set cell_size(value: Vector3): void {
    set_cell_size(value);
  }
  public get cell_octant_size(): number {
    get_octant_size();
  }
  public set cell_octant_size(value: number): void {
    set_octant_size(value);
  }
  public get cell_center_x(): boolean {
    get_center_x();
  }
  public set cell_center_x(value: boolean): void {
    set_center_x(value);
  }
  public get cell_center_y(): boolean {
    get_center_y();
  }
  public set cell_center_y(value: boolean): void {
    set_center_y(value);
  }
  public get cell_center_z(): boolean {
    get_center_z();
  }
  public set cell_center_z(value: boolean): void {
    set_center_z(value);
  }
  public get cell_scale(): number {
    get_cell_scale();
  }
  public set cell_scale(value: number): void {
    set_cell_scale(value);
  }
  public get collision_layer(): number {
    get_collision_layer();
  }
  public set collision_layer(value: number): void {
    set_collision_layer(value);
  }
  public get collision_mask(): number {
    get_collision_mask();
  }
  public set collision_mask(value: number): void {
    set_collision_mask(value);
  }
  public get collision_priority(): number {
    get_collision_priority();
  }
  public set collision_priority(value: number): void {
    set_collision_priority(value);
  }
  public get bake_navigation(): boolean {
    is_baking_navigation();
  }
  public set bake_navigation(value: boolean): void {
    set_bake_navigation(value);
  }
}