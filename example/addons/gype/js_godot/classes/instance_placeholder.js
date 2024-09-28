import * as internal from '__internal__';
import { Node } from '@js_godot/classes/node'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_get_stored_values;
  method_create_instance;
  method_get_instance_path;
}
@GodotClass
export class InstancePlaceholder extends Node{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InstancePlaceholder");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_stored_values() {
    if (!this._bindings.method_get_stored_values) {
      let classname = new StringName("InstancePlaceholder");
      let methodname = new StringName("get_stored_values");
      this._bindings.method_get_stored_values = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2230153369
      );
    }
  }
  static init_method_create_instance() {
    if (!this._bindings.method_create_instance) {
      let classname = new StringName("InstancePlaceholder");
      let methodname = new StringName("create_instance");
      this._bindings.method_create_instance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3794612210
      );
    }
  }
  static init_method_get_instance_path() {
    if (!this._bindings.method_get_instance_path) {
      let classname = new StringName("InstancePlaceholder");
      let methodname = new StringName("get_instance_path");
      this._bindings.method_get_instance_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }

  
  
  get_stored_values(_with_order) {
    InstancePlaceholder.init_method_get_stored_values();
    return _call_native_mb_ret(
      InstancePlaceholder._bindings.method_get_stored_values,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _with_order
    );
    
  }
  create_instance(_replace, _custom_scene) {
    InstancePlaceholder.init_method_create_instance();
    return _call_native_mb_ret(
      InstancePlaceholder._bindings.method_create_instance,
      this._owner,
			Variant.Type.OBJECT,
      _replace, _custom_scene
    );
    
  }
  get_instance_path() {
    InstancePlaceholder.init_method_get_instance_path();
    return _call_native_mb_ret(
      InstancePlaceholder._bindings.method_get_instance_path,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  

}