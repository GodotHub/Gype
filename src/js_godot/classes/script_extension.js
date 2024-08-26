import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { Variant } from 'src/js_godot/variant/variant'
import { Script } from 'src/js_godot/classesscript'
import { StringName } from 'src/js_godot/variant/string_name'
import { Dictionary } from 'src/js_godot/variant/dictionary'
class _MethodBindings {
    method__editor_can_reload_from_file;
    method__placeholder_erased;
    method__can_instantiate;
    method__get_base_script;
    method__get_global_name;
    method__inherits_script;
    method__get_instance_base_type;
    method__instance_create;
    method__placeholder_instance_create;
    method__instance_has;
    method__has_source_code;
    method__get_source_code;
    method__set_source_code;
    method__reload;
    method__get_documentation;
    method__get_class_icon_path;
    method__has_method;
    method__has_static_method;
    method__get_script_method_argument_count;
    method__get_method_info;
    method__is_tool;
    method__is_valid;
    method__is_abstract;
    method__get_language;
    method__has_script_signal;
    method__get_script_signal_list;
    method__has_property_default_value;
    method__get_property_default_value;
    method__update_exports;
    method__get_script_method_list;
    method__get_script_property_list;
    method__get_member_line;
    method__get_constants;
    method__get_members;
    method__is_placeholder_fallback_enabled;
    method__get_rpc_config;
}


export class ScriptExtension extends Script{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ScriptExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_editor_can_reload_from_file");
      this._bindings.method__editor_can_reload_from_file = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_placeholder_erased");
      this._bindings.method__placeholder_erased = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_can_instantiate");
      this._bindings.method__can_instantiate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_get_base_script");
      this._bindings.method__get_base_script = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_get_global_name");
      this._bindings.method__get_global_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_inherits_script");
      this._bindings.method__inherits_script = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_get_instance_base_type");
      this._bindings.method__get_instance_base_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_instance_create");
      this._bindings.method__instance_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_placeholder_instance_create");
      this._bindings.method__placeholder_instance_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_instance_has");
      this._bindings.method__instance_has = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_has_source_code");
      this._bindings.method__has_source_code = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_get_source_code");
      this._bindings.method__get_source_code = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_set_source_code");
      this._bindings.method__set_source_code = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_reload");
      this._bindings.method__reload = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_get_documentation");
      this._bindings.method__get_documentation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_get_class_icon_path");
      this._bindings.method__get_class_icon_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_has_method");
      this._bindings.method__has_method = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_has_static_method");
      this._bindings.method__has_static_method = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_get_script_method_argument_count");
      this._bindings.method__get_script_method_argument_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_get_method_info");
      this._bindings.method__get_method_info = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_is_tool");
      this._bindings.method__is_tool = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_is_valid");
      this._bindings.method__is_valid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_is_abstract");
      this._bindings.method__is_abstract = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_get_language");
      this._bindings.method__get_language = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_has_script_signal");
      this._bindings.method__has_script_signal = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_get_script_signal_list");
      this._bindings.method__get_script_signal_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_has_property_default_value");
      this._bindings.method__has_property_default_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_get_property_default_value");
      this._bindings.method__get_property_default_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_update_exports");
      this._bindings.method__update_exports = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_get_script_method_list");
      this._bindings.method__get_script_method_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_get_script_property_list");
      this._bindings.method__get_script_property_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_get_member_line");
      this._bindings.method__get_member_line = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_get_constants");
      this._bindings.method__get_constants = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_get_members");
      this._bindings.method__get_members = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_is_placeholder_fallback_enabled");
      this._bindings.method__is_placeholder_fallback_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("ScriptExtension");
      let methodname = new StringName("_get_rpc_config");
      this._bindings.method__get_rpc_config = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
  }
  _editor_can_reload_from_file() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__editor_can_reload_from_file,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _placeholder_erased(_placeholder) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__placeholder_erased,
      this._owner,
      _placeholder
    );
  }
  _can_instantiate() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__can_instantiate,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _get_base_script() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_base_script,
      this._owner,
			Variant.INT,
      
    );
  }
  _get_global_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_global_name,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      
    );
  }
  _inherits_script(_script) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__inherits_script,
      this._owner,
			Variant.Type.BOOL,
      _script
    );
  }
  _get_instance_base_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_instance_base_type,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      
    );
  }
  _instance_create(_for_object) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__instance_create,
      this._owner,
			Variant.INT,
      _for_object
    );
  }
  _placeholder_instance_create(_for_object) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__placeholder_instance_create,
      this._owner,
			Variant.INT,
      _for_object
    );
  }
  _instance_has(_object) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__instance_has,
      this._owner,
			Variant.Type.BOOL,
      _object
    );
  }
  _has_source_code() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__has_source_code,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _get_source_code() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_source_code,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _set_source_code(_code) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_source_code,
      this._owner,
      _code
    );
  }
  _reload(_keep_state) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__reload,
      this._owner,
			Variant.INT,
      _keep_state
    );
  }
  _get_documentation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_documentation,
      this._owner,
			Variant.INT,
      
    );
  }
  _get_class_icon_path() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_class_icon_path,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  _has_method(_method) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__has_method,
      this._owner,
			Variant.Type.BOOL,
      _method
    );
  }
  _has_static_method(_method) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__has_static_method,
      this._owner,
			Variant.Type.BOOL,
      _method
    );
  }
  _get_script_method_argument_count(_method) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_script_method_argument_count,
      this._owner,
			Variant.Type.VARIANT
    ,
      _method
    );
  }
  _get_method_info(_method) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_method_info,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _method
    );
  }
  _is_tool() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_tool,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _is_valid() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_valid,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _is_abstract() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_abstract,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _get_language() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_language,
      this._owner,
			Variant.INT,
      
    );
  }
  _has_script_signal(_signal) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__has_script_signal,
      this._owner,
			Variant.Type.BOOL,
      _signal
    );
  }
  _get_script_signal_list() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_script_signal_list,
      this._owner,
			Variant.INT,
      
    );
  }
  _has_property_default_value(_property) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__has_property_default_value,
      this._owner,
			Variant.Type.BOOL,
      _property
    );
  }
  _get_property_default_value(_property) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_property_default_value,
      this._owner,
			Variant.Type.VARIANT
    ,
      _property
    );
  }
  _update_exports() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__update_exports,
      this._owner,
      
    );
  }
  _get_script_method_list() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_script_method_list,
      this._owner,
			Variant.INT,
      
    );
  }
  _get_script_property_list() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_script_property_list,
      this._owner,
			Variant.INT,
      
    );
  }
  _get_member_line(_member) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_member_line,
      this._owner,
			Variant.Type.INT,
      _member
    );
  }
  _get_constants() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_constants,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      
    );
  }
  _get_members() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_members,
      this._owner,
			Variant.INT,
      
    );
  }
  _is_placeholder_fallback_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_placeholder_fallback_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _get_rpc_config() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_rpc_config,
      this._owner,
			Variant.Type.VARIANT
    ,
      
    );
  }
}