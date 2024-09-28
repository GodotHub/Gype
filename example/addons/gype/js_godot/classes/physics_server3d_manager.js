import * as internal from '__internal__';
import { GodotObject } from '@js_godot/classes/godot_object'
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
  method_register_server;
  method_set_default_server;
}class _PhysicsServer3DManager extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsServer3DManager");
    } else {
      super(godot_object);
    }
  }
  static init_method_register_server() {
    if (!this._bindings.method_register_server) {
      let classname = new StringName("PhysicsServer3DManager");
      let methodname = new StringName("register_server");
      this._bindings.method_register_server = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2137474292
      );
    }
  }
  static init_method_set_default_server() {
    if (!this._bindings.method_set_default_server) {
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
    PhysicsServer3DManager.init_method_register_server();
    return _call_native_mb_no_ret(
      _PhysicsServer3DManager._bindings.method_register_server,
      this._owner,
      _name, _create_callback
    );
    
  }
  set_default_server(_name, _priority) {
    PhysicsServer3DManager.init_method_set_default_server();
    return _call_native_mb_no_ret(
      _PhysicsServer3DManager._bindings.method_set_default_server,
      this._owner,
      _name, _priority
    );
    
  }
  

}
export const PhysicsServer3DManager = (function () {
  let _instance;
  function create_instance() {
    return new _PhysicsServer3DManager();
  }
  return {
    instance: function () {
      if (!_instance) {
        _instance = create_instance();
      }
      return _instance;
    },
  };
})();