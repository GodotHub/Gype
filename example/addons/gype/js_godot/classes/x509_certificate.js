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
  method_save;
  method_load;
  method_save_to_string;
  method_load_from_string;
}
@GodotClass
export class X509Certificate extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("X509Certificate");
    } else {
      super(godot_object);
    }
  }
  static init_method_save() {
    if (!this._bindings.method_save) {
      let classname = new StringName("X509Certificate");
      let methodname = new StringName("save");
      this._bindings.method_save = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166001499
      );
    }
  }
  static init_method_load() {
    if (!this._bindings.method_load) {
      let classname = new StringName("X509Certificate");
      let methodname = new StringName("load");
      this._bindings.method_load = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166001499
      );
    }
  }
  static init_method_save_to_string() {
    if (!this._bindings.method_save_to_string) {
      let classname = new StringName("X509Certificate");
      let methodname = new StringName("save_to_string");
      this._bindings.method_save_to_string = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2841200299
      );
    }
  }
  static init_method_load_from_string() {
    if (!this._bindings.method_load_from_string) {
      let classname = new StringName("X509Certificate");
      let methodname = new StringName("load_from_string");
      this._bindings.method_load_from_string = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166001499
      );
    }
  }

  
  
  save(_path) {
    X509Certificate.init_method_save();
    return _call_native_mb_ret(
      X509Certificate._bindings.method_save,
      this._owner,
			Variant.Type.INT,
    
      _path
    );
    
  }
  load(_path) {
    X509Certificate.init_method_load();
    return _call_native_mb_ret(
      X509Certificate._bindings.method_load,
      this._owner,
			Variant.Type.INT,
    
      _path
    );
    
  }
  save_to_string() {
    X509Certificate.init_method_save_to_string();
    return _call_native_mb_ret(
      X509Certificate._bindings.method_save_to_string,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  load_from_string(_string) {
    X509Certificate.init_method_load_from_string();
    return _call_native_mb_ret(
      X509Certificate._bindings.method_load_from_string,
      this._owner,
			Variant.Type.INT,
    
      _string
    );
    
  }
  

}