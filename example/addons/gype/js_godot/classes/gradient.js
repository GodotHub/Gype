import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { Resource } from '@js_godot/classes/resource'
import { StringName } from '@js_godot/variant/string_name'
import { Color } from '@js_godot/variant/color'
import { PackedFloat32Array } from '@js_godot/variant/packed_float32_array'
import { PackedColorArray } from '@js_godot/variant/packed_color_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_add_point;
  method_remove_point;
  method_set_offset;
  method_get_offset;
  method_reverse;
  method_set_color;
  method_get_color;
  method_sample;
  method_get_point_count;
  method_set_offsets;
  method_get_offsets;
  method_set_colors;
  method_get_colors;
  method_set_interpolation_mode;
  method_get_interpolation_mode;
  method_set_interpolation_color_space;
  method_get_interpolation_color_space;
}
export class Gradient extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Gradient");
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
      let classname = new StringName("Gradient");
      let methodname = new StringName("add_point");
      this._bindings.method_add_point = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3629403827
      );
    }
    {
      let classname = new StringName("Gradient");
      let methodname = new StringName("remove_point");
      this._bindings.method_remove_point = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Gradient");
      let methodname = new StringName("set_offset");
      this._bindings.method_set_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1602489585
      );
    }
    {
      let classname = new StringName("Gradient");
      let methodname = new StringName("get_offset");
      this._bindings.method_get_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4025615559
      );
    }
    {
      let classname = new StringName("Gradient");
      let methodname = new StringName("reverse");
      this._bindings.method_reverse = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Gradient");
      let methodname = new StringName("set_color");
      this._bindings.method_set_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2878471219
      );
    }
    {
      let classname = new StringName("Gradient");
      let methodname = new StringName("get_color");
      this._bindings.method_get_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2624840992
      );
    }
    {
      let classname = new StringName("Gradient");
      let methodname = new StringName("sample");
      this._bindings.method_sample = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1250405064
      );
    }
    {
      let classname = new StringName("Gradient");
      let methodname = new StringName("get_point_count");
      this._bindings.method_get_point_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Gradient");
      let methodname = new StringName("set_offsets");
      this._bindings.method_set_offsets = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2899603908
      );
    }
    {
      let classname = new StringName("Gradient");
      let methodname = new StringName("get_offsets");
      this._bindings.method_get_offsets = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        675695659
      );
    }
    {
      let classname = new StringName("Gradient");
      let methodname = new StringName("set_colors");
      this._bindings.method_set_colors = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3546319833
      );
    }
    {
      let classname = new StringName("Gradient");
      let methodname = new StringName("get_colors");
      this._bindings.method_get_colors = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1392750486
      );
    }
    {
      let classname = new StringName("Gradient");
      let methodname = new StringName("set_interpolation_mode");
      this._bindings.method_set_interpolation_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1971444490
      );
    }
    {
      let classname = new StringName("Gradient");
      let methodname = new StringName("get_interpolation_mode");
      this._bindings.method_get_interpolation_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3674172981
      );
    }
    {
      let classname = new StringName("Gradient");
      let methodname = new StringName("set_interpolation_color_space");
      this._bindings.method_set_interpolation_color_space = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3685995981
      );
    }
    {
      let classname = new StringName("Gradient");
      let methodname = new StringName("get_interpolation_color_space");
      this._bindings.method_get_interpolation_color_space = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1538296000
      );
    }
  }
  add_point(_offset, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_point,
      this._owner,
      _offset, _color
    );
    
  }
  remove_point(_point) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_point,
      this._owner,
      _point
    );
    
  }
  set_offset(_point, _offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_offset,
      this._owner,
      _point, _offset
    );
    
  }
  get_offset(_point) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_offset,
      this._owner,
			Variant.Type.FLOAT,
      _point
    );
    
  }
  reverse() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_reverse,
      this._owner,
      
    );
    
  }
  set_color(_point, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_color,
      this._owner,
      _point, _color
    );
    
  }
  get_color(_point) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_color,
      this._owner,
			Variant.Type.COLOR,
    
      _point
    );
    
  }
  sample(_offset) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_sample,
      this._owner,
			Variant.Type.COLOR,
    
      _offset
    );
    
  }
  get_point_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_point_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_offsets(_offsets) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_offsets,
      this._owner,
      _offsets
    );
    
  }
  get_offsets() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_offsets,
      this._owner,
			Variant.Type.PACKED_FLOAT32_ARRAY,
    
      
    );
    
  }
  set_colors(_colors) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_colors,
      this._owner,
      _colors
    );
    
  }
  get_colors() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_colors,
      this._owner,
			Variant.Type.PACKED_COLOR_ARRAY,
    
      
    );
    
  }
  set_interpolation_mode(_interpolation_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_interpolation_mode,
      this._owner,
      _interpolation_mode
    );
    
  }
  get_interpolation_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_interpolation_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_interpolation_color_space(_interpolation_color_space) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_interpolation_color_space,
      this._owner,
      _interpolation_color_space
    );
    
  }
  get_interpolation_color_space() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_interpolation_color_space,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get interpolation_mode () {
  return this.get_interpolation_mode();
}
set interpolation_mode (new_value) {
  this.set_interpolation_mode(new_value);
}
get interpolation_color_space () {
  return this.get_interpolation_color_space();
}
set interpolation_color_space (new_value) {
  this.set_interpolation_color_space(new_value);
}
get offsets () {
  return this.get_offsets();
}
set offsets (new_value) {
  this.set_offsets(new_value);
}
get colors () {
  return this.get_colors();
}
set colors (new_value) {
  this.set_colors(new_value);
}

  static InterpolationMode = {
    GRADIENT_INTERPOLATE_LINEAR: 0,
    GRADIENT_INTERPOLATE_CONSTANT: 1,
    GRADIENT_INTERPOLATE_CUBIC: 2,
  }
  static ColorSpace = {
    GRADIENT_COLOR_SPACE_SRGB: 0,
    GRADIENT_COLOR_SPACE_LINEAR_SRGB: 1,
    GRADIENT_COLOR_SPACE_OKLAB: 2,
  }

  static {
    this._init_bindings();
  }
}