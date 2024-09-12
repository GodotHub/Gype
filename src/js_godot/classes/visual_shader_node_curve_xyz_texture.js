import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { VisualShaderNodeResizableBase } from '@js_godot/classes/visual_shader_node_resizable_base'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_texture;
  method_get_texture;
}
export class VisualShaderNodeCurveXYZTexture extends VisualShaderNodeResizableBase{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeCurveXYZTexture");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_texture() {
    if (!this.#_bindings.method_set_texture) {
      let classname = new StringName("VisualShaderNodeCurveXYZTexture");
      let methodname = new StringName("set_texture");
      this.#_bindings.method_set_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        8031783
      );
    }
  }
  static init_method_get_texture() {
    if (!this.#_bindings.method_get_texture) {
      let classname = new StringName("VisualShaderNodeCurveXYZTexture");
      let methodname = new StringName("get_texture");
      this.#_bindings.method_get_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1950275015
      );
    }
  }

  
  
  set_texture(_texture) {
    VisualShaderNodeCurveXYZTexture.init_method_set_texture();
    return _call_native_mb_no_ret(
      VisualShaderNodeCurveXYZTexture.#_bindings.method_set_texture,
      this._owner,
      _texture
    );
    
  }
  get_texture() {
    VisualShaderNodeCurveXYZTexture.init_method_get_texture();
    return _call_native_mb_ret(
      VisualShaderNodeCurveXYZTexture.#_bindings.method_get_texture,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get texture () {
  return this.get_texture();
}
set texture (new_value) {
  this.set_texture(new_value);
}

}