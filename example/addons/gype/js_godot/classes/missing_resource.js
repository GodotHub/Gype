import * as internal from '__internal__';
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
  method_set_original_class;
  method_get_original_class;
  method_set_recording_properties;
  method_is_recording_properties;
}
@GodotClass
export class MissingResource extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("MissingResource");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_original_class() {
    if (!this._bindings.method_set_original_class) {
      let classname = new StringName("MissingResource");
      let methodname = new StringName("set_original_class");
      this._bindings.method_set_original_class = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_original_class() {
    if (!this._bindings.method_get_original_class) {
      let classname = new StringName("MissingResource");
      let methodname = new StringName("get_original_class");
      this._bindings.method_get_original_class = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_recording_properties() {
    if (!this._bindings.method_set_recording_properties) {
      let classname = new StringName("MissingResource");
      let methodname = new StringName("set_recording_properties");
      this._bindings.method_set_recording_properties = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_recording_properties() {
    if (!this._bindings.method_is_recording_properties) {
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
    MissingResource.init_method_set_original_class();
    return _call_native_mb_no_ret(
      MissingResource._bindings.method_set_original_class,
      this._owner,
      _name
    );
    
  }
  get_original_class() {
    MissingResource.init_method_get_original_class();
    return _call_native_mb_ret(
      MissingResource._bindings.method_get_original_class,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_recording_properties(_enable) {
    MissingResource.init_method_set_recording_properties();
    return _call_native_mb_no_ret(
      MissingResource._bindings.method_set_recording_properties,
      this._owner,
      _enable
    );
    
  }
  is_recording_properties() {
    MissingResource.init_method_is_recording_properties();
    return _call_native_mb_ret(
      MissingResource._bindings.method_is_recording_properties,
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

}