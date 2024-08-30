import * as internal from '__internal__';
import { VisualShaderNodeSample3D } from 'src/js_godot/classes/visual_shader_node_sample3d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_texture_array;
    method_get_texture_array;
}


export class VisualShaderNodeTexture2DArray extends VisualShaderNodeSample3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeTexture2DArray");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("VisualShaderNodeTexture2DArray");
        let methodname = new StringName("set_texture_array");
        this._bindings.method_set_texture_array = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2206200446
        );
      }
      {
        let classname = new StringName("VisualShaderNodeTexture2DArray");
        let methodname = new StringName("get_texture_array");
        this._bindings.method_get_texture_array = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          146117123
        );
      }
  }
  set_texture_array(_value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_array,
      this._owner,
      _value
    );
    
  }
  get_texture_array() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_array,
      this._owner,
			Variant.INT,
      
    );
    
  }
}