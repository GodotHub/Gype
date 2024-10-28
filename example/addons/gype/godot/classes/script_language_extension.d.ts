
import { Script } from "@godot/classes/script";
import { Object } from "@godot/classes/object";
import { ScriptLanguage } from "@godot/classes/script_language";

export declare class ScriptLanguageExtension extends ScriptLanguage{
  public _get_name(): String;
  public _init(): void;
  public _get_type(): String;
  public _get_extension(): String;
  public _finish(): void;
  public _get_reserved_words(): PackedStringArray;
  public _is_control_flow_keyword(_keyword: String): boolean;
  public _get_comment_delimiters(): PackedStringArray;
  public _get_doc_comment_delimiters(): PackedStringArray;
  public _get_string_delimiters(): PackedStringArray;
  public _make_template(_template: String, _class_name: String, _base_class_name: String): Script;
  public _get_built_in_templates(_object: StringName): Array;
  public _is_using_templates(): boolean;
  public _validate(_script: String, _path: String, _validate_functions: boolean, _validate_errors: boolean, _validate_warnings: boolean, _validate_safe_lines: boolean): Dictionary;
  public _validate_path(_path: String): String;
  public _create_script(): Object;
  public _has_named_classes(): boolean;
  public _supports_builtin_mode(): boolean;
  public _supports_documentation(): boolean;
  public _can_inherit_from_file(): boolean;
  public _find_function(_function: String, _code: String): number;
  public _make_function(_class_name: String, _function_name: String, _function_args: PackedStringArray): String;
  public _can_make_function(): boolean;
  public _open_in_external_editor(_script: Script, _line: number, _column: number): number;
  public _overrides_external_editor(): boolean;
  public _preferred_file_name_casing(): number;
  public _complete_code(_code: String, _path: String, _owner: Object): Dictionary;
  public _lookup_code(_code: String, _symbol: String, _path: String, _owner: Object): Dictionary;
  public _auto_indent_code(_code: String, _from_line: number, _to_line: number): String;
  public _add_global_constant(_name: StringName, _value: Variant): void;
  public _add_named_global_constant(_name: StringName, _value: Variant): void;
  public _remove_named_global_constant(_name: StringName): void;
  public _thread_enter(): void;
  public _thread_exit(): void;
  public _debug_get_error(): String;
  public _debug_get_stack_level_count(): number;
  public _debug_get_stack_level_line(_level: number): number;
  public _debug_get_stack_level_function(_level: number): String;
  public _debug_get_stack_level_source(_level: number): String;
  public _debug_get_stack_level_locals(_level: number, _max_subitems: number, _max_depth: number): Dictionary;
  public _debug_get_stack_level_members(_level: number, _max_subitems: number, _max_depth: number): Dictionary;
  public _debug_get_stack_level_instance(_level: number): void*;
  public _debug_get_globals(_max_subitems: number, _max_depth: number): Dictionary;
  public _debug_parse_stack_level_expression(_level: number, _expression: String, _max_subitems: number, _max_depth: number): String;
  public _debug_get_current_stack_info(): Array;
  public _reload_all_scripts(): void;
  public _reload_tool_script(_script: Script, _soft_reload: boolean): void;
  public _get_recognized_extensions(): PackedStringArray;
  public _get_public_functions(): Array;
  public _get_public_constants(): Dictionary;
  public _get_public_annotations(): Array;
  public _profiling_start(): void;
  public _profiling_stop(): void;
  public _profiling_set_save_native_calls(_enable: boolean): void;
  public _profiling_get_accumulated_data(_info_array: ScriptLanguageExtensionProfilingInfo*, _info_max: number): number;
  public _profiling_get_frame_data(_info_array: ScriptLanguageExtensionProfilingInfo*, _info_max: number): number;
  public _frame(): void;
  public _handles_global_class_type(_type: String): boolean;
  public _get_global_class_name(_path: String): Dictionary;
  static LookupResultType = {
    LOOKUP_RESULT_SCRIPT_LOCATION = 0,
    LOOKUP_RESULT_CLASS = 1,
    LOOKUP_RESULT_CLASS_CONSTANT = 2,
    LOOKUP_RESULT_CLASS_PROPERTY = 3,
    LOOKUP_RESULT_CLASS_METHOD = 4,
    LOOKUP_RESULT_CLASS_SIGNAL = 5,
    LOOKUP_RESULT_CLASS_ENUM = 6,
    LOOKUP_RESULT_CLASS_TBD_GLOBALSCOPE = 7,
    LOOKUP_RESULT_CLASS_ANNOTATION = 8,
    LOOKUP_RESULT_MAX = 9,
  }
  static CodeCompletionLocation = {
    LOCATION_LOCAL = 0,
    LOCATION_PARENT_MASK = 256,
    LOCATION_OTHER_USER_CODE = 512,
    LOCATION_OTHER = 1024,
  }
  static CodeCompletionKind = {
    CODE_COMPLETION_KIND_CLASS = 0,
    CODE_COMPLETION_KIND_FUNCTION = 1,
    CODE_COMPLETION_KIND_SIGNAL = 2,
    CODE_COMPLETION_KIND_VARIABLE = 3,
    CODE_COMPLETION_KIND_MEMBER = 4,
    CODE_COMPLETION_KIND_ENUM = 5,
    CODE_COMPLETION_KIND_CONSTANT = 6,
    CODE_COMPLETION_KIND_NODE_PATH = 7,
    CODE_COMPLETION_KIND_FILE_PATH = 8,
    CODE_COMPLETION_KIND_PLAIN_TEXT = 9,
    CODE_COMPLETION_KIND_MAX = 10,
  }
}