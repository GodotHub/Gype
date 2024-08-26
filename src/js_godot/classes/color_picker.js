import * as internal from '__internal__';
import { Color } from 'src/js_godot/variant/color'
import { PackedColorArray } from 'src/js_godot/variant/packed_color_array'
import { VBoxContainer } from 'src/js_godot/classesv_box_container'
class _MethodBindings {
    method_set_pick_color;
    method_get_pick_color;
    method_set_deferred_mode;
    method_is_deferred_mode;
    method_set_color_mode;
    method_get_color_mode;
    method_set_edit_alpha;
    method_is_editing_alpha;
    method_set_can_add_swatches;
    method_are_swatches_enabled;
    method_set_presets_visible;
    method_are_presets_visible;
    method_set_modes_visible;
    method_are_modes_visible;
    method_set_sampler_visible;
    method_is_sampler_visible;
    method_set_sliders_visible;
    method_are_sliders_visible;
    method_set_hex_visible;
    method_is_hex_visible;
    method_add_preset;
    method_erase_preset;
    method_get_presets;
    method_add_recent_preset;
    method_erase_recent_preset;
    method_get_recent_presets;
    method_set_picker_shape;
    method_get_picker_shape;
}


export class ColorPicker extends VBoxContainer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ColorPicker");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("set_pick_color");
      this._bindings.method_set_pick_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("get_pick_color");
      this._bindings.method_get_pick_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("set_deferred_mode");
      this._bindings.method_set_deferred_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("is_deferred_mode");
      this._bindings.method_is_deferred_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("set_color_mode");
      this._bindings.method_set_color_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1579114136
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("get_color_mode");
      this._bindings.method_get_color_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        392907674
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("set_edit_alpha");
      this._bindings.method_set_edit_alpha = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("is_editing_alpha");
      this._bindings.method_is_editing_alpha = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("set_can_add_swatches");
      this._bindings.method_set_can_add_swatches = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("are_swatches_enabled");
      this._bindings.method_are_swatches_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("set_presets_visible");
      this._bindings.method_set_presets_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("are_presets_visible");
      this._bindings.method_are_presets_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("set_modes_visible");
      this._bindings.method_set_modes_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("are_modes_visible");
      this._bindings.method_are_modes_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("set_sampler_visible");
      this._bindings.method_set_sampler_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("is_sampler_visible");
      this._bindings.method_is_sampler_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("set_sliders_visible");
      this._bindings.method_set_sliders_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("are_sliders_visible");
      this._bindings.method_are_sliders_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("set_hex_visible");
      this._bindings.method_set_hex_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("is_hex_visible");
      this._bindings.method_is_hex_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("add_preset");
      this._bindings.method_add_preset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("erase_preset");
      this._bindings.method_erase_preset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("get_presets");
      this._bindings.method_get_presets = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1392750486
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("add_recent_preset");
      this._bindings.method_add_recent_preset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("erase_recent_preset");
      this._bindings.method_erase_recent_preset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("get_recent_presets");
      this._bindings.method_get_recent_presets = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1392750486
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("set_picker_shape");
      this._bindings.method_set_picker_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3981373861
      );
    }
    {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("get_picker_shape");
      this._bindings.method_get_picker_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1143229889
      );
    }
  }
  set_pick_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_pick_color,
      this._owner,
      _color
    );
  }
  get_pick_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_pick_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
  set_deferred_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_deferred_mode,
      this._owner,
      _mode
    );
  }
  is_deferred_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_deferred_mode,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_color_mode(_color_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_color_mode,
      this._owner,
      _color_mode
    );
  }
  get_color_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_color_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_edit_alpha(_show) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_edit_alpha,
      this._owner,
      _show
    );
  }
  is_editing_alpha() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_editing_alpha,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_can_add_swatches(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_can_add_swatches,
      this._owner,
      _enabled
    );
  }
  are_swatches_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_are_swatches_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_presets_visible(_visible) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_presets_visible,
      this._owner,
      _visible
    );
  }
  are_presets_visible() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_are_presets_visible,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_modes_visible(_visible) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_modes_visible,
      this._owner,
      _visible
    );
  }
  are_modes_visible() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_are_modes_visible,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_sampler_visible(_visible) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sampler_visible,
      this._owner,
      _visible
    );
  }
  is_sampler_visible() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_sampler_visible,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_sliders_visible(_visible) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sliders_visible,
      this._owner,
      _visible
    );
  }
  are_sliders_visible() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_are_sliders_visible,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_hex_visible(_visible) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_hex_visible,
      this._owner,
      _visible
    );
  }
  is_hex_visible() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_hex_visible,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  add_preset(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_preset,
      this._owner,
      _color
    );
  }
  erase_preset(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_erase_preset,
      this._owner,
      _color
    );
  }
  get_presets() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_presets,
      this._owner,
			Variant.Type.PACKED_COLOR_ARRAY
    ,
      
    );
  }
  add_recent_preset(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_recent_preset,
      this._owner,
      _color
    );
  }
  erase_recent_preset(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_erase_recent_preset,
      this._owner,
      _color
    );
  }
  get_recent_presets() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_recent_presets,
      this._owner,
			Variant.Type.PACKED_COLOR_ARRAY
    ,
      
    );
  }
  set_picker_shape(_shape) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_picker_shape,
      this._owner,
      _shape
    );
  }
  get_picker_shape() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_picker_shape,
      this._owner,
			Variant.INT,
      
    );
  }
  static ColorModeType = {
    MODE_RGB: 0,
    MODE_HSV: 1,
    MODE_RAW: 2,
    MODE_OKHSL: 3,
  }
  static PickerShapeType = {
    SHAPE_HSV_RECTANGLE: 0,
    SHAPE_HSV_WHEEL: 1,
    SHAPE_VHS_CIRCLE: 2,
    SHAPE_OKHSL_CIRCLE: 3,
    SHAPE_NONE: 4,
  }
}