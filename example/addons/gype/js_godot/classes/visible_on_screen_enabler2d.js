import * as internal from '__internal__';
import { VisibleOnScreenNotifier2D } from '@js_godot/classes/visible_on_screen_notifier2d'
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
  method_set_enable_mode;
  method_get_enable_mode;
  method_set_enable_node_path;
  method_get_enable_node_path;
}
@GodotClass
export class VisibleOnScreenEnabler2D extends VisibleOnScreenNotifier2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisibleOnScreenEnabler2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_enable_mode() {
    if (!this._bindings.method_set_enable_mode) {
      let classname = new StringName("VisibleOnScreenEnabler2D");
      let methodname = new StringName("set_enable_mode");
      this._bindings.method_set_enable_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2961788752
      );
    }
  }
  static init_method_get_enable_mode() {
    if (!this._bindings.method_get_enable_mode) {
      let classname = new StringName("VisibleOnScreenEnabler2D");
      let methodname = new StringName("get_enable_mode");
      this._bindings.method_get_enable_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2650445576
      );
    }
  }
  static init_method_set_enable_node_path() {
    if (!this._bindings.method_set_enable_node_path) {
      let classname = new StringName("VisibleOnScreenEnabler2D");
      let methodname = new StringName("set_enable_node_path");
      this._bindings.method_set_enable_node_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_get_enable_node_path() {
    if (!this._bindings.method_get_enable_node_path) {
      let classname = new StringName("VisibleOnScreenEnabler2D");
      let methodname = new StringName("get_enable_node_path");
      this._bindings.method_get_enable_node_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        277076166
      );
    }
  }

  
  
  set_enable_mode(_mode) {
    VisibleOnScreenEnabler2D.init_method_set_enable_mode();
    return _call_native_mb_no_ret(
      VisibleOnScreenEnabler2D._bindings.method_set_enable_mode,
      this._owner,
      _mode
    );
    
  }
  get_enable_mode() {
    VisibleOnScreenEnabler2D.init_method_get_enable_mode();
    return _call_native_mb_ret(
      VisibleOnScreenEnabler2D._bindings.method_get_enable_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_enable_node_path(_path) {
    VisibleOnScreenEnabler2D.init_method_set_enable_node_path();
    return _call_native_mb_no_ret(
      VisibleOnScreenEnabler2D._bindings.method_set_enable_node_path,
      this._owner,
      _path
    );
    
  }
  get_enable_node_path() {
    VisibleOnScreenEnabler2D.init_method_get_enable_node_path();
    return _call_native_mb_ret(
      VisibleOnScreenEnabler2D._bindings.method_get_enable_node_path,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  
get enable_mode () {
  return this.get_enable_mode();
}
set enable_mode (new_value) {
  this.set_enable_mode(new_value);
}
get enable_node_path () {
  return this.get_enable_node_path();
}
set enable_node_path (new_value) {
  this.set_enable_node_path(new_value);
}

  static EnableMode = {
    ENABLE_MODE_INHERIT: 0,
    ENABLE_MODE_ALWAYS: 1,
    ENABLE_MODE_WHEN_PAUSED: 2,
  }
}