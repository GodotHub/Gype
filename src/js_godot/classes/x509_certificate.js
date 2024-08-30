import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classes/resource'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_save;
    method_load;
    method_save_to_string;
    method_load_from_string;
}


export class X509Certificate extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("X509Certificate");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("X509Certificate");
        let methodname = new StringName("save");
        this._bindings.method_save = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          166001499
        );
      }
      {
        let classname = new StringName("X509Certificate");
        let methodname = new StringName("load");
        this._bindings.method_load = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          166001499
        );
      }
      {
        let classname = new StringName("X509Certificate");
        let methodname = new StringName("save_to_string");
        this._bindings.method_save_to_string = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2841200299
        );
      }
      {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method_save,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  load(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_load,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  save_to_string() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_save_to_string,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
  load_from_string(_string) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_load_from_string,
      this._owner,
			Variant.INT,
      _string
    );
    
  }
}