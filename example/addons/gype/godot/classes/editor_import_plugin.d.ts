
import { ResourceImporter } from "@godot/classes/resource_importer";

export declare class EditorImportPlugin extends ResourceImporter{
  public _get_importer_name(): String;
  public _get_visible_name(): String;
  public _get_preset_count(): number;
  public _get_preset_name(_preset_index: number): String;
  public _get_recognized_extensions(): PackedStringArray;
  public _get_import_options(_path: String | StringName | string, _preset_index: number): GDArray;
  public _get_save_extension(): String;
  public _get_resource_type(): String;
  public _get_priority(): number;
  public _get_import_order(): number;
  public _get_option_visibility(_path: String | StringName | string, _option_name: String | StringName | string, _options: Dictionary): boolean;
  public _import(_source_file: String | StringName | string, _save_path: String | StringName | string, _options: Dictionary, _platform_variants: GDArray, _gen_files: GDArray): number;
  public _can_import_threaded(): boolean;
  public append_import_external_resource(_path: String | StringName | string, _custom_options: Dictionary, _custom_importer: String | StringName | string, _generator_parameters: any): number;
}