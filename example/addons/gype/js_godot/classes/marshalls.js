import * as internal from '__internal__';
import { PackedByteArray } from '@js_godot/variant/packed_byte_array'
import { StringName } from '@js_godot/variant/string_name'
import { GodotObject } from '@js_godot/classes/godot_object'
import { Variant } from '@js_godot/variant/variant'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_variant_to_base64;
  method_base64_to_variant;
  method_raw_to_base64;
  method_base64_to_raw;
  method_utf8_to_base64;
  method_base64_to_utf8;
}class _Marshalls extends GodotObject{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Marshalls");
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
      let classname = new StringName("Marshalls");
      let methodname = new StringName("variant_to_base64");
      this._bindings.method_variant_to_base64 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3876248563
      );
    }
    {
      let classname = new StringName("Marshalls");
      let methodname = new StringName("base64_to_variant");
      this._bindings.method_base64_to_variant = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        218087648
      );
    }
    {
      let classname = new StringName("Marshalls");
      let methodname = new StringName("raw_to_base64");
      this._bindings.method_raw_to_base64 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3999417757
      );
    }
    {
      let classname = new StringName("Marshalls");
      let methodname = new StringName("base64_to_raw");
      this._bindings.method_base64_to_raw = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        659035735
      );
    }
    {
      let classname = new StringName("Marshalls");
      let methodname = new StringName("utf8_to_base64");
      this._bindings.method_utf8_to_base64 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1703090593
      );
    }
    {
      let classname = new StringName("Marshalls");
      let methodname = new StringName("base64_to_utf8");
      this._bindings.method_base64_to_utf8 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1703090593
      );
    }
  }
  
  variant_to_base64(_variant, _full_objects) {
    return _call_native_mb_ret(
      _Marshalls._bindings.method_variant_to_base64,
      this._owner,
			Variant.Type.STRING,
    
      _variant, _full_objects
    );
    
  }
  base64_to_variant(_base64_str, _allow_objects) {
    return _call_native_mb_ret(
      _Marshalls._bindings.method_base64_to_variant,
      this._owner,
			Variant.Type.VARIANT,
    
      _base64_str, _allow_objects
    );
    
  }
  raw_to_base64(_array) {
    return _call_native_mb_ret(
      _Marshalls._bindings.method_raw_to_base64,
      this._owner,
			Variant.Type.STRING,
    
      _array
    );
    
  }
  base64_to_raw(_base64_str) {
    return _call_native_mb_ret(
      _Marshalls._bindings.method_base64_to_raw,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      _base64_str
    );
    
  }
  utf8_to_base64(_utf8_str) {
    return _call_native_mb_ret(
      _Marshalls._bindings.method_utf8_to_base64,
      this._owner,
			Variant.Type.STRING,
    
      _utf8_str
    );
    
  }
  base64_to_utf8(_base64_str) {
    return _call_native_mb_ret(
      _Marshalls._bindings.method_base64_to_utf8,
      this._owner,
			Variant.Type.STRING,
    
      _base64_str
    );
    
  }
  


  static {
    this._init_bindings();
  }
}
export const Marshalls = (function () {
  let _instance;
  function create_instance() {
    return new _Marshalls();
  }
  return {
    instance: function () {
      if (!_instance) {
        _instance = create_instance();
      }
      return _instance;
    },
  };
})();