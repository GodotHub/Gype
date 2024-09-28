import * as internal from '__internal__';
import { GodotObject } from '@js_godot/classes/godot_object'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_get_data_dir;
  method_get_config_dir;
  method_get_cache_dir;
  method_is_self_contained;
  method_get_self_contained_file;
  method_get_project_settings_dir;
}
@GodotClass
export class EditorPaths extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorPaths");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_data_dir() {
    if (!this._bindings.method_get_data_dir) {
      let classname = new StringName("EditorPaths");
      let methodname = new StringName("get_data_dir");
      this._bindings.method_get_data_dir = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_config_dir() {
    if (!this._bindings.method_get_config_dir) {
      let classname = new StringName("EditorPaths");
      let methodname = new StringName("get_config_dir");
      this._bindings.method_get_config_dir = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_cache_dir() {
    if (!this._bindings.method_get_cache_dir) {
      let classname = new StringName("EditorPaths");
      let methodname = new StringName("get_cache_dir");
      this._bindings.method_get_cache_dir = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_is_self_contained() {
    if (!this._bindings.method_is_self_contained) {
      let classname = new StringName("EditorPaths");
      let methodname = new StringName("is_self_contained");
      this._bindings.method_is_self_contained = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_self_contained_file() {
    if (!this._bindings.method_get_self_contained_file) {
      let classname = new StringName("EditorPaths");
      let methodname = new StringName("get_self_contained_file");
      this._bindings.method_get_self_contained_file = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_project_settings_dir() {
    if (!this._bindings.method_get_project_settings_dir) {
      let classname = new StringName("EditorPaths");
      let methodname = new StringName("get_project_settings_dir");
      this._bindings.method_get_project_settings_dir = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }

  
  
  get_data_dir() {
    EditorPaths.init_method_get_data_dir();
    return _call_native_mb_ret(
      EditorPaths._bindings.method_get_data_dir,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_config_dir() {
    EditorPaths.init_method_get_config_dir();
    return _call_native_mb_ret(
      EditorPaths._bindings.method_get_config_dir,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_cache_dir() {
    EditorPaths.init_method_get_cache_dir();
    return _call_native_mb_ret(
      EditorPaths._bindings.method_get_cache_dir,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  is_self_contained() {
    EditorPaths.init_method_is_self_contained();
    return _call_native_mb_ret(
      EditorPaths._bindings.method_is_self_contained,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_self_contained_file() {
    EditorPaths.init_method_get_self_contained_file();
    return _call_native_mb_ret(
      EditorPaths._bindings.method_get_self_contained_file,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_project_settings_dir() {
    EditorPaths.init_method_get_project_settings_dir();
    return _call_native_mb_ret(
      EditorPaths._bindings.method_get_project_settings_dir,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  

}