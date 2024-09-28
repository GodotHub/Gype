import * as internal from '__internal__';
import { Control } from '@js_godot/classes/control'
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
  method_set_color;
  method_get_color;
}
@GodotClass
export class ColorRect extends Control{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ColorRect");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_color() {
    if (!this._bindings.method_set_color) {
      let classname = new StringName("ColorRect");
      let methodname = new StringName("set_color");
      this._bindings.method_set_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_color() {
    if (!this._bindings.method_get_color) {
      let classname = new StringName("ColorRect");
      let methodname = new StringName("get_color");
      this._bindings.method_get_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }

  
  
  set_color(_color) {
    ColorRect.init_method_set_color();
    return _call_native_mb_no_ret(
      ColorRect._bindings.method_set_color,
      this._owner,
      _color
    );
    
  }
  get_color() {
    ColorRect.init_method_get_color();
    return _call_native_mb_ret(
      ColorRect._bindings.method_get_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  
get color () {
  return this.get_color();
}
set color (new_value) {
  this.set_color(new_value);
}

}