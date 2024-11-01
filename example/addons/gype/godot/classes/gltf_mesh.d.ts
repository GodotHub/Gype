
import { ImporterMesh } from "@godot/classes/importer_mesh";
import { Material } from "@godot/classes/material";
import { Resource } from "@godot/classes/resource";

export declare class GLTFMesh extends Resource{
  public get_original_name(): String;
  public set_original_name(_original_name: String | StringName | string): void;
  public get_mesh(): ImporterMesh;
  public set_mesh(_mesh: ImporterMesh): void;
  public get_blend_weights(): PackedFloat32Array;
  public set_blend_weights(_blend_weights: PackedFloat32Array): void;
  public get_instance_materials(): GDArray;
  public set_instance_materials(_instance_materials: GDArray): void;
  public get_additional_data(_extension_name: String | StringName | string): any;
  public set_additional_data(_extension_name: String | StringName | string, _additional_data: any): void;
  public get original_name(): String {
    get_original_name();
  }
  public set original_name(value): void {
    set_original_name(value);
  }
  public get mesh(): GodotObject {
    get_mesh();
  }
  public set mesh(value): void {
    set_mesh(value);
  }
  public get blend_weights(): PackedFloat32Array {
    get_blend_weights();
  }
  public set blend_weights(value): void {
    set_blend_weights(value);
  }
  public get instance_materials(): GDArray {
    get_instance_materials();
  }
  public set instance_materials(value): void {
    set_instance_materials(value);
  }
}