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
  method_from_node;
  method_to_node;
  method_from_dictionary;
  method_to_dictionary;
  method_get_perspective;
  method_set_perspective;
  method_get_fov;
  method_set_fov;
  method_get_size_mag;
  method_set_size_mag;
  method_get_depth_far;
  method_set_depth_far;
  method_get_depth_near;
  method_set_depth_near;
}
@GodotClass
export class GLTFCamera extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFCamera");
    } else {
      super(godot_object);
    }
  }
  static init_method_from_node() {
    if (!this._bindings.method_from_node) {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("from_node");
      this._bindings.method_from_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        237784
      );
    }
  }
  static init_method_to_node() {
    if (!this._bindings.method_to_node) {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("to_node");
      this._bindings.method_to_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2285090890
      );
    }
  }
  static init_method_from_dictionary() {
    if (!this._bindings.method_from_dictionary) {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("from_dictionary");
      this._bindings.method_from_dictionary = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2495512509
      );
    }
  }
  static init_method_to_dictionary() {
    if (!this._bindings.method_to_dictionary) {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("to_dictionary");
      this._bindings.method_to_dictionary = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3102165223
      );
    }
  }
  static init_method_get_perspective() {
    if (!this._bindings.method_get_perspective) {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("get_perspective");
      this._bindings.method_get_perspective = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_perspective() {
    if (!this._bindings.method_set_perspective) {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("set_perspective");
      this._bindings.method_set_perspective = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_fov() {
    if (!this._bindings.method_get_fov) {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("get_fov");
      this._bindings.method_get_fov = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_fov() {
    if (!this._bindings.method_set_fov) {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("set_fov");
      this._bindings.method_set_fov = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_size_mag() {
    if (!this._bindings.method_get_size_mag) {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("get_size_mag");
      this._bindings.method_get_size_mag = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_size_mag() {
    if (!this._bindings.method_set_size_mag) {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("set_size_mag");
      this._bindings.method_set_size_mag = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_depth_far() {
    if (!this._bindings.method_get_depth_far) {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("get_depth_far");
      this._bindings.method_get_depth_far = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_depth_far() {
    if (!this._bindings.method_set_depth_far) {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("set_depth_far");
      this._bindings.method_set_depth_far = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_depth_near() {
    if (!this._bindings.method_get_depth_near) {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("get_depth_near");
      this._bindings.method_get_depth_near = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_depth_near() {
    if (!this._bindings.method_set_depth_near) {
      let classname = new StringName("GLTFCamera");
      let methodname = new StringName("set_depth_near");
      this._bindings.method_set_depth_near = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }

  
  
  from_node(_camera_node) {
    GLTFCamera.init_method_from_node();
    return _call_native_mb_ret(
      GLTFCamera._bindings.method_from_node,
      this._owner,
			Variant.Type.OBJECT,
      _camera_node
    );
    
  }
  to_node() {
    GLTFCamera.init_method_to_node();
    return _call_native_mb_ret(
      GLTFCamera._bindings.method_to_node,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  from_dictionary(_dictionary) {
    GLTFCamera.init_method_from_dictionary();
    return _call_native_mb_ret(
      GLTFCamera._bindings.method_from_dictionary,
      this._owner,
			Variant.Type.OBJECT,
      _dictionary
    );
    
  }
  to_dictionary() {
    GLTFCamera.init_method_to_dictionary();
    return _call_native_mb_ret(
      GLTFCamera._bindings.method_to_dictionary,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  get_perspective() {
    GLTFCamera.init_method_get_perspective();
    return _call_native_mb_ret(
      GLTFCamera._bindings.method_get_perspective,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_perspective(_perspective) {
    GLTFCamera.init_method_set_perspective();
    return _call_native_mb_no_ret(
      GLTFCamera._bindings.method_set_perspective,
      this._owner,
      _perspective
    );
    
  }
  get_fov() {
    GLTFCamera.init_method_get_fov();
    return _call_native_mb_ret(
      GLTFCamera._bindings.method_get_fov,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_fov(_fov) {
    GLTFCamera.init_method_set_fov();
    return _call_native_mb_no_ret(
      GLTFCamera._bindings.method_set_fov,
      this._owner,
      _fov
    );
    
  }
  get_size_mag() {
    GLTFCamera.init_method_get_size_mag();
    return _call_native_mb_ret(
      GLTFCamera._bindings.method_get_size_mag,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_size_mag(_size_mag) {
    GLTFCamera.init_method_set_size_mag();
    return _call_native_mb_no_ret(
      GLTFCamera._bindings.method_set_size_mag,
      this._owner,
      _size_mag
    );
    
  }
  get_depth_far() {
    GLTFCamera.init_method_get_depth_far();
    return _call_native_mb_ret(
      GLTFCamera._bindings.method_get_depth_far,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_depth_far(_zdepth_far) {
    GLTFCamera.init_method_set_depth_far();
    return _call_native_mb_no_ret(
      GLTFCamera._bindings.method_set_depth_far,
      this._owner,
      _zdepth_far
    );
    
  }
  get_depth_near() {
    GLTFCamera.init_method_get_depth_near();
    return _call_native_mb_ret(
      GLTFCamera._bindings.method_get_depth_near,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_depth_near(_zdepth_near) {
    GLTFCamera.init_method_set_depth_near();
    return _call_native_mb_no_ret(
      GLTFCamera._bindings.method_set_depth_near,
      this._owner,
      _zdepth_near
    );
    
  }
  
get perspective () {
  return this.get_perspective();
}
set perspective (new_value) {
  this.set_perspective(new_value);
}
get fov () {
  return this.get_fov();
}
set fov (new_value) {
  this.set_fov(new_value);
}
get size_mag () {
  return this.get_size_mag();
}
set size_mag (new_value) {
  this.set_size_mag(new_value);
}
get depth_far () {
  return this.get_depth_far();
}
set depth_far (new_value) {
  this.set_depth_far(new_value);
}
get depth_near () {
  return this.get_depth_near();
}
set depth_near (new_value) {
  this.set_depth_near(new_value);
}

}