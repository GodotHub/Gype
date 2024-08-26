import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { Node } from 'src/js_godot/classesnode'
class _MethodBindings {
    method_get_stored_values;
    method_create_instance;
    method_get_instance_path;
}


export class InstancePlaceholder extends Node{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InstancePlaceholder");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("InstancePlaceholder");
      let methodname = new StringName("get_stored_values");
      this._bindings.method_get_stored_values = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2230153369
      );
    }
    {
      let classname = new StringName("InstancePlaceholder");
      let methodname = new StringName("create_instance");
      this._bindings.method_create_instance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3794612210
      );
    }
    {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_stored_values,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      _with_order
    );
  }
  create_instance(_replace, _custom_scene) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_instance,
      this._owner,
			Variant.INT,
      _replace, _custom_scene
    );
  }
  get_instance_path() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_instance_path,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
}