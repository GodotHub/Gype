import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
class _MethodBindings {
    method_get_src_image;
    method_set_src_image;
    method_get_sampler;
    method_set_sampler;
}


export class GLTFTexture extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFTexture");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("GLTFTexture");
      let methodname = new StringName("get_src_image");
      this._bindings.method_get_src_image = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("GLTFTexture");
      let methodname = new StringName("set_src_image");
      this._bindings.method_set_src_image = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GLTFTexture");
      let methodname = new StringName("get_sampler");
      this._bindings.method_get_sampler = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_src_image,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_src_image(_src_image) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_src_image,
      this._owner,
      _src_image
    );
  }
  get_sampler() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sampler,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_sampler(_sampler) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sampler,
      this._owner,
      _sampler
    );
  }
}