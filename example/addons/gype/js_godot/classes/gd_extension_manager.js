import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { GodotObject } from '@js_godot/classes/godot_object'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import { PackedStringArray } from '@js_godot/variant/packed_string_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_load_extension;
  method_reload_extension;
  method_unload_extension;
  method_is_extension_loaded;
  method_get_loaded_extensions;
  method_get_extension;
}class _GDExtensionManager extends GodotObject{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("GDExtensionManager");
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
      let classname = new StringName("GDExtensionManager");
      let methodname = new StringName("load_extension");
      this._bindings.method_load_extension = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4024158731
      );
    }
    {
      let classname = new StringName("GDExtensionManager");
      let methodname = new StringName("reload_extension");
      this._bindings.method_reload_extension = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4024158731
      );
    }
    {
      let classname = new StringName("GDExtensionManager");
      let methodname = new StringName("unload_extension");
      this._bindings.method_unload_extension = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4024158731
      );
    }
    {
      let classname = new StringName("GDExtensionManager");
      let methodname = new StringName("is_extension_loaded");
      this._bindings.method_is_extension_loaded = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3927539163
      );
    }
    {
      let classname = new StringName("GDExtensionManager");
      let methodname = new StringName("get_loaded_extensions");
      this._bindings.method_get_loaded_extensions = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1139954409
      );
    }
    {
      let classname = new StringName("GDExtensionManager");
      let methodname = new StringName("get_extension");
      this._bindings.method_get_extension = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        49743343
      );
    }
  }
  load_extension(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_load_extension,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  reload_extension(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_reload_extension,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  unload_extension(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_unload_extension,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  is_extension_loaded(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_extension_loaded,
      this._owner,
			Variant.Type.BOOL,
      _path
    );
    
  }
  get_loaded_extensions() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_loaded_extensions,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  get_extension(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_extension,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  

  static LoadStatus = {
    LOAD_STATUS_OK: 0,
    LOAD_STATUS_FAILED: 1,
    LOAD_STATUS_ALREADY_LOADED: 2,
    LOAD_STATUS_NOT_LOADED: 3,
    LOAD_STATUS_NEEDS_RESTART: 4,
  }

  static {
    this._init_bindings();
  }
}
export const GDExtensionManager = new _GDExtensionManager();