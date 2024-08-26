import * as internal from '__internal__';
import { Rect2 } from 'src/js_godot/variant/rect2'
import { SpriteBase3D } from 'src/js_godot/classessprite_base3d'
import { Vector2i } from 'src/js_godot/variant/vector2i'
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

  constructor(godot_object) {
    if (!godot_object) {
      super("Sprite3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
  set_region_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_region_enabled,
      this._owner,
      _enabled
    );
  }
  is_region_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_region_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_region_rect(_rect) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_region_rect,
      this._owner,
      _rect
    );
  }
  get_region_rect() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_region_rect,
      this._owner,
			Variant.Type.RECT2
    ,
      
    );
  }
  set_frame(_frame) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_frame,
      this._owner,
      _frame
    );
  }
  get_frame() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_frame,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_frame_coords(_coords) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_frame_coords,
      this._owner,
      _coords
    );
  }
  get_frame_coords() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_frame_coords,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      
    );
  }
  set_vframes(_vframes) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vframes,
      this._owner,
      _vframes
    );
  }
  get_vframes() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vframes,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_hframes(_hframes) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_hframes,
      this._owner,
      _hframes
    );
  }
  get_hframes() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_hframes,
      this._owner,
			Variant.Type.INT,
      
    );
  }
}