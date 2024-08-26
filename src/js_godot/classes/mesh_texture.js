import * as internal from '__internal__';
import { Texture2D } from 'src/js_godot/classestexture2d'
import { Vector2 } from 'src/js_godot/variant/vector2'
class _MethodBindings {
    method_set_mesh;
    method_get_mesh;
    method_set_image_size;
    method_get_image_size;
    method_set_base_texture;
    method_get_base_texture;
}


export class MeshTexture extends Texture2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("MeshTexture");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("MeshTexture");
      let methodname = new StringName("set_mesh");
      this._bindings.method_set_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        194775623
      );
    }
    {
      let classname = new StringName("MeshTexture");
      let methodname = new StringName("get_mesh");
      this._bindings.method_get_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1808005922
      );
    }
    {
      let classname = new StringName("MeshTexture");
      let methodname = new StringName("set_image_size");
      this._bindings.method_set_image_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("MeshTexture");
      let methodname = new StringName("get_image_size");
      this._bindings.method_get_image_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("MeshTexture");
      let methodname = new StringName("set_base_texture");
      this._bindings.method_set_base_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("MeshTexture");
      let methodname = new StringName("get_base_texture");
      this._bindings.method_get_base_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
  }
  set_mesh(_mesh) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mesh,
      this._owner,
      _mesh
    );
  }
  get_mesh() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mesh,
      this._owner,
			Variant.INT,
      
    );
  }
  set_image_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_image_size,
      this._owner,
      _size
    );
  }
  get_image_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_image_size,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_base_texture(_texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_base_texture,
      this._owner,
      _texture
    );
  }
  get_base_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_base_texture,
      this._owner,
			Variant.INT,
      
    );
  }
}