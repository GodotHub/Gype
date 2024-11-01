
import { NavigationMesh } from "@godot/classes/navigation_mesh";
import { Mesh } from "@godot/classes/mesh";
import { Texture2D } from "@godot/classes/texture2d";
import { Resource } from "@godot/classes/resource";

export declare class MeshLibrary extends Resource{
  public create_item(_id: number): void;
  public set_item_name(_id: number, _name: String | StringName | string): void;
  public set_item_mesh(_id: number, _mesh: Mesh): void;
  public set_item_mesh_transform(_id: number, _mesh_transform: Transform3D): void;
  public set_item_navigation_mesh(_id: number, _navigation_mesh: NavigationMesh): void;
  public set_item_navigation_mesh_transform(_id: number, _navigation_mesh: Transform3D): void;
  public set_item_navigation_layers(_id: number, _navigation_layers: number): void;
  public set_item_shapes(_id: number, _shapes: GDArray): void;
  public set_item_preview(_id: number, _texture: Texture2D): void;
  public get_item_name(_id: number): String;
  public get_item_mesh(_id: number): Mesh;
  public get_item_mesh_transform(_id: number): Transform3D;
  public get_item_navigation_mesh(_id: number): NavigationMesh;
  public get_item_navigation_mesh_transform(_id: number): Transform3D;
  public get_item_navigation_layers(_id: number): number;
  public get_item_shapes(_id: number): GDArray;
  public get_item_preview(_id: number): Texture2D;
  public remove_item(_id: number): void;
  public find_item_by_name(_name: String | StringName | string): number;
  public clear(): void;
  public get_item_list(): PackedInt32Array;
  public get_last_unused_item_id(): number;
}