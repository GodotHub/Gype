import * as internal from '__internal__';
import { Texture2D } from 'src/js_godot/classestexture2d'
import { Vector2 } from 'src/js_godot/variant/vector2'
class _MethodBindings {
    method_set_size;
}


export class PlaceholderTexture2D extends Texture2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PlaceholderTexture2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("PlaceholderTexture2D");
      let methodname = new StringName("set_size");
      this._bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
  }
  set_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_size,
      this._owner,
      _size
    );
  }
}