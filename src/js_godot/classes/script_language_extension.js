import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { ScriptLanguage } from '@js_godot/classes/script_language'
import { GDArray } from '@js_godot/variant/gd_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
}
export class ScriptLanguageExtension extends ScriptLanguage{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ScriptLanguageExtension");
    } else {
      super(godot_object);
    }
  }

  
  
  _get_name() {
  }
  _init() {
  }
  _get_type() {
  }
  _get_extension() {
  }
  _finish() {
  }
  _get_reserved_words() {
  }
  _is_control_flow_keyword(_keyword) {
  }
  _get_comment_delimiters() {
  }
  _get_doc_comment_delimiters() {
  }
  _get_string_delimiters() {
  }
  _make_template(_template, _class_name, _base_class_name) {
  }
  _get_built_in_templates(_object) {
  }
  _is_using_templates() {
  }
  _validate(_script, _path, _validate_functions, _validate_errors, _validate_warnings, _validate_safe_lines) {
  }
  _validate_path(_path) {
  }
  _create_script() {
  }
  _has_named_classes() {
  }
  _supports_builtin_mode() {
  }
  _supports_documentation() {
  }
  _can_inherit_from_file() {
  }
  _find_function(_function, _code) {
  }
  _make_function(_class_name, _function_name, _function_args) {
  }
  _can_make_function() {
  }
  _open_in_external_editor(_script, _line, _column) {
  }
  _overrides_external_editor() {
  }
  _preferred_file_name_casing() {
  }
  _complete_code(_code, _path, _owner) {
  }
  _lookup_code(_code, _symbol, _path, _owner) {
  }
  _auto_indent_code(_code, _from_line, _to_line) {
  }
  _add_global_constant(_name, _value) {
  }
  _add_named_global_constant(_name, _value) {
  }
  _remove_named_global_constant(_name) {
  }
  _thread_enter() {
  }
  _thread_exit() {
  }
  _debug_get_error() {
  }
  _debug_get_stack_level_count() {
  }
  _debug_get_stack_level_line(_level) {
  }
  _debug_get_stack_level_function(_level) {
  }
  _debug_get_stack_level_source(_level) {
  }
  _debug_get_stack_level_locals(_level, _max_subitems, _max_depth) {
  }
  _debug_get_stack_level_members(_level, _max_subitems, _max_depth) {
  }
  _debug_get_stack_level_instance(_level) {
  }
  _debug_get_globals(_max_subitems, _max_depth) {
  }
  _debug_parse_stack_level_expression(_level, _expression, _max_subitems, _max_depth) {
  }
  _debug_get_current_stack_info() {
  }
  _reload_all_scripts() {
  }
  _reload_tool_script(_script, _soft_reload) {
  }
  _get_recognized_extensions() {
  }
  _get_public_functions() {
  }
  _get_public_constants() {
  }
  _get_public_annotations() {
  }
  _profiling_start() {
  }
  _profiling_stop() {
  }
  _profiling_set_save_native_calls(_enable) {
  }
  _profiling_get_accumulated_data(_info_array, _info_max) {
  }
  _profiling_get_frame_data(_info_array, _info_max) {
  }
  _frame() {
  }
  _handles_global_class_type(_type) {
  }
  _get_global_class_name(_path) {
  }
  

  static LookupResultType = {
    LOOKUP_RESULT_SCRIPT_LOCATION: 0,
    LOOKUP_RESULT_CLASS: 1,
    LOOKUP_RESULT_CLASS_CONSTANT: 2,
    LOOKUP_RESULT_CLASS_PROPERTY: 3,
    LOOKUP_RESULT_CLASS_METHOD: 4,
    LOOKUP_RESULT_CLASS_SIGNAL: 5,
    LOOKUP_RESULT_CLASS_ENUM: 6,
    LOOKUP_RESULT_CLASS_TBD_GLOBALSCOPE: 7,
    LOOKUP_RESULT_CLASS_ANNOTATION: 8,
    LOOKUP_RESULT_MAX: 9,
  }
  static CodeCompletionLocation = {
    LOCATION_LOCAL: 0,
    LOCATION_PARENT_MASK: 256,
    LOCATION_OTHER_USER_CODE: 512,
    LOCATION_OTHER: 1024,
  }
  static CodeCompletionKind = {
    CODE_COMPLETION_KIND_CLASS: 0,
    CODE_COMPLETION_KIND_FUNCTION: 1,
    CODE_COMPLETION_KIND_SIGNAL: 2,
    CODE_COMPLETION_KIND_VARIABLE: 3,
    CODE_COMPLETION_KIND_MEMBER: 4,
    CODE_COMPLETION_KIND_ENUM: 5,
    CODE_COMPLETION_KIND_CONSTANT: 6,
    CODE_COMPLETION_KIND_NODE_PATH: 7,
    CODE_COMPLETION_KIND_FILE_PATH: 8,
    CODE_COMPLETION_KIND_PLAIN_TEXT: 9,
    CODE_COMPLETION_KIND_MAX: 10,
  }
}