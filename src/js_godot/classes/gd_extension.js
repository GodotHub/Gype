import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { Resource } from '@js_godot/classes/resource'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_is_library_open;
  method_get_minimum_library_initialization_level;
}
export class GDExtension extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("GDExtension");
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
      let classname = new StringName("GDExtension");
      let methodname = new StringName("is_library_open");
      this._bindings.method_is_library_open = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("GDExtension");
      let methodname = new StringName("get_minimum_library_initialization_level");
      this._bindings.method_get_minimum_library_initialization_level = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        964858755
      );
    }
  }
  
  is_library_open() {
    return _call_native_mb_ret(
      GDExtension._bindings.method_is_library_open,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_minimum_library_initialization_level() {
    return _call_native_mb_ret(
      GDExtension._bindings.method_get_minimum_library_initialization_level,
      this._owner,
			Variant.INT,
      
    );
    
  }
  

  static InitializationLevel = {
    INITIALIZATION_LEVEL_CORE: 0,
    INITIALIZATION_LEVEL_SERVERS: 1,
    INITIALIZATION_LEVEL_SCENE: 2,
    INITIALIZATION_LEVEL_EDITOR: 3,
  }

  static {
    this._init_bindings();
  }
}