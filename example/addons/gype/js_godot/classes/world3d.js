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
  method_get_space;
  method_get_navigation_map;
  method_get_scenario;
  method_set_environment;
  method_get_environment;
  method_set_fallback_environment;
  method_get_fallback_environment;
  method_set_camera_attributes;
  method_get_camera_attributes;
  method_get_direct_space_state;
}
@GodotClass
export class World3D extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("World3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_space() {
    if (!this._bindings.method_get_space) {
      let classname = new StringName("World3D");
      let methodname = new StringName("get_space");
      this._bindings.method_get_space = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_get_navigation_map() {
    if (!this._bindings.method_get_navigation_map) {
      let classname = new StringName("World3D");
      let methodname = new StringName("get_navigation_map");
      this._bindings.method_get_navigation_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_get_scenario() {
    if (!this._bindings.method_get_scenario) {
      let classname = new StringName("World3D");
      let methodname = new StringName("get_scenario");
      this._bindings.method_get_scenario = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_set_environment() {
    if (!this._bindings.method_set_environment) {
      let classname = new StringName("World3D");
      let methodname = new StringName("set_environment");
      this._bindings.method_set_environment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4143518816
      );
    }
  }
  static init_method_get_environment() {
    if (!this._bindings.method_get_environment) {
      let classname = new StringName("World3D");
      let methodname = new StringName("get_environment");
      this._bindings.method_get_environment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3082064660
      );
    }
  }
  static init_method_set_fallback_environment() {
    if (!this._bindings.method_set_fallback_environment) {
      let classname = new StringName("World3D");
      let methodname = new StringName("set_fallback_environment");
      this._bindings.method_set_fallback_environment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4143518816
      );
    }
  }
  static init_method_get_fallback_environment() {
    if (!this._bindings.method_get_fallback_environment) {
      let classname = new StringName("World3D");
      let methodname = new StringName("get_fallback_environment");
      this._bindings.method_get_fallback_environment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3082064660
      );
    }
  }
  static init_method_set_camera_attributes() {
    if (!this._bindings.method_set_camera_attributes) {
      let classname = new StringName("World3D");
      let methodname = new StringName("set_camera_attributes");
      this._bindings.method_set_camera_attributes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2817810567
      );
    }
  }
  static init_method_get_camera_attributes() {
    if (!this._bindings.method_get_camera_attributes) {
      let classname = new StringName("World3D");
      let methodname = new StringName("get_camera_attributes");
      this._bindings.method_get_camera_attributes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3921283215
      );
    }
  }
  static init_method_get_direct_space_state() {
    if (!this._bindings.method_get_direct_space_state) {
      let classname = new StringName("World3D");
      let methodname = new StringName("get_direct_space_state");
      this._bindings.method_get_direct_space_state = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2069328350
      );
    }
  }

  
  
  get_space() {
    World3D.init_method_get_space();
    return _call_native_mb_ret(
      World3D._bindings.method_get_space,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  get_navigation_map() {
    World3D.init_method_get_navigation_map();
    return _call_native_mb_ret(
      World3D._bindings.method_get_navigation_map,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  get_scenario() {
    World3D.init_method_get_scenario();
    return _call_native_mb_ret(
      World3D._bindings.method_get_scenario,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  set_environment(_env) {
    World3D.init_method_set_environment();
    return _call_native_mb_no_ret(
      World3D._bindings.method_set_environment,
      this._owner,
      _env
    );
    
  }
  get_environment() {
    World3D.init_method_get_environment();
    return _call_native_mb_ret(
      World3D._bindings.method_get_environment,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_fallback_environment(_env) {
    World3D.init_method_set_fallback_environment();
    return _call_native_mb_no_ret(
      World3D._bindings.method_set_fallback_environment,
      this._owner,
      _env
    );
    
  }
  get_fallback_environment() {
    World3D.init_method_get_fallback_environment();
    return _call_native_mb_ret(
      World3D._bindings.method_get_fallback_environment,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_camera_attributes(_attributes) {
    World3D.init_method_set_camera_attributes();
    return _call_native_mb_no_ret(
      World3D._bindings.method_set_camera_attributes,
      this._owner,
      _attributes
    );
    
  }
  get_camera_attributes() {
    World3D.init_method_get_camera_attributes();
    return _call_native_mb_ret(
      World3D._bindings.method_get_camera_attributes,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_direct_space_state() {
    World3D.init_method_get_direct_space_state();
    return _call_native_mb_ret(
      World3D._bindings.method_get_direct_space_state,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get environment () {
  return this.get_environment();
}
set environment (new_value) {
  this.set_environment(new_value);
}
get fallback_environment () {
  return this.get_fallback_environment();
}
set fallback_environment (new_value) {
  this.set_fallback_environment(new_value);
}
get camera_attributes () {
  return this.get_camera_attributes();
}
set camera_attributes (new_value) {
  this.set_camera_attributes(new_value);
}
get space () {
  return this.get_space();
}
get navigation_map () {
  return this.get_navigation_map();
}
get scenario () {
  return this.get_scenario();
}
get direct_space_state () {
  return this.get_direct_space_state();
}

}