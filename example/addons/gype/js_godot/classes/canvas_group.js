import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Node2D } from '@js_godot/classes/node2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_fit_margin;
  method_get_fit_margin;
  method_set_clear_margin;
  method_get_clear_margin;
  method_set_use_mipmaps;
  method_is_using_mipmaps;
}
@GodotClass
export class CanvasGroup extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CanvasGroup");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_fit_margin() {
    if (!this._bindings.method_set_fit_margin) {
      let classname = new StringName("CanvasGroup");
      let methodname = new StringName("set_fit_margin");
      this._bindings.method_set_fit_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_fit_margin() {
    if (!this._bindings.method_get_fit_margin) {
      let classname = new StringName("CanvasGroup");
      let methodname = new StringName("get_fit_margin");
      this._bindings.method_get_fit_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_clear_margin() {
    if (!this._bindings.method_set_clear_margin) {
      let classname = new StringName("CanvasGroup");
      let methodname = new StringName("set_clear_margin");
      this._bindings.method_set_clear_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_clear_margin() {
    if (!this._bindings.method_get_clear_margin) {
      let classname = new StringName("CanvasGroup");
      let methodname = new StringName("get_clear_margin");
      this._bindings.method_get_clear_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_use_mipmaps() {
    if (!this._bindings.method_set_use_mipmaps) {
      let classname = new StringName("CanvasGroup");
      let methodname = new StringName("set_use_mipmaps");
      this._bindings.method_set_use_mipmaps = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_using_mipmaps() {
    if (!this._bindings.method_is_using_mipmaps) {
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
    CanvasGroup.init_method_set_fit_margin();
    return _call_native_mb_no_ret(
      CanvasGroup._bindings.method_set_fit_margin,
      this._owner,
      _fit_margin
    );
    
  }
  get_fit_margin() {
    CanvasGroup.init_method_get_fit_margin();
    return _call_native_mb_ret(
      CanvasGroup._bindings.method_get_fit_margin,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_clear_margin(_clear_margin) {
    CanvasGroup.init_method_set_clear_margin();
    return _call_native_mb_no_ret(
      CanvasGroup._bindings.method_set_clear_margin,
      this._owner,
      _clear_margin
    );
    
  }
  get_clear_margin() {
    CanvasGroup.init_method_get_clear_margin();
    return _call_native_mb_ret(
      CanvasGroup._bindings.method_get_clear_margin,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_use_mipmaps(_use_mipmaps) {
    CanvasGroup.init_method_set_use_mipmaps();
    return _call_native_mb_no_ret(
      CanvasGroup._bindings.method_set_use_mipmaps,
      this._owner,
      _use_mipmaps
    );
    
  }
  is_using_mipmaps() {
    CanvasGroup.init_method_is_using_mipmaps();
    return _call_native_mb_ret(
      CanvasGroup._bindings.method_is_using_mipmaps,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get fit_margin () {
  return this.get_fit_margin();
}
set fit_margin (new_value) {
  this.set_fit_margin(new_value);
}
get clear_margin () {
  return this.get_clear_margin();
}
set clear_margin (new_value) {
  this.set_clear_margin(new_value);
}
get use_mipmaps () {
  return this.is_using_mipmaps();
}
set use_mipmaps (new_value) {
  this.set_use_mipmaps(new_value);
}

}