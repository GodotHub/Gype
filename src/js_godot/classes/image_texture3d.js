import * as internal from '__internal__';
import { Texture3D } from 'src/js_godot/classestexture3d'
class _MethodBindings {
    method_create;
    method_update;
}


export class ImageTexture3D extends Texture3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ImageTexture3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("ImageTexture3D");
      let methodname = new StringName("create");
      this._bindings.method_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1130379827
      );
    }
    {
      let classname = new StringName("ImageTexture3D");
      let methodname = new StringName("update");
      this._bindings.method_update = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
  }
  create(_format, _width, _height, _depth, _use_mipmaps, _data) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create,
      this._owner,
			Variant.INT,
      _format, _width, _height, _depth, _use_mipmaps, _data
    );
  }
  update(_data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_update,
      this._owner,
      _data
    );
  }
}