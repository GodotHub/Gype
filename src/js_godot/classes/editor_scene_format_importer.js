import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { Variant } from 'src/js_godot/variant/variant'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { RefCounted } from 'src/js_godot/classesref_counted'
import { Dictionary } from 'src/js_godot/variant/dictionary'
class _MethodBindings {
    method__get_import_flags;
    method__get_extensions;
    method__import_scene;
    method__get_import_options;
    method__get_option_visibility;
}


export class EditorSceneFormatImporter extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorSceneFormatImporter");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("EditorSceneFormatImporter");
      let methodname = new StringName("_get_import_flags");
      this._bindings.method__get_import_flags = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorSceneFormatImporter");
      let methodname = new StringName("_get_extensions");
      this._bindings.method__get_extensions = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorSceneFormatImporter");
      let methodname = new StringName("_import_scene");
      this._bindings.method__import_scene = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorSceneFormatImporter");
      let methodname = new StringName("_get_import_options");
      this._bindings.method__get_import_options = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorSceneFormatImporter");
      let methodname = new StringName("_get_option_visibility");
      this._bindings.method__get_option_visibility = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
  }
  _get_import_flags() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_import_flags,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _get_extensions() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_extensions,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      
    );
  }
  _import_scene(_path, _flags, _options) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__import_scene,
      this._owner,
			Variant.INT,
      _path, _flags, _options
    );
  }
  _get_import_options(_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__get_import_options,
      this._owner,
      _path
    );
  }
  _get_option_visibility(_path, _for_animation, _option) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_option_visibility,
      this._owner,
			Variant.Type.VARIANT
    ,
      _path, _for_animation, _option
    );
  }
}