
import { ImporterMesh } from "@godot/classes/importer_mesh";
import { Shape3D } from "@godot/classes/shape3d";
import { Resource } from "@godot/classes/resource";
import { CollisionShape3D } from "@godot/classes/collision_shape3d";


export declare class GLTFPhysicsShape extends Resource{
  public from_node(_shape_node: CollisionShape3D): GLTFPhysicsShape;
  public to_node(_cache_shapes: boolean): CollisionShape3D;
  public from_resource(_shape_resource: Shape3D): GLTFPhysicsShape;
  public to_resource(_cache_shapes: boolean): Shape3D;
  public from_dictionary(_dictionary: Dictionary): GLTFPhysicsShape;
  public to_dictionary(): Dictionary;
  public get_shape_type(): String;
  public set_shape_type(_shape_type: GDString | StringName | string): void;
  public get_size(): Vector3;
  public set_size(_size: Vector3): void;
  public get_radius(): number;
  public set_radius(_radius: number): void;
  public get_height(): number;
  public set_height(_height: number): void;
  public get_is_trigger(): boolean;
  public set_is_trigger(_is_trigger: boolean): void;
  public get_mesh_index(): number;
  public set_mesh_index(_mesh_index: number): void;
  public get_importer_mesh(): ImporterMesh;
  public set_importer_mesh(_importer_mesh: ImporterMesh): void;
  public get shape_type(): String;
  public set shape_type(value): void;
  public get size(): Vector3;
  public set size(value): void;
  public get radius(): number;
  public set radius(value): void;
  public get height(): number;
  public set height(value): void;
  public get is_trigger(): boolean;
  public set is_trigger(value): void;
  public get mesh_index(): number;
  public set mesh_index(value): void;
  public get importer_mesh(): ImporterMesh;
  public set importer_mesh(value): void;
}