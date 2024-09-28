import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Node2D } from '@js_godot/classes/node2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_enabled;
  method_is_enabled;
  method_set_editor_only;
  method_is_editor_only;
  method_set_color;
  method_get_color;
  method_set_energy;
  method_get_energy;
  method_set_z_range_min;
  method_get_z_range_min;
  method_set_z_range_max;
  method_get_z_range_max;
  method_set_layer_range_min;
  method_get_layer_range_min;
  method_set_layer_range_max;
  method_get_layer_range_max;
  method_set_item_cull_mask;
  method_get_item_cull_mask;
  method_set_item_shadow_cull_mask;
  method_get_item_shadow_cull_mask;
  method_set_shadow_enabled;
  method_is_shadow_enabled;
  method_set_shadow_smooth;
  method_get_shadow_smooth;
  method_set_shadow_filter;
  method_get_shadow_filter;
  method_set_shadow_color;
  method_get_shadow_color;
  method_set_blend_mode;
  method_get_blend_mode;
  method_set_height;
  method_get_height;
}
@GodotClass
export class Light2D extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Light2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_enabled() {
    if (!this._bindings.method_set_enabled) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("set_enabled");
      this._bindings.method_set_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_enabled() {
    if (!this._bindings.method_is_enabled) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("is_enabled");
      this._bindings.method_is_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_editor_only() {
    if (!this._bindings.method_set_editor_only) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("set_editor_only");
      this._bindings.method_set_editor_only = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_editor_only() {
    if (!this._bindings.method_is_editor_only) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("is_editor_only");
      this._bindings.method_is_editor_only = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_color() {
    if (!this._bindings.method_set_color) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("set_color");
      this._bindings.method_set_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_color() {
    if (!this._bindings.method_get_color) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("get_color");
      this._bindings.method_get_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_energy() {
    if (!this._bindings.method_set_energy) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("set_energy");
      this._bindings.method_set_energy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_energy() {
    if (!this._bindings.method_get_energy) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("get_energy");
      this._bindings.method_get_energy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_z_range_min() {
    if (!this._bindings.method_set_z_range_min) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("set_z_range_min");
      this._bindings.method_set_z_range_min = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_z_range_min() {
    if (!this._bindings.method_get_z_range_min) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("get_z_range_min");
      this._bindings.method_get_z_range_min = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_z_range_max() {
    if (!this._bindings.method_set_z_range_max) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("set_z_range_max");
      this._bindings.method_set_z_range_max = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_z_range_max() {
    if (!this._bindings.method_get_z_range_max) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("get_z_range_max");
      this._bindings.method_get_z_range_max = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_layer_range_min() {
    if (!this._bindings.method_set_layer_range_min) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("set_layer_range_min");
      this._bindings.method_set_layer_range_min = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_layer_range_min() {
    if (!this._bindings.method_get_layer_range_min) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("get_layer_range_min");
      this._bindings.method_get_layer_range_min = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_layer_range_max() {
    if (!this._bindings.method_set_layer_range_max) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("set_layer_range_max");
      this._bindings.method_set_layer_range_max = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_layer_range_max() {
    if (!this._bindings.method_get_layer_range_max) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("get_layer_range_max");
      this._bindings.method_get_layer_range_max = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_item_cull_mask() {
    if (!this._bindings.method_set_item_cull_mask) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("set_item_cull_mask");
      this._bindings.method_set_item_cull_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_item_cull_mask() {
    if (!this._bindings.method_get_item_cull_mask) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("get_item_cull_mask");
      this._bindings.method_get_item_cull_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_item_shadow_cull_mask() {
    if (!this._bindings.method_set_item_shadow_cull_mask) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("set_item_shadow_cull_mask");
      this._bindings.method_set_item_shadow_cull_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_item_shadow_cull_mask() {
    if (!this._bindings.method_get_item_shadow_cull_mask) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("get_item_shadow_cull_mask");
      this._bindings.method_get_item_shadow_cull_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_shadow_enabled() {
    if (!this._bindings.method_set_shadow_enabled) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("set_shadow_enabled");
      this._bindings.method_set_shadow_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_shadow_enabled() {
    if (!this._bindings.method_is_shadow_enabled) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("is_shadow_enabled");
      this._bindings.method_is_shadow_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_shadow_smooth() {
    if (!this._bindings.method_set_shadow_smooth) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("set_shadow_smooth");
      this._bindings.method_set_shadow_smooth = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_shadow_smooth() {
    if (!this._bindings.method_get_shadow_smooth) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("get_shadow_smooth");
      this._bindings.method_get_shadow_smooth = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_shadow_filter() {
    if (!this._bindings.method_set_shadow_filter) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("set_shadow_filter");
      this._bindings.method_set_shadow_filter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3209356555
      );
    }
  }
  static init_method_get_shadow_filter() {
    if (!this._bindings.method_get_shadow_filter) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("get_shadow_filter");
      this._bindings.method_get_shadow_filter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1973619177
      );
    }
  }
  static init_method_set_shadow_color() {
    if (!this._bindings.method_set_shadow_color) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("set_shadow_color");
      this._bindings.method_set_shadow_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_shadow_color() {
    if (!this._bindings.method_get_shadow_color) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("get_shadow_color");
      this._bindings.method_get_shadow_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_blend_mode() {
    if (!this._bindings.method_set_blend_mode) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("set_blend_mode");
      this._bindings.method_set_blend_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2916638796
      );
    }
  }
  static init_method_get_blend_mode() {
    if (!this._bindings.method_get_blend_mode) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("get_blend_mode");
      this._bindings.method_get_blend_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        936255250
      );
    }
  }
  static init_method_set_height() {
    if (!this._bindings.method_set_height) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("set_height");
      this._bindings.method_set_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_height() {
    if (!this._bindings.method_get_height) {
      let classname = new StringName("Light2D");
      let methodname = new StringName("get_height");
      this._bindings.method_get_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  set_enabled(_enabled) {
    Light2D.init_method_set_enabled();
    return _call_native_mb_no_ret(
      Light2D._bindings.method_set_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_enabled() {
    Light2D.init_method_is_enabled();
    return _call_native_mb_ret(
      Light2D._bindings.method_is_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_editor_only(_editor_only) {
    Light2D.init_method_set_editor_only();
    return _call_native_mb_no_ret(
      Light2D._bindings.method_set_editor_only,
      this._owner,
      _editor_only
    );
    
  }
  is_editor_only() {
    Light2D.init_method_is_editor_only();
    return _call_native_mb_ret(
      Light2D._bindings.method_is_editor_only,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_color(_color) {
    Light2D.init_method_set_color();
    return _call_native_mb_no_ret(
      Light2D._bindings.method_set_color,
      this._owner,
      _color
    );
    
  }
  get_color() {
    Light2D.init_method_get_color();
    return _call_native_mb_ret(
      Light2D._bindings.method_get_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_energy(_energy) {
    Light2D.init_method_set_energy();
    return _call_native_mb_no_ret(
      Light2D._bindings.method_set_energy,
      this._owner,
      _energy
    );
    
  }
  get_energy() {
    Light2D.init_method_get_energy();
    return _call_native_mb_ret(
      Light2D._bindings.method_get_energy,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_z_range_min(_z) {
    Light2D.init_method_set_z_range_min();
    return _call_native_mb_no_ret(
      Light2D._bindings.method_set_z_range_min,
      this._owner,
      _z
    );
    
  }
  get_z_range_min() {
    Light2D.init_method_get_z_range_min();
    return _call_native_mb_ret(
      Light2D._bindings.method_get_z_range_min,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_z_range_max(_z) {
    Light2D.init_method_set_z_range_max();
    return _call_native_mb_no_ret(
      Light2D._bindings.method_set_z_range_max,
      this._owner,
      _z
    );
    
  }
  get_z_range_max() {
    Light2D.init_method_get_z_range_max();
    return _call_native_mb_ret(
      Light2D._bindings.method_get_z_range_max,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_layer_range_min(_layer) {
    Light2D.init_method_set_layer_range_min();
    return _call_native_mb_no_ret(
      Light2D._bindings.method_set_layer_range_min,
      this._owner,
      _layer
    );
    
  }
  get_layer_range_min() {
    Light2D.init_method_get_layer_range_min();
    return _call_native_mb_ret(
      Light2D._bindings.method_get_layer_range_min,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_layer_range_max(_layer) {
    Light2D.init_method_set_layer_range_max();
    return _call_native_mb_no_ret(
      Light2D._bindings.method_set_layer_range_max,
      this._owner,
      _layer
    );
    
  }
  get_layer_range_max() {
    Light2D.init_method_get_layer_range_max();
    return _call_native_mb_ret(
      Light2D._bindings.method_get_layer_range_max,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_item_cull_mask(_item_cull_mask) {
    Light2D.init_method_set_item_cull_mask();
    return _call_native_mb_no_ret(
      Light2D._bindings.method_set_item_cull_mask,
      this._owner,
      _item_cull_mask
    );
    
  }
  get_item_cull_mask() {
    Light2D.init_method_get_item_cull_mask();
    return _call_native_mb_ret(
      Light2D._bindings.method_get_item_cull_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_item_shadow_cull_mask(_item_shadow_cull_mask) {
    Light2D.init_method_set_item_shadow_cull_mask();
    return _call_native_mb_no_ret(
      Light2D._bindings.method_set_item_shadow_cull_mask,
      this._owner,
      _item_shadow_cull_mask
    );
    
  }
  get_item_shadow_cull_mask() {
    Light2D.init_method_get_item_shadow_cull_mask();
    return _call_native_mb_ret(
      Light2D._bindings.method_get_item_shadow_cull_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_shadow_enabled(_enabled) {
    Light2D.init_method_set_shadow_enabled();
    return _call_native_mb_no_ret(
      Light2D._bindings.method_set_shadow_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_shadow_enabled() {
    Light2D.init_method_is_shadow_enabled();
    return _call_native_mb_ret(
      Light2D._bindings.method_is_shadow_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_shadow_smooth(_smooth) {
    Light2D.init_method_set_shadow_smooth();
    return _call_native_mb_no_ret(
      Light2D._bindings.method_set_shadow_smooth,
      this._owner,
      _smooth
    );
    
  }
  get_shadow_smooth() {
    Light2D.init_method_get_shadow_smooth();
    return _call_native_mb_ret(
      Light2D._bindings.method_get_shadow_smooth,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_shadow_filter(_filter) {
    Light2D.init_method_set_shadow_filter();
    return _call_native_mb_no_ret(
      Light2D._bindings.method_set_shadow_filter,
      this._owner,
      _filter
    );
    
  }
  get_shadow_filter() {
    Light2D.init_method_get_shadow_filter();
    return _call_native_mb_ret(
      Light2D._bindings.method_get_shadow_filter,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_shadow_color(_shadow_color) {
    Light2D.init_method_set_shadow_color();
    return _call_native_mb_no_ret(
      Light2D._bindings.method_set_shadow_color,
      this._owner,
      _shadow_color
    );
    
  }
  get_shadow_color() {
    Light2D.init_method_get_shadow_color();
    return _call_native_mb_ret(
      Light2D._bindings.method_get_shadow_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_blend_mode(_mode) {
    Light2D.init_method_set_blend_mode();
    return _call_native_mb_no_ret(
      Light2D._bindings.method_set_blend_mode,
      this._owner,
      _mode
    );
    
  }
  get_blend_mode() {
    Light2D.init_method_get_blend_mode();
    return _call_native_mb_ret(
      Light2D._bindings.method_get_blend_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_height(_height) {
    Light2D.init_method_set_height();
    return _call_native_mb_no_ret(
      Light2D._bindings.method_set_height,
      this._owner,
      _height
    );
    
  }
  get_height() {
    Light2D.init_method_get_height();
    return _call_native_mb_ret(
      Light2D._bindings.method_get_height,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get enabled () {
  return this.is_enabled();
}
set enabled (new_value) {
  this.set_enabled(new_value);
}
get editor_only () {
  return this.is_editor_only();
}
set editor_only (new_value) {
  this.set_editor_only(new_value);
}
get color () {
  return this.get_color();
}
set color (new_value) {
  this.set_color(new_value);
}
get energy () {
  return this.get_energy();
}
set energy (new_value) {
  this.set_energy(new_value);
}
get blend_mode () {
  return this.get_blend_mode();
}
set blend_mode (new_value) {
  this.set_blend_mode(new_value);
}
get range_z_min () {
  return this.get_z_range_min();
}
set range_z_min (new_value) {
  this.set_z_range_min(new_value);
}
get range_z_max () {
  return this.get_z_range_max();
}
set range_z_max (new_value) {
  this.set_z_range_max(new_value);
}
get range_layer_min () {
  return this.get_layer_range_min();
}
set range_layer_min (new_value) {
  this.set_layer_range_min(new_value);
}
get range_layer_max () {
  return this.get_layer_range_max();
}
set range_layer_max (new_value) {
  this.set_layer_range_max(new_value);
}
get range_item_cull_mask () {
  return this.get_item_cull_mask();
}
set range_item_cull_mask (new_value) {
  this.set_item_cull_mask(new_value);
}
get shadow_enabled () {
  return this.is_shadow_enabled();
}
set shadow_enabled (new_value) {
  this.set_shadow_enabled(new_value);
}
get shadow_color () {
  return this.get_shadow_color();
}
set shadow_color (new_value) {
  this.set_shadow_color(new_value);
}
get shadow_filter () {
  return this.get_shadow_filter();
}
set shadow_filter (new_value) {
  this.set_shadow_filter(new_value);
}
get shadow_filter_smooth () {
  return this.get_shadow_smooth();
}
set shadow_filter_smooth (new_value) {
  this.set_shadow_smooth(new_value);
}
get shadow_item_cull_mask () {
  return this.get_item_shadow_cull_mask();
}
set shadow_item_cull_mask (new_value) {
  this.set_item_shadow_cull_mask(new_value);
}

  static ShadowFilter = {
    SHADOW_FILTER_NONE: 0,
    SHADOW_FILTER_PCF5: 1,
    SHADOW_FILTER_PCF13: 2,
  }
  static BlendMode = {
    BLEND_MODE_ADD: 0,
    BLEND_MODE_SUB: 1,
    BLEND_MODE_MIX: 2,
  }
}