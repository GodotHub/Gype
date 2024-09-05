import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { PackedByteArray } from '@js_godot/variant/packed_byte_array'
import { Callable } from '@js_godot/variant/callable'
import { StringName } from '@js_godot/variant/string_name'
import { GodotObject } from '@js_godot/classes/godot_object'
import { GDString } from '@js_godot/variant/gd_string'
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

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("JavaScriptBridge");
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
      let classname = new StringName("JavaScriptBridge");
      let methodname = new StringName("eval");
      this._bindings.method_eval = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        218087648
      );
    }
    {
      let classname = new StringName("JavaScriptBridge");
      let methodname = new StringName("get_interface");
      this._bindings.method_get_interface = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1355533281
      );
    }
    {
      let classname = new StringName("JavaScriptBridge");
      let methodname = new StringName("create_callback");
      this._bindings.method_create_callback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        422818440
      );
    }
    {
      let classname = new StringName("JavaScriptBridge");
      let methodname = new StringName("create_object");
      this._bindings.method_create_object = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3093893586
      );
    }
    {
      let classname = new StringName("JavaScriptBridge");
      let methodname = new StringName("download_buffer");
      this._bindings.method_download_buffer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3352272093
      );
    }
    {
      let classname = new StringName("JavaScriptBridge");
      let methodname = new StringName("pwa_needs_update");
      this._bindings.method_pwa_needs_update = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("JavaScriptBridge");
      let methodname = new StringName("pwa_update");
      this._bindings.method_pwa_update = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        166280745
      );
    }
    {
      let classname = new StringName("JavaScriptBridge");
      let methodname = new StringName("force_fs_sync");
      this._bindings.method_force_fs_sync = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
  }
  
  eval(_code, _use_global_execution_context) {
    return _call_native_mb_ret(
      _JavaScriptBridge._bindings.method_eval,
      this._owner,
			Variant.Type.VARIANT,
    
      _code, _use_global_execution_context
    );
    
  }
  get_interface(_interface) {
    return _call_native_mb_ret(
      _JavaScriptBridge._bindings.method_get_interface,
      this._owner,
			Variant.INT,
      _interface
    );
    
  }
  create_callback(_callable) {
    return _call_native_mb_ret(
      _JavaScriptBridge._bindings.method_create_callback,
      this._owner,
			Variant.INT,
      _callable
    );
    
  }
  create_object(_object) {
    return _call_native_mb_ret(
      _JavaScriptBridge._bindings.method_create_object,
      this._owner,
			Variant.Type.VARIANT,
    
      _object
    );
    
  }
  download_buffer(_buffer, _name, _mime) {
    return _call_native_mb_no_ret(
      _JavaScriptBridge._bindings.method_download_buffer,
      this._owner,
      _buffer, _name, _mime
    );
    
  }
  pwa_needs_update() {
    return _call_native_mb_ret(
      _JavaScriptBridge._bindings.method_pwa_needs_update,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  pwa_update() {
    return _call_native_mb_ret(
      _JavaScriptBridge._bindings.method_pwa_update,
      this._owner,
			Variant.INT,
      
    );
    
  }
  force_fs_sync() {
    return _call_native_mb_no_ret(
      _JavaScriptBridge._bindings.method_force_fs_sync,
      this._owner,
      
    );
    
  }
  


  static {
    this._init_bindings();
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