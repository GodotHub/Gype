import * as internal from '__internal__';
import { Node2D } from '@js_godot/classes/node2d'
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Rect2 } from '@js_godot/variant/rect2'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_rect;
  method_get_rect;
  method_set_copy_mode;
  method_get_copy_mode;
}
export class BackBufferCopy extends Node2D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("BackBufferCopy");
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
      BackBufferCopy._bindings.method_set_rect,
      this._owner,
      _rect
    );
    
  }
  get_rect() {
    return _call_native_mb_ret(
      BackBufferCopy._bindings.method_get_rect,
      this._owner,
			Variant.Type.RECT2,
    
      
    );
    
  }
  set_copy_mode(_copy_mode) {
    return _call_native_mb_no_ret(
      BackBufferCopy._bindings.method_set_copy_mode,
      this._owner,
      _copy_mode
    );
    
  }
  get_copy_mode() {
    return _call_native_mb_ret(
      BackBufferCopy._bindings.method_get_copy_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get copy_mode () {
  return this.get_copy_mode();
}
set copy_mode (new_value) {
  this.set_copy_mode(new_value);
}
get rect () {
  return this.get_rect();
}
set rect (new_value) {
  this.set_rect(new_value);
}

  static CopyMode = {
    COPY_MODE_DISABLED: 0,
    COPY_MODE_RECT: 1,
    COPY_MODE_VIEWPORT: 2,
  }

  static {
    this._init_bindings();
  }
}