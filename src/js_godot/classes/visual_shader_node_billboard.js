import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { VisualShaderNode } from '@js_godot/classes/visual_shader_node'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_billboard_type;
  method_get_billboard_type;
  method_set_keep_scale_enabled;
  method_is_keep_scale_enabled;
}
export class VisualShaderNodeBillboard extends VisualShaderNode{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeBillboard");
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
      let classname = new StringName("VisualShaderNodeBillboard");
      let methodname = new StringName("set_billboard_type");
      this._bindings.method_set_billboard_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1227463289
      );
    }
    {
      let classname = new StringName("VisualShaderNodeBillboard");
      let methodname = new StringName("get_billboard_type");
      this._bindings.method_get_billboard_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3724188517
      );
    }
    {
      let classname = new StringName("VisualShaderNodeBillboard");
      let methodname = new StringName("set_keep_scale_enabled");
      this._bindings.method_set_keep_scale_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("VisualShaderNodeBillboard");
      let methodname = new StringName("is_keep_scale_enabled");
      this._bindings.method_is_keep_scale_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  
  set_billboard_type(_billboard_type) {
    return _call_native_mb_no_ret(
      VisualShaderNodeBillboard._bindings.method_set_billboard_type,
      this._owner,
      _billboard_type
    );
    
  }
  get_billboard_type() {
    return _call_native_mb_ret(
      VisualShaderNodeBillboard._bindings.method_get_billboard_type,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_keep_scale_enabled(_enabled) {
    return _call_native_mb_no_ret(
      VisualShaderNodeBillboard._bindings.method_set_keep_scale_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_keep_scale_enabled() {
    return _call_native_mb_ret(
      VisualShaderNodeBillboard._bindings.method_is_keep_scale_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  
get billboard_type () {
  return this.get_billboard_type();
}
set billboard_type (new_value) {
  this.set_billboard_type(new_value);
}
get keep_scale () {
  return this.is_keep_scale_enabled();
}
set keep_scale (new_value) {
  this.set_keep_scale_enabled(new_value);
}

  static BillboardType = {
    BILLBOARD_TYPE_DISABLED: 0,
    BILLBOARD_TYPE_ENABLED: 1,
    BILLBOARD_TYPE_FIXED_Y: 2,
    BILLBOARD_TYPE_PARTICLES: 3,
    BILLBOARD_TYPE_MAX: 4,
  }

  static {
    this._init_bindings();
  }
}