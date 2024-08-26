import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method_set_localized_name;
    method_get_localized_name;
    method_set_action_type;
    method_get_action_type;
    method_set_toplevel_paths;
    method_get_toplevel_paths;
}


export class OpenXRAction extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("OpenXRAction");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("OpenXRAction");
      let methodname = new StringName("set_localized_name");
      this._bindings.method_set_localized_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("OpenXRAction");
      let methodname = new StringName("get_localized_name");
      this._bindings.method_get_localized_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("OpenXRAction");
      let methodname = new StringName("set_action_type");
      this._bindings.method_set_action_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1675238366
      );
    }
    {
      let classname = new StringName("OpenXRAction");
      let methodname = new StringName("get_action_type");
      this._bindings.method_get_action_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3536542431
      );
    }
    {
      let classname = new StringName("OpenXRAction");
      let methodname = new StringName("set_toplevel_paths");
      this._bindings.method_set_toplevel_paths = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4015028928
      );
    }
    {
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
  set_action_type(_action_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_action_type,
      this._owner,
      _action_type
    );
  }
  get_action_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_action_type,
      this._owner,
			Variant.INT,
      
    );
  }
  set_toplevel_paths(_toplevel_paths) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_toplevel_paths,
      this._owner,
      _toplevel_paths
    );
  }
  get_toplevel_paths() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_toplevel_paths,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      
    );
  }
  static ActionType = {
    OPENXR_ACTION_BOOL: 0,
    OPENXR_ACTION_FLOAT: 1,
    OPENXR_ACTION_VECTOR2: 2,
    OPENXR_ACTION_POSE: 3,
  }
}