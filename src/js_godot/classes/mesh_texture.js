import * as internal from '__internal__';
import { Texture2D } from '@js_godot/classes/texture2d'
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Vector2 } from '@js_godot/variant/vector2'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

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
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("MeshTexture");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
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
      MeshTexture._bindings.method_set_mesh,
      this._owner,
      _mesh
    );
    
  }
  get_mesh() {
    return _call_native_mb_ret(
      MeshTexture._bindings.method_get_mesh,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_image_size(_size) {
    return _call_native_mb_no_ret(
      MeshTexture._bindings.method_set_image_size,
      this._owner,
      _size
    );
    
  }
  get_image_size() {
    return _call_native_mb_ret(
      MeshTexture._bindings.method_get_image_size,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_base_texture(_texture) {
    return _call_native_mb_no_ret(
      MeshTexture._bindings.method_set_base_texture,
      this._owner,
      _texture
    );
    
  }
  get_base_texture() {
    return _call_native_mb_ret(
      MeshTexture._bindings.method_get_base_texture,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get mesh () {
  return this.get_mesh();
}
set mesh (new_value) {
  this.set_mesh(new_value);
}
get base_texture () {
  return this.get_base_texture();
}
set base_texture (new_value) {
  this.set_base_texture(new_value);
}
get image_size () {
  return this.get_image_size();
}
set image_size (new_value) {
  this.set_image_size(new_value);
}


  static {
    this._init_bindings();
  }
}