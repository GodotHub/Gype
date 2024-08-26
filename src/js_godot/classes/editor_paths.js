import * as internal from '__internal__';
import { GodotObject } from 'src/js_godot/classesgodot_object'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method_get_data_dir;
    method_get_config_dir;
    method_get_cache_dir;
    method_is_self_contained;
    method_get_self_contained_file;
    method_get_project_settings_dir;
}


export class EditorPaths extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorPaths");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("EditorPaths");
      let methodname = new StringName("get_data_dir");
      this._bindings.method_get_data_dir = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("EditorPaths");
      let methodname = new StringName("get_config_dir");
      this._bindings.method_get_config_dir = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("EditorPaths");
      let methodname = new StringName("get_cache_dir");
      this._bindings.method_get_cache_dir = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("EditorPaths");
      let methodname = new StringName("is_self_contained");
      this._bindings.method_is_self_contained = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("EditorPaths");
      let methodname = new StringName("get_self_contained_file");
      this._bindings.method_get_self_contained_file = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_data_dir,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  get_config_dir() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_config_dir,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  get_cache_dir() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cache_dir,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  is_self_contained() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_self_contained,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  get_self_contained_file() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_self_contained_file,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  get_project_settings_dir() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_project_settings_dir,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
}