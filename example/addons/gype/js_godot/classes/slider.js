import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Range } from '@js_godot/classes/range'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_ticks;
  method_get_ticks;
  method_get_ticks_on_borders;
  method_set_ticks_on_borders;
  method_set_editable;
  method_is_editable;
  method_set_scrollable;
  method_is_scrollable;
}
@GodotClass
export class Slider extends Range{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Slider");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_ticks() {
    if (!this._bindings.method_set_ticks) {
      let classname = new StringName("Slider");
      let methodname = new StringName("set_ticks");
      this._bindings.method_set_ticks = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_ticks() {
    if (!this._bindings.method_get_ticks) {
      let classname = new StringName("Slider");
      let methodname = new StringName("get_ticks");
      this._bindings.method_get_ticks = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_ticks_on_borders() {
    if (!this._bindings.method_get_ticks_on_borders) {
      let classname = new StringName("Slider");
      let methodname = new StringName("get_ticks_on_borders");
      this._bindings.method_get_ticks_on_borders = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_ticks_on_borders() {
    if (!this._bindings.method_set_ticks_on_borders) {
      let classname = new StringName("Slider");
      let methodname = new StringName("set_ticks_on_borders");
      this._bindings.method_set_ticks_on_borders = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_set_editable() {
    if (!this._bindings.method_set_editable) {
      let classname = new StringName("Slider");
      let methodname = new StringName("set_editable");
      this._bindings.method_set_editable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_editable() {
    if (!this._bindings.method_is_editable) {
      let classname = new StringName("Slider");
      let methodname = new StringName("is_editable");
      this._bindings.method_is_editable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_scrollable() {
    if (!this._bindings.method_set_scrollable) {
      let classname = new StringName("Slider");
      let methodname = new StringName("set_scrollable");
      this._bindings.method_set_scrollable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_scrollable() {
    if (!this._bindings.method_is_scrollable) {
      let classname = new StringName("Slider");
      let methodname = new StringName("is_scrollable");
      this._bindings.method_is_scrollable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_ticks(_count) {
    Slider.init_method_set_ticks();
    return _call_native_mb_no_ret(
      Slider._bindings.method_set_ticks,
      this._owner,
      _count
    );
    
  }
  get_ticks() {
    Slider.init_method_get_ticks();
    return _call_native_mb_ret(
      Slider._bindings.method_get_ticks,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_ticks_on_borders() {
    Slider.init_method_get_ticks_on_borders();
    return _call_native_mb_ret(
      Slider._bindings.method_get_ticks_on_borders,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_ticks_on_borders(_ticks_on_border) {
    Slider.init_method_set_ticks_on_borders();
    return _call_native_mb_no_ret(
      Slider._bindings.method_set_ticks_on_borders,
      this._owner,
      _ticks_on_border
    );
    
  }
  set_editable(_editable) {
    Slider.init_method_set_editable();
    return _call_native_mb_no_ret(
      Slider._bindings.method_set_editable,
      this._owner,
      _editable
    );
    
  }
  is_editable() {
    Slider.init_method_is_editable();
    return _call_native_mb_ret(
      Slider._bindings.method_is_editable,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_scrollable(_scrollable) {
    Slider.init_method_set_scrollable();
    return _call_native_mb_no_ret(
      Slider._bindings.method_set_scrollable,
      this._owner,
      _scrollable
    );
    
  }
  is_scrollable() {
    Slider.init_method_is_scrollable();
    return _call_native_mb_ret(
      Slider._bindings.method_is_scrollable,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get editable () {
  return this.is_editable();
}
set editable (new_value) {
  this.set_editable(new_value);
}
get scrollable () {
  return this.is_scrollable();
}
set scrollable (new_value) {
  this.set_scrollable(new_value);
}
get tick_count () {
  return this.get_ticks();
}
set tick_count (new_value) {
  this.set_ticks(new_value);
}
get ticks_on_borders () {
  return this.get_ticks_on_borders();
}
set ticks_on_borders (new_value) {
  this.set_ticks_on_borders(new_value);
}

}