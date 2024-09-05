import * as internal from '__internal__';
import { Color } from '@js_godot/variant/color'
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { StyleBox } from '@js_godot/classes/style_box'
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
  method_set_texture_margin;
  method_set_texture_margin_all;
  method_get_texture_margin;
  method_set_expand_margin;
  method_set_expand_margin_all;
  method_get_expand_margin;
  method_set_region_rect;
  method_get_region_rect;
  method_set_draw_center;
  method_is_draw_center_enabled;
  method_set_modulate;
  method_get_modulate;
  method_set_h_axis_stretch_mode;
  method_get_h_axis_stretch_mode;
  method_set_v_axis_stretch_mode;
  method_get_v_axis_stretch_mode;
}
export class StyleBoxTexture extends StyleBox{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("StyleBoxTexture");
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
      let classname = new StringName("StyleBoxTexture");
      let methodname = new StringName("set_texture");
      this._bindings.method_set_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("StyleBoxTexture");
      let methodname = new StringName("get_texture");
      this._bindings.method_get_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("StyleBoxTexture");
      let methodname = new StringName("set_texture_margin");
      this._bindings.method_set_texture_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4290182280
      );
    }
    {
      let classname = new StringName("StyleBoxTexture");
      let methodname = new StringName("set_texture_margin_all");
      this._bindings.method_set_texture_margin_all = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("StyleBoxTexture");
      let methodname = new StringName("get_texture_margin");
      this._bindings.method_get_texture_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2869120046
      );
    }
    {
      let classname = new StringName("StyleBoxTexture");
      let methodname = new StringName("set_expand_margin");
      this._bindings.method_set_expand_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4290182280
      );
    }
    {
      let classname = new StringName("StyleBoxTexture");
      let methodname = new StringName("set_expand_margin_all");
      this._bindings.method_set_expand_margin_all = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("StyleBoxTexture");
      let methodname = new StringName("get_expand_margin");
      this._bindings.method_get_expand_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2869120046
      );
    }
    {
      let classname = new StringName("StyleBoxTexture");
      let methodname = new StringName("set_region_rect");
      this._bindings.method_set_region_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2046264180
      );
    }
    {
      let classname = new StringName("StyleBoxTexture");
      let methodname = new StringName("get_region_rect");
      this._bindings.method_get_region_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1639390495
      );
    }
    {
      let classname = new StringName("StyleBoxTexture");
      let methodname = new StringName("set_draw_center");
      this._bindings.method_set_draw_center = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("StyleBoxTexture");
      let methodname = new StringName("is_draw_center_enabled");
      this._bindings.method_is_draw_center_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("StyleBoxTexture");
      let methodname = new StringName("set_modulate");
      this._bindings.method_set_modulate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("StyleBoxTexture");
      let methodname = new StringName("get_modulate");
      this._bindings.method_get_modulate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("StyleBoxTexture");
      let methodname = new StringName("set_h_axis_stretch_mode");
      this._bindings.method_set_h_axis_stretch_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2965538783
      );
    }
    {
      let classname = new StringName("StyleBoxTexture");
      let methodname = new StringName("get_h_axis_stretch_mode");
      this._bindings.method_get_h_axis_stretch_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3807744063
      );
    }
    {
      let classname = new StringName("StyleBoxTexture");
      let methodname = new StringName("set_v_axis_stretch_mode");
      this._bindings.method_set_v_axis_stretch_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2965538783
      );
    }
    {
      let classname = new StringName("StyleBoxTexture");
      let methodname = new StringName("get_v_axis_stretch_mode");
      this._bindings.method_get_v_axis_stretch_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3807744063
      );
    }
  }
  
  set_texture(_texture) {
    return _call_native_mb_no_ret(
      StyleBoxTexture._bindings.method_set_texture,
      this._owner,
      _texture
    );
    
  }
  get_texture() {
    return _call_native_mb_ret(
      StyleBoxTexture._bindings.method_get_texture,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_texture_margin(_margin, _size) {
    return _call_native_mb_no_ret(
      StyleBoxTexture._bindings.method_set_texture_margin,
      this._owner,
      _margin, _size
    );
    
  }
  set_texture_margin_all(_size) {
    return _call_native_mb_no_ret(
      StyleBoxTexture._bindings.method_set_texture_margin_all,
      this._owner,
      _size
    );
    
  }
  get_texture_margin(_margin) {
    return _call_native_mb_ret(
      StyleBoxTexture._bindings.method_get_texture_margin,
      this._owner,
			Variant.Type.FLOAT,
      _margin
    );
    
  }
  set_expand_margin(_margin, _size) {
    return _call_native_mb_no_ret(
      StyleBoxTexture._bindings.method_set_expand_margin,
      this._owner,
      _margin, _size
    );
    
  }
  set_expand_margin_all(_size) {
    return _call_native_mb_no_ret(
      StyleBoxTexture._bindings.method_set_expand_margin_all,
      this._owner,
      _size
    );
    
  }
  get_expand_margin(_margin) {
    return _call_native_mb_ret(
      StyleBoxTexture._bindings.method_get_expand_margin,
      this._owner,
			Variant.Type.FLOAT,
      _margin
    );
    
  }
  set_region_rect(_region) {
    return _call_native_mb_no_ret(
      StyleBoxTexture._bindings.method_set_region_rect,
      this._owner,
      _region
    );
    
  }
  get_region_rect() {
    return _call_native_mb_ret(
      StyleBoxTexture._bindings.method_get_region_rect,
      this._owner,
			Variant.Type.RECT2,
    
      
    );
    
  }
  set_draw_center(_enable) {
    return _call_native_mb_no_ret(
      StyleBoxTexture._bindings.method_set_draw_center,
      this._owner,
      _enable
    );
    
  }
  is_draw_center_enabled() {
    return _call_native_mb_ret(
      StyleBoxTexture._bindings.method_is_draw_center_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_modulate(_color) {
    return _call_native_mb_no_ret(
      StyleBoxTexture._bindings.method_set_modulate,
      this._owner,
      _color
    );
    
  }
  get_modulate() {
    return _call_native_mb_ret(
      StyleBoxTexture._bindings.method_get_modulate,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_h_axis_stretch_mode(_mode) {
    return _call_native_mb_no_ret(
      StyleBoxTexture._bindings.method_set_h_axis_stretch_mode,
      this._owner,
      _mode
    );
    
  }
  get_h_axis_stretch_mode() {
    return _call_native_mb_ret(
      StyleBoxTexture._bindings.method_get_h_axis_stretch_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_v_axis_stretch_mode(_mode) {
    return _call_native_mb_no_ret(
      StyleBoxTexture._bindings.method_set_v_axis_stretch_mode,
      this._owner,
      _mode
    );
    
  }
  get_v_axis_stretch_mode() {
    return _call_native_mb_ret(
      StyleBoxTexture._bindings.method_get_v_axis_stretch_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get texture () {
  return this.get_texture();
}
set texture (new_value) {
  this.set_texture(new_value);
}
get texture_margin_left () {
  return this.get_texture_margin();
}
set texture_margin_left (new_value) {
  this.set_texture_margin(new_value);
}
get texture_margin_top () {
  return this.get_texture_margin();
}
set texture_margin_top (new_value) {
  this.set_texture_margin(new_value);
}
get texture_margin_right () {
  return this.get_texture_margin();
}
set texture_margin_right (new_value) {
  this.set_texture_margin(new_value);
}
get texture_margin_bottom () {
  return this.get_texture_margin();
}
set texture_margin_bottom (new_value) {
  this.set_texture_margin(new_value);
}
get expand_margin_left () {
  return this.get_expand_margin();
}
set expand_margin_left (new_value) {
  this.set_expand_margin(new_value);
}
get expand_margin_top () {
  return this.get_expand_margin();
}
set expand_margin_top (new_value) {
  this.set_expand_margin(new_value);
}
get expand_margin_right () {
  return this.get_expand_margin();
}
set expand_margin_right (new_value) {
  this.set_expand_margin(new_value);
}
get expand_margin_bottom () {
  return this.get_expand_margin();
}
set expand_margin_bottom (new_value) {
  this.set_expand_margin(new_value);
}
get axis_stretch_horizontal () {
  return this.get_h_axis_stretch_mode();
}
set axis_stretch_horizontal (new_value) {
  this.set_h_axis_stretch_mode(new_value);
}
get axis_stretch_vertical () {
  return this.get_v_axis_stretch_mode();
}
set axis_stretch_vertical (new_value) {
  this.set_v_axis_stretch_mode(new_value);
}
get region_rect () {
  return this.get_region_rect();
}
set region_rect (new_value) {
  this.set_region_rect(new_value);
}
get modulate_color () {
  return this.get_modulate();
}
set modulate_color (new_value) {
  this.set_modulate(new_value);
}
get draw_center () {
  return this.is_draw_center_enabled();
}
set draw_center (new_value) {
  this.set_draw_center(new_value);
}

  static AxisStretchMode = {
    AXIS_STRETCH_MODE_STRETCH: 0,
    AXIS_STRETCH_MODE_TILE: 1,
    AXIS_STRETCH_MODE_TILE_FIT: 2,
  }

  static {
    this._init_bindings();
  }
}