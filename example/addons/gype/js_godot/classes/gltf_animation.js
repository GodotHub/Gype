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
  method_get_original_name;
  method_set_original_name;
  method_get_loop;
  method_set_loop;
  method_get_additional_data;
  method_set_additional_data;
}
export class GLTFAnimation extends Resource{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFAnimation");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_original_name() {
    if (!this.#_bindings.method_get_original_name) {
      let classname = new StringName("GLTFAnimation");
      let methodname = new StringName("get_original_name");
      this.#_bindings.method_get_original_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2841200299
      );
    }
  }
  static init_method_set_original_name() {
    if (!this.#_bindings.method_set_original_name) {
      let classname = new StringName("GLTFAnimation");
      let methodname = new StringName("set_original_name");
      this.#_bindings.method_set_original_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_loop() {
    if (!this.#_bindings.method_get_loop) {
      let classname = new StringName("GLTFAnimation");
      let methodname = new StringName("get_loop");
      this.#_bindings.method_get_loop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_loop() {
    if (!this.#_bindings.method_set_loop) {
      let classname = new StringName("GLTFAnimation");
      let methodname = new StringName("set_loop");
      this.#_bindings.method_set_loop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_additional_data() {
    if (!this.#_bindings.method_get_additional_data) {
      let classname = new StringName("GLTFAnimation");
      let methodname = new StringName("get_additional_data");
      this.#_bindings.method_get_additional_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2138907829
      );
    }
  }
  static init_method_set_additional_data() {
    if (!this.#_bindings.method_set_additional_data) {
      let classname = new StringName("GLTFAnimation");
      let methodname = new StringName("set_additional_data");
      this.#_bindings.method_set_additional_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3776071444
      );
    }
  }

  
  
  get_original_name() {
    GLTFAnimation.init_method_get_original_name();
    return _call_native_mb_ret(
      GLTFAnimation.#_bindings.method_get_original_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_original_name(_original_name) {
    GLTFAnimation.init_method_set_original_name();
    return _call_native_mb_no_ret(
      GLTFAnimation.#_bindings.method_set_original_name,
      this._owner,
      _original_name
    );
    
  }
  get_loop() {
    GLTFAnimation.init_method_get_loop();
    return _call_native_mb_ret(
      GLTFAnimation.#_bindings.method_get_loop,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_loop(_loop) {
    GLTFAnimation.init_method_set_loop();
    return _call_native_mb_no_ret(
      GLTFAnimation.#_bindings.method_set_loop,
      this._owner,
      _loop
    );
    
  }
  get_additional_data(_extension_name) {
    GLTFAnimation.init_method_get_additional_data();
    return _call_native_mb_ret(
      GLTFAnimation.#_bindings.method_get_additional_data,
      this._owner,
			Variant.Type.VARIANT,
    
      _extension_name
    );
    
  }
  set_additional_data(_extension_name, _additional_data) {
    GLTFAnimation.init_method_set_additional_data();
    return _call_native_mb_no_ret(
      GLTFAnimation.#_bindings.method_set_additional_data,
      this._owner,
      _extension_name, _additional_data
    );
    
  }
  
get original_name () {
  return this.get_original_name();
}
set original_name (new_value) {
  this.set_original_name(new_value);
}
get loop () {
  return this.get_loop();
}
set loop (new_value) {
  this.set_loop(new_value);
}

}