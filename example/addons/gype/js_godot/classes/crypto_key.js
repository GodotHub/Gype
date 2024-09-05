import * as internal from '__internal__';
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_save;
  method_load;
  method_is_public_only;
  method_save_to_string;
  method_load_from_string;
}
export class CryptoKey extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("CryptoKey");
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
      let classname = new StringName("CryptoKey");
      let methodname = new StringName("save");
      this._bindings.method_save = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        885841341
      );
    }
    {
      let classname = new StringName("CryptoKey");
      let methodname = new StringName("load");
      this._bindings.method_load = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        885841341
      );
    }
    {
      let classname = new StringName("CryptoKey");
      let methodname = new StringName("is_public_only");
      this._bindings.method_is_public_only = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CryptoKey");
      let methodname = new StringName("save_to_string");
      this._bindings.method_save_to_string = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        32795936
      );
    }
    {
      let classname = new StringName("CryptoKey");
      let methodname = new StringName("load_from_string");
      this._bindings.method_load_from_string = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        885841341
      );
    }
  }
  
  save(_path, _public_only) {
    return _call_native_mb_ret(
      CryptoKey._bindings.method_save,
      this._owner,
			Variant.INT,
      _path, _public_only
    );
    
  }
  load(_path, _public_only) {
    return _call_native_mb_ret(
      CryptoKey._bindings.method_load,
      this._owner,
			Variant.INT,
      _path, _public_only
    );
    
  }
  is_public_only() {
    return _call_native_mb_ret(
      CryptoKey._bindings.method_is_public_only,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  save_to_string(_public_only) {
    return _call_native_mb_ret(
      CryptoKey._bindings.method_save_to_string,
      this._owner,
			Variant.Type.STRING,
    
      _public_only
    );
    
  }
  load_from_string(_string_key, _public_only) {
    return _call_native_mb_ret(
      CryptoKey._bindings.method_load_from_string,
      this._owner,
			Variant.INT,
      _string_key, _public_only
    );
    
  }
  


  static {
    this._init_bindings();
  }
}