import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_localized_name;
  method_get_localized_name;
  method_set_action_type;
  method_get_action_type;
  method_set_toplevel_paths;
  method_get_toplevel_paths;
}
@GodotClass
export class OpenXRAction extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("OpenXRAction");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_localized_name() {
    if (!this._bindings.method_set_localized_name) {
      let classname = new StringName("OpenXRAction");
      let methodname = new StringName("set_localized_name");
      this._bindings.method_set_localized_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_localized_name() {
    if (!this._bindings.method_get_localized_name) {
      let classname = new StringName("OpenXRAction");
      let methodname = new StringName("get_localized_name");
      this._bindings.method_get_localized_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_action_type() {
    if (!this._bindings.method_set_action_type) {
      let classname = new StringName("OpenXRAction");
      let methodname = new StringName("set_action_type");
      this._bindings.method_set_action_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1675238366
      );
    }
  }
  static init_method_get_action_type() {
    if (!this._bindings.method_get_action_type) {
      let classname = new StringName("OpenXRAction");
      let methodname = new StringName("get_action_type");
      this._bindings.method_get_action_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3536542431
      );
    }
  }
  static init_method_set_toplevel_paths() {
    if (!this._bindings.method_set_toplevel_paths) {
      let classname = new StringName("OpenXRAction");
      let methodname = new StringName("set_toplevel_paths");
      this._bindings.method_set_toplevel_paths = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4015028928
      );
    }
  }
  static init_method_get_toplevel_paths() {
    if (!this._bindings.method_get_toplevel_paths) {
      let classname = new StringName("OpenXRAction");
      let methodname = new StringName("get_toplevel_paths");
      this._bindings.method_get_toplevel_paths = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }

  
  
  set_localized_name(_localized_name) {
    OpenXRAction.init_method_set_localized_name();
    return _call_native_mb_no_ret(
      OpenXRAction._bindings.method_set_localized_name,
      this._owner,
      _localized_name
    );
    
  }
  get_localized_name() {
    OpenXRAction.init_method_get_localized_name();
    return _call_native_mb_ret(
      OpenXRAction._bindings.method_get_localized_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_action_type(_action_type) {
    OpenXRAction.init_method_set_action_type();
    return _call_native_mb_no_ret(
      OpenXRAction._bindings.method_set_action_type,
      this._owner,
      _action_type
    );
    
  }
  get_action_type() {
    OpenXRAction.init_method_get_action_type();
    return _call_native_mb_ret(
      OpenXRAction._bindings.method_get_action_type,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_toplevel_paths(_toplevel_paths) {
    OpenXRAction.init_method_set_toplevel_paths();
    return _call_native_mb_no_ret(
      OpenXRAction._bindings.method_set_toplevel_paths,
      this._owner,
      _toplevel_paths
    );
    
  }
  get_toplevel_paths() {
    OpenXRAction.init_method_get_toplevel_paths();
    return _call_native_mb_ret(
      OpenXRAction._bindings.method_get_toplevel_paths,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  
get localized_name () {
  return this.get_localized_name();
}
set localized_name (new_value) {
  this.set_localized_name(new_value);
}
get action_type () {
  return this.get_action_type();
}
set action_type (new_value) {
  this.set_action_type(new_value);
}
get toplevel_paths () {
  return this.get_toplevel_paths();
}
set toplevel_paths (new_value) {
  this.set_toplevel_paths(new_value);
}

  static ActionType = {
    OPENXR_ACTION_BOOL: 0,
    OPENXR_ACTION_FLOAT: 1,
    OPENXR_ACTION_VECTOR2: 2,
    OPENXR_ACTION_POSE: 3,
  }
}