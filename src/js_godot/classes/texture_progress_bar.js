import * as internal from '__internal__';
import { Range } from '@js_godot/classes/range'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_under_texture;
  method_get_under_texture;
  method_set_progress_texture;
  method_get_progress_texture;
  method_set_over_texture;
  method_get_over_texture;
  method_set_fill_mode;
  method_get_fill_mode;
  method_set_tint_under;
  method_get_tint_under;
  method_set_tint_progress;
  method_get_tint_progress;
  method_set_tint_over;
  method_get_tint_over;
  method_set_texture_progress_offset;
  method_get_texture_progress_offset;
  method_set_radial_initial_angle;
  method_get_radial_initial_angle;
  method_set_radial_center_offset;
  method_get_radial_center_offset;
  method_set_fill_degrees;
  method_get_fill_degrees;
  method_set_stretch_margin;
  method_get_stretch_margin;
  method_set_nine_patch_stretch;
  method_get_nine_patch_stretch;
}
export class TextureProgressBar extends Range{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("TextureProgressBar");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_under_texture() {
    if (!this.#_bindings.method_set_under_texture) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_under_texture");
      this.#_bindings.method_set_under_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_get_under_texture() {
    if (!this.#_bindings.method_get_under_texture) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_under_texture");
      this.#_bindings.method_get_under_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_set_progress_texture() {
    if (!this.#_bindings.method_set_progress_texture) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_progress_texture");
      this.#_bindings.method_set_progress_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_get_progress_texture() {
    if (!this.#_bindings.method_get_progress_texture) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_progress_texture");
      this.#_bindings.method_get_progress_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_set_over_texture() {
    if (!this.#_bindings.method_set_over_texture) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_over_texture");
      this.#_bindings.method_set_over_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_get_over_texture() {
    if (!this.#_bindings.method_get_over_texture) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_over_texture");
      this.#_bindings.method_get_over_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_set_fill_mode() {
    if (!this.#_bindings.method_set_fill_mode) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_fill_mode");
      this.#_bindings.method_set_fill_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_fill_mode() {
    if (!this.#_bindings.method_get_fill_mode) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_fill_mode");
      this.#_bindings.method_get_fill_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_set_tint_under() {
    if (!this.#_bindings.method_set_tint_under) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_tint_under");
      this.#_bindings.method_set_tint_under = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_tint_under() {
    if (!this.#_bindings.method_get_tint_under) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_tint_under");
      this.#_bindings.method_get_tint_under = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_tint_progress() {
    if (!this.#_bindings.method_set_tint_progress) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_tint_progress");
      this.#_bindings.method_set_tint_progress = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_tint_progress() {
    if (!this.#_bindings.method_get_tint_progress) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_tint_progress");
      this.#_bindings.method_get_tint_progress = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_tint_over() {
    if (!this.#_bindings.method_set_tint_over) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_tint_over");
      this.#_bindings.method_set_tint_over = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_tint_over() {
    if (!this.#_bindings.method_get_tint_over) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_tint_over");
      this.#_bindings.method_get_tint_over = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_texture_progress_offset() {
    if (!this.#_bindings.method_set_texture_progress_offset) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_texture_progress_offset");
      this.#_bindings.method_set_texture_progress_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_texture_progress_offset() {
    if (!this.#_bindings.method_get_texture_progress_offset) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_texture_progress_offset");
      this.#_bindings.method_get_texture_progress_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_radial_initial_angle() {
    if (!this.#_bindings.method_set_radial_initial_angle) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_radial_initial_angle");
      this.#_bindings.method_set_radial_initial_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_radial_initial_angle() {
    if (!this.#_bindings.method_get_radial_initial_angle) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_radial_initial_angle");
      this.#_bindings.method_get_radial_initial_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        191475506
      );
    }
  }
  static init_method_set_radial_center_offset() {
    if (!this.#_bindings.method_set_radial_center_offset) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_radial_center_offset");
      this.#_bindings.method_set_radial_center_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_radial_center_offset() {
    if (!this.#_bindings.method_get_radial_center_offset) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_radial_center_offset");
      this.#_bindings.method_get_radial_center_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1497962370
      );
    }
  }
  static init_method_set_fill_degrees() {
    if (!this.#_bindings.method_set_fill_degrees) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_fill_degrees");
      this.#_bindings.method_set_fill_degrees = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_fill_degrees() {
    if (!this.#_bindings.method_get_fill_degrees) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_fill_degrees");
      this.#_bindings.method_get_fill_degrees = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        191475506
      );
    }
  }
  static init_method_set_stretch_margin() {
    if (!this.#_bindings.method_set_stretch_margin) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_stretch_margin");
      this.#_bindings.method_set_stretch_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        437707142
      );
    }
  }
  static init_method_get_stretch_margin() {
    if (!this.#_bindings.method_get_stretch_margin) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_stretch_margin");
      this.#_bindings.method_get_stretch_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1983885014
      );
    }
  }
  static init_method_set_nine_patch_stretch() {
    if (!this.#_bindings.method_set_nine_patch_stretch) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_nine_patch_stretch");
      this.#_bindings.method_set_nine_patch_stretch = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_nine_patch_stretch() {
    if (!this.#_bindings.method_get_nine_patch_stretch) {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_nine_patch_stretch");
      this.#_bindings.method_get_nine_patch_stretch = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_under_texture(_tex) {
    TextureProgressBar.init_method_set_under_texture();
    return _call_native_mb_no_ret(
      TextureProgressBar.#_bindings.method_set_under_texture,
      this._owner,
      _tex
    );
    
  }
  get_under_texture() {
    TextureProgressBar.init_method_get_under_texture();
    return _call_native_mb_ret(
      TextureProgressBar.#_bindings.method_get_under_texture,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_progress_texture(_tex) {
    TextureProgressBar.init_method_set_progress_texture();
    return _call_native_mb_no_ret(
      TextureProgressBar.#_bindings.method_set_progress_texture,
      this._owner,
      _tex
    );
    
  }
  get_progress_texture() {
    TextureProgressBar.init_method_get_progress_texture();
    return _call_native_mb_ret(
      TextureProgressBar.#_bindings.method_get_progress_texture,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_over_texture(_tex) {
    TextureProgressBar.init_method_set_over_texture();
    return _call_native_mb_no_ret(
      TextureProgressBar.#_bindings.method_set_over_texture,
      this._owner,
      _tex
    );
    
  }
  get_over_texture() {
    TextureProgressBar.init_method_get_over_texture();
    return _call_native_mb_ret(
      TextureProgressBar.#_bindings.method_get_over_texture,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_fill_mode(_mode) {
    TextureProgressBar.init_method_set_fill_mode();
    return _call_native_mb_no_ret(
      TextureProgressBar.#_bindings.method_set_fill_mode,
      this._owner,
      _mode
    );
    
  }
  get_fill_mode() {
    TextureProgressBar.init_method_get_fill_mode();
    return _call_native_mb_ret(
      TextureProgressBar.#_bindings.method_get_fill_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_tint_under(_tint) {
    TextureProgressBar.init_method_set_tint_under();
    return _call_native_mb_no_ret(
      TextureProgressBar.#_bindings.method_set_tint_under,
      this._owner,
      _tint
    );
    
  }
  get_tint_under() {
    TextureProgressBar.init_method_get_tint_under();
    return _call_native_mb_ret(
      TextureProgressBar.#_bindings.method_get_tint_under,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_tint_progress(_tint) {
    TextureProgressBar.init_method_set_tint_progress();
    return _call_native_mb_no_ret(
      TextureProgressBar.#_bindings.method_set_tint_progress,
      this._owner,
      _tint
    );
    
  }
  get_tint_progress() {
    TextureProgressBar.init_method_get_tint_progress();
    return _call_native_mb_ret(
      TextureProgressBar.#_bindings.method_get_tint_progress,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_tint_over(_tint) {
    TextureProgressBar.init_method_set_tint_over();
    return _call_native_mb_no_ret(
      TextureProgressBar.#_bindings.method_set_tint_over,
      this._owner,
      _tint
    );
    
  }
  get_tint_over() {
    TextureProgressBar.init_method_get_tint_over();
    return _call_native_mb_ret(
      TextureProgressBar.#_bindings.method_get_tint_over,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_texture_progress_offset(_offset) {
    TextureProgressBar.init_method_set_texture_progress_offset();
    return _call_native_mb_no_ret(
      TextureProgressBar.#_bindings.method_set_texture_progress_offset,
      this._owner,
      _offset
    );
    
  }
  get_texture_progress_offset() {
    TextureProgressBar.init_method_get_texture_progress_offset();
    return _call_native_mb_ret(
      TextureProgressBar.#_bindings.method_get_texture_progress_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_radial_initial_angle(_mode) {
    TextureProgressBar.init_method_set_radial_initial_angle();
    return _call_native_mb_no_ret(
      TextureProgressBar.#_bindings.method_set_radial_initial_angle,
      this._owner,
      _mode
    );
    
  }
  get_radial_initial_angle() {
    TextureProgressBar.init_method_get_radial_initial_angle();
    return _call_native_mb_ret(
      TextureProgressBar.#_bindings.method_get_radial_initial_angle,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_radial_center_offset(_mode) {
    TextureProgressBar.init_method_set_radial_center_offset();
    return _call_native_mb_no_ret(
      TextureProgressBar.#_bindings.method_set_radial_center_offset,
      this._owner,
      _mode
    );
    
  }
  get_radial_center_offset() {
    TextureProgressBar.init_method_get_radial_center_offset();
    return _call_native_mb_ret(
      TextureProgressBar.#_bindings.method_get_radial_center_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_fill_degrees(_mode) {
    TextureProgressBar.init_method_set_fill_degrees();
    return _call_native_mb_no_ret(
      TextureProgressBar.#_bindings.method_set_fill_degrees,
      this._owner,
      _mode
    );
    
  }
  get_fill_degrees() {
    TextureProgressBar.init_method_get_fill_degrees();
    return _call_native_mb_ret(
      TextureProgressBar.#_bindings.method_get_fill_degrees,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_stretch_margin(_margin, _value) {
    TextureProgressBar.init_method_set_stretch_margin();
    return _call_native_mb_no_ret(
      TextureProgressBar.#_bindings.method_set_stretch_margin,
      this._owner,
      _margin, _value
    );
    
  }
  get_stretch_margin(_margin) {
    TextureProgressBar.init_method_get_stretch_margin();
    return _call_native_mb_ret(
      TextureProgressBar.#_bindings.method_get_stretch_margin,
      this._owner,
			Variant.Type.INT,
    
      _margin
    );
    
  }
  set_nine_patch_stretch(_stretch) {
    TextureProgressBar.init_method_set_nine_patch_stretch();
    return _call_native_mb_no_ret(
      TextureProgressBar.#_bindings.method_set_nine_patch_stretch,
      this._owner,
      _stretch
    );
    
  }
  get_nine_patch_stretch() {
    TextureProgressBar.init_method_get_nine_patch_stretch();
    return _call_native_mb_ret(
      TextureProgressBar.#_bindings.method_get_nine_patch_stretch,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get fill_mode () {
  return this.get_fill_mode();
}
set fill_mode (new_value) {
  this.set_fill_mode(new_value);
}
get radial_initial_angle () {
  return this.get_radial_initial_angle();
}
set radial_initial_angle (new_value) {
  this.set_radial_initial_angle(new_value);
}
get radial_fill_degrees () {
  return this.get_fill_degrees();
}
set radial_fill_degrees (new_value) {
  this.set_fill_degrees(new_value);
}
get radial_center_offset () {
  return this.get_radial_center_offset();
}
set radial_center_offset (new_value) {
  this.set_radial_center_offset(new_value);
}
get nine_patch_stretch () {
  return this.get_nine_patch_stretch();
}
set nine_patch_stretch (new_value) {
  this.set_nine_patch_stretch(new_value);
}
get stretch_margin_left () {
  return this.get_stretch_margin();
}
set stretch_margin_left (new_value) {
  this.set_stretch_margin(new_value);
}
get stretch_margin_top () {
  return this.get_stretch_margin();
}
set stretch_margin_top (new_value) {
  this.set_stretch_margin(new_value);
}
get stretch_margin_right () {
  return this.get_stretch_margin();
}
set stretch_margin_right (new_value) {
  this.set_stretch_margin(new_value);
}
get stretch_margin_bottom () {
  return this.get_stretch_margin();
}
set stretch_margin_bottom (new_value) {
  this.set_stretch_margin(new_value);
}
get texture_under () {
  return this.get_under_texture();
}
set texture_under (new_value) {
  this.set_under_texture(new_value);
}
get texture_over () {
  return this.get_over_texture();
}
set texture_over (new_value) {
  this.set_over_texture(new_value);
}
get texture_progress () {
  return this.get_progress_texture();
}
set texture_progress (new_value) {
  this.set_progress_texture(new_value);
}
get texture_progress_offset () {
  return this.get_texture_progress_offset();
}
set texture_progress_offset (new_value) {
  this.set_texture_progress_offset(new_value);
}
get tint_under () {
  return this.get_tint_under();
}
set tint_under (new_value) {
  this.set_tint_under(new_value);
}
get tint_over () {
  return this.get_tint_over();
}
set tint_over (new_value) {
  this.set_tint_over(new_value);
}
get tint_progress () {
  return this.get_tint_progress();
}
set tint_progress (new_value) {
  this.set_tint_progress(new_value);
}

  static FillMode = {
    FILL_LEFT_TO_RIGHT: 0,
    FILL_RIGHT_TO_LEFT: 1,
    FILL_TOP_TO_BOTTOM: 2,
    FILL_BOTTOM_TO_TOP: 3,
    FILL_CLOCKWISE: 4,
    FILL_COUNTER_CLOCKWISE: 5,
    FILL_BILINEAR_LEFT_AND_RIGHT: 6,
    FILL_BILINEAR_TOP_AND_BOTTOM: 7,
    FILL_CLOCKWISE_AND_COUNTER_CLOCKWISE: 8,
  }
}