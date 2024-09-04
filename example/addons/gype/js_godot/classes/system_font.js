import * as internal from '__internal__';
import { Font } from '@js_godot/classes/font'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { PackedStringArray } from '@js_godot/variant/packed_string_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_antialiasing;
  method_get_antialiasing;
  method_set_disable_embedded_bitmaps;
  method_get_disable_embedded_bitmaps;
  method_set_generate_mipmaps;
  method_get_generate_mipmaps;
  method_set_allow_system_fallback;
  method_is_allow_system_fallback;
  method_set_force_autohinter;
  method_is_force_autohinter;
  method_set_hinting;
  method_get_hinting;
  method_set_subpixel_positioning;
  method_get_subpixel_positioning;
  method_set_multichannel_signed_distance_field;
  method_is_multichannel_signed_distance_field;
  method_set_msdf_pixel_range;
  method_get_msdf_pixel_range;
  method_set_msdf_size;
  method_get_msdf_size;
  method_set_oversampling;
  method_get_oversampling;
  method_get_font_names;
  method_set_font_names;
  method_get_font_italic;
  method_set_font_italic;
  method_set_font_weight;
  method_set_font_stretch;
}
export class SystemFont extends Font{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("SystemFont");
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
      let classname = new StringName("SystemFont");
      let methodname = new StringName("set_antialiasing");
      this._bindings.method_set_antialiasing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1669900
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("get_antialiasing");
      this._bindings.method_get_antialiasing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4262718649
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("set_disable_embedded_bitmaps");
      this._bindings.method_set_disable_embedded_bitmaps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("get_disable_embedded_bitmaps");
      this._bindings.method_get_disable_embedded_bitmaps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("set_generate_mipmaps");
      this._bindings.method_set_generate_mipmaps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("get_generate_mipmaps");
      this._bindings.method_get_generate_mipmaps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("set_allow_system_fallback");
      this._bindings.method_set_allow_system_fallback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("is_allow_system_fallback");
      this._bindings.method_is_allow_system_fallback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("set_force_autohinter");
      this._bindings.method_set_force_autohinter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("is_force_autohinter");
      this._bindings.method_is_force_autohinter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("set_hinting");
      this._bindings.method_set_hinting = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1827459492
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("get_hinting");
      this._bindings.method_get_hinting = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3683214614
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("set_subpixel_positioning");
      this._bindings.method_set_subpixel_positioning = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4225742182
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("get_subpixel_positioning");
      this._bindings.method_get_subpixel_positioning = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1069238588
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("set_multichannel_signed_distance_field");
      this._bindings.method_set_multichannel_signed_distance_field = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("is_multichannel_signed_distance_field");
      this._bindings.method_is_multichannel_signed_distance_field = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("set_msdf_pixel_range");
      this._bindings.method_set_msdf_pixel_range = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("get_msdf_pixel_range");
      this._bindings.method_get_msdf_pixel_range = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("set_msdf_size");
      this._bindings.method_set_msdf_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("get_msdf_size");
      this._bindings.method_get_msdf_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("set_oversampling");
      this._bindings.method_set_oversampling = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("get_oversampling");
      this._bindings.method_get_oversampling = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("get_font_names");
      this._bindings.method_get_font_names = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1139954409
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("set_font_names");
      this._bindings.method_set_font_names = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4015028928
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("get_font_italic");
      this._bindings.method_get_font_italic = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("set_font_italic");
      this._bindings.method_set_font_italic = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("set_font_weight");
      this._bindings.method_set_font_weight = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("SystemFont");
      let methodname = new StringName("set_font_stretch");
      this._bindings.method_set_font_stretch = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
  }
  set_antialiasing(_antialiasing) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_antialiasing,
      this._owner,
      _antialiasing
    );
    
  }
  get_antialiasing() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_antialiasing,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_disable_embedded_bitmaps(_disable_embedded_bitmaps) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_disable_embedded_bitmaps,
      this._owner,
      _disable_embedded_bitmaps
    );
    
  }
  get_disable_embedded_bitmaps() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_disable_embedded_bitmaps,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_generate_mipmaps(_generate_mipmaps) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_generate_mipmaps,
      this._owner,
      _generate_mipmaps
    );
    
  }
  get_generate_mipmaps() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_generate_mipmaps,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_allow_system_fallback(_allow_system_fallback) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_allow_system_fallback,
      this._owner,
      _allow_system_fallback
    );
    
  }
  is_allow_system_fallback() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_allow_system_fallback,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_force_autohinter(_force_autohinter) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_force_autohinter,
      this._owner,
      _force_autohinter
    );
    
  }
  is_force_autohinter() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_force_autohinter,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_hinting(_hinting) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_hinting,
      this._owner,
      _hinting
    );
    
  }
  get_hinting() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_hinting,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_subpixel_positioning(_subpixel_positioning) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_subpixel_positioning,
      this._owner,
      _subpixel_positioning
    );
    
  }
  get_subpixel_positioning() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_subpixel_positioning,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_multichannel_signed_distance_field(_msdf) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_multichannel_signed_distance_field,
      this._owner,
      _msdf
    );
    
  }
  is_multichannel_signed_distance_field() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_multichannel_signed_distance_field,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_msdf_pixel_range(_msdf_pixel_range) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_msdf_pixel_range,
      this._owner,
      _msdf_pixel_range
    );
    
  }
  get_msdf_pixel_range() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_msdf_pixel_range,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_msdf_size(_msdf_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_msdf_size,
      this._owner,
      _msdf_size
    );
    
  }
  get_msdf_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_msdf_size,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_oversampling(_oversampling) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_oversampling,
      this._owner,
      _oversampling
    );
    
  }
  get_oversampling() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_oversampling,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_font_names() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_font_names,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  set_font_names(_names) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_font_names,
      this._owner,
      _names
    );
    
  }
  get_font_italic() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_font_italic,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_font_italic(_italic) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_font_italic,
      this._owner,
      _italic
    );
    
  }
  set_font_weight(_weight) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_font_weight,
      this._owner,
      _weight
    );
    
  }
  set_font_stretch(_stretch) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_font_stretch,
      this._owner,
      _stretch
    );
    
  }
  
