import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Texture2D } from '@js_godot/classes/texture2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_diffuse_texture;
  method_get_diffuse_texture;
  method_set_normal_texture;
  method_get_normal_texture;
  method_set_specular_texture;
  method_get_specular_texture;
  method_set_specular_color;
  method_get_specular_color;
  method_set_specular_shininess;
  method_get_specular_shininess;
  method_set_texture_filter;
  method_get_texture_filter;
  method_set_texture_repeat;
  method_get_texture_repeat;
}
export class CanvasTexture extends Texture2D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("CanvasTexture");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_diffuse_texture() {
    if (!this.#_bindings.method_set_diffuse_texture) {
      let classname = new StringName("CanvasTexture");
      let methodname = new StringName("set_diffuse_texture");
      this.#_bindings.method_set_diffuse_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_get_diffuse_texture() {
    if (!this.#_bindings.method_get_diffuse_texture) {
      let classname = new StringName("CanvasTexture");
      let methodname = new StringName("get_diffuse_texture");
      this.#_bindings.method_get_diffuse_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_set_normal_texture() {
    if (!this.#_bindings.method_set_normal_texture) {
      let classname = new StringName("CanvasTexture");
      let methodname = new StringName("set_normal_texture");
      this.#_bindings.method_set_normal_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_get_normal_texture() {
    if (!this.#_bindings.method_get_normal_texture) {
      let classname = new StringName("CanvasTexture");
      let methodname = new StringName("get_normal_texture");
      this.#_bindings.method_get_normal_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_set_specular_texture() {
    if (!this.#_bindings.method_set_specular_texture) {
      let classname = new StringName("CanvasTexture");
      let methodname = new StringName("set_specular_texture");
      this.#_bindings.method_set_specular_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_get_specular_texture() {
    if (!this.#_bindings.method_get_specular_texture) {
      let classname = new StringName("CanvasTexture");
      let methodname = new StringName("get_specular_texture");
      this.#_bindings.method_get_specular_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_set_specular_color() {
    if (!this.#_bindings.method_set_specular_color) {
      let classname = new StringName("CanvasTexture");
      let methodname = new StringName("set_specular_color");
      this.#_bindings.method_set_specular_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_specular_color() {
    if (!this.#_bindings.method_get_specular_color) {
      let classname = new StringName("CanvasTexture");
      let methodname = new StringName("get_specular_color");
      this.#_bindings.method_get_specular_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_specular_shininess() {
    if (!this.#_bindings.method_set_specular_shininess) {
      let classname = new StringName("CanvasTexture");
      let methodname = new StringName("set_specular_shininess");
      this.#_bindings.method_set_specular_shininess = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_specular_shininess() {
    if (!this.#_bindings.method_get_specular_shininess) {
      let classname = new StringName("CanvasTexture");
      let methodname = new StringName("get_specular_shininess");
      this.#_bindings.method_get_specular_shininess = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_texture_filter() {
    if (!this.#_bindings.method_set_texture_filter) {
      let classname = new StringName("CanvasTexture");
      let methodname = new StringName("set_texture_filter");
      this.#_bindings.method_set_texture_filter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1037999706
      );
    }
  }
  static init_method_get_texture_filter() {
    if (!this.#_bindings.method_get_texture_filter) {
      let classname = new StringName("CanvasTexture");
      let methodname = new StringName("get_texture_filter");
      this.#_bindings.method_get_texture_filter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        121960042
      );
    }
  }
  static init_method_set_texture_repeat() {
    if (!this.#_bindings.method_set_texture_repeat) {
      let classname = new StringName("CanvasTexture");
      let methodname = new StringName("set_texture_repeat");
      this.#_bindings.method_set_texture_repeat = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1716472974
      );
    }
  }
  static init_method_get_texture_repeat() {
    if (!this.#_bindings.method_get_texture_repeat) {
      let classname = new StringName("CanvasTexture");
      let methodname = new StringName("get_texture_repeat");
      this.#_bindings.method_get_texture_repeat = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2667158319
      );
    }
  }

  
  
  set_diffuse_texture(_texture) {
    CanvasTexture.init_method_set_diffuse_texture();
    return _call_native_mb_no_ret(
      CanvasTexture.#_bindings.method_set_diffuse_texture,
      this._owner,
      _texture
    );
    
  }
  get_diffuse_texture() {
    CanvasTexture.init_method_get_diffuse_texture();
    return _call_native_mb_ret(
      CanvasTexture.#_bindings.method_get_diffuse_texture,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_normal_texture(_texture) {
    CanvasTexture.init_method_set_normal_texture();
    return _call_native_mb_no_ret(
      CanvasTexture.#_bindings.method_set_normal_texture,
      this._owner,
      _texture
    );
    
  }
  get_normal_texture() {
    CanvasTexture.init_method_get_normal_texture();
    return _call_native_mb_ret(
      CanvasTexture.#_bindings.method_get_normal_texture,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_specular_texture(_texture) {
    CanvasTexture.init_method_set_specular_texture();
    return _call_native_mb_no_ret(
      CanvasTexture.#_bindings.method_set_specular_texture,
      this._owner,
      _texture
    );
    
  }
  get_specular_texture() {
    CanvasTexture.init_method_get_specular_texture();
    return _call_native_mb_ret(
      CanvasTexture.#_bindings.method_get_specular_texture,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_specular_color(_color) {
    CanvasTexture.init_method_set_specular_color();
    return _call_native_mb_no_ret(
      CanvasTexture.#_bindings.method_set_specular_color,
      this._owner,
      _color
    );
    
  }
  get_specular_color() {
    CanvasTexture.init_method_get_specular_color();
    return _call_native_mb_ret(
      CanvasTexture.#_bindings.method_get_specular_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_specular_shininess(_shininess) {
    CanvasTexture.init_method_set_specular_shininess();
    return _call_native_mb_no_ret(
      CanvasTexture.#_bindings.method_set_specular_shininess,
      this._owner,
      _shininess
    );
    
  }
  get_specular_shininess() {
    CanvasTexture.init_method_get_specular_shininess();
    return _call_native_mb_ret(
      CanvasTexture.#_bindings.method_get_specular_shininess,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_texture_filter(_filter) {
    CanvasTexture.init_method_set_texture_filter();
    return _call_native_mb_no_ret(
      CanvasTexture.#_bindings.method_set_texture_filter,
      this._owner,
      _filter
    );
    
  }
  get_texture_filter() {
    CanvasTexture.init_method_get_texture_filter();
    return _call_native_mb_ret(
      CanvasTexture.#_bindings.method_get_texture_filter,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_texture_repeat(_repeat) {
    CanvasTexture.init_method_set_texture_repeat();
    return _call_native_mb_no_ret(
      CanvasTexture.#_bindings.method_set_texture_repeat,
      this._owner,
      _repeat
    );
    
  }
  get_texture_repeat() {
    CanvasTexture.init_method_get_texture_repeat();
    return _call_native_mb_ret(
      CanvasTexture.#_bindings.method_get_texture_repeat,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get diffuse_texture () {
  return this.get_diffuse_texture();
}
set diffuse_texture (new_value) {
  this.set_diffuse_texture(new_value);
}
get normal_texture () {
  return this.get_normal_texture();
}
set normal_texture (new_value) {
  this.set_normal_texture(new_value);
}
get specular_texture () {
  return this.get_specular_texture();
}
set specular_texture (new_value) {
  this.set_specular_texture(new_value);
}
get specular_color () {
  return this.get_specular_color();
}
set specular_color (new_value) {
  this.set_specular_color(new_value);
}
get specular_shininess () {
  return this.get_specular_shininess();
}
set specular_shininess (new_value) {
  this.set_specular_shininess(new_value);
}
get texture_filter () {
  return this.get_texture_filter();
}
set texture_filter (new_value) {
  this.set_texture_filter(new_value);
}
get texture_repeat () {
  return this.get_texture_repeat();
}
set texture_repeat (new_value) {
  this.set_texture_repeat(new_value);
}

}