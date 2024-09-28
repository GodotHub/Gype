import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Node2D } from '@js_godot/classes/node2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_motion_scale;
  method_get_motion_scale;
  method_set_motion_offset;
  method_get_motion_offset;
  method_set_mirroring;
  method_get_mirroring;
}
@GodotClass
export class ParallaxLayer extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ParallaxLayer");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_motion_scale() {
    if (!this._bindings.method_set_motion_scale) {
      let classname = new StringName("ParallaxLayer");
      let methodname = new StringName("set_motion_scale");
      this._bindings.method_set_motion_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_motion_scale() {
    if (!this._bindings.method_get_motion_scale) {
      let classname = new StringName("ParallaxLayer");
      let methodname = new StringName("get_motion_scale");
      this._bindings.method_get_motion_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_motion_offset() {
    if (!this._bindings.method_set_motion_offset) {
      let classname = new StringName("ParallaxLayer");
      let methodname = new StringName("set_motion_offset");
      this._bindings.method_set_motion_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_motion_offset() {
    if (!this._bindings.method_get_motion_offset) {
      let classname = new StringName("ParallaxLayer");
      let methodname = new StringName("get_motion_offset");
      this._bindings.method_get_motion_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_mirroring() {
    if (!this._bindings.method_set_mirroring) {
      let classname = new StringName("ParallaxLayer");
      let methodname = new StringName("set_mirroring");
      this._bindings.method_set_mirroring = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_mirroring() {
    if (!this._bindings.method_get_mirroring) {
      let classname = new StringName("ParallaxLayer");
      let methodname = new StringName("get_mirroring");
      this._bindings.method_get_mirroring = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }

  
  
  set_motion_scale(_scale) {
    ParallaxLayer.init_method_set_motion_scale();
    return _call_native_mb_no_ret(
      ParallaxLayer._bindings.method_set_motion_scale,
      this._owner,
      _scale
    );
    
  }
  get_motion_scale() {
    ParallaxLayer.init_method_get_motion_scale();
    return _call_native_mb_ret(
      ParallaxLayer._bindings.method_get_motion_scale,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_motion_offset(_offset) {
    ParallaxLayer.init_method_set_motion_offset();
    return _call_native_mb_no_ret(
      ParallaxLayer._bindings.method_set_motion_offset,
      this._owner,
      _offset
    );
    
  }
  get_motion_offset() {
    ParallaxLayer.init_method_get_motion_offset();
    return _call_native_mb_ret(
      ParallaxLayer._bindings.method_get_motion_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_mirroring(_mirror) {
    ParallaxLayer.init_method_set_mirroring();
    return _call_native_mb_no_ret(
      ParallaxLayer._bindings.method_set_mirroring,
      this._owner,
      _mirror
    );
    
  }
  get_mirroring() {
    ParallaxLayer.init_method_get_mirroring();
    return _call_native_mb_ret(
      ParallaxLayer._bindings.method_get_mirroring,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  
get motion_scale () {
  return this.get_motion_scale();
}
set motion_scale (new_value) {
  this.set_motion_scale(new_value);
}
get motion_offset () {
  return this.get_motion_offset();
}
set motion_offset (new_value) {
  this.set_motion_offset(new_value);
}
get motion_mirroring () {
  return this.get_mirroring();
}
set motion_mirroring (new_value) {
  this.set_mirroring(new_value);
}

}