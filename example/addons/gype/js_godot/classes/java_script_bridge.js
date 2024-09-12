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
  method_eval;
  method_get_interface;
  method_create_callback;
  method_create_object;
  method_download_buffer;
  method_pwa_needs_update;
  method_pwa_update;
  method_force_fs_sync;
}class _JavaScriptBridge extends GodotObject{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("JavaScriptBridge");
    } else {
      super(godot_object);
    }
  }
  static init_method_eval() {
    if (!this.#_bindings.method_eval) {
      let classname = new StringName("JavaScriptBridge");
      let methodname = new StringName("eval");
      this.#_bindings.method_eval = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        218087648
      );
    }
  }
  static init_method_get_interface() {
    if (!this.#_bindings.method_get_interface) {
      let classname = new StringName("JavaScriptBridge");
      let methodname = new StringName("get_interface");
      this.#_bindings.method_get_interface = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1355533281
      );
    }
  }
  static init_method_create_callback() {
    if (!this.#_bindings.method_create_callback) {
      let classname = new StringName("JavaScriptBridge");
      let methodname = new StringName("create_callback");
      this.#_bindings.method_create_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        422818440
      );
    }
  }
  static init_method_create_object() {
    if (!this.#_bindings.method_create_object) {
      let classname = new StringName("JavaScriptBridge");
      let methodname = new StringName("create_object");
      this.#_bindings.method_create_object = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3093893586
      );
    }
  }
  static init_method_download_buffer() {
    if (!this.#_bindings.method_download_buffer) {
      let classname = new StringName("JavaScriptBridge");
      let methodname = new StringName("download_buffer");
      this.#_bindings.method_download_buffer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3352272093
      );
    }
  }
  static init_method_pwa_needs_update() {
    if (!this.#_bindings.method_pwa_needs_update) {
      let classname = new StringName("JavaScriptBridge");
      let methodname = new StringName("pwa_needs_update");
      this.#_bindings.method_pwa_needs_update = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_pwa_update() {
    if (!this.#_bindings.method_pwa_update) {
      let classname = new StringName("JavaScriptBridge");
      let methodname = new StringName("pwa_update");
      this.#_bindings.method_pwa_update = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166280745
      );
    }
  }
  static init_method_force_fs_sync() {
    if (!this.#_bindings.method_force_fs_sync) {
      let classname = new StringName("JavaScriptBridge");
      let methodname = new StringName("force_fs_sync");
      this.#_bindings.method_force_fs_sync = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }

  
  
  eval(_code, _use_global_execution_context) {
    JavaScriptBridge.init_method_eval();
    return _call_native_mb_ret(
      _JavaScriptBridge.#_bindings.method_eval,
      this._owner,
			Variant.Type.VARIANT,
    
      _code, _use_global_execution_context
    );
    
  }
  get_interface(_interface) {
    JavaScriptBridge.init_method_get_interface();
    return _call_native_mb_ret(
      _JavaScriptBridge.#_bindings.method_get_interface,
      this._owner,
			Variant.Type.OBJECT,
      _interface
    );
    
  }
  create_callback(_callable) {
    JavaScriptBridge.init_method_create_callback();
    return _call_native_mb_ret(
      _JavaScriptBridge.#_bindings.method_create_callback,
      this._owner,
			Variant.Type.OBJECT,
      _callable
    );
    
  }
  create_object(_object) {
    JavaScriptBridge.init_method_create_object();
    return _call_native_mb_ret(
      _JavaScriptBridge.#_bindings.method_create_object,
      this._owner,
			Variant.Type.VARIANT,
    
      _object
    );
    
  }
  download_buffer(_buffer, _name, _mime) {
    JavaScriptBridge.init_method_download_buffer();
    return _call_native_mb_no_ret(
      _JavaScriptBridge.#_bindings.method_download_buffer,
      this._owner,
      _buffer, _name, _mime
    );
    
  }
  pwa_needs_update() {
    JavaScriptBridge.init_method_pwa_needs_update();
    return _call_native_mb_ret(
      _JavaScriptBridge.#_bindings.method_pwa_needs_update,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  pwa_update() {
    JavaScriptBridge.init_method_pwa_update();
    return _call_native_mb_ret(
      _JavaScriptBridge.#_bindings.method_pwa_update,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  force_fs_sync() {
    JavaScriptBridge.init_method_force_fs_sync();
    return _call_native_mb_no_ret(
      _JavaScriptBridge.#_bindings.method_force_fs_sync,
      this._owner,
      
    );
    
  }
  

}
export const JavaScriptBridge = (function () {
  let _instance;
  function create_instance() {
    return new _JavaScriptBridge();
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