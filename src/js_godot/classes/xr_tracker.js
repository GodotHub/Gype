import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_tracker_type;
  method_set_tracker_type;
  method_get_tracker_name;
  method_set_tracker_name;
  method_get_tracker_desc;
  method_set_tracker_desc;
}
export class XRTracker extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("XRTracker");
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
      let classname = new StringName("XRTracker");
      let methodname = new StringName("get_tracker_type");
      this._bindings.method_get_tracker_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2784508102
      );
    }
    {
      let classname = new StringName("XRTracker");
      let methodname = new StringName("set_tracker_type");
      this._bindings.method_set_tracker_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3055763575
      );
    }
    {
      let classname = new StringName("XRTracker");
      let methodname = new StringName("get_tracker_name");
      this._bindings.method_get_tracker_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2002593661
      );
    }
    {
      let classname = new StringName("XRTracker");
      let methodname = new StringName("set_tracker_name");
      this._bindings.method_set_tracker_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("XRTracker");
      let methodname = new StringName("get_tracker_desc");
      this._bindings.method_get_tracker_desc = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
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
    return _call_native_mb_ret(
      XRTracker._bindings.method_get_tracker_type,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_tracker_type(_type) {
    return _call_native_mb_no_ret(
      XRTracker._bindings.method_set_tracker_type,
      this._owner,
      _type
    );
    
  }
  get_tracker_name() {
    return _call_native_mb_ret(
      XRTracker._bindings.method_get_tracker_name,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  set_tracker_name(_name) {
    return _call_native_mb_no_ret(
      XRTracker._bindings.method_set_tracker_name,
      this._owner,
      _name
    );
    
  }
  get_tracker_desc() {
    return _call_native_mb_ret(
      XRTracker._bindings.method_get_tracker_desc,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_tracker_desc(_description) {
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


  static {
    this._init_bindings();
  }
}