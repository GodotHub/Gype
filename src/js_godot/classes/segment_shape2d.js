import * as internal from '__internal__';
import { Shape2D } from 'src/js_godot/classesshape2d'
import { Vector2 } from 'src/js_godot/variant/vector2'
class _MethodBindings {
    method_set_a;
    method_get_a;
    method_set_b;
    method_get_b;
}


export class SegmentShape2D extends Shape2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SegmentShape2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("SegmentShape2D");
      let methodname = new StringName("set_a");
      this._bindings.method_set_a = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("SegmentShape2D");
      let methodname = new StringName("get_a");
      this._bindings.method_get_a = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("SegmentShape2D");
      let methodname = new StringName("set_b");
      this._bindings.method_set_b = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("SegmentShape2D");
      let methodname = new StringName("get_b");
      this._bindings.method_get_b = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
  }
  set_a(_a) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_a,
      this._owner,
      _a
    );
  }
  get_a() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_a,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_b(_b) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_b,
      this._owner,
      _b
    );
  }
  get_b() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_b,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
}