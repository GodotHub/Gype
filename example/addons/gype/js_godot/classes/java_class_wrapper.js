import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("JavaClassWrapper");
    } else {
      super(godot_object);
    }
  }
  static init_method_wrap() {
    if (!this.#_bindings.method_wrap) {
      let classname = new StringName("JavaClassWrapper");
      let methodname = new StringName("wrap");
      this.#_bindings.method_wrap = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1124367868
      );
    }
  }

  
  
  wrap(_name) {
    JavaClassWrapper.init_method_wrap();
    return _call_native_mb_ret(
      _JavaClassWrapper.#_bindings.method_wrap,
      this._owner,
			Variant.Type.OBJECT,
      _name
    );
    
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