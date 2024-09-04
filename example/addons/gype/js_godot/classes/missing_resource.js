import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Resource } from '@js_godot/classes/resource'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_original_class;
  method_get_original_class;
  method_set_recording_properties;
  method_is_recording_properties;
}
export class MissingResource extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("MissingResource");
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
      let classname = new StringName("MissingResource");
      let methodname = new StringName("set_original_class");
      this._bindings.method_set_original_class = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("MissingResource");
      let methodname = new StringName("get_original_class");
      this._bindings.method_get_original_class = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("MissingResource");
      let methodname = new StringName("set_recording_properties");
      this._bindings.method_set_recording_properties = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("MissingResource");
      let methodname = new StringName("is_recording_properties");
      this._bindings.method_is_recording_properties = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  set_original_class(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_original_class,
      this._owner,
      _name
    );
    
  }
  get_original_class() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_original_class,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_recording_properties(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_recording_properties,
      this._owner,
      _enable
    );
    
  }
  is_recording_properties() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_recording_properties,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  
get original_class () {
  return this.get_original_class();
}
set original_class (new_value) {
  this.set_original_class(new_value);
}
get recording_properties () {
  return this.is_recording_properties();
}
set recording_properties (new_value) {
  this.set_recording_properties(new_value);
}


  static {
    this._init_bindings();
  }
}