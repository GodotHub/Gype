import * as internal from '__internal__';
import { Container } from 'src/js_godot/classes/container'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_add_spacer;
    method_set_alignment;
    method_get_alignment;
    method_set_vertical;
    method_is_vertical;
}


export class BoxContainer extends Container{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("BoxContainer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("BoxContainer");
        let methodname = new StringName("add_spacer");
        this._bindings.method_add_spacer = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1326660695
        );
      }
      {
        let classname = new StringName("BoxContainer");
        let methodname = new StringName("set_alignment");
        this._bindings.method_set_alignment = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2456745134
        );
      }
      {
        let classname = new StringName("BoxContainer");
        let methodname = new StringName("get_alignment");
        this._bindings.method_get_alignment = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1915476527
        );
      }
      {
        let classname = new StringName("BoxContainer");
        let methodname = new StringName("set_vertical");
        this._bindings.method_set_vertical = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method_add_spacer,
      this._owner,
			Variant.INT,
      _begin
    );
    
  }
  set_alignment(_alignment) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_alignment,
      this._owner,
      _alignment
    );
    
  }
  get_alignment() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_alignment,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_vertical(_vertical) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vertical,
      this._owner,
      _vertical
    );
    
  }
  is_vertical() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_vertical,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  static AlignmentMode = {
    ALIGNMENT_BEGIN: 0,
    ALIGNMENT_CENTER: 1,
    ALIGNMENT_END: 2,
  }
}