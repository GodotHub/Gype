
import { Material } from "@godot/classes/material";
import { Resource } from "@godot/classes/resource";
import { ImporterMesh } from "@godot/classes/importer_mesh";

export declare class GLTFMesh extends Resource{
  public get_original_name(): String;
  public set_original_name(_original_name: String): void;
  public get_mesh(): ImporterMesh;
  public set_mesh(_mesh: ImporterMesh): void;
  public get_blend_weights(): PackedFloat32Array;
  public set_blend_weights(_blend_weights: PackedFloat32Array): void;
  public get_instance_materials(): Array;
  public set_instance_materials(_instance_materials: typedarray::Material): void;
  public get_additional_data(_extension_name: StringName): Variant;
  public set_additional_data(_extension_name: StringName, _additional_data: Variant): void;
  public get original_name(): String {
    get_original_name();
  }
  public set original_name(value: String): void {
    set_original_name(value);
  }
  public get mesh(): Object {
    get_mesh();
  }
  public set mesh(value: Object): void {
    set_mesh(value);
  }
  public get blend_weights(): PackedFloat32Array {
    get_blend_weights();
  }
  public set blend_weights(value: PackedFloat32Array): void {
    set_blend_weights(value);
  }
  public get instance_materials(): Array {
    get_instance_materials();
  }
  public set instance_materials(value: Array): void {
    set_instance_materials(value);
  }
}