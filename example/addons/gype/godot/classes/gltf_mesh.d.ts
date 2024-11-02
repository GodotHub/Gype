
import { Resource } from "@godot/classes/resource";
import { ImporterMesh } from "@godot/classes/importer_mesh";
import { Material } from "@godot/classes/material";


export declare class GLTFMesh extends Resource{
  public get_original_name(): String;
  public set_original_name(_original_name: GDString | StringName | string): void;
  public get_mesh(): ImporterMesh;
  public set_mesh(_mesh: ImporterMesh): void;
  public get_blend_weights(): PackedFloat32Array;
  public set_blend_weights(_blend_weights: PackedFloat32Array): void;
  public get_instance_materials(): GDArray;
  public set_instance_materials(_instance_materials: GDArray): void;
  public get_additional_data(_extension_name: GDString | StringName | string): any;
  public set_additional_data(_extension_name: GDString | StringName | string, _additional_data: any): void;
  public get original_name(): String;
  public set original_name(value): void;
  public get mesh(): GodotObject;
  public set mesh(value): void;
  public get blend_weights(): PackedFloat32Array;
  public set blend_weights(value): void;
  public get instance_materials(): GDArray;
  public set instance_materials(value): void;
}