import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDArray } from '@js_godot/variant/gd_array'
import { RefCounted } from '@js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_uniform_type;
  method_get_uniform_type;
  method_set_binding;
  method_get_binding;
  method_add_id;
  method_clear_ids;
  method_get_ids;
}
export class RDUniform extends RefCounted{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("RDUniform");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_uniform_type() {
    if (!this.#_bindings.method_set_uniform_type) {
      let classname = new StringName("RDUniform");
      let methodname = new StringName("set_uniform_type");
      this.#_bindings.method_set_uniform_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1664894931
      );
    }
  }
  static init_method_get_uniform_type() {
    if (!this.#_bindings.method_get_uniform_type) {
      let classname = new StringName("RDUniform");
      let methodname = new StringName("get_uniform_type");
      this.#_bindings.method_get_uniform_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        475470040
      );
    }
  }
  static init_method_set_binding() {
    if (!this.#_bindings.method_set_binding) {
      let classname = new StringName("RDUniform");
      let methodname = new StringName("set_binding");
      this.#_bindings.method_set_binding = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_binding() {
    if (!this.#_bindings.method_get_binding) {
      let classname = new StringName("RDUniform");
      let methodname = new StringName("get_binding");
      this.#_bindings.method_get_binding = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_add_id() {
    if (!this.#_bindings.method_add_id) {
      let classname = new StringName("RDUniform");
      let methodname = new StringName("add_id");
      this.#_bindings.method_add_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2722037293
      );
    }
  }
  static init_method_clear_ids() {
    if (!this.#_bindings.method_clear_ids) {
      let classname = new StringName("RDUniform");
      let methodname = new StringName("clear_ids");
      this.#_bindings.method_clear_ids = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_ids() {
    if (!this.#_bindings.method_get_ids) {
      let classname = new StringName("RDUniform");
      let methodname = new StringName("get_ids");
      this.#_bindings.method_get_ids = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }

  
  
  set_uniform_type(_p_member) {
    RDUniform.init_method_set_uniform_type();
    return _call_native_mb_no_ret(
      RDUniform.#_bindings.method_set_uniform_type,
      this._owner,
      _p_member
    );
    
  }
  get_uniform_type() {
    RDUniform.init_method_get_uniform_type();
    return _call_native_mb_ret(
      RDUniform.#_bindings.method_get_uniform_type,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_binding(_p_member) {
    RDUniform.init_method_set_binding();
    return _call_native_mb_no_ret(
      RDUniform.#_bindings.method_set_binding,
      this._owner,
      _p_member
    );
    
  }
  get_binding() {
    RDUniform.init_method_get_binding();
    return _call_native_mb_ret(
      RDUniform.#_bindings.method_get_binding,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  add_id(_id) {
    RDUniform.init_method_add_id();
    return _call_native_mb_no_ret(
      RDUniform.#_bindings.method_add_id,
      this._owner,
      _id
    );
    
  }
  clear_ids() {
    RDUniform.init_method_clear_ids();
    return _call_native_mb_no_ret(
      RDUniform.#_bindings.method_clear_ids,
      this._owner,
      
    );
    
  }
  get_ids() {
    RDUniform.init_method_get_ids();
    return _call_native_mb_ret(
      RDUniform.#_bindings.method_get_ids,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  
get uniform_type () {
  return this.get_uniform_type();
}
set uniform_type (new_value) {
  this.set_uniform_type(new_value);
}
get binding () {
  return this.get_binding();
}
set binding (new_value) {
  this.set_binding(new_value);
}

}