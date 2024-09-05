import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import { GodotObject } from '@js_godot/classes/godot_object'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_wrap;
}class _JavaClassWrapper extends GodotObject{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("JavaClassWrapper");
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
      let classname = new StringName("JavaClassWrapper");
      let methodname = new StringName("wrap");
      this._bindings.method_wrap = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1124367868
      );
    }
  }
  
  wrap(_name) {
    return _call_native_mb_ret(
      _JavaClassWrapper._bindings.method_wrap,
      this._owner,
			Variant.INT,
      _name
    );
    
  }
  


  static {
    this._init_bindings();
  }
}
export const JavaClassWrapper = (function () {
  let _instance;
  function create_instance() {
    return new _JavaClassWrapper();
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