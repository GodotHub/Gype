import * as internal from '__internal__';
import { GodotObject } from 'src/js_godot/classesgodot_object'
import { Callable } from 'src/js_godot/variant/callable'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method_register_server;
    method_set_default_server;
}

export const PhysicsServer2DManager = new _PhysicsServer2DManager();

class _PhysicsServer2DManager extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsServer2DManager");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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