import * as internal from '__internal__';
import { Vector2i } from '@js_godot/variant/vector2i'
import { Variant } from '@js_godot/variant/variant'
import { SpriteBase3D } from '@js_godot/classes/sprite_base3d'
import { StringName } from '@js_godot/variant/string_name'
import { Rect2 } from '@js_godot/variant/rect2'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_texture;
  method_get_texture;
  method_set_region_enabled;
  method_is_region_enabled;
  method_set_region_rect;
  method_get_region_rect;
  method_set_frame;
  method_get_frame;
  method_set_frame_coords;
  method_get_frame_coords;
  method_set_vframes;
  method_get_vframes;
  method_set_hframes;
  method_get_hframes;
}
export class Sprite3D extends SpriteBase3D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Sprite3D");
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
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("set_texture");
      this._bindings.method_set_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("get_texture");
      this._bindings.method_get_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("set_region_enabled");
      this._bindings.method_set_region_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("is_region_enabled");
      this._bindings.method_is_region_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("set_region_rect");
      this._bindings.method_set_region_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2046264180
      );
    }
    {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("get_region_rect");
      this._bindings.method_get_region_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1639390495
      );
    }
    {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("set_frame");
      this._bindings.method_set_frame = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("get_frame");
      this._bindings.method_get_frame = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("set_frame_coords");
      this._bindings.method_set_frame_coords = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1130785943
      );
    }
    {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("get_frame_coords");
      this._bindings.method_get_frame_coords = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3690982128
      );
    }
    {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("set_vframes");
      this._bindings.method_set_vframes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("get_vframes");
      this._bindings.method_get_vframes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("set_hframes");
      this._bindings.method_set_hframes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("get_hframes");
      this._bindings.method_get_hframes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
  }
  
  set_texture(_texture) {
    return _call_native_mb_no_ret(
      Sprite3D._bindings.method_set_texture,
      this._owner,
      _texture
    );
    
  }
  get_texture() {
    return _call_native_mb_ret(
      Sprite3D._bindings.method_get_texture,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_region_enabled(_enabled) {
    return _call_native_mb_no_ret(
      Sprite3D._bindings.method_set_region_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_region_enabled() {
    return _call_native_mb_ret(
      Sprite3D._bindings.method_is_region_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_region_rect(_rect) {
    return _call_native_mb_no_ret(
      Sprite3D._bindings.method_set_region_rect,
      this._owner,
      _rect
    );
    
  }
  get_region_rect() {
    return _call_native_mb_ret(
      Sprite3D._bindings.method_get_region_rect,
      this._owner,
			Variant.Type.RECT2,
    
      
    );
    
  }
  set_frame(_frame) {
    return _call_native_mb_no_ret(
      Sprite3D._bindings.method_set_frame,
      this._owner,
      _frame
    );
    
  }
  get_frame() {
    return _call_native_mb_ret(
      Sprite3D._bindings.method_get_frame,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_frame_coords(_coords) {
    return _call_native_mb_no_ret(
      Sprite3D._bindings.method_set_frame_coords,
      this._owner,
      _coords
    );
    
  }
  get_frame_coords() {
    return _call_native_mb_ret(
      Sprite3D._bindings.method_get_frame_coords,
      this._owner,
			Variant.Type.VECTOR2I,
    
      
    );
    
  }
  set_vframes(_vframes) {
    return _call_native_mb_no_ret(
      Sprite3D._bindings.method_set_vframes,
      this._owner,
      _vframes
    );
    
  }
  get_vframes() {
    return _call_native_mb_ret(
      Sprite3D._bindings.method_get_vframes,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_hframes(_hframes) {
    return _call_native_mb_no_ret(
      Sprite3D._bindings.method_set_hframes,
      this._owner,
      _hframes
    );
    
  }
  get_hframes() {
    return _call_native_mb_ret(
      Sprite3D._bindings.method_get_hframes,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  
get texture () {
  return this.get_texture();
}
set texture (new_value) {
  this.set_texture(new_value);
}
get hframes () {
  return this.get_hframes();
}
set hframes (new_value) {
  this.set_hframes(new_value);
}
get vframes () {
  return this.get_vframes();
}
set vframes (new_value) {
  this.set_vframes(new_value);
}
get frame () {
  return this.get_frame();
}
set frame (new_value) {
  this.set_frame(new_value);
}
get frame_coords () {
  return this.get_frame_coords();
}
set frame_coords (new_value) {
  this.set_frame_coords(new_value);
}
get region_enabled () {
  return this.is_region_enabled();
}
set region_enabled (new_value) {
  this.set_region_enabled(new_value);
}
get region_rect () {
  return this.get_region_rect();
}
set region_rect (new_value) {
  this.set_region_rect(new_value);
}


  static {
    this._init_bindings();
  }
}