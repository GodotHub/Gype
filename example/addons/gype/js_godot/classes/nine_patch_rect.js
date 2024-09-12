import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Control } from '@js_godot/classes/control'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_texture;
  method_get_texture;
  method_set_patch_margin;
  method_get_patch_margin;
  method_set_region_rect;
  method_get_region_rect;
  method_set_draw_center;
  method_is_draw_center_enabled;
  method_set_h_axis_stretch_mode;
  method_get_h_axis_stretch_mode;
  method_set_v_axis_stretch_mode;
  method_get_v_axis_stretch_mode;
}
export class NinePatchRect extends Control{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("NinePatchRect");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_texture() {
    if (!this.#_bindings.method_set_texture) {
      let classname = new StringName("NinePatchRect");
      let methodname = new StringName("set_texture");
      this.#_bindings.method_set_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_get_texture() {
    if (!this.#_bindings.method_get_texture) {
      let classname = new StringName("NinePatchRect");
      let methodname = new StringName("get_texture");
      this.#_bindings.method_get_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_set_patch_margin() {
    if (!this.#_bindings.method_set_patch_margin) {
      let classname = new StringName("NinePatchRect");
      let methodname = new StringName("set_patch_margin");
      this.#_bindings.method_set_patch_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        437707142
      );
    }
  }
  static init_method_get_patch_margin() {
    if (!this.#_bindings.method_get_patch_margin) {
      let classname = new StringName("NinePatchRect");
      let methodname = new StringName("get_patch_margin");
      this.#_bindings.method_get_patch_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1983885014
      );
    }
  }
  static init_method_set_region_rect() {
    if (!this.#_bindings.method_set_region_rect) {
      let classname = new StringName("NinePatchRect");
      let methodname = new StringName("set_region_rect");
      this.#_bindings.method_set_region_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2046264180
      );
    }
  }
  static init_method_get_region_rect() {
    if (!this.#_bindings.method_get_region_rect) {
      let classname = new StringName("NinePatchRect");
      let methodname = new StringName("get_region_rect");
      this.#_bindings.method_get_region_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1639390495
      );
    }
  }
  static init_method_set_draw_center() {
    if (!this.#_bindings.method_set_draw_center) {
      let classname = new StringName("NinePatchRect");
      let methodname = new StringName("set_draw_center");
      this.#_bindings.method_set_draw_center = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_draw_center_enabled() {
    if (!this.#_bindings.method_is_draw_center_enabled) {
      let classname = new StringName("NinePatchRect");
      let methodname = new StringName("is_draw_center_enabled");
      this.#_bindings.method_is_draw_center_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_h_axis_stretch_mode() {
    if (!this.#_bindings.method_set_h_axis_stretch_mode) {
      let classname = new StringName("NinePatchRect");
      let methodname = new StringName("set_h_axis_stretch_mode");
      this.#_bindings.method_set_h_axis_stretch_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3219608417
      );
    }
  }
  static init_method_get_h_axis_stretch_mode() {
    if (!this.#_bindings.method_get_h_axis_stretch_mode) {
      let classname = new StringName("NinePatchRect");
      let methodname = new StringName("get_h_axis_stretch_mode");
      this.#_bindings.method_get_h_axis_stretch_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3317113799
      );
    }
  }
  static init_method_set_v_axis_stretch_mode() {
    if (!this.#_bindings.method_set_v_axis_stretch_mode) {
      let classname = new StringName("NinePatchRect");
      let methodname = new StringName("set_v_axis_stretch_mode");
      this.#_bindings.method_set_v_axis_stretch_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3219608417
      );
    }
  }
  static init_method_get_v_axis_stretch_mode() {
    if (!this.#_bindings.method_get_v_axis_stretch_mode) {
      let classname = new StringName("NinePatchRect");
      let methodname = new StringName("get_v_axis_stretch_mode");
      this.#_bindings.method_get_v_axis_stretch_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3317113799
      );
    }
  }

  
  
  set_texture(_texture) {
    NinePatchRect.init_method_set_texture();
    return _call_native_mb_no_ret(
      NinePatchRect.#_bindings.method_set_texture,
      this._owner,
      _texture
    );
    
  }
  get_texture() {
    NinePatchRect.init_method_get_texture();
    return _call_native_mb_ret(
      NinePatchRect.#_bindings.method_get_texture,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_patch_margin(_margin, _value) {
    NinePatchRect.init_method_set_patch_margin();
    return _call_native_mb_no_ret(
      NinePatchRect.#_bindings.method_set_patch_margin,
      this._owner,
      _margin, _value
    );
    
  }
  get_patch_margin(_margin) {
    NinePatchRect.init_method_get_patch_margin();
    return _call_native_mb_ret(
      NinePatchRect.#_bindings.method_get_patch_margin,
      this._owner,
			Variant.Type.INT,
    
      _margin
    );
    
  }
  set_region_rect(_rect) {
    NinePatchRect.init_method_set_region_rect();
    return _call_native_mb_no_ret(
      NinePatchRect.#_bindings.method_set_region_rect,
      this._owner,
      _rect
    );
    
  }
  get_region_rect() {
    NinePatchRect.init_method_get_region_rect();
    return _call_native_mb_ret(
      NinePatchRect.#_bindings.method_get_region_rect,
      this._owner,
			Variant.Type.RECT2,
    
      
    );
    
  }
  set_draw_center(_draw_center) {
    NinePatchRect.init_method_set_draw_center();
    return _call_native_mb_no_ret(
      NinePatchRect.#_bindings.method_set_draw_center,
      this._owner,
      _draw_center
    );
    
  }
  is_draw_center_enabled() {
    NinePatchRect.init_method_is_draw_center_enabled();
    return _call_native_mb_ret(
      NinePatchRect.#_bindings.method_is_draw_center_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_h_axis_stretch_mode(_mode) {
    NinePatchRect.init_method_set_h_axis_stretch_mode();
    return _call_native_mb_no_ret(
      NinePatchRect.#_bindings.method_set_h_axis_stretch_mode,
      this._owner,
      _mode
    );
    
  }
  get_h_axis_stretch_mode() {
    NinePatchRect.init_method_get_h_axis_stretch_mode();
    return _call_native_mb_ret(
      NinePatchRect.#_bindings.method_get_h_axis_stretch_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_v_axis_stretch_mode(_mode) {
    NinePatchRect.init_method_set_v_axis_stretch_mode();
    return _call_native_mb_no_ret(
      NinePatchRect.#_bindings.method_set_v_axis_stretch_mode,
      this._owner,
      _mode
    );
    
  }
  get_v_axis_stretch_mode() {
    NinePatchRect.init_method_get_v_axis_stretch_mode();
    return _call_native_mb_ret(
      NinePatchRect.#_bindings.method_get_v_axis_stretch_mode,
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
get draw_center () {
  return this.is_draw_center_enabled();
}
set draw_center (new_value) {
  this.set_draw_center(new_value);
}
get region_rect () {
  return this.get_region_rect();
}
set region_rect (new_value) {
  this.set_region_rect(new_value);
}
get patch_margin_left () {
  return this.get_patch_margin();
}
set patch_margin_left (new_value) {
  this.set_patch_margin(new_value);
}
get patch_margin_top () {
  return this.get_patch_margin();
}
set patch_margin_top (new_value) {
  this.set_patch_margin(new_value);
}
get patch_margin_right () {
  return this.get_patch_margin();
}
set patch_margin_right (new_value) {
  this.set_patch_margin(new_value);
}
get patch_margin_bottom () {
  return this.get_patch_margin();
}
set patch_margin_bottom (new_value) {
  this.set_patch_margin(new_value);
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

  static AxisStretchMode = {
    AXIS_STRETCH_MODE_STRETCH: 0,
    AXIS_STRETCH_MODE_TILE: 1,
    AXIS_STRETCH_MODE_TILE_FIT: 2,
  }
}