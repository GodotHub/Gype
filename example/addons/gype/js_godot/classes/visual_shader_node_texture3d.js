import * as internal from '__internal__';
import { VisualShaderNodeSample3D } from '@js_godot/classes/visual_shader_node_sample3d'
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
  method_set_texture;
  method_get_texture;
}
@GodotClass
export class VisualShaderNodeTexture3D extends VisualShaderNodeSample3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeTexture3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_texture() {
    if (!this._bindings.method_set_texture) {
      let classname = new StringName("VisualShaderNodeTexture3D");
      let methodname = new StringName("set_texture");
      this._bindings.method_set_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1188404210
      );
    }
  }
  static init_method_get_texture() {
    if (!this._bindings.method_get_texture) {
      let classname = new StringName("VisualShaderNodeTexture3D");
      let methodname = new StringName("get_texture");
      this._bindings.method_get_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373985333
      );
    }
  }

  
  
  set_texture(_value) {
    VisualShaderNodeTexture3D.init_method_set_texture();
    return _call_native_mb_no_ret(
      VisualShaderNodeTexture3D._bindings.method_set_texture,
      this._owner,
      _value
    );
    
  }
  get_texture() {
    VisualShaderNodeTexture3D.init_method_get_texture();
    return _call_native_mb_ret(
      VisualShaderNodeTexture3D._bindings.method_get_texture,
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