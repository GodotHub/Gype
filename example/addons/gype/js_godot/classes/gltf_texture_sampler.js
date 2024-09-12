import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFTextureSampler");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_mag_filter() {
    if (!this.#_bindings.method_get_mag_filter) {
      let classname = new StringName("GLTFTextureSampler");
      let methodname = new StringName("get_mag_filter");
      this.#_bindings.method_get_mag_filter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_mag_filter() {
    if (!this.#_bindings.method_set_mag_filter) {
      let classname = new StringName("GLTFTextureSampler");
      let methodname = new StringName("set_mag_filter");
      this.#_bindings.method_set_mag_filter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_min_filter() {
    if (!this.#_bindings.method_get_min_filter) {
      let classname = new StringName("GLTFTextureSampler");
      let methodname = new StringName("get_min_filter");
      this.#_bindings.method_get_min_filter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_min_filter() {
    if (!this.#_bindings.method_set_min_filter) {
      let classname = new StringName("GLTFTextureSampler");
      let methodname = new StringName("set_min_filter");
      this.#_bindings.method_set_min_filter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_wrap_s() {
    if (!this.#_bindings.method_get_wrap_s) {
      let classname = new StringName("GLTFTextureSampler");
      let methodname = new StringName("get_wrap_s");
      this.#_bindings.method_get_wrap_s = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_wrap_s() {
    if (!this.#_bindings.method_set_wrap_s) {
      let classname = new StringName("GLTFTextureSampler");
      let methodname = new StringName("set_wrap_s");
      this.#_bindings.method_set_wrap_s = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_wrap_t() {
    if (!this.#_bindings.method_get_wrap_t) {
      let classname = new StringName("GLTFTextureSampler");
      let methodname = new StringName("get_wrap_t");
      this.#_bindings.method_get_wrap_t = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_wrap_t() {
    if (!this.#_bindings.method_set_wrap_t) {
      let classname = new StringName("GLTFTextureSampler");
      let methodname = new StringName("set_wrap_t");
      this.#_bindings.method_set_wrap_t = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }

  
  
  get_mag_filter() {
    GLTFTextureSampler.init_method_get_mag_filter();
    return _call_native_mb_ret(
      GLTFTextureSampler.#_bindings.method_get_mag_filter,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_mag_filter(_filter_mode) {
    GLTFTextureSampler.init_method_set_mag_filter();
    return _call_native_mb_no_ret(
      GLTFTextureSampler.#_bindings.method_set_mag_filter,
      this._owner,
      _filter_mode
    );
    
  }
  get_min_filter() {
    GLTFTextureSampler.init_method_get_min_filter();
    return _call_native_mb_ret(
      GLTFTextureSampler.#_bindings.method_get_min_filter,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_min_filter(_filter_mode) {
    GLTFTextureSampler.init_method_set_min_filter();
    return _call_native_mb_no_ret(
      GLTFTextureSampler.#_bindings.method_set_min_filter,
      this._owner,
      _filter_mode
    );
    
  }
  get_wrap_s() {
    GLTFTextureSampler.init_method_get_wrap_s();
    return _call_native_mb_ret(
      GLTFTextureSampler.#_bindings.method_get_wrap_s,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_wrap_s(_wrap_mode) {
    GLTFTextureSampler.init_method_set_wrap_s();
    return _call_native_mb_no_ret(
      GLTFTextureSampler.#_bindings.method_set_wrap_s,
      this._owner,
      _wrap_mode
    );
    
  }
  get_wrap_t() {
    GLTFTextureSampler.init_method_get_wrap_t();
    return _call_native_mb_ret(
      GLTFTextureSampler.#_bindings.method_get_wrap_t,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_wrap_t(_wrap_mode) {
    GLTFTextureSampler.init_method_set_wrap_t();
    return _call_native_mb_no_ret(
      GLTFTextureSampler.#_bindings.method_set_wrap_t,
      this._owner,
      _wrap_mode
    );
    
  }
  
get mag_filter () {
  return this.get_mag_filter();
}
set mag_filter (new_value) {
  this.set_mag_filter(new_value);
}
get min_filter () {
  return this.get_min_filter();
}
set min_filter (new_value) {
  this.set_min_filter(new_value);
}
get wrap_s () {
  return this.get_wrap_s();
}
set wrap_s (new_value) {
  this.set_wrap_s(new_value);
}
get wrap_t () {
  return this.get_wrap_t();
}
set wrap_t (new_value) {
  this.set_wrap_t(new_value);
}

}