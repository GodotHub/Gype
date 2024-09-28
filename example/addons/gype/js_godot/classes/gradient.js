import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

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
@GodotClass
export class Gradient extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Gradient");
    } else {
      super(godot_object);
    }
  }
  static init_method_add_point() {
    if (!this._bindings.method_add_point) {
      let classname = new StringName("Gradient");
      let methodname = new StringName("add_point");
      this._bindings.method_add_point = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3629403827
      );
    }
  }
  static init_method_remove_point() {
    if (!this._bindings.method_remove_point) {
      let classname = new StringName("Gradient");
      let methodname = new StringName("remove_point");
      this._bindings.method_remove_point = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_offset() {
    if (!this._bindings.method_set_offset) {
      let classname = new StringName("Gradient");
      let methodname = new StringName("set_offset");
      this._bindings.method_set_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1602489585
      );
    }
  }
  static init_method_get_offset() {
    if (!this._bindings.method_get_offset) {
      let classname = new StringName("Gradient");
      let methodname = new StringName("get_offset");
      this._bindings.method_get_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4025615559
      );
    }
  }
  static init_method_reverse() {
    if (!this._bindings.method_reverse) {
      let classname = new StringName("Gradient");
      let methodname = new StringName("reverse");
      this._bindings.method_reverse = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_color() {
    if (!this._bindings.method_set_color) {
      let classname = new StringName("Gradient");
      let methodname = new StringName("set_color");
      this._bindings.method_set_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2878471219
      );
    }
  }
  static init_method_get_color() {
    if (!this._bindings.method_get_color) {
      let classname = new StringName("Gradient");
      let methodname = new StringName("get_color");
      this._bindings.method_get_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2624840992
      );
    }
  }
  static init_method_sample() {
    if (!this._bindings.method_sample) {
      let classname = new StringName("Gradient");
      let methodname = new StringName("sample");
      this._bindings.method_sample = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1250405064
      );
    }
  }
  static init_method_get_point_count() {
    if (!this._bindings.method_get_point_count) {
      let classname = new StringName("Gradient");
      let methodname = new StringName("get_point_count");
      this._bindings.method_get_point_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_offsets() {
    if (!this._bindings.method_set_offsets) {
      let classname = new StringName("Gradient");
      let methodname = new StringName("set_offsets");
      this._bindings.method_set_offsets = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2899603908
      );
    }
  }
  static init_method_get_offsets() {
    if (!this._bindings.method_get_offsets) {
      let classname = new StringName("Gradient");
      let methodname = new StringName("get_offsets");
      this._bindings.method_get_offsets = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        675695659
      );
    }
  }
  static init_method_set_colors() {
    if (!this._bindings.method_set_colors) {
      let classname = new StringName("Gradient");
      let methodname = new StringName("set_colors");
      this._bindings.method_set_colors = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3546319833
      );
    }
  }
  static init_method_get_colors() {
    if (!this._bindings.method_get_colors) {
      let classname = new StringName("Gradient");
      let methodname = new StringName("get_colors");
      this._bindings.method_get_colors = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1392750486
      );
    }
  }
  static init_method_set_interpolation_mode() {
    if (!this._bindings.method_set_interpolation_mode) {
      let classname = new StringName("Gradient");
      let methodname = new StringName("set_interpolation_mode");
      this._bindings.method_set_interpolation_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1971444490
      );
    }
  }
  static init_method_get_interpolation_mode() {
    if (!this._bindings.method_get_interpolation_mode) {
      let classname = new StringName("Gradient");
      let methodname = new StringName("get_interpolation_mode");
      this._bindings.method_get_interpolation_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3674172981
      );
    }
  }
  static init_method_set_interpolation_color_space() {
    if (!this._bindings.method_set_interpolation_color_space) {
      let classname = new StringName("Gradient");
      let methodname = new StringName("set_interpolation_color_space");
      this._bindings.method_set_interpolation_color_space = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3685995981
      );
    }
  }
  static init_method_get_interpolation_color_space() {
    if (!this._bindings.method_get_interpolation_color_space) {
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
    Gradient.init_method_add_point();
    return _call_native_mb_no_ret(
      Gradient._bindings.method_add_point,
      this._owner,
      _offset, _color
    );
    
  }
  remove_point(_point) {
    Gradient.init_method_remove_point();
    return _call_native_mb_no_ret(
      Gradient._bindings.method_remove_point,
      this._owner,
      _point
    );
    
  }
  set_offset(_point, _offset) {
    Gradient.init_method_set_offset();
    return _call_native_mb_no_ret(
      Gradient._bindings.method_set_offset,
      this._owner,
      _point, _offset
    );
    
  }
  get_offset(_point) {
    Gradient.init_method_get_offset();
    return _call_native_mb_ret(
      Gradient._bindings.method_get_offset,
      this._owner,
			Variant.Type.FLOAT,
    
      _point
    );
    
  }
  reverse() {
    Gradient.init_method_reverse();
    return _call_native_mb_no_ret(
      Gradient._bindings.method_reverse,
      this._owner,
      
    );
    
  }
  set_color(_point, _color) {
    Gradient.init_method_set_color();
    return _call_native_mb_no_ret(
      Gradient._bindings.method_set_color,
      this._owner,
      _point, _color
    );
    
  }
  get_color(_point) {
    Gradient.init_method_get_color();
    return _call_native_mb_ret(
      Gradient._bindings.method_get_color,
      this._owner,
			Variant.Type.COLOR,
    
      _point
    );
    
  }
  sample(_offset) {
    Gradient.init_method_sample();
    return _call_native_mb_ret(
      Gradient._bindings.method_sample,
      this._owner,
			Variant.Type.COLOR,
    
      _offset
    );
    
  }
  get_point_count() {
    Gradient.init_method_get_point_count();
    return _call_native_mb_ret(
      Gradient._bindings.method_get_point_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_offsets(_offsets) {
    Gradient.init_method_set_offsets();
    return _call_native_mb_no_ret(
      Gradient._bindings.method_set_offsets,
      this._owner,
      _offsets
    );
    
  }
  get_offsets() {
    Gradient.init_method_get_offsets();
    return _call_native_mb_ret(
      Gradient._bindings.method_get_offsets,
      this._owner,
			Variant.Type.PACKED_FLOAT32_ARRAY,
    
      
    );
    
  }
  set_colors(_colors) {
    Gradient.init_method_set_colors();
    return _call_native_mb_no_ret(
      Gradient._bindings.method_set_colors,
      this._owner,
      _colors
    );
    
  }
  get_colors() {
    Gradient.init_method_get_colors();
    return _call_native_mb_ret(
      Gradient._bindings.method_get_colors,
      this._owner,
			Variant.Type.PACKED_COLOR_ARRAY,
    
      
    );
    
  }
  set_interpolation_mode(_interpolation_mode) {
    Gradient.init_method_set_interpolation_mode();
    return _call_native_mb_no_ret(
      Gradient._bindings.method_set_interpolation_mode,
      this._owner,
      _interpolation_mode
    );
    
  }
  get_interpolation_mode() {
    Gradient.init_method_get_interpolation_mode();
    return _call_native_mb_ret(
      Gradient._bindings.method_get_interpolation_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_interpolation_color_space(_interpolation_color_space) {
    Gradient.init_method_set_interpolation_color_space();
    return _call_native_mb_no_ret(
      Gradient._bindings.method_set_interpolation_color_space,
      this._owner,
      _interpolation_color_space
    );
    
  }
  get_interpolation_color_space() {
    Gradient.init_method_get_interpolation_color_space();
    return _call_native_mb_ret(
      Gradient._bindings.method_get_interpolation_color_space,
      this._owner,
			Variant.Type.INT,
    
      
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
}