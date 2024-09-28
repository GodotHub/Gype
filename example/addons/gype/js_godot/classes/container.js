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
  method_queue_sort;
  method_fit_child_in_rect;
}
@GodotClass
export class Container extends Control{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Container");
    } else {
      super(godot_object);
    }
  }
  static init_method_queue_sort() {
    if (!this._bindings.method_queue_sort) {
      let classname = new StringName("Container");
      let methodname = new StringName("queue_sort");
      this._bindings.method_queue_sort = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_fit_child_in_rect() {
    if (!this._bindings.method_fit_child_in_rect) {
      let classname = new StringName("Container");
      let methodname = new StringName("fit_child_in_rect");
      this._bindings.method_fit_child_in_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1993438598
      );
    }
  }

  
  
  _get_allowed_size_flags_horizontal() {
  }
  _get_allowed_size_flags_vertical() {
  }
  queue_sort() {
    Container.init_method_queue_sort();
    return _call_native_mb_no_ret(
      Container._bindings.method_queue_sort,
      this._owner,
      
    );
    
  }
  fit_child_in_rect(_child, _rect) {
    Container.init_method_fit_child_in_rect();
    return _call_native_mb_no_ret(
      Container._bindings.method_fit_child_in_rect,
      this._owner,
      _child, _rect
    );
    
  }
  

}