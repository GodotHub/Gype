import * as internal from '__internal__';
import { Vector2 } from '@js_godot/variant/vector2'
import { Resource } from '@js_godot/classes/resource'
import { RID } from '@js_godot/variant/rid'
import { StringName } from '@js_godot/variant/string_name'
import { Color } from '@js_godot/variant/color'
import { Variant } from '@js_godot/variant/variant'
import { Rect2 } from '@js_godot/variant/rect2'
import { PackedVector2Array } from '@js_godot/variant/packed_vector2_array'
import { Transform2D } from '@js_godot/variant/transform2d'
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

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Shape2D");
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
      let classname = new StringName("Shape2D");
      let methodname = new StringName("set_custom_solver_bias");
      this._bindings.method_set_custom_solver_bias = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Shape2D");
      let methodname = new StringName("get_custom_solver_bias");
      this._bindings.method_get_custom_solver_bias = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Shape2D");
      let methodname = new StringName("collide");
      this._bindings.method_collide = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3709843132
      );
    }
    {
      let classname = new StringName("Shape2D");
      let methodname = new StringName("collide_with_motion");
      this._bindings.method_collide_with_motion = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2869556801
      );
    }
    {
      let classname = new StringName("Shape2D");
      let methodname = new StringName("collide_and_get_contacts");
      this._bindings.method_collide_and_get_contacts = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3056932662
      );
    }
    {
      let classname = new StringName("Shape2D");
      let methodname = new StringName("collide_with_motion_and_get_contacts");
      this._bindings.method_collide_with_motion_and_get_contacts = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3620351573
      );
    }
    {
      let classname = new StringName("Shape2D");
      let methodname = new StringName("draw");
      this._bindings.method_draw = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2948539648
      );
    }
    {
      let classname = new StringName("Shape2D");
      let methodname = new StringName("get_rect");
      this._bindings.method_get_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1639390495
      );
    }
  }
  
  set_custom_solver_bias(_bias) {
    return _call_native_mb_no_ret(
      Shape2D._bindings.method_set_custom_solver_bias,
      this._owner,
      _bias
    );
    
  }
  get_custom_solver_bias() {
    return _call_native_mb_ret(
      Shape2D._bindings.method_get_custom_solver_bias,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  collide(_local_xform, _with_shape, _shape_xform) {
    return _call_native_mb_ret(
      Shape2D._bindings.method_collide,
      this._owner,
			Variant.Type.BOOL,
      _local_xform, _with_shape, _shape_xform
    );
    
  }
  collide_with_motion(_local_xform, _local_motion, _with_shape, _shape_xform, _shape_motion) {
    return _call_native_mb_ret(
      Shape2D._bindings.method_collide_with_motion,
      this._owner,
			Variant.Type.BOOL,
      _local_xform, _local_motion, _with_shape, _shape_xform, _shape_motion
    );
    
  }
  collide_and_get_contacts(_local_xform, _with_shape, _shape_xform) {
    return _call_native_mb_ret(
      Shape2D._bindings.method_collide_and_get_contacts,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      _local_xform, _with_shape, _shape_xform
    );
    
  }
  collide_with_motion_and_get_contacts(_local_xform, _local_motion, _with_shape, _shape_xform, _shape_motion) {
    return _call_native_mb_ret(
      Shape2D._bindings.method_collide_with_motion_and_get_contacts,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      _local_xform, _local_motion, _with_shape, _shape_xform, _shape_motion
    );
    
  }
  draw(_canvas_item, _color) {
    return _call_native_mb_no_ret(
      Shape2D._bindings.method_draw,
      this._owner,
      _canvas_item, _color
    );
    
  }
  get_rect() {
    return _call_native_mb_ret(
      Shape2D._bindings.method_get_rect,
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


  static {
    this._init_bindings();
  }
}