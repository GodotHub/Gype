import * as internal from '__internal__';
import { GodotObject } from 'src/js_godot/classesgodot_object'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method_add_interface;
    method_get_interface_count;
    method_remove_interface;
    method_get_interface;
    method_get_interfaces;
    method_find_interface;
    method_set_primary_interface;
    method_get_primary_interface;
}

export const TextServerManager = new _TextServerManager();

class _TextServerManager extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("TextServerManager");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
      ClassDB._bindings.method_add_interface,
      this._owner,
      _interface
    );
  }
  get_interface_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_interface_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  remove_interface(_interface) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_interface,
      this._owner,
      _interface
    );
  }
  get_interface(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_interface,
      this._owner,
			Variant.INT,
      _idx
    );
  }
  get_interfaces() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_interfaces,
      this._owner,
			Variant.INT,
      
    );
  }
  find_interface(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_find_interface,
      this._owner,
			Variant.INT,
      _name
    );
  }
  set_primary_interface(_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_primary_interface,
      this._owner,
      _index
    );
  }
  get_primary_interface() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_primary_interface,
      this._owner,
			Variant.INT,
      
    );
  }
}