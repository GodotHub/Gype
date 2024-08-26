import * as internal from '__internal__';
import { Node2D } from 'src/js_godot/classesnode2d'
class _MethodBindings {
    method_set_fit_margin;
    method_get_fit_margin;
    method_set_clear_margin;
    method_get_clear_margin;
    method_set_use_mipmaps;
    method_is_using_mipmaps;
}


export class CanvasGroup extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CanvasGroup");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("CanvasGroup");
      let methodname = new StringName("set_fit_margin");
      this._bindings.method_set_fit_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CanvasGroup");
      let methodname = new StringName("get_fit_margin");
      this._bindings.method_get_fit_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CanvasGroup");
      let methodname = new StringName("set_clear_margin");
      this._bindings.method_set_clear_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CanvasGroup");
      let methodname = new StringName("get_clear_margin");
      this._bindings.method_get_clear_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CanvasGroup");
      let methodname = new StringName("set_use_mipmaps");
      this._bindings.method_set_use_mipmaps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CanvasGroup");
      let methodname = new StringName("is_using_mipmaps");
      this._bindings.method_is_using_mipmaps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  set_fit_margin(_fit_margin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fit_margin,
      this._owner,
      _fit_margin
    );
  }
  get_fit_margin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fit_margin,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_clear_margin(_clear_margin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_clear_margin,
      this._owner,
      _clear_margin
    );
  }
  get_clear_margin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_clear_margin,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_use_mipmaps(_use_mipmaps) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_use_mipmaps,
      this._owner,
      _use_mipmaps
    );
  }
  is_using_mipmaps() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_using_mipmaps,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
}