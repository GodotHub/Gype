import * as internal from '__internal__';
import { Container } from '@js_godot/classes/container'
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
  method_add_spacer;
  method_set_alignment;
  method_get_alignment;
  method_set_vertical;
  method_is_vertical;
}
@GodotClass
export class BoxContainer extends Container{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("BoxContainer");
    } else {
      super(godot_object);
    }
  }
  static init_method_add_spacer() {
    if (!this._bindings.method_add_spacer) {
      let classname = new StringName("BoxContainer");
      let methodname = new StringName("add_spacer");
      this._bindings.method_add_spacer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1326660695
      );
    }
  }
  static init_method_set_alignment() {
    if (!this._bindings.method_set_alignment) {
      let classname = new StringName("BoxContainer");
      let methodname = new StringName("set_alignment");
      this._bindings.method_set_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2456745134
      );
    }
  }
  static init_method_get_alignment() {
    if (!this._bindings.method_get_alignment) {
      let classname = new StringName("BoxContainer");
      let methodname = new StringName("get_alignment");
      this._bindings.method_get_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1915476527
      );
    }
  }
  static init_method_set_vertical() {
    if (!this._bindings.method_set_vertical) {
      let classname = new StringName("BoxContainer");
      let methodname = new StringName("set_vertical");
      this._bindings.method_set_vertical = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_vertical() {
    if (!this._bindings.method_is_vertical) {
      let classname = new StringName("BoxContainer");
      let methodname = new StringName("is_vertical");
      this._bindings.method_is_vertical = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  add_spacer(_begin) {
    BoxContainer.init_method_add_spacer();
    return _call_native_mb_ret(
      BoxContainer._bindings.method_add_spacer,
      this._owner,
			Variant.Type.OBJECT,
      _begin
    );
    
  }
  set_alignment(_alignment) {
    BoxContainer.init_method_set_alignment();
    return _call_native_mb_no_ret(
      BoxContainer._bindings.method_set_alignment,
      this._owner,
      _alignment
    );
    
  }
  get_alignment() {
    BoxContainer.init_method_get_alignment();
    return _call_native_mb_ret(
      BoxContainer._bindings.method_get_alignment,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_vertical(_vertical) {
    BoxContainer.init_method_set_vertical();
    return _call_native_mb_no_ret(
      BoxContainer._bindings.method_set_vertical,
      this._owner,
      _vertical
    );
    
  }
  is_vertical() {
    BoxContainer.init_method_is_vertical();
    return _call_native_mb_ret(
      BoxContainer._bindings.method_is_vertical,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get alignment () {
  return this.get_alignment();
}
set alignment (new_value) {
  this.set_alignment(new_value);
}
get vertical () {
  return this.is_vertical();
}
set vertical (new_value) {
  this.set_vertical(new_value);
}

  static AlignmentMode = {
    ALIGNMENT_BEGIN: 0,
    ALIGNMENT_CENTER: 1,
    ALIGNMENT_END: 2,
  }
}