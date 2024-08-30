import * as internal from '__internal__';
import { VisualShaderNodeResizableBase } from 'src/js_godot/classes/visual_shader_node_resizable_base'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_texture;
    method_get_texture;
}


export class VisualShaderNodeCurveXYZTexture extends VisualShaderNodeResizableBase{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeCurveXYZTexture");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("VisualShaderNodeCurveXYZTexture");
        let methodname = new StringName("set_texture");
        this._bindings.method_set_texture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          8031783
        );
      }
      {
        let classname = new StringName("VisualShaderNodeCurveXYZTexture");
        let methodname = new StringName("get_texture");
        this._bindings.method_get_texture = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1950275015
        );
      }
  }
  set_texture(_texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture,
      this._owner,
      _texture
    );
    
  }
  get_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture,
      this._owner,
			Variant.INT,
      
    );
    
  }
}