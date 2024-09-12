import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { RefCounted } from '@js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_format;
  method_get_format;
  method_set_samples;
  method_get_samples;
  method_set_usage_flags;
  method_get_usage_flags;
}
export class RDAttachmentFormat extends RefCounted{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("RDAttachmentFormat");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_format() {
    if (!this.#_bindings.method_set_format) {
      let classname = new StringName("RDAttachmentFormat");
      let methodname = new StringName("set_format");
      this.#_bindings.method_set_format = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        565531219
      );
    }
  }
  static init_method_get_format() {
    if (!this.#_bindings.method_get_format) {
      let classname = new StringName("RDAttachmentFormat");
      let methodname = new StringName("get_format");
      this.#_bindings.method_get_format = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2235804183
      );
    }
  }
  static init_method_set_samples() {
    if (!this.#_bindings.method_set_samples) {
      let classname = new StringName("RDAttachmentFormat");
      let methodname = new StringName("set_samples");
      this.#_bindings.method_set_samples = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3774171498
      );
    }
  }
  static init_method_get_samples() {
    if (!this.#_bindings.method_get_samples) {
      let classname = new StringName("RDAttachmentFormat");
      let methodname = new StringName("get_samples");
      this.#_bindings.method_get_samples = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        407791724
      );
    }
  }
  static init_method_set_usage_flags() {
    if (!this.#_bindings.method_set_usage_flags) {
      let classname = new StringName("RDAttachmentFormat");
      let methodname = new StringName("set_usage_flags");
      this.#_bindings.method_set_usage_flags = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_usage_flags() {
    if (!this.#_bindings.method_get_usage_flags) {
      let classname = new StringName("RDAttachmentFormat");
      let methodname = new StringName("get_usage_flags");
      this.#_bindings.method_get_usage_flags = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }

  
  
  set_format(_p_member) {
    RDAttachmentFormat.init_method_set_format();
    return _call_native_mb_no_ret(
      RDAttachmentFormat.#_bindings.method_set_format,
      this._owner,
      _p_member
    );
    
  }
  get_format() {
    RDAttachmentFormat.init_method_get_format();
    return _call_native_mb_ret(
      RDAttachmentFormat.#_bindings.method_get_format,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_samples(_p_member) {
    RDAttachmentFormat.init_method_set_samples();
    return _call_native_mb_no_ret(
      RDAttachmentFormat.#_bindings.method_set_samples,
      this._owner,
      _p_member
    );
    
  }
  get_samples() {
    RDAttachmentFormat.init_method_get_samples();
    return _call_native_mb_ret(
      RDAttachmentFormat.#_bindings.method_get_samples,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_usage_flags(_p_member) {
    RDAttachmentFormat.init_method_set_usage_flags();
    return _call_native_mb_no_ret(
      RDAttachmentFormat.#_bindings.method_set_usage_flags,
      this._owner,
      _p_member
    );
    
  }
  get_usage_flags() {
    RDAttachmentFormat.init_method_get_usage_flags();
    return _call_native_mb_ret(
      RDAttachmentFormat.#_bindings.method_get_usage_flags,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get format () {
  return this.get_format();
}
set format (new_value) {
  this.set_format(new_value);
}
get samples () {
  return this.get_samples();
}
set samples (new_value) {
  this.set_samples(new_value);
}
get usage_flags () {
  return this.get_usage_flags();
}
set usage_flags (new_value) {
  this.set_usage_flags(new_value);
}

}