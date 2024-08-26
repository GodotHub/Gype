import * as internal from '__internal__';
import { Texture2D } from 'src/js_godot/classestexture2d'
class _MethodBindings {
    method_set_gradient;
    method_get_gradient;
    method_set_width;
    method_set_use_hdr;
    method_is_using_hdr;
}


export class GradientTexture1D extends Texture2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GradientTexture1D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("GradientTexture1D");
      let methodname = new StringName("set_gradient");
      this._bindings.method_set_gradient = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2756054477
      );
    }
    {
      let classname = new StringName("GradientTexture1D");
      let methodname = new StringName("get_gradient");
      this._bindings.method_get_gradient = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        132272999
      );
    }
    {
      let classname = new StringName("GradientTexture1D");
      let methodname = new StringName("set_width");
      this._bindings.method_set_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GradientTexture1D");
      let methodname = new StringName("set_use_hdr");
      this._bindings.method_set_use_hdr = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GradientTexture1D");
      let methodname = new StringName("is_using_hdr");
      this._bindings.method_is_using_hdr = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  set_gradient(_gradient) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_gradient,
      this._owner,
      _gradient
    );
  }
  get_gradient() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_gradient,
      this._owner,
			Variant.INT,
      
    );
  }
  set_width(_width) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_width,
      this._owner,
      _width
    );
  }
  set_use_hdr(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_use_hdr,
      this._owner,
      _enabled
    );
  }
  is_using_hdr() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_using_hdr,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
}