
import { ResourceImporter } from "@godot/classes/resource_importer";

export declare class EditorImportPlugin extends ResourceImporter{
  public _get_importer_name(): String;
  public _get_visible_name(): String;
  public _get_preset_count(): number;
  public _get_preset_name(_preset_index: number): String;
  public _get_recognized_extensions(): PackedStringArray;
  public _get_import_options(_path: String, _preset_index: number): Array;
  public _get_save_extension(): String;
  public _get_resource_type(): String;
  public _get_priority(): number;
  public _get_import_order(): number;
  public _get_option_visibility(_path: String, _option_name: StringName, _options: Dictionary): boolean;
  public _import(_source_file: String, _save_path: String, _options: Dictionary, _platform_variants: typedarray::String, _gen_files: typedarray::String): number;
  public _can_import_threaded(): boolean;
  public append_import_external_resource(_path: String, _custom_options: Dictionary, _custom_importer: String, _generator_parameters: Variant): number;
}