get font_names () {
  return this.get_font_names();
}
set font_names (new_value) {
  this.set_font_names(new_value);
}
get font_italic () {
  return this.get_font_italic();
}
set font_italic (new_value) {
  this.set_font_italic(new_value);
}
get font_weight () {
  return this.get_font_weight();
}
set font_weight (new_value) {
  this.set_font_weight(new_value);
}
get font_stretch () {
  return this.get_font_stretch();
}
set font_stretch (new_value) {
  this.set_font_stretch(new_value);
}
get antialiasing () {
  return this.get_antialiasing();
}
set antialiasing (new_value) {
  this.set_antialiasing(new_value);
}
get generate_mipmaps () {
  return this.get_generate_mipmaps();
}
set generate_mipmaps (new_value) {
  this.set_generate_mipmaps(new_value);
}
get disable_embedded_bitmaps () {
  return this.get_disable_embedded_bitmaps();
}
set disable_embedded_bitmaps (new_value) {
  this.set_disable_embedded_bitmaps(new_value);
}
get allow_system_fallback () {
  return this.is_allow_system_fallback();
}
set allow_system_fallback (new_value) {
  this.set_allow_system_fallback(new_value);
}
get force_autohinter () {
  return this.is_force_autohinter();
}
set force_autohinter (new_value) {
  this.set_force_autohinter(new_value);
}
get hinting () {
  return this.get_hinting();
}
set hinting (new_value) {
  this.set_hinting(new_value);
}
get subpixel_positioning () {
  return this.get_subpixel_positioning();
}
set subpixel_positioning (new_value) {
  this.set_subpixel_positioning(new_value);
}
get multichannel_signed_distance_field () {
  return this.is_multichannel_signed_distance_field();
}
set multichannel_signed_distance_field (new_value) {
  this.set_multichannel_signed_distance_field(new_value);
}
get msdf_pixel_range () {
  return this.get_msdf_pixel_range();
}
set msdf_pixel_range (new_value) {
  this.set_msdf_pixel_range(new_value);
}
get msdf_size () {
  return this.get_msdf_size();
}
set msdf_size (new_value) {
  this.set_msdf_size(new_value);
}
get oversampling () {
  return this.get_oversampling();
}
set oversampling (new_value) {
  this.set_oversampling(new_value);
}


  static {
    this._init_bindings();
  }
}