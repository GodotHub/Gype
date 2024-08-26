import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { ScriptLanguage } from 'src/js_godot/classesscript_language'
import { Variant } from 'src/js_godot/variant/variant'
import { StringName } from 'src/js_godot/variant/string_name'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { Dictionary } from 'src/js_godot/variant/dictionary'
class _MethodBindings {
    method__get_name;
    method__init;
    method__get_type;
    method__get_extension;
    method__finish;
    method__get_reserved_words;
    method__is_control_flow_keyword;
    method__get_comment_delimiters;
    method__get_doc_comment_delimiters;
    method__get_string_delimiters;
    method__make_template;
    method__get_built_in_templates;
    method__is_using_templates;
    method__validate;
    method__validate_path;
    method__create_script;
    method__has_named_classes;
    method__supports_builtin_mode;
    method__supports_documentation;
    method__can_inherit_from_file;
    method__find_function;
    method__make_function;
    method__can_make_function;
    method__open_in_external_editor;
    method__overrides_external_editor;
    method__preferred_file_name_casing;
    method__complete_code;
    method__lookup_code;
    method__auto_indent_code;
    method__add_global_constant;
    method__add_named_global_constant;
    method__remove_named_global_constant;
    method__thread_enter;
    method__thread_exit;
    method__debug_get_error;
    method__debug_get_stack_level_count;
    method__debug_get_stack_level_line;
    method__debug_get_stack_level_function;
    method__debug_get_stack_level_source;
    method__debug_get_stack_level_locals;
    method__debug_get_stack_level_members;
    method__debug_get_stack_level_instance;
    method__debug_get_globals;
    method__debug_parse_stack_level_expression;
    method__debug_get_current_stack_info;
    method__reload_all_scripts;
    method__reload_tool_script;
    method__get_recognized_extensions;
    method__get_public_functions;
    method__get_public_constants;
    method__get_public_annotations;
    method__profiling_start;
    method__profiling_stop;
    method__profiling_set_save_native_calls;
    method__profiling_get_accumulated_data;
    method__profiling_get_frame_data;
    method__frame;
    method__handles_global_class_type;
    method__get_global_class_name;
}


