import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_custom_solver_bias;
  method_get_custom_solver_bias;
  method_collide;
  method_collide_with_motion;
  method_collide_and_get_contacts;
  method_collide_with_motion_and_get_contacts;
  method_draw;
  method_get_rect;
}
export class Shape2D extends Resource{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Shape2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_custom_solver_bias() {
    if (!this.#_bindings.method_set_custom_solver_bias) {
      let classname = new StringName("Shape2D");
      let methodname = new StringName("set_custom_solver_bias");
      this.#_bindings.method_set_custom_solver_bias = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_custom_solver_bias() {
    if (!this.#_bindings.method_get_custom_solver_bias) {
      let classname = new StringName("Shape2D");
      let methodname = new StringName("get_custom_solver_bias");
      this.#_bindings.method_get_custom_solver_bias = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_collide() {
    if (!this.#_bindings.method_collide) {
      let classname = new StringName("Shape2D");
      let methodname = new StringName("collide");
      this.#_bindings.method_collide = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3709843132
      );
    }
  }
  static init_method_collide_with_motion() {
    if (!this.#_bindings.method_collide_with_motion) {
      let classname = new StringName("Shape2D");
      let methodname = new StringName("collide_with_motion");
      this.#_bindings.method_collide_with_motion = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2869556801
      );
    }
  }
  static init_method_collide_and_get_contacts() {
    if (!this.#_bindings.method_collide_and_get_contacts) {
      let classname = new StringName("Shape2D");
      let methodname = new StringName("collide_and_get_contacts");
      this.#_bindings.method_collide_and_get_contacts = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3056932662
      );
    }
  }
  static init_method_collide_with_motion_and_get_contacts() {
    if (!this.#_bindings.method_collide_with_motion_and_get_contacts) {
      let classname = new StringName("Shape2D");
      let methodname = new StringName("collide_with_motion_and_get_contacts");
      this.#_bindings.method_collide_with_motion_and_get_contacts = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3620351573
      );
    }
  }
  static init_method_draw() {
    if (!this.#_bindings.method_draw) {
      let classname = new StringName("Shape2D");
      let methodname = new StringName("draw");
      this.#_bindings.method_draw = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2948539648
      );
    }
  }
  static init_method_get_rect() {
    if (!this.#_bindings.method_get_rect) {
      let classname = new StringName("Shape2D");
      let methodname = new StringName("get_rect");
      this.#_bindings.method_get_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1639390495
      );
    }
  }

  
  
  set_custom_solver_bias(_bias) {
    Shape2D.init_method_set_custom_solver_bias();
    return _call_native_mb_no_ret(
      Shape2D.#_bindings.method_set_custom_solver_bias,
      this._owner,
      _bias
    );
    
  }
  get_custom_solver_bias() {
    Shape2D.init_method_get_custom_solver_bias();
    return _call_native_mb_ret(
      Shape2D.#_bindings.method_get_custom_solver_bias,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  collide(_local_xform, _with_shape, _shape_xform) {
    Shape2D.init_method_collide();
    return _call_native_mb_ret(
      Shape2D.#_bindings.method_collide,
      this._owner,
			Variant.Type.BOOL,
    
      _local_xform, _with_shape, _shape_xform
    );
    
  }
  collide_with_motion(_local_xform, _local_motion, _with_shape, _shape_xform, _shape_motion) {
    Shape2D.init_method_collide_with_motion();
    return _call_native_mb_ret(
      Shape2D.#_bindings.method_collide_with_motion,
      this._owner,
			Variant.Type.BOOL,
    
      _local_xform, _local_motion, _with_shape, _shape_xform, _shape_motion
    );
    
  }
  collide_and_get_contacts(_local_xform, _with_shape, _shape_xform) {
    Shape2D.init_method_collide_and_get_contacts();
    return _call_native_mb_ret(
      Shape2D.#_bindings.method_collide_and_get_contacts,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      _local_xform, _with_shape, _shape_xform
    );
    
  }
  collide_with_motion_and_get_contacts(_local_xform, _local_motion, _with_shape, _shape_xform, _shape_motion) {
    Shape2D.init_method_collide_with_motion_and_get_contacts();
    return _call_native_mb_ret(
      Shape2D.#_bindings.method_collide_with_motion_and_get_contacts,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      _local_xform, _local_motion, _with_shape, _shape_xform, _shape_motion
    );
    
  }
  draw(_canvas_item, _color) {
    Shape2D.init_method_draw();
    return _call_native_mb_no_ret(
      Shape2D.#_bindings.method_draw,
      this._owner,
      _canvas_item, _color
    );
    
  }
  get_rect() {
    Shape2D.init_method_get_rect();
    return _call_native_mb_ret(
      Shape2D.#_bindings.method_get_rect,
      this._owner,
			Variant.Type.RECT2,
    
      
    );
    
  }
  
get custom_solver_bias () {
  return this.get_custom_solver_bias();
}
set custom_solver_bias (new_value) {
  this.set_custom_solver_bias(new_value);
}

}