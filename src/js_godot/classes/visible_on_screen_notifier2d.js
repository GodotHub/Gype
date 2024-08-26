import * as internal from '__internal__';
import { Node2D } from 'src/js_godot/classesnode2d'
import { Rect2 } from 'src/js_godot/variant/rect2'
class _MethodBindings {
    method_set_rect;
    method_get_rect;
    method_is_on_screen;
}


export class VisibleOnScreenNotifier2D extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisibleOnScreenNotifier2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("VisibleOnScreenNotifier2D");
      let methodname = new StringName("set_rect");
      this._bindings.method_set_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2046264180
      );
    }
    {
      let classname = new StringName("VisibleOnScreenNotifier2D");
      let methodname = new StringName("get_rect");
      this._bindings.method_get_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1639390495
      );
    }
    {
      let classname = new StringName("VisibleOnScreenNotifier2D");
      let methodname = new StringName("is_on_screen");
      this._bindings.method_is_on_screen = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
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
  is_on_screen() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_on_screen,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
}