export class ScriptLanguageExtension extends ScriptLanguage{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ScriptLanguageExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_get_name");
      this._bindings.method__get_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_init");
      this._bindings.method__init = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_get_type");
      this._bindings.method__get_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_get_extension");
      this._bindings.method__get_extension = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_finish");
      this._bindings.method__finish = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_get_reserved_words");
      this._bindings.method__get_reserved_words = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_is_control_flow_keyword");
      this._bindings.method__is_control_flow_keyword = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_get_comment_delimiters");
      this._bindings.method__get_comment_delimiters = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_get_doc_comment_delimiters");
      this._bindings.method__get_doc_comment_delimiters = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_get_string_delimiters");
      this._bindings.method__get_string_delimiters = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_make_template");
      this._bindings.method__make_template = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_get_built_in_templates");
      this._bindings.method__get_built_in_templates = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_is_using_templates");
      this._bindings.method__is_using_templates = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_validate");
      this._bindings.method__validate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_validate_path");
      this._bindings.method__validate_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_create_script");
      this._bindings.method__create_script = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_has_named_classes");
      this._bindings.method__has_named_classes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_supports_builtin_mode");
      this._bindings.method__supports_builtin_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_supports_documentation");
      this._bindings.method__supports_documentation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_can_inherit_from_file");
      this._bindings.method__can_inherit_from_file = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_find_function");
      this._bindings.method__find_function = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_make_function");
      this._bindings.method__make_function = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_can_make_function");
      this._bindings.method__can_make_function = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_open_in_external_editor");
      this._bindings.method__open_in_external_editor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_overrides_external_editor");
      this._bindings.method__overrides_external_editor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_preferred_file_name_casing");
      this._bindings.method__preferred_file_name_casing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_complete_code");
      this._bindings.method__complete_code = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_lookup_code");
      this._bindings.method__lookup_code = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_auto_indent_code");
      this._bindings.method__auto_indent_code = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_add_global_constant");
      this._bindings.method__add_global_constant = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_add_named_global_constant");
      this._bindings.method__add_named_global_constant = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_remove_named_global_constant");
      this._bindings.method__remove_named_global_constant = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_thread_enter");
      this._bindings.method__thread_enter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_thread_exit");
      this._bindings.method__thread_exit = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_debug_get_error");
      this._bindings.method__debug_get_error = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_debug_get_stack_level_count");
      this._bindings.method__debug_get_stack_level_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_debug_get_stack_level_line");
      this._bindings.method__debug_get_stack_level_line = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_debug_get_stack_level_function");
      this._bindings.method__debug_get_stack_level_function = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_debug_get_stack_level_source");
      this._bindings.method__debug_get_stack_level_source = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_debug_get_stack_level_locals");
      this._bindings.method__debug_get_stack_level_locals = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_debug_get_stack_level_members");
      this._bindings.method__debug_get_stack_level_members = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_debug_get_stack_level_instance");
      this._bindings.method__debug_get_stack_level_instance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_debug_get_globals");
      this._bindings.method__debug_get_globals = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_debug_parse_stack_level_expression");
      this._bindings.method__debug_parse_stack_level_expression = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_debug_get_current_stack_info");
      this._bindings.method__debug_get_current_stack_info = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_reload_all_scripts");
      this._bindings.method__reload_all_scripts = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_reload_tool_script");
      this._bindings.method__reload_tool_script = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_get_recognized_extensions");
      this._bindings.method__get_recognized_extensions = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_get_public_functions");
      this._bindings.method__get_public_functions = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_get_public_constants");
      this._bindings.method__get_public_constants = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_get_public_annotations");
      this._bindings.method__get_public_annotations = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_profiling_start");
      this._bindings.method__profiling_start = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_profiling_stop");
      this._bindings.method__profiling_stop = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_profiling_set_save_native_calls");
      this._bindings.method__profiling_set_save_native_calls = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_profiling_get_accumulated_data");
      this._bindings.method__profiling_get_accumulated_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_profiling_get_frame_data");
      this._bindings.method__profiling_get_frame_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_frame");
      this._bindings.method__frame = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_handles_global_class_type");
      this._bindings.method__handles_global_class_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptLanguageExtension");
      let methodname = new StringName("_get_global_class_name");
      this._bindings.method__get_global_class_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
  }
  _get_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_name,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _init() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__init,
      this._owner,
      
    );
  }
  _get_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_type,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _get_extension() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_extension,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _finish() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__finish,
      this._owner,
      
    );
  }
  _get_reserved_words() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_reserved_words,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      
    );
  }
  _is_control_flow_keyword(_keyword) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_control_flow_keyword,
      this._owner,
			Variant.Type.BOOL,
      _keyword
    );
  }
  _get_comment_delimiters() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_comment_delimiters,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      
    );
  }
  _get_doc_comment_delimiters() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_doc_comment_delimiters,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      
    );
  }
  _get_string_delimiters() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_string_delimiters,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      
    );
  }
  _make_template(_template, _class_name, _base_class_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__make_template,
      this._owner,
			Variant.INT,
      _template, _class_name, _base_class_name
    );
  }
  _get_built_in_templates(_object) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_built_in_templates,
      this._owner,
			Variant.INT,
      _object
    );
  }
  _is_using_templates() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_using_templates,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _validate(_script, _path, _validate_functions, _validate_errors, _validate_warnings, _validate_safe_lines) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__validate,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _script, _path, _validate_functions, _validate_errors, _validate_warnings, _validate_safe_lines
    );
  }
  _validate_path(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__validate_path,
      this._owner,
			Variant.Type.STRING
    ,
      _path
    );
  }
  _create_script() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__create_script,
      this._owner,
			Variant.INT,
      
    );
  }
  _has_named_classes() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__has_named_classes,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _supports_builtin_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__supports_builtin_mode,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _supports_documentation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__supports_documentation,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _can_inherit_from_file() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__can_inherit_from_file,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _find_function(_function, _code) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__find_function,
      this._owner,
			Variant.Type.INT,
      _function, _code
    );
  }
  _make_function(_class_name, _function_name, _function_args) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__make_function,
      this._owner,
			Variant.Type.STRING
    ,
      _class_name, _function_name, _function_args
    );
  }
  _can_make_function() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__can_make_function,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _open_in_external_editor(_script, _line, _column) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__open_in_external_editor,
      this._owner,
			Variant.INT,
      _script, _line, _column
    );
  }
  _overrides_external_editor() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__overrides_external_editor,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _preferred_file_name_casing() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__preferred_file_name_casing,
      this._owner,
			Variant.INT,
      
    );
  }
  _complete_code(_code, _path, _owner) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__complete_code,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _code, _path, _owner
    );
  }
  _lookup_code(_code, _symbol, _path, _owner) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__lookup_code,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _code, _symbol, _path, _owner
    );
  }
  _auto_indent_code(_code, _from_line, _to_line) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__auto_indent_code,
      this._owner,
			Variant.Type.STRING
    ,
      _code, _from_line, _to_line
    );
  }
  _add_global_constant(_name, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__add_global_constant,
      this._owner,
      _name, _value
    );
  }
  _add_named_global_constant(_name, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__add_named_global_constant,
      this._owner,
      _name, _value
    );
  }
  _remove_named_global_constant(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__remove_named_global_constant,
      this._owner,
      _name
    );
  }
  _thread_enter() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__thread_enter,
      this._owner,
      
    );
  }
  _thread_exit() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__thread_exit,
      this._owner,
      
    );
  }
  _debug_get_error() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__debug_get_error,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _debug_get_stack_level_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__debug_get_stack_level_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _debug_get_stack_level_line(_level) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__debug_get_stack_level_line,
      this._owner,
			Variant.Type.INT,
      _level
    );
  }
  _debug_get_stack_level_function(_level) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__debug_get_stack_level_function,
      this._owner,
			Variant.Type.STRING
    ,
      _level
    );
  }
  _debug_get_stack_level_source(_level) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__debug_get_stack_level_source,
      this._owner,
			Variant.Type.STRING
    ,
      _level
    );
  }
  _debug_get_stack_level_locals(_level, _max_subitems, _max_depth) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__debug_get_stack_level_locals,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _level, _max_subitems, _max_depth
    );
  }
  _debug_get_stack_level_members(_level, _max_subitems, _max_depth) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__debug_get_stack_level_members,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _level, _max_subitems, _max_depth
    );
  }
  _debug_get_stack_level_instance(_level) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__debug_get_stack_level_instance,
      this._owner,
			Variant.INT,
      _level
    );
  }
  _debug_get_globals(_max_subitems, _max_depth) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__debug_get_globals,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _max_subitems, _max_depth
    );
  }
  _debug_parse_stack_level_expression(_level, _expression, _max_subitems, _max_depth) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__debug_parse_stack_level_expression,
      this._owner,
			Variant.Type.STRING
    ,
      _level, _expression, _max_subitems, _max_depth
    );
  }
  _debug_get_current_stack_info() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__debug_get_current_stack_info,
      this._owner,
			Variant.INT,
      
    );
  }
  _reload_all_scripts() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__reload_all_scripts,
      this._owner,
      
    );
  }
  _reload_tool_script(_script, _soft_reload) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__reload_tool_script,
      this._owner,
      _script, _soft_reload
    );
  }
  _get_recognized_extensions() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_recognized_extensions,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      
    );
  }
  _get_public_functions() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_public_functions,
      this._owner,
			Variant.INT,
      
    );
  }
  _get_public_constants() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_public_constants,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      
    );
  }
  _get_public_annotations() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_public_annotations,
      this._owner,
			Variant.INT,
      
    );
  }
  _profiling_start() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__profiling_start,
      this._owner,
      
    );
  }
  _profiling_stop() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__profiling_stop,
      this._owner,
      
    );
  }
  _profiling_set_save_native_calls(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__profiling_set_save_native_calls,
      this._owner,
      _enable
    );
  }
  _profiling_get_accumulated_data(_info_array, _info_max) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__profiling_get_accumulated_data,
      this._owner,
			Variant.Type.INT,
      _info_array, _info_max
    );
  }
  _profiling_get_frame_data(_info_array, _info_max) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__profiling_get_frame_data,
      this._owner,
			Variant.Type.INT,
      _info_array, _info_max
    );
  }
  _frame() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__frame,
      this._owner,
      
    );
  }
  _handles_global_class_type(_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__handles_global_class_type,
      this._owner,
			Variant.Type.BOOL,
      _type
    );
  }
  _get_global_class_name(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_global_class_name,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _path
    );
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