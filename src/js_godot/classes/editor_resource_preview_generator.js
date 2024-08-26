import * as internal from '__internal__';
import { Vector2i } from 'src/js_godot/variant/vector2i'
import { RefCounted } from 'src/js_godot/classesref_counted'
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method__handles;
    method__generate;
    method__generate_from_path;
    method__generate_small_preview_automatically;
    method__can_generate_small_preview;
}


export class EditorResourcePreviewGenerator extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorResourcePreviewGenerator");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("EditorResourcePreviewGenerator");
      let methodname = new StringName("_handles");
      this._bindings.method__handles = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorResourcePreviewGenerator");
      let methodname = new StringName("_generate");
      this._bindings.method__generate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorResourcePreviewGenerator");
      let methodname = new StringName("_generate_from_path");
      this._bindings.method__generate_from_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorResourcePreviewGenerator");
      let methodname = new StringName("_generate_small_preview_automatically");
      this._bindings.method__generate_small_preview_automatically = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("EditorResourcePreviewGenerator");
      let methodname = new StringName("_can_generate_small_preview");
      this._bindings.method__can_generate_small_preview = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
  }
  _handles(_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__handles,
      this._owner,
			Variant.Type.BOOL,
      _type
    );
  }
  _generate(_resource, _size, _metadata) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__generate,
      this._owner,
			Variant.INT,
      _resource, _size, _metadata
    );
  }
  _generate_from_path(_path, _size, _metadata) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__generate_from_path,
      this._owner,
			Variant.INT,
      _path, _size, _metadata
    );
  }
  _generate_small_preview_automatically() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__generate_small_preview_automatically,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _can_generate_small_preview() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__can_generate_small_preview,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
}