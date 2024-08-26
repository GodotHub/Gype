import * as internal from '__internal__';
import { Vector2i } from 'src/js_godot/variant/vector2i'
import { TextureLayered } from 'src/js_godot/classestexture_layered'
class _MethodBindings {
    method_set_size;
    method_get_size;
    method_set_layers;
}


export class PlaceholderTextureLayered extends TextureLayered{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PlaceholderTextureLayered");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("PlaceholderTextureLayered");
      let methodname = new StringName("set_size");
      this._bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1130785943
      );
    }
    {
      let classname = new StringName("PlaceholderTextureLayered");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3690982128
      );
    }
    {
      let classname = new StringName("PlaceholderTextureLayered");
      let methodname = new StringName("set_layers");
      this._bindings.method_set_layers = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
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
  get_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      
    );
  }
  set_layers(_layers) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_layers,
      this._owner,
      _layers
    );
  }
}