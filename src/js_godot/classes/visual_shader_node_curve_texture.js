import * as internal from '__internal__';
import { VisualShaderNodeResizableBase } from '@js_godot/classes/visual_shader_node_resizable_base'
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
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
export class VisualShaderNodeCurveTexture extends VisualShaderNodeResizableBase{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeCurveTexture");
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
      let classname = new StringName("VisualShaderNodeCurveTexture");
      let methodname = new StringName("set_texture");
      this._bindings.method_set_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        181872837
      );
    }
    {
      let classname = new StringName("VisualShaderNodeCurveTexture");
      let methodname = new StringName("get_texture");
      this._bindings.method_get_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2800800579
      );
    }
  }
  
  set_texture(_texture) {
    return _call_native_mb_no_ret(
      VisualShaderNodeCurveTexture._bindings.method_set_texture,
      this._owner,
      _texture
    );
    
  }
  get_texture() {
    return _call_native_mb_ret(
      VisualShaderNodeCurveTexture._bindings.method_get_texture,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get texture () {
  return this.get_texture();
}
set texture (new_value) {
  this.set_texture(new_value);
}


  static {
    this._init_bindings();
  }
}