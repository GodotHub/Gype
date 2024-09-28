import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
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
  method_get_tracker_type;
  method_set_tracker_type;
  method_get_tracker_name;
  method_set_tracker_name;
  method_get_tracker_desc;
  method_set_tracker_desc;
}
@GodotClass
export class XRTracker extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("XRTracker");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_tracker_type() {
    if (!this._bindings.method_get_tracker_type) {
      let classname = new StringName("XRTracker");
      let methodname = new StringName("get_tracker_type");
      this._bindings.method_get_tracker_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2784508102
      );
    }
  }
  static init_method_set_tracker_type() {
    if (!this._bindings.method_set_tracker_type) {
      let classname = new StringName("XRTracker");
      let methodname = new StringName("set_tracker_type");
      this._bindings.method_set_tracker_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3055763575
      );
    }
  }
  static init_method_get_tracker_name() {
    if (!this._bindings.method_get_tracker_name) {
      let classname = new StringName("XRTracker");
      let methodname = new StringName("get_tracker_name");
      this._bindings.method_get_tracker_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2002593661
      );
    }
  }
  static init_method_set_tracker_name() {
    if (!this._bindings.method_set_tracker_name) {
      let classname = new StringName("XRTracker");
      let methodname = new StringName("set_tracker_name");
      this._bindings.method_set_tracker_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_get_tracker_desc() {
    if (!this._bindings.method_get_tracker_desc) {
      let classname = new StringName("XRTracker");
      let methodname = new StringName("get_tracker_desc");
      this._bindings.method_get_tracker_desc = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_tracker_desc() {
    if (!this._bindings.method_set_tracker_desc) {
      let classname = new StringName("XRTracker");
      let methodname = new StringName("set_tracker_desc");
      this._bindings.method_set_tracker_desc = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }

  
  
  get_tracker_type() {
    XRTracker.init_method_get_tracker_type();
    return _call_native_mb_ret(
      XRTracker._bindings.method_get_tracker_type,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_tracker_type(_type) {
    XRTracker.init_method_set_tracker_type();
    return _call_native_mb_no_ret(
      XRTracker._bindings.method_set_tracker_type,
      this._owner,
      _type
    );
    
  }
  get_tracker_name() {
    XRTracker.init_method_get_tracker_name();
    return _call_native_mb_ret(
      XRTracker._bindings.method_get_tracker_name,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  set_tracker_name(_name) {
    XRTracker.init_method_set_tracker_name();
    return _call_native_mb_no_ret(
      XRTracker._bindings.method_set_tracker_name,
      this._owner,
      _name
    );
    
  }
  get_tracker_desc() {
    XRTracker.init_method_get_tracker_desc();
    return _call_native_mb_ret(
      XRTracker._bindings.method_get_tracker_desc,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_tracker_desc(_description) {
    XRTracker.init_method_set_tracker_desc();
    return _call_native_mb_no_ret(
      XRTracker._bindings.method_set_tracker_desc,
      this._owner,
      _description
    );
    
  }
  
get type () {
  return this.get_tracker_type();
}
set type (new_value) {
  this.set_tracker_type(new_value);
}
get name () {
  return this.get_tracker_name();
}
set name (new_value) {
  this.set_tracker_name(new_value);
}
get description () {
  return this.get_tracker_desc();
}
set description (new_value) {
  this.set_tracker_desc(new_value);
}

}