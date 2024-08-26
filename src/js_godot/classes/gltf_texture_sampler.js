import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
class _MethodBindings {
    method_get_mag_filter;
    method_set_mag_filter;
    method_get_min_filter;
    method_set_min_filter;
    method_get_wrap_s;
    method_set_wrap_s;
    method_get_wrap_t;
    method_set_wrap_t;
}


export class GLTFTextureSampler extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFTextureSampler");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("GLTFTextureSampler");
      let methodname = new StringName("get_mag_filter");
      this._bindings.method_get_mag_filter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("GLTFTextureSampler");
      let methodname = new StringName("set_mag_filter");
      this._bindings.method_set_mag_filter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GLTFTextureSampler");
      let methodname = new StringName("get_min_filter");
      this._bindings.method_get_min_filter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("GLTFTextureSampler");
      let methodname = new StringName("set_min_filter");
      this._bindings.method_set_min_filter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GLTFTextureSampler");
      let methodname = new StringName("get_wrap_s");
      this._bindings.method_get_wrap_s = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("GLTFTextureSampler");
      let methodname = new StringName("set_wrap_s");
      this._bindings.method_set_wrap_s = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GLTFTextureSampler");
      let methodname = new StringName("get_wrap_t");
      this._bindings.method_get_wrap_t = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("GLTFTextureSampler");
      let methodname = new StringName("set_wrap_t");
      this._bindings.method_set_wrap_t = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
  }
  get_mag_filter() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mag_filter,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_mag_filter(_filter_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mag_filter,
      this._owner,
      _filter_mode
    );
  }
  get_min_filter() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_min_filter,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_min_filter(_filter_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_min_filter,
      this._owner,
      _filter_mode
    );
  }
  get_wrap_s() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_wrap_s,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_wrap_s(_wrap_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_wrap_s,
      this._owner,
      _wrap_mode
    );
  }
  get_wrap_t() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_wrap_t,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_wrap_t(_wrap_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_wrap_t,
      this._owner,
      _wrap_mode
    );
  }
}