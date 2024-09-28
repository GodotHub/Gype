import * as internal from '__internal__';
import { SpriteBase3D } from '@js_godot/classes/sprite_base3d'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

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
@GodotClass
export class Sprite3D extends SpriteBase3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Sprite3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_texture() {
    if (!this._bindings.method_set_texture) {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("set_texture");
      this._bindings.method_set_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_get_texture() {
    if (!this._bindings.method_get_texture) {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("get_texture");
      this._bindings.method_get_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_set_region_enabled() {
    if (!this._bindings.method_set_region_enabled) {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("set_region_enabled");
      this._bindings.method_set_region_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_region_enabled() {
    if (!this._bindings.method_is_region_enabled) {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("is_region_enabled");
      this._bindings.method_is_region_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_region_rect() {
    if (!this._bindings.method_set_region_rect) {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("set_region_rect");
      this._bindings.method_set_region_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2046264180
      );
    }
  }
  static init_method_get_region_rect() {
    if (!this._bindings.method_get_region_rect) {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("get_region_rect");
      this._bindings.method_get_region_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1639390495
      );
    }
  }
  static init_method_set_frame() {
    if (!this._bindings.method_set_frame) {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("set_frame");
      this._bindings.method_set_frame = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_frame() {
    if (!this._bindings.method_get_frame) {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("get_frame");
      this._bindings.method_get_frame = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_frame_coords() {
    if (!this._bindings.method_set_frame_coords) {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("set_frame_coords");
      this._bindings.method_set_frame_coords = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1130785943
      );
    }
  }
  static init_method_get_frame_coords() {
    if (!this._bindings.method_get_frame_coords) {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("get_frame_coords");
      this._bindings.method_get_frame_coords = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3690982128
      );
    }
  }
  static init_method_set_vframes() {
    if (!this._bindings.method_set_vframes) {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("set_vframes");
      this._bindings.method_set_vframes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_vframes() {
    if (!this._bindings.method_get_vframes) {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("get_vframes");
      this._bindings.method_get_vframes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_hframes() {
    if (!this._bindings.method_set_hframes) {
      let classname = new StringName("Sprite3D");
      let methodname = new StringName("set_hframes");
      this._bindings.method_set_hframes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_hframes() {
    if (!this._bindings.method_get_hframes) {
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
    Sprite3D.init_method_set_texture();
    return _call_native_mb_no_ret(
      Sprite3D._bindings.method_set_texture,
      this._owner,
      _texture
    );
    
  }
  get_texture() {
    Sprite3D.init_method_get_texture();
    return _call_native_mb_ret(
      Sprite3D._bindings.method_get_texture,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_region_enabled(_enabled) {
    Sprite3D.init_method_set_region_enabled();
    return _call_native_mb_no_ret(
      Sprite3D._bindings.method_set_region_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_region_enabled() {
    Sprite3D.init_method_is_region_enabled();
    return _call_native_mb_ret(
      Sprite3D._bindings.method_is_region_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_region_rect(_rect) {
    Sprite3D.init_method_set_region_rect();
    return _call_native_mb_no_ret(
      Sprite3D._bindings.method_set_region_rect,
      this._owner,
      _rect
    );
    
  }
  get_region_rect() {
    Sprite3D.init_method_get_region_rect();
    return _call_native_mb_ret(
      Sprite3D._bindings.method_get_region_rect,
      this._owner,
			Variant.Type.RECT2,
    
      
    );
    
  }
  set_frame(_frame) {
    Sprite3D.init_method_set_frame();
    return _call_native_mb_no_ret(
      Sprite3D._bindings.method_set_frame,
      this._owner,
      _frame
    );
    
  }
  get_frame() {
    Sprite3D.init_method_get_frame();
    return _call_native_mb_ret(
      Sprite3D._bindings.method_get_frame,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_frame_coords(_coords) {
    Sprite3D.init_method_set_frame_coords();
    return _call_native_mb_no_ret(
      Sprite3D._bindings.method_set_frame_coords,
      this._owner,
      _coords
    );
    
  }
  get_frame_coords() {
    Sprite3D.init_method_get_frame_coords();
    return _call_native_mb_ret(
      Sprite3D._bindings.method_get_frame_coords,
      this._owner,
			Variant.Type.VECTOR2I,
    
      
    );
    
  }
  set_vframes(_vframes) {
    Sprite3D.init_method_set_vframes();
    return _call_native_mb_no_ret(
      Sprite3D._bindings.method_set_vframes,
      this._owner,
      _vframes
    );
    
  }
  get_vframes() {
    Sprite3D.init_method_get_vframes();
    return _call_native_mb_ret(
      Sprite3D._bindings.method_get_vframes,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_hframes(_hframes) {
    Sprite3D.init_method_set_hframes();
    return _call_native_mb_no_ret(
      Sprite3D._bindings.method_set_hframes,
      this._owner,
      _hframes
    );
    
  }
  get_hframes() {
    Sprite3D.init_method_get_hframes();
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

}