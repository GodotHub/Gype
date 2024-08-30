import * as internal from '__internal__';
import { Control } from 'src/js_godot/classes/control'
import { StringName } from 'src/js_godot/variant/string_name'
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { Rect2 } from 'src/js_godot/variant/rect2'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_queue_sort;
    method_fit_child_in_rect;
}


export class Container extends Control{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Container");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("Container");
        let methodname = new StringName("queue_sort");
        this._bindings.method_queue_sort = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_queue_sort,
      this._owner,
      
    );
    
  }
  fit_child_in_rect(_child, _rect) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_fit_child_in_rect,
      this._owner,
      _child, _rect
    );
    
  }
}