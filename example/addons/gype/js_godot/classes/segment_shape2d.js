import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Shape2D } from '@js_godot/classes/shape2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_a;
  method_get_a;
  method_set_b;
  method_get_b;
}
@GodotClass
export class SegmentShape2D extends Shape2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SegmentShape2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_a() {
    if (!this._bindings.method_set_a) {
      let classname = new StringName("SegmentShape2D");
      let methodname = new StringName("set_a");
      this._bindings.method_set_a = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_a() {
    if (!this._bindings.method_get_a) {
      let classname = new StringName("SegmentShape2D");
      let methodname = new StringName("get_a");
      this._bindings.method_get_a = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_b() {
    if (!this._bindings.method_set_b) {
      let classname = new StringName("SegmentShape2D");
      let methodname = new StringName("set_b");
      this._bindings.method_set_b = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_b() {
    if (!this._bindings.method_get_b) {
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
    SegmentShape2D.init_method_set_a();
    return _call_native_mb_no_ret(
      SegmentShape2D._bindings.method_set_a,
      this._owner,
      _a
    );
    
  }
  get_a() {
    SegmentShape2D.init_method_get_a();
    return _call_native_mb_ret(
      SegmentShape2D._bindings.method_get_a,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_b(_b) {
    SegmentShape2D.init_method_set_b();
    return _call_native_mb_no_ret(
      SegmentShape2D._bindings.method_set_b,
      this._owner,
      _b
    );
    
  }
  get_b() {
    SegmentShape2D.init_method_get_b();
    return _call_native_mb_ret(
      SegmentShape2D._bindings.method_get_b,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  
get a () {
  return this.get_a();
}
set a (new_value) {
  this.set_a(new_value);
}
get b () {
  return this.get_b();
}
set b (new_value) {
  this.set_b(new_value);
}

}