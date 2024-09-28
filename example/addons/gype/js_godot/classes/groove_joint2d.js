import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Joint2D } from '@js_godot/classes/joint2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_length;
  method_get_length;
  method_set_initial_offset;
  method_get_initial_offset;
}
@GodotClass
export class GrooveJoint2D extends Joint2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GrooveJoint2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_length() {
    if (!this._bindings.method_set_length) {
      let classname = new StringName("GrooveJoint2D");
      let methodname = new StringName("set_length");
      this._bindings.method_set_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_length() {
    if (!this._bindings.method_get_length) {
      let classname = new StringName("GrooveJoint2D");
      let methodname = new StringName("get_length");
      this._bindings.method_get_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_initial_offset() {
    if (!this._bindings.method_set_initial_offset) {
      let classname = new StringName("GrooveJoint2D");
      let methodname = new StringName("set_initial_offset");
      this._bindings.method_set_initial_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_initial_offset() {
    if (!this._bindings.method_get_initial_offset) {
      let classname = new StringName("GrooveJoint2D");
      let methodname = new StringName("get_initial_offset");
      this._bindings.method_get_initial_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  set_length(_length) {
    GrooveJoint2D.init_method_set_length();
    return _call_native_mb_no_ret(
      GrooveJoint2D._bindings.method_set_length,
      this._owner,
      _length
    );
    
  }
  get_length() {
    GrooveJoint2D.init_method_get_length();
    return _call_native_mb_ret(
      GrooveJoint2D._bindings.method_get_length,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_initial_offset(_offset) {
    GrooveJoint2D.init_method_set_initial_offset();
    return _call_native_mb_no_ret(
      GrooveJoint2D._bindings.method_set_initial_offset,
      this._owner,
      _offset
    );
    
  }
  get_initial_offset() {
    GrooveJoint2D.init_method_get_initial_offset();
    return _call_native_mb_ret(
      GrooveJoint2D._bindings.method_get_initial_offset,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get length () {
  return this.get_length();
}
set length (new_value) {
  this.set_length(new_value);
}
get initial_offset () {
  return this.get_initial_offset();
}
set initial_offset (new_value) {
  this.set_initial_offset(new_value);
}

}