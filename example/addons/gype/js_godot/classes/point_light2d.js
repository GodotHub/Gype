import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Vector2 } from '@js_godot/variant/vector2'
import { Light2D } from '@js_godot/classes/light2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_texture;
  method_get_texture;
  method_set_texture_offset;
  method_get_texture_offset;
  method_set_texture_scale;
  method_get_texture_scale;
}
export class PointLight2D extends Light2D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PointLight2D");
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
      let classname = new StringName("PointLight2D");
      let methodname = new StringName("set_texture");
      this._bindings.method_set_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("PointLight2D");
      let methodname = new StringName("get_texture");
      this._bindings.method_get_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("PointLight2D");
      let methodname = new StringName("set_texture_offset");
      this._bindings.method_set_texture_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("PointLight2D");
      let methodname = new StringName("get_texture_offset");
      this._bindings.method_get_texture_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("PointLight2D");
      let methodname = new StringName("set_texture_scale");
      this._bindings.method_set_texture_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("PointLight2D");
      let methodname = new StringName("get_texture_scale");
      this._bindings.method_get_texture_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  set_texture(_texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture,
      this._owner,
      _texture
    );
    
  }
  get_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_texture_offset(_texture_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_offset,
      this._owner,
      _texture_offset
    );
    
  }
  get_texture_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_texture_scale(_texture_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_scale,
      this._owner,
      _texture_scale
    );
    
  }
  get_texture_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_scale,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  
get texture () {
  return this.get_texture();
}
set texture (new_value) {
  this.set_texture(new_value);
}
get offset () {
  return this.get_texture_offset();
}
set offset (new_value) {
  this.set_texture_offset(new_value);
}
get texture_scale () {
  return this.get_texture_scale();
}
set texture_scale (new_value) {
  this.set_texture_scale(new_value);
}
get height () {
  return this.get_height();
}
set height (new_value) {
  this.set_height(new_value);
}


  static {
    this._init_bindings();
  }
}