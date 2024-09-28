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
  method_set_original_class;
  method_get_original_class;
  method_set_original_scene;
  method_get_original_scene;
  method_set_recording_properties;
  method_is_recording_properties;
}
@GodotClass
export class MissingNode extends Node{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("MissingNode");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_original_class() {
    if (!this._bindings.method_set_original_class) {
      let classname = new StringName("MissingNode");
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
      let classname = new StringName("MissingNode");
      let methodname = new StringName("get_original_class");
      this._bindings.method_get_original_class = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_original_scene() {
    if (!this._bindings.method_set_original_scene) {
      let classname = new StringName("MissingNode");
      let methodname = new StringName("set_original_scene");
      this._bindings.method_set_original_scene = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_original_scene() {
    if (!this._bindings.method_get_original_scene) {
      let classname = new StringName("MissingNode");
      let methodname = new StringName("get_original_scene");
      this._bindings.method_get_original_scene = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_recording_properties() {
    if (!this._bindings.method_set_recording_properties) {
      let classname = new StringName("MissingNode");
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
      let classname = new StringName("MissingNode");
      let methodname = new StringName("is_recording_properties");
      this._bindings.method_is_recording_properties = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_original_class(_name) {
    MissingNode.init_method_set_original_class();
    return _call_native_mb_no_ret(
      MissingNode._bindings.method_set_original_class,
      this._owner,
      _name
    );
    
  }
  get_original_class() {
    MissingNode.init_method_get_original_class();
    return _call_native_mb_ret(
      MissingNode._bindings.method_get_original_class,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_original_scene(_name) {
    MissingNode.init_method_set_original_scene();
    return _call_native_mb_no_ret(
      MissingNode._bindings.method_set_original_scene,
      this._owner,
      _name
    );
    
  }
  get_original_scene() {
    MissingNode.init_method_get_original_scene();
    return _call_native_mb_ret(
      MissingNode._bindings.method_get_original_scene,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_recording_properties(_enable) {
    MissingNode.init_method_set_recording_properties();
    return _call_native_mb_no_ret(
      MissingNode._bindings.method_set_recording_properties,
      this._owner,
      _enable
    );
    
  }
  is_recording_properties() {
    MissingNode.init_method_is_recording_properties();
    return _call_native_mb_ret(
      MissingNode._bindings.method_is_recording_properties,
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
get original_scene () {
  return this.get_original_scene();
}
set original_scene (new_value) {
  this.set_original_scene(new_value);
}
get recording_properties () {
  return this.is_recording_properties();
}
set recording_properties (new_value) {
  this.set_recording_properties(new_value);
}

}