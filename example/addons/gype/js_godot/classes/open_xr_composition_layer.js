import * as internal from '__internal__';
import { Node3D } from '@js_godot/classes/node3d'
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
  method_set_layer_viewport;
  method_get_layer_viewport;
  method_set_enable_hole_punch;
  method_get_enable_hole_punch;
  method_set_sort_order;
  method_get_sort_order;
  method_set_alpha_blend;
  method_get_alpha_blend;
  method_is_natively_supported;
  method_intersects_ray;
}
@GodotClass
export class OpenXRCompositionLayer extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("OpenXRCompositionLayer");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_layer_viewport() {
    if (!this._bindings.method_set_layer_viewport) {
      let classname = new StringName("OpenXRCompositionLayer");
      let methodname = new StringName("set_layer_viewport");
      this._bindings.method_set_layer_viewport = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3888077664
      );
    }
  }
  static init_method_get_layer_viewport() {
    if (!this._bindings.method_get_layer_viewport) {
      let classname = new StringName("OpenXRCompositionLayer");
      let methodname = new StringName("get_layer_viewport");
      this._bindings.method_get_layer_viewport = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3750751911
      );
    }
  }
  static init_method_set_enable_hole_punch() {
    if (!this._bindings.method_set_enable_hole_punch) {
      let classname = new StringName("OpenXRCompositionLayer");
      let methodname = new StringName("set_enable_hole_punch");
      this._bindings.method_set_enable_hole_punch = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_enable_hole_punch() {
    if (!this._bindings.method_get_enable_hole_punch) {
      let classname = new StringName("OpenXRCompositionLayer");
      let methodname = new StringName("get_enable_hole_punch");
      this._bindings.method_get_enable_hole_punch = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_sort_order() {
    if (!this._bindings.method_set_sort_order) {
      let classname = new StringName("OpenXRCompositionLayer");
      let methodname = new StringName("set_sort_order");
      this._bindings.method_set_sort_order = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_sort_order() {
    if (!this._bindings.method_get_sort_order) {
      let classname = new StringName("OpenXRCompositionLayer");
      let methodname = new StringName("get_sort_order");
      this._bindings.method_get_sort_order = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_alpha_blend() {
    if (!this._bindings.method_set_alpha_blend) {
      let classname = new StringName("OpenXRCompositionLayer");
      let methodname = new StringName("set_alpha_blend");
      this._bindings.method_set_alpha_blend = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_alpha_blend() {
    if (!this._bindings.method_get_alpha_blend) {
      let classname = new StringName("OpenXRCompositionLayer");
      let methodname = new StringName("get_alpha_blend");
      this._bindings.method_get_alpha_blend = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_natively_supported() {
    if (!this._bindings.method_is_natively_supported) {
      let classname = new StringName("OpenXRCompositionLayer");
      let methodname = new StringName("is_natively_supported");
      this._bindings.method_is_natively_supported = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_intersects_ray() {
    if (!this._bindings.method_intersects_ray) {
      let classname = new StringName("OpenXRCompositionLayer");
      let methodname = new StringName("intersects_ray");
      this._bindings.method_intersects_ray = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1091262597
      );
    }
  }

  
  
  set_layer_viewport(_viewport) {
    OpenXRCompositionLayer.init_method_set_layer_viewport();
    return _call_native_mb_no_ret(
      OpenXRCompositionLayer._bindings.method_set_layer_viewport,
      this._owner,
      _viewport
    );
    
  }
  get_layer_viewport() {
    OpenXRCompositionLayer.init_method_get_layer_viewport();
    return _call_native_mb_ret(
      OpenXRCompositionLayer._bindings.method_get_layer_viewport,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_enable_hole_punch(_enable) {
    OpenXRCompositionLayer.init_method_set_enable_hole_punch();
    return _call_native_mb_no_ret(
      OpenXRCompositionLayer._bindings.method_set_enable_hole_punch,
      this._owner,
      _enable
    );
    
  }
  get_enable_hole_punch() {
    OpenXRCompositionLayer.init_method_get_enable_hole_punch();
    return _call_native_mb_ret(
      OpenXRCompositionLayer._bindings.method_get_enable_hole_punch,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_sort_order(_order) {
    OpenXRCompositionLayer.init_method_set_sort_order();
    return _call_native_mb_no_ret(
      OpenXRCompositionLayer._bindings.method_set_sort_order,
      this._owner,
      _order
    );
    
  }
  get_sort_order() {
    OpenXRCompositionLayer.init_method_get_sort_order();
    return _call_native_mb_ret(
      OpenXRCompositionLayer._bindings.method_get_sort_order,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_alpha_blend(_enabled) {
    OpenXRCompositionLayer.init_method_set_alpha_blend();
    return _call_native_mb_no_ret(
      OpenXRCompositionLayer._bindings.method_set_alpha_blend,
      this._owner,
      _enabled
    );
    
  }
  get_alpha_blend() {
    OpenXRCompositionLayer.init_method_get_alpha_blend();
    return _call_native_mb_ret(
      OpenXRCompositionLayer._bindings.method_get_alpha_blend,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_natively_supported() {
    OpenXRCompositionLayer.init_method_is_natively_supported();
    return _call_native_mb_ret(
      OpenXRCompositionLayer._bindings.method_is_natively_supported,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  intersects_ray(_origin, _direction) {
    OpenXRCompositionLayer.init_method_intersects_ray();
    return _call_native_mb_ret(
      OpenXRCompositionLayer._bindings.method_intersects_ray,
      this._owner,
			Variant.Type.VECTOR2,
    
      _origin, _direction
    );
    
  }
  
get layer_viewport () {
  return this.get_layer_viewport();
}
set layer_viewport (new_value) {
  this.set_layer_viewport(new_value);
}
get sort_order () {
  return this.get_sort_order();
}
set sort_order (new_value) {
  this.set_sort_order(new_value);
}
get alpha_blend () {
  return this.get_alpha_blend();
}
set alpha_blend (new_value) {
  this.set_alpha_blend(new_value);
}
get enable_hole_punch () {
  return this.get_enable_hole_punch();
}
set enable_hole_punch (new_value) {
  this.set_enable_hole_punch(new_value);
}

}