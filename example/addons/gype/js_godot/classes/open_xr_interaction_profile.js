import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { Resource } from '@js_godot/classes/resource'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import { GDArray } from '@js_godot/variant/gd_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_interaction_profile_path;
  method_get_interaction_profile_path;
  method_get_binding_count;
  method_get_binding;
  method_set_bindings;
  method_get_bindings;
}
export class OpenXRInteractionProfile extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("OpenXRInteractionProfile");
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
      let classname = new StringName("OpenXRInteractionProfile");
      let methodname = new StringName("set_interaction_profile_path");
      this._bindings.method_set_interaction_profile_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("OpenXRInteractionProfile");
      let methodname = new StringName("get_interaction_profile_path");
      this._bindings.method_get_interaction_profile_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("OpenXRInteractionProfile");
      let methodname = new StringName("get_binding_count");
      this._bindings.method_get_binding_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("OpenXRInteractionProfile");
      let methodname = new StringName("get_binding");
      this._bindings.method_get_binding = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3934429652
      );
    }
    {
      let classname = new StringName("OpenXRInteractionProfile");
      let methodname = new StringName("set_bindings");
      this._bindings.method_set_bindings = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
    {
      let classname = new StringName("OpenXRInteractionProfile");
      let methodname = new StringName("get_bindings");
      this._bindings.method_get_bindings = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
  }
  set_interaction_profile_path(_interaction_profile_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_interaction_profile_path,
      this._owner,
      _interaction_profile_path
    );
    
  }
  get_interaction_profile_path() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_interaction_profile_path,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_binding_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_binding_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_binding(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_binding,
      this._owner,
			Variant.INT,
      _index
    );
    
  }
  set_bindings(_bindings) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bindings,
      this._owner,
      _bindings
    );
    
  }
  get_bindings() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bindings,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  
get interaction_profile_path () {
  return this.get_interaction_profile_path();
}
set interaction_profile_path (new_value) {
  this.set_interaction_profile_path(new_value);
}
get bindings () {
  return this.get_bindings();
}
set bindings (new_value) {
  this.set_bindings(new_value);
}


  static {
    this._init_bindings();
  }
}