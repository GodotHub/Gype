import * as internal from '__internal__';
import { VisualShaderNode } from 'src/js_godot/classes/visual_shader_node'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_billboard_type;
    method_get_billboard_type;
    method_set_keep_scale_enabled;
    method_is_keep_scale_enabled;
}


export class VisualShaderNodeBillboard extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeBillboard");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
      ClassDB._bindings.method_set_billboard_type,
      this._owner,
      _billboard_type
    );
    
  }
  get_billboard_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_billboard_type,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_keep_scale_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_keep_scale_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_keep_scale_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_keep_scale_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  static BillboardType = {
    BILLBOARD_TYPE_DISABLED: 0,
    BILLBOARD_TYPE_ENABLED: 1,
    BILLBOARD_TYPE_FIXED_Y: 2,
    BILLBOARD_TYPE_PARTICLES: 3,
    BILLBOARD_TYPE_MAX: 4,
  }
}