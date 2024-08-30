import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { RefCounted } from 'src/js_godot/classes/ref_counted'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

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

  constructor(godot_object) {
    if (!godot_object) {
      super("XRTracker");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
      ClassDB._bindings.method_get_tracker_type,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_tracker_type(_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tracker_type,
      this._owner,
      _type
    );
    
  }
  get_tracker_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tracker_name,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      
    );
    
  }
  set_tracker_name(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tracker_name,
      this._owner,
      _name
    );
    
  }
  get_tracker_desc() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tracker_desc,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
  set_tracker_desc(_description) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tracker_desc,
      this._owner,
      _description
    );
    
  }
}