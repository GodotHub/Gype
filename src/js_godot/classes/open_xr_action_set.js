import * as internal from '__internal__';
import { GDArray } from 'src/js_godot/variant/gd_array'
import { Resource } from 'src/js_godot/classes/resource'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_localized_name;
    method_get_localized_name;
    method_set_priority;
    method_get_priority;
    method_get_action_count;
    method_set_actions;
    method_get_actions;
    method_add_action;
    method_remove_action;
}


export class OpenXRActionSet extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("OpenXRActionSet");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("OpenXRActionSet");
        let methodname = new StringName("set_localized_name");
        this._bindings.method_set_localized_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("OpenXRActionSet");
        let methodname = new StringName("get_localized_name");
        this._bindings.method_get_localized_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("OpenXRActionSet");
        let methodname = new StringName("set_priority");
        this._bindings.method_set_priority = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("OpenXRActionSet");
        let methodname = new StringName("get_priority");
        this._bindings.method_get_priority = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("OpenXRActionSet");
        let methodname = new StringName("get_action_count");
        this._bindings.method_get_action_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("OpenXRActionSet");
        let methodname = new StringName("set_actions");
        this._bindings.method_set_actions = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          381264803
        );
      }
      {
        let classname = new StringName("OpenXRActionSet");
        let methodname = new StringName("get_actions");
        this._bindings.method_get_actions = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3995934104
        );
      }
      {
        let classname = new StringName("OpenXRActionSet");
        let methodname = new StringName("add_action");
        this._bindings.method_add_action = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          349361333
        );
      }
      {
        let classname = new StringName("OpenXRActionSet");
        let methodname = new StringName("remove_action");
        this._bindings.method_remove_action = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          349361333
        );
      }
  }
  set_localized_name(_localized_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_localized_name,
      this._owner,
      _localized_name
    );
    
  }
  get_localized_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_localized_name,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
  set_priority(_priority) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_priority,
      this._owner,
      _priority
    );
    
  }
  get_priority() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_priority,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_action_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_action_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_actions(_actions) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_actions,
      this._owner,
      _actions
    );
    
  }
  get_actions() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_actions,
      this._owner,
			Variant.Type.ARRAY
    ,
      
    );
    
  }
  add_action(_action) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_action,
      this._owner,
      _action
    );
    
  }
  remove_action(_action) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_action,
      this._owner,
      _action
    );
    
  }
}