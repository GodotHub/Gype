import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import { GodotObject } from '@js_godot/classes/godot_object'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_add_interface;
  method_get_interface_count;
  method_remove_interface;
  method_get_interface;
  method_get_interfaces;
  method_find_interface;
  method_set_primary_interface;
  method_get_primary_interface;
}class _TextServerManager extends GodotObject{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("TextServerManager");
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
      let classname = new StringName("TextServerManager");
      let methodname = new StringName("add_interface");
      this._bindings.method_add_interface = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1799689403
      );
    }
    {
      let classname = new StringName("TextServerManager");
      let methodname = new StringName("get_interface_count");
      this._bindings.method_get_interface_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("TextServerManager");
      let methodname = new StringName("remove_interface");
      this._bindings.method_remove_interface = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1799689403
      );
    }
    {
      let classname = new StringName("TextServerManager");
      let methodname = new StringName("get_interface");
      this._bindings.method_get_interface = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1672475555
      );
    }
    {
      let classname = new StringName("TextServerManager");
      let methodname = new StringName("get_interfaces");
      this._bindings.method_get_interfaces = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("TextServerManager");
      let methodname = new StringName("find_interface");
      this._bindings.method_find_interface = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240905781
      );
    }
    {
      let classname = new StringName("TextServerManager");
      let methodname = new StringName("set_primary_interface");
      this._bindings.method_set_primary_interface = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1799689403
      );
    }
    {
      let classname = new StringName("TextServerManager");
      let methodname = new StringName("get_primary_interface");
      this._bindings.method_get_primary_interface = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        905850878
      );
    }
  }
  
  add_interface(_interface) {
    return _call_native_mb_no_ret(
      _TextServerManager._bindings.method_add_interface,
      this._owner,
      _interface
    );
    
  }
  get_interface_count() {
    return _call_native_mb_ret(
      _TextServerManager._bindings.method_get_interface_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  remove_interface(_interface) {
    return _call_native_mb_no_ret(
      _TextServerManager._bindings.method_remove_interface,
      this._owner,
      _interface
    );
    
  }
  get_interface(_idx) {
    return _call_native_mb_ret(
      _TextServerManager._bindings.method_get_interface,
      this._owner,
			Variant.INT,
      _idx
    );
    
  }
  get_interfaces() {
    return _call_native_mb_ret(
      _TextServerManager._bindings.method_get_interfaces,
      this._owner,
			Variant.INT,
      
    );
    
  }
  find_interface(_name) {
    return _call_native_mb_ret(
      _TextServerManager._bindings.method_find_interface,
      this._owner,
			Variant.INT,
      _name
    );
    
  }
  set_primary_interface(_index) {
    return _call_native_mb_no_ret(
      _TextServerManager._bindings.method_set_primary_interface,
      this._owner,
      _index
    );
    
  }
  get_primary_interface() {
    return _call_native_mb_ret(
      _TextServerManager._bindings.method_get_primary_interface,
      this._owner,
			Variant.INT,
      
    );
    
  }
  


  static {
    this._init_bindings();
  }
}
export const TextServerManager = (function () {
  let _instance;
  function create_instance() {
    return new _TextServerManager();
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