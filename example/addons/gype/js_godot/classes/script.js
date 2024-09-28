import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_can_instantiate;
  method_instance_has;
  method_has_source_code;
  method_get_source_code;
  method_set_source_code;
  method_reload;
  method_get_base_script;
  method_get_instance_base_type;
  method_get_global_name;
  method_has_script_signal;
  method_get_script_property_list;
  method_get_script_method_list;
  method_get_script_signal_list;
  method_get_script_constant_map;
  method_get_property_default_value;
  method_is_tool;
  method_is_abstract;
}
@GodotClass
export class Script extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Script");
    } else {
      super(godot_object);
    }
  }
  static init_method_can_instantiate() {
    if (!this._bindings.method_can_instantiate) {
      let classname = new StringName("Script");
      let methodname = new StringName("can_instantiate");
      this._bindings.method_can_instantiate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_instance_has() {
    if (!this._bindings.method_instance_has) {
      let classname = new StringName("Script");
      let methodname = new StringName("instance_has");
      this._bindings.method_instance_has = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        397768994
      );
    }
  }
  static init_method_has_source_code() {
    if (!this._bindings.method_has_source_code) {
      let classname = new StringName("Script");
      let methodname = new StringName("has_source_code");
      this._bindings.method_has_source_code = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_source_code() {
    if (!this._bindings.method_get_source_code) {
      let classname = new StringName("Script");
      let methodname = new StringName("get_source_code");
      this._bindings.method_get_source_code = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_source_code() {
    if (!this._bindings.method_set_source_code) {
      let classname = new StringName("Script");
      let methodname = new StringName("set_source_code");
      this._bindings.method_set_source_code = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_reload() {
    if (!this._bindings.method_reload) {
      let classname = new StringName("Script");
      let methodname = new StringName("reload");
      this._bindings.method_reload = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1633102583
      );
    }
  }
  static init_method_get_base_script() {
    if (!this._bindings.method_get_base_script) {
      let classname = new StringName("Script");
      let methodname = new StringName("get_base_script");
      this._bindings.method_get_base_script = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        278624046
      );
    }
  }
  static init_method_get_instance_base_type() {
    if (!this._bindings.method_get_instance_base_type) {
      let classname = new StringName("Script");
      let methodname = new StringName("get_instance_base_type");
      this._bindings.method_get_instance_base_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2002593661
      );
    }
  }
  static init_method_get_global_name() {
    if (!this._bindings.method_get_global_name) {
      let classname = new StringName("Script");
      let methodname = new StringName("get_global_name");
      this._bindings.method_get_global_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2002593661
      );
    }
  }
  static init_method_has_script_signal() {
    if (!this._bindings.method_has_script_signal) {
      let classname = new StringName("Script");
      let methodname = new StringName("has_script_signal");
      this._bindings.method_has_script_signal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2619796661
      );
    }
  }
  static init_method_get_script_property_list() {
    if (!this._bindings.method_get_script_property_list) {
      let classname = new StringName("Script");
      let methodname = new StringName("get_script_property_list");
      this._bindings.method_get_script_property_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_get_script_method_list() {
    if (!this._bindings.method_get_script_method_list) {
      let classname = new StringName("Script");
      let methodname = new StringName("get_script_method_list");
      this._bindings.method_get_script_method_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_get_script_signal_list() {
    if (!this._bindings.method_get_script_signal_list) {
      let classname = new StringName("Script");
      let methodname = new StringName("get_script_signal_list");
      this._bindings.method_get_script_signal_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_get_script_constant_map() {
    if (!this._bindings.method_get_script_constant_map) {
      let classname = new StringName("Script");
      let methodname = new StringName("get_script_constant_map");
      this._bindings.method_get_script_constant_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2382534195
      );
    }
  }
  static init_method_get_property_default_value() {
    if (!this._bindings.method_get_property_default_value) {
      let classname = new StringName("Script");
      let methodname = new StringName("get_property_default_value");
      this._bindings.method_get_property_default_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2138907829
      );
    }
  }
  static init_method_is_tool() {
    if (!this._bindings.method_is_tool) {
      let classname = new StringName("Script");
      let methodname = new StringName("is_tool");
      this._bindings.method_is_tool = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_abstract() {
    if (!this._bindings.method_is_abstract) {
      let classname = new StringName("Script");
      let methodname = new StringName("is_abstract");
      this._bindings.method_is_abstract = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  can_instantiate() {
    Script.init_method_can_instantiate();
    return _call_native_mb_ret(
      Script._bindings.method_can_instantiate,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  instance_has(_base_object) {
    Script.init_method_instance_has();
    return _call_native_mb_ret(
      Script._bindings.method_instance_has,
      this._owner,
			Variant.Type.BOOL,
    
      _base_object
    );
    
  }
  has_source_code() {
    Script.init_method_has_source_code();
    return _call_native_mb_ret(
      Script._bindings.method_has_source_code,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_source_code() {
    Script.init_method_get_source_code();
    return _call_native_mb_ret(
      Script._bindings.method_get_source_code,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_source_code(_source) {
    Script.init_method_set_source_code();
    return _call_native_mb_no_ret(
      Script._bindings.method_set_source_code,
      this._owner,
      _source
    );
    
  }
  reload(_keep_state) {
    Script.init_method_reload();
    return _call_native_mb_ret(
      Script._bindings.method_reload,
      this._owner,
			Variant.Type.INT,
    
      _keep_state
    );
    
  }
  get_base_script() {
    Script.init_method_get_base_script();
    return _call_native_mb_ret(
      Script._bindings.method_get_base_script,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_instance_base_type() {
    Script.init_method_get_instance_base_type();
    return _call_native_mb_ret(
      Script._bindings.method_get_instance_base_type,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  get_global_name() {
    Script.init_method_get_global_name();
    return _call_native_mb_ret(
      Script._bindings.method_get_global_name,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  has_script_signal(_signal_name) {
    Script.init_method_has_script_signal();
    return _call_native_mb_ret(
      Script._bindings.method_has_script_signal,
      this._owner,
			Variant.Type.BOOL,
    
      _signal_name
    );
    
  }
  get_script_property_list() {
    Script.init_method_get_script_property_list();
    return _call_native_mb_ret(
      Script._bindings.method_get_script_property_list,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  get_script_method_list() {
    Script.init_method_get_script_method_list();
    return _call_native_mb_ret(
      Script._bindings.method_get_script_method_list,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  get_script_signal_list() {
    Script.init_method_get_script_signal_list();
    return _call_native_mb_ret(
      Script._bindings.method_get_script_signal_list,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  get_script_constant_map() {
    Script.init_method_get_script_constant_map();
    return _call_native_mb_ret(
      Script._bindings.method_get_script_constant_map,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  get_property_default_value(_property) {
    Script.init_method_get_property_default_value();
    return _call_native_mb_ret(
      Script._bindings.method_get_property_default_value,
      this._owner,
			Variant.Type.VARIANT,
    
      _property
    );
    
  }
  is_tool() {
    Script.init_method_is_tool();
    return _call_native_mb_ret(
      Script._bindings.method_is_tool,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_abstract() {
    Script.init_method_is_abstract();
    return _call_native_mb_ret(
      Script._bindings.method_is_abstract,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get source_code () {
  return this.get_source_code();
}
set source_code (new_value) {
  this.set_source_code(new_value);
}

}