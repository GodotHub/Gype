import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_is_library_open;
  method_get_minimum_library_initialization_level;
}
@GodotClass
export class GDExtension extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GDExtension");
    } else {
      super(godot_object);
    }
  }
  static init_method_is_library_open() {
    if (!this._bindings.method_is_library_open) {
      let classname = new StringName("GDExtension");
      let methodname = new StringName("is_library_open");
      this._bindings.method_is_library_open = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_minimum_library_initialization_level() {
    if (!this._bindings.method_get_minimum_library_initialization_level) {
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
    GDExtension.init_method_is_library_open();
    return _call_native_mb_ret(
      GDExtension._bindings.method_is_library_open,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_minimum_library_initialization_level() {
    GDExtension.init_method_get_minimum_library_initialization_level();
    return _call_native_mb_ret(
      GDExtension._bindings.method_get_minimum_library_initialization_level,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  

  static InitializationLevel = {
    INITIALIZATION_LEVEL_CORE: 0,
    INITIALIZATION_LEVEL_SERVERS: 1,
    INITIALIZATION_LEVEL_SCENE: 2,
    INITIALIZATION_LEVEL_EDITOR: 3,
  }
}