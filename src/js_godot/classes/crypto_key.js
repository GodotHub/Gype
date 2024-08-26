import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method_save;
    method_load;
    method_is_public_only;
    method_save_to_string;
    method_load_from_string;
}


export class CryptoKey extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CryptoKey");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
      ClassDB._bindings.method_save,
      this._owner,
			Variant.INT,
      _path, _public_only
    );
  }
  load(_path, _public_only) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_load,
      this._owner,
			Variant.INT,
      _path, _public_only
    );
  }
  is_public_only() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_public_only,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  save_to_string(_public_only) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_save_to_string,
      this._owner,
			Variant.Type.STRING
    ,
      _public_only
    );
  }
  load_from_string(_string_key, _public_only) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_load_from_string,
      this._owner,
			Variant.INT,
      _string_key, _public_only
    );
  }
}