import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { GodotObject } from '@js_godot/classes/godot_object'
import { Callable } from '@js_godot/variant/callable'
import { Variant } from '@js_godot/variant/variant'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_register_server;
  method_set_default_server;
}class _PhysicsServer2DManager extends GodotObject{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsServer2DManager");
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
      let classname = new StringName("PhysicsServer2DManager");
      let methodname = new StringName("register_server");
      this._bindings.method_register_server = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2137474292
      );
    }
    {
      let classname = new StringName("PhysicsServer2DManager");
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
      _PhysicsServer2DManager._bindings.method_register_server,
      this._owner,
      _name, _create_callback
    );
    
  }
  set_default_server(_name, _priority) {
    return _call_native_mb_no_ret(
      _PhysicsServer2DManager._bindings.method_set_default_server,
      this._owner,
      _name, _priority
    );
    
  }
  


  static {
    this._init_bindings();
  }
}
export const PhysicsServer2DManager = (function () {
  let _instance;
  function create_instance() {
    return new _PhysicsServer2DManager();
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