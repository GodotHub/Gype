import * as internal from '__internal__';
import { GodotObject } from 'src/js_godot/classes/godot_object'
import { Callable } from 'src/js_godot/variant/callable'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_register_server;
    method_set_default_server;
}

export const PhysicsServer3DManager = new _PhysicsServer3DManager();

class _PhysicsServer3DManager extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsServer3DManager");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("PhysicsServer3DManager");
        let methodname = new StringName("register_server");
        this._bindings.method_register_server = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2137474292
        );
      }
      {
        let classname = new StringName("PhysicsServer3DManager");
        let methodname = new StringName("set_default_server");
        this._bindings.method_set_default_server = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2956805083
        );
      }
  }
  register_server(_name, _create_callback) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_register_server,
      this._owner,
      _name, _create_callback
    );
    
  }
  set_default_server(_name, _priority) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_default_server,
      this._owner,
      _name, _priority
    );
    
  }
}