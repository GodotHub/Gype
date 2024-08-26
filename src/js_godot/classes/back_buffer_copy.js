import * as internal from '__internal__';
import { Node2D } from 'src/js_godot/classesnode2d'
import { Rect2 } from 'src/js_godot/variant/rect2'
class _MethodBindings {
    method_set_rect;
    method_get_rect;
    method_set_copy_mode;
    method_get_copy_mode;
}


export class BackBufferCopy extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("BackBufferCopy");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("BackBufferCopy");
      let methodname = new StringName("set_rect");
      this._bindings.method_set_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2046264180
      );
    }
    {
      let classname = new StringName("BackBufferCopy");
      let methodname = new StringName("get_rect");
      this._bindings.method_get_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1639390495
      );
    }
    {
      let classname = new StringName("BackBufferCopy");
      let methodname = new StringName("set_copy_mode");
      this._bindings.method_set_copy_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1713538590
      );
    }
    {
      let classname = new StringName("BackBufferCopy");
      let methodname = new StringName("get_copy_mode");
      this._bindings.method_get_copy_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3271169440
      );
    }
  }
  set_rect(_rect) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_rect,
      this._owner,
      _rect
    );
  }
  get_rect() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rect,
      this._owner,
			Variant.Type.RECT2
    ,
      
    );
  }
  set_copy_mode(_copy_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_copy_mode,
      this._owner,
      _copy_mode
    );
  }
  get_copy_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_copy_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  static CopyMode = {
    COPY_MODE_DISABLED: 0,
    COPY_MODE_RECT: 1,
    COPY_MODE_VIEWPORT: 2,
  }
}