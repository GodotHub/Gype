import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { VBoxContainer } from '@js_godot/classes/v_box_container'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

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
@GodotClass
export class ColorPicker extends VBoxContainer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ColorPicker");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_pick_color() {
    if (!this._bindings.method_set_pick_color) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("set_pick_color");
      this._bindings.method_set_pick_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_pick_color() {
    if (!this._bindings.method_get_pick_color) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("get_pick_color");
      this._bindings.method_get_pick_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_deferred_mode() {
    if (!this._bindings.method_set_deferred_mode) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("set_deferred_mode");
      this._bindings.method_set_deferred_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_deferred_mode() {
    if (!this._bindings.method_is_deferred_mode) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("is_deferred_mode");
      this._bindings.method_is_deferred_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_color_mode() {
    if (!this._bindings.method_set_color_mode) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("set_color_mode");
      this._bindings.method_set_color_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1579114136
      );
    }
  }
  static init_method_get_color_mode() {
    if (!this._bindings.method_get_color_mode) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("get_color_mode");
      this._bindings.method_get_color_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        392907674
      );
    }
  }
  static init_method_set_edit_alpha() {
    if (!this._bindings.method_set_edit_alpha) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("set_edit_alpha");
      this._bindings.method_set_edit_alpha = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_editing_alpha() {
    if (!this._bindings.method_is_editing_alpha) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("is_editing_alpha");
      this._bindings.method_is_editing_alpha = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_can_add_swatches() {
    if (!this._bindings.method_set_can_add_swatches) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("set_can_add_swatches");
      this._bindings.method_set_can_add_swatches = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_are_swatches_enabled() {
    if (!this._bindings.method_are_swatches_enabled) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("are_swatches_enabled");
      this._bindings.method_are_swatches_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_presets_visible() {
    if (!this._bindings.method_set_presets_visible) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("set_presets_visible");
      this._bindings.method_set_presets_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_are_presets_visible() {
    if (!this._bindings.method_are_presets_visible) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("are_presets_visible");
      this._bindings.method_are_presets_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_modes_visible() {
    if (!this._bindings.method_set_modes_visible) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("set_modes_visible");
      this._bindings.method_set_modes_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_are_modes_visible() {
    if (!this._bindings.method_are_modes_visible) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("are_modes_visible");
      this._bindings.method_are_modes_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_sampler_visible() {
    if (!this._bindings.method_set_sampler_visible) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("set_sampler_visible");
      this._bindings.method_set_sampler_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_sampler_visible() {
    if (!this._bindings.method_is_sampler_visible) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("is_sampler_visible");
      this._bindings.method_is_sampler_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_sliders_visible() {
    if (!this._bindings.method_set_sliders_visible) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("set_sliders_visible");
      this._bindings.method_set_sliders_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_are_sliders_visible() {
    if (!this._bindings.method_are_sliders_visible) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("are_sliders_visible");
      this._bindings.method_are_sliders_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_hex_visible() {
    if (!this._bindings.method_set_hex_visible) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("set_hex_visible");
      this._bindings.method_set_hex_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_hex_visible() {
    if (!this._bindings.method_is_hex_visible) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("is_hex_visible");
      this._bindings.method_is_hex_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_add_preset() {
    if (!this._bindings.method_add_preset) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("add_preset");
      this._bindings.method_add_preset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_erase_preset() {
    if (!this._bindings.method_erase_preset) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("erase_preset");
      this._bindings.method_erase_preset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_presets() {
    if (!this._bindings.method_get_presets) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("get_presets");
      this._bindings.method_get_presets = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1392750486
      );
    }
  }
  static init_method_add_recent_preset() {
    if (!this._bindings.method_add_recent_preset) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("add_recent_preset");
      this._bindings.method_add_recent_preset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_erase_recent_preset() {
    if (!this._bindings.method_erase_recent_preset) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("erase_recent_preset");
      this._bindings.method_erase_recent_preset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_recent_presets() {
    if (!this._bindings.method_get_recent_presets) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("get_recent_presets");
      this._bindings.method_get_recent_presets = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1392750486
      );
    }
  }
  static init_method_set_picker_shape() {
    if (!this._bindings.method_set_picker_shape) {
      let classname = new StringName("ColorPicker");
      let methodname = new StringName("set_picker_shape");
      this._bindings.method_set_picker_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3981373861
      );
    }
  }
  static init_method_get_picker_shape() {
    if (!this._bindings.method_get_picker_shape) {
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
    ColorPicker.init_method_set_pick_color();
    return _call_native_mb_no_ret(
      ColorPicker._bindings.method_set_pick_color,
      this._owner,
      _color
    );
    
  }
  get_pick_color() {
    ColorPicker.init_method_get_pick_color();
    return _call_native_mb_ret(
      ColorPicker._bindings.method_get_pick_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_deferred_mode(_mode) {
    ColorPicker.init_method_set_deferred_mode();
    return _call_native_mb_no_ret(
      ColorPicker._bindings.method_set_deferred_mode,
      this._owner,
      _mode
    );
    
  }
  is_deferred_mode() {
    ColorPicker.init_method_is_deferred_mode();
    return _call_native_mb_ret(
      ColorPicker._bindings.method_is_deferred_mode,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_color_mode(_color_mode) {
    ColorPicker.init_method_set_color_mode();
    return _call_native_mb_no_ret(
      ColorPicker._bindings.method_set_color_mode,
      this._owner,
      _color_mode
    );
    
  }
  get_color_mode() {
    ColorPicker.init_method_get_color_mode();
    return _call_native_mb_ret(
      ColorPicker._bindings.method_get_color_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_edit_alpha(_show) {
    ColorPicker.init_method_set_edit_alpha();
    return _call_native_mb_no_ret(
      ColorPicker._bindings.method_set_edit_alpha,
      this._owner,
      _show
    );
    
  }
  is_editing_alpha() {
    ColorPicker.init_method_is_editing_alpha();
    return _call_native_mb_ret(
      ColorPicker._bindings.method_is_editing_alpha,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_can_add_swatches(_enabled) {
    ColorPicker.init_method_set_can_add_swatches();
    return _call_native_mb_no_ret(
      ColorPicker._bindings.method_set_can_add_swatches,
      this._owner,
      _enabled
    );
    
  }
  are_swatches_enabled() {
    ColorPicker.init_method_are_swatches_enabled();
    return _call_native_mb_ret(
      ColorPicker._bindings.method_are_swatches_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_presets_visible(_visible) {
    ColorPicker.init_method_set_presets_visible();
    return _call_native_mb_no_ret(
      ColorPicker._bindings.method_set_presets_visible,
      this._owner,
      _visible
    );
    
  }
  are_presets_visible() {
    ColorPicker.init_method_are_presets_visible();
    return _call_native_mb_ret(
      ColorPicker._bindings.method_are_presets_visible,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_modes_visible(_visible) {
    ColorPicker.init_method_set_modes_visible();
    return _call_native_mb_no_ret(
      ColorPicker._bindings.method_set_modes_visible,
      this._owner,
      _visible
    );
    
  }
  are_modes_visible() {
    ColorPicker.init_method_are_modes_visible();
    return _call_native_mb_ret(
      ColorPicker._bindings.method_are_modes_visible,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_sampler_visible(_visible) {
    ColorPicker.init_method_set_sampler_visible();
    return _call_native_mb_no_ret(
      ColorPicker._bindings.method_set_sampler_visible,
      this._owner,
      _visible
    );
    
  }
  is_sampler_visible() {
    ColorPicker.init_method_is_sampler_visible();
    return _call_native_mb_ret(
      ColorPicker._bindings.method_is_sampler_visible,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_sliders_visible(_visible) {
    ColorPicker.init_method_set_sliders_visible();
    return _call_native_mb_no_ret(
      ColorPicker._bindings.method_set_sliders_visible,
      this._owner,
      _visible
    );
    
  }
  are_sliders_visible() {
    ColorPicker.init_method_are_sliders_visible();
    return _call_native_mb_ret(
      ColorPicker._bindings.method_are_sliders_visible,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_hex_visible(_visible) {
    ColorPicker.init_method_set_hex_visible();
    return _call_native_mb_no_ret(
      ColorPicker._bindings.method_set_hex_visible,
      this._owner,
      _visible
    );
    
  }
  is_hex_visible() {
    ColorPicker.init_method_is_hex_visible();
    return _call_native_mb_ret(
      ColorPicker._bindings.method_is_hex_visible,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  add_preset(_color) {
    ColorPicker.init_method_add_preset();
    return _call_native_mb_no_ret(
      ColorPicker._bindings.method_add_preset,
      this._owner,
      _color
    );
    
  }
  erase_preset(_color) {
    ColorPicker.init_method_erase_preset();
    return _call_native_mb_no_ret(
      ColorPicker._bindings.method_erase_preset,
      this._owner,
      _color
    );
    
  }
  get_presets() {
    ColorPicker.init_method_get_presets();
    return _call_native_mb_ret(
      ColorPicker._bindings.method_get_presets,
      this._owner,
			Variant.Type.PACKED_COLOR_ARRAY,
    
      
    );
    
  }
  add_recent_preset(_color) {
    ColorPicker.init_method_add_recent_preset();
    return _call_native_mb_no_ret(
      ColorPicker._bindings.method_add_recent_preset,
      this._owner,
      _color
    );
    
  }
  erase_recent_preset(_color) {
    ColorPicker.init_method_erase_recent_preset();
    return _call_native_mb_no_ret(
      ColorPicker._bindings.method_erase_recent_preset,
      this._owner,
      _color
    );
    
  }
  get_recent_presets() {
    ColorPicker.init_method_get_recent_presets();
    return _call_native_mb_ret(
      ColorPicker._bindings.method_get_recent_presets,
      this._owner,
			Variant.Type.PACKED_COLOR_ARRAY,
    
      
    );
    
  }
  set_picker_shape(_shape) {
    ColorPicker.init_method_set_picker_shape();
    return _call_native_mb_no_ret(
      ColorPicker._bindings.method_set_picker_shape,
      this._owner,
      _shape
    );
    
  }
  get_picker_shape() {
    ColorPicker.init_method_get_picker_shape();
    return _call_native_mb_ret(
      ColorPicker._bindings.method_get_picker_shape,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get color () {
  return this.get_pick_color();
}
set color (new_value) {
  this.set_pick_color(new_value);
}
get edit_alpha () {
  return this.is_editing_alpha();
}
set edit_alpha (new_value) {
  this.set_edit_alpha(new_value);
}
get color_mode () {
  return this.get_color_mode();
}
set color_mode (new_value) {
  this.set_color_mode(new_value);
}
get deferred_mode () {
  return this.is_deferred_mode();
}
set deferred_mode (new_value) {
  this.set_deferred_mode(new_value);
}
get picker_shape () {
  return this.get_picker_shape();
}
set picker_shape (new_value) {
  this.set_picker_shape(new_value);
}
get can_add_swatches () {
  return this.are_swatches_enabled();
}
set can_add_swatches (new_value) {
  this.set_can_add_swatches(new_value);
}
get sampler_visible () {
  return this.is_sampler_visible();
}
set sampler_visible (new_value) {
  this.set_sampler_visible(new_value);
}
get color_modes_visible () {
  return this.are_modes_visible();
}
set color_modes_visible (new_value) {
  this.set_modes_visible(new_value);
}
get sliders_visible () {
  return this.are_sliders_visible();
}
set sliders_visible (new_value) {
  this.set_sliders_visible(new_value);
}
get hex_visible () {
  return this.is_hex_visible();
}
set hex_visible (new_value) {
  this.set_hex_visible(new_value);
}
get presets_visible () {
  return this.are_presets_visible();
}
set presets_visible (new_value) {
  this.set_presets_visible(new_value);
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