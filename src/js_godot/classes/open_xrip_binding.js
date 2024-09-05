import * as internal from '__internal__';
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import { PackedStringArray } from '@js_godot/variant/packed_string_array'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_action;
  method_get_action;
  method_get_path_count;
  method_set_paths;
  method_get_paths;
  method_has_path;
  method_add_path;
  method_remove_path;
}
export class OpenXRIPBinding extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("OpenXRIPBinding");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("OpenXRIPBinding");
      let methodname = new StringName("set_action");
      this._bindings.method_set_action = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        349361333
      );
    }
    {
      let classname = new StringName("OpenXRIPBinding");
      let methodname = new StringName("get_action");
      this._bindings.method_get_action = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4072409085
      );
    }
    {
      let classname = new StringName("OpenXRIPBinding");
      let methodname = new StringName("get_path_count");
      this._bindings.method_get_path_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("OpenXRIPBinding");
      let methodname = new StringName("set_paths");
      this._bindings.method_set_paths = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4015028928
      );
    }
    {
      let classname = new StringName("OpenXRIPBinding");
      let methodname = new StringName("get_paths");
      this._bindings.method_get_paths = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1139954409
      );
    }
    {
      let classname = new StringName("OpenXRIPBinding");
      let methodname = new StringName("has_path");
      this._bindings.method_has_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3927539163
      );
    }
    {
      let classname = new StringName("OpenXRIPBinding");
      let methodname = new StringName("add_path");
      this._bindings.method_add_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("OpenXRIPBinding");
      let methodname = new StringName("remove_path");
      this._bindings.method_remove_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
  }
  
  set_action(_action) {
    return _call_native_mb_no_ret(
      OpenXRIPBinding._bindings.method_set_action,
      this._owner,
      _action
    );
    
  }
  get_action() {
    return _call_native_mb_ret(
      OpenXRIPBinding._bindings.method_get_action,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_path_count() {
    return _call_native_mb_ret(
      OpenXRIPBinding._bindings.method_get_path_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_paths(_paths) {
    return _call_native_mb_no_ret(
      OpenXRIPBinding._bindings.method_set_paths,
      this._owner,
      _paths
    );
    
  }
  get_paths() {
    return _call_native_mb_ret(
      OpenXRIPBinding._bindings.method_get_paths,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  has_path(_path) {
    return _call_native_mb_ret(
      OpenXRIPBinding._bindings.method_has_path,
      this._owner,
			Variant.Type.BOOL,
      _path
    );
    
  }
  add_path(_path) {
    return _call_native_mb_no_ret(
      OpenXRIPBinding._bindings.method_add_path,
      this._owner,
      _path
    );
    
  }
  remove_path(_path) {
    return _call_native_mb_no_ret(
      OpenXRIPBinding._bindings.method_remove_path,
      this._owner,
      _path
    );
    
  }
  
get action () {
  return this.get_action();
}
set action (new_value) {
  this.set_action(new_value);
}
get paths () {
  return this.get_paths();
}
set paths (new_value) {
  this.set_paths(new_value);
}


  static {
    this._init_bindings();
  }
}