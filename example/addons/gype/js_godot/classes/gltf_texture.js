import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_get_src_image;
  method_set_src_image;
  method_get_sampler;
  method_set_sampler;
}
@GodotClass
export class GLTFTexture extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFTexture");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_src_image() {
    if (!this._bindings.method_get_src_image) {
      let classname = new StringName("GLTFTexture");
      let methodname = new StringName("get_src_image");
      this._bindings.method_get_src_image = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_src_image() {
    if (!this._bindings.method_set_src_image) {
      let classname = new StringName("GLTFTexture");
      let methodname = new StringName("set_src_image");
      this._bindings.method_set_src_image = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_sampler() {
    if (!this._bindings.method_get_sampler) {
      let classname = new StringName("GLTFTexture");
      let methodname = new StringName("get_sampler");
      this._bindings.method_get_sampler = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_sampler() {
    if (!this._bindings.method_set_sampler) {
      let classname = new StringName("GLTFTexture");
      let methodname = new StringName("set_sampler");
      this._bindings.method_set_sampler = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }

  
  
  get_src_image() {
    GLTFTexture.init_method_get_src_image();
    return _call_native_mb_ret(
      GLTFTexture._bindings.method_get_src_image,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_src_image(_src_image) {
    GLTFTexture.init_method_set_src_image();
    return _call_native_mb_no_ret(
      GLTFTexture._bindings.method_set_src_image,
      this._owner,
      _src_image
    );
    
  }
  get_sampler() {
    GLTFTexture.init_method_get_sampler();
    return _call_native_mb_ret(
      GLTFTexture._bindings.method_get_sampler,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_sampler(_sampler) {
    GLTFTexture.init_method_set_sampler();
    return _call_native_mb_no_ret(
      GLTFTexture._bindings.method_set_sampler,
      this._owner,
      _sampler
    );
    
  }
  
get src_image () {
  return this.get_src_image();
}
set src_image (new_value) {
  this.set_src_image(new_value);
}
get sampler () {
  return this.get_sampler();
}
set sampler (new_value) {
  this.set_sampler(new_value);
}

}