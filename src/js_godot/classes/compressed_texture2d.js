import * as internal from '__internal__';
import { Texture2D } from 'src/js_godot/classestexture2d'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method_load;
    method_get_load_path;
}


export class CompressedTexture2D extends Texture2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CompressedTexture2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("CompressedTexture2D");
      let methodname = new StringName("load");
      this._bindings.method_load = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        166001499
      );
    }
    {
      let classname = new StringName("CompressedTexture2D");
      let methodname = new StringName("get_load_path");
      this._bindings.method_get_load_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
  }
  load(_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_load,
      this._owner,
			Variant.INT,
      _path
    );
  }
  get_load_path() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_load_path,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
}