import * as internal from '__internal__';
import { Range } from 'src/js_godot/classesrange'
import { Color } from 'src/js_godot/variant/color'
import { Vector2 } from 'src/js_godot/variant/vector2'
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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("TextureProgressBar");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_under_texture");
      this._bindings.method_set_under_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_under_texture");
      this._bindings.method_get_under_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_progress_texture");
      this._bindings.method_set_progress_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_progress_texture");
      this._bindings.method_get_progress_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_over_texture");
      this._bindings.method_set_over_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_over_texture");
      this._bindings.method_get_over_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_fill_mode");
      this._bindings.method_set_fill_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_fill_mode");
      this._bindings.method_get_fill_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_tint_under");
      this._bindings.method_set_tint_under = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_tint_under");
      this._bindings.method_get_tint_under = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_tint_progress");
      this._bindings.method_set_tint_progress = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_tint_progress");
      this._bindings.method_get_tint_progress = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_tint_over");
      this._bindings.method_set_tint_over = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_tint_over");
      this._bindings.method_get_tint_over = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_texture_progress_offset");
      this._bindings.method_set_texture_progress_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_texture_progress_offset");
      this._bindings.method_get_texture_progress_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_radial_initial_angle");
      this._bindings.method_set_radial_initial_angle = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_radial_initial_angle");
      this._bindings.method_get_radial_initial_angle = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        191475506
      );
    }
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_radial_center_offset");
      this._bindings.method_set_radial_center_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_radial_center_offset");
      this._bindings.method_get_radial_center_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1497962370
      );
    }
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_fill_degrees");
      this._bindings.method_set_fill_degrees = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_fill_degrees");
      this._bindings.method_get_fill_degrees = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        191475506
      );
    }
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_stretch_margin");
      this._bindings.method_set_stretch_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        437707142
      );
    }
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_stretch_margin");
      this._bindings.method_get_stretch_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1983885014
      );
    }
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("set_nine_patch_stretch");
      this._bindings.method_set_nine_patch_stretch = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("TextureProgressBar");
      let methodname = new StringName("get_nine_patch_stretch");
      this._bindings.method_get_nine_patch_stretch = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  set_under_texture(_tex) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_under_texture,
      this._owner,
      _tex
    );
  }
  get_under_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_under_texture,
      this._owner,
			Variant.INT,
      
    );
  }
  set_progress_texture(_tex) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_progress_texture,
      this._owner,
      _tex
    );
  }
  get_progress_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_progress_texture,
      this._owner,
			Variant.INT,
      
    );
  }
  set_over_texture(_tex) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_over_texture,
      this._owner,
      _tex
    );
  }
  get_over_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_over_texture,
      this._owner,
			Variant.INT,
      
    );
  }
  set_fill_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fill_mode,
      this._owner,
      _mode
    );
  }
  get_fill_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fill_mode,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_tint_under(_tint) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tint_under,
      this._owner,
      _tint
    );
  }
  get_tint_under() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tint_under,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
  set_tint_progress(_tint) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tint_progress,
      this._owner,
      _tint
    );
  }
  get_tint_progress() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tint_progress,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
  set_tint_over(_tint) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tint_over,
      this._owner,
      _tint
    );
  }
  get_tint_over() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tint_over,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
  set_texture_progress_offset(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_progress_offset,
      this._owner,
      _offset
    );
  }
  get_texture_progress_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_progress_offset,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_radial_initial_angle(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_radial_initial_angle,
      this._owner,
      _mode
    );
  }
  get_radial_initial_angle() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_radial_initial_angle,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_radial_center_offset(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_radial_center_offset,
      this._owner,
      _mode
    );
  }
  get_radial_center_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_radial_center_offset,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_fill_degrees(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fill_degrees,
      this._owner,
      _mode
    );
  }
  get_fill_degrees() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fill_degrees,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_stretch_margin(_margin, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_stretch_margin,
      this._owner,
      _margin, _value
    );
  }
  get_stretch_margin(_margin) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_stretch_margin,
      this._owner,
			Variant.Type.INT,
      _margin
    );
  }
  set_nine_patch_stretch(_stretch) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_nine_patch_stretch,
      this._owner,
      _stretch
    );
  }
  get_nine_patch_stretch() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_nine_patch_stretch,
      this._owner,
			Variant.Type.BOOL,
      
    );
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