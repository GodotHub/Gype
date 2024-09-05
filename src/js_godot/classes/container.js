import * as internal from '__internal__';
import { PackedInt32Array } from '@js_godot/variant/packed_int32_array'
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Rect2 } from '@js_godot/variant/rect2'
import { Control } from '@js_godot/classes/control'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_queue_sort;
  method_fit_child_in_rect;
}
export class Container extends Control{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Container");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
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
      Container._bindings.method_queue_sort,
      this._owner,
      
    );
    
  }
  fit_child_in_rect(_child, _rect) {
    return _call_native_mb_no_ret(
      Container._bindings.method_fit_child_in_rect,
      this._owner,
      _child, _rect
    );
    
  }
  


  static {
    this._init_bindings();
  }
}