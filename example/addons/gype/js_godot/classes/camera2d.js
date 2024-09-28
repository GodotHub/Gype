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
  method_set_offset;
  method_get_offset;
  method_set_anchor_mode;
  method_get_anchor_mode;
  method_set_ignore_rotation;
  method_is_ignoring_rotation;
  method_set_process_callback;
  method_get_process_callback;
  method_set_enabled;
  method_is_enabled;
  method_make_current;
  method_is_current;
  method_set_limit;
  method_get_limit;
  method_set_limit_smoothing_enabled;
  method_is_limit_smoothing_enabled;
  method_set_drag_vertical_enabled;
  method_is_drag_vertical_enabled;
  method_set_drag_horizontal_enabled;
  method_is_drag_horizontal_enabled;
  method_set_drag_vertical_offset;
  method_get_drag_vertical_offset;
  method_set_drag_horizontal_offset;
  method_get_drag_horizontal_offset;
  method_set_drag_margin;
  method_get_drag_margin;
  method_get_target_position;
  method_get_screen_center_position;
  method_set_zoom;
  method_get_zoom;
  method_set_custom_viewport;
  method_get_custom_viewport;
  method_set_position_smoothing_speed;
  method_get_position_smoothing_speed;
  method_set_position_smoothing_enabled;
  method_is_position_smoothing_enabled;
  method_set_rotation_smoothing_enabled;
  method_is_rotation_smoothing_enabled;
  method_set_rotation_smoothing_speed;
  method_get_rotation_smoothing_speed;
  method_force_update_scroll;
  method_reset_smoothing;
  method_align;
  method_set_screen_drawing_enabled;
  method_is_screen_drawing_enabled;
  method_set_limit_drawing_enabled;
  method_is_limit_drawing_enabled;
  method_set_margin_drawing_enabled;
  method_is_margin_drawing_enabled;
}
@GodotClass
export class Camera2D extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Camera2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_offset() {
    if (!this._bindings.method_set_offset) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("set_offset");
      this._bindings.method_set_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_offset() {
    if (!this._bindings.method_get_offset) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("get_offset");
      this._bindings.method_get_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_anchor_mode() {
    if (!this._bindings.method_set_anchor_mode) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("set_anchor_mode");
      this._bindings.method_set_anchor_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2050398218
      );
    }
  }
  static init_method_get_anchor_mode() {
    if (!this._bindings.method_get_anchor_mode) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("get_anchor_mode");
      this._bindings.method_get_anchor_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        155978067
      );
    }
  }
  static init_method_set_ignore_rotation() {
    if (!this._bindings.method_set_ignore_rotation) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("set_ignore_rotation");
      this._bindings.method_set_ignore_rotation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_ignoring_rotation() {
    if (!this._bindings.method_is_ignoring_rotation) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("is_ignoring_rotation");
      this._bindings.method_is_ignoring_rotation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_process_callback() {
    if (!this._bindings.method_set_process_callback) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("set_process_callback");
      this._bindings.method_set_process_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4201947462
      );
    }
  }
  static init_method_get_process_callback() {
    if (!this._bindings.method_get_process_callback) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("get_process_callback");
      this._bindings.method_get_process_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2325344499
      );
    }
  }
  static init_method_set_enabled() {
    if (!this._bindings.method_set_enabled) {
      let classname = new StringName("Camera2D");
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
      let classname = new StringName("Camera2D");
      let methodname = new StringName("is_enabled");
      this._bindings.method_is_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_make_current() {
    if (!this._bindings.method_make_current) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("make_current");
      this._bindings.method_make_current = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_is_current() {
    if (!this._bindings.method_is_current) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("is_current");
      this._bindings.method_is_current = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_limit() {
    if (!this._bindings.method_set_limit) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("set_limit");
      this._bindings.method_set_limit = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        437707142
      );
    }
  }
  static init_method_get_limit() {
    if (!this._bindings.method_get_limit) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("get_limit");
      this._bindings.method_get_limit = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1983885014
      );
    }
  }
  static init_method_set_limit_smoothing_enabled() {
    if (!this._bindings.method_set_limit_smoothing_enabled) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("set_limit_smoothing_enabled");
      this._bindings.method_set_limit_smoothing_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_limit_smoothing_enabled() {
    if (!this._bindings.method_is_limit_smoothing_enabled) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("is_limit_smoothing_enabled");
      this._bindings.method_is_limit_smoothing_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_drag_vertical_enabled() {
    if (!this._bindings.method_set_drag_vertical_enabled) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("set_drag_vertical_enabled");
      this._bindings.method_set_drag_vertical_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_drag_vertical_enabled() {
    if (!this._bindings.method_is_drag_vertical_enabled) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("is_drag_vertical_enabled");
      this._bindings.method_is_drag_vertical_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_drag_horizontal_enabled() {
    if (!this._bindings.method_set_drag_horizontal_enabled) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("set_drag_horizontal_enabled");
      this._bindings.method_set_drag_horizontal_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_drag_horizontal_enabled() {
    if (!this._bindings.method_is_drag_horizontal_enabled) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("is_drag_horizontal_enabled");
      this._bindings.method_is_drag_horizontal_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_drag_vertical_offset() {
    if (!this._bindings.method_set_drag_vertical_offset) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("set_drag_vertical_offset");
      this._bindings.method_set_drag_vertical_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_drag_vertical_offset() {
    if (!this._bindings.method_get_drag_vertical_offset) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("get_drag_vertical_offset");
      this._bindings.method_get_drag_vertical_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_drag_horizontal_offset() {
    if (!this._bindings.method_set_drag_horizontal_offset) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("set_drag_horizontal_offset");
      this._bindings.method_set_drag_horizontal_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_drag_horizontal_offset() {
    if (!this._bindings.method_get_drag_horizontal_offset) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("get_drag_horizontal_offset");
      this._bindings.method_get_drag_horizontal_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_drag_margin() {
    if (!this._bindings.method_set_drag_margin) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("set_drag_margin");
      this._bindings.method_set_drag_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4290182280
      );
    }
  }
  static init_method_get_drag_margin() {
    if (!this._bindings.method_get_drag_margin) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("get_drag_margin");
      this._bindings.method_get_drag_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2869120046
      );
    }
  }
  static init_method_get_target_position() {
    if (!this._bindings.method_get_target_position) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("get_target_position");
      this._bindings.method_get_target_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_get_screen_center_position() {
    if (!this._bindings.method_get_screen_center_position) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("get_screen_center_position");
      this._bindings.method_get_screen_center_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_zoom() {
    if (!this._bindings.method_set_zoom) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("set_zoom");
      this._bindings.method_set_zoom = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_zoom() {
    if (!this._bindings.method_get_zoom) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("get_zoom");
      this._bindings.method_get_zoom = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_custom_viewport() {
    if (!this._bindings.method_set_custom_viewport) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("set_custom_viewport");
      this._bindings.method_set_custom_viewport = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1078189570
      );
    }
  }
  static init_method_get_custom_viewport() {
    if (!this._bindings.method_get_custom_viewport) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("get_custom_viewport");
      this._bindings.method_get_custom_viewport = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3160264692
      );
    }
  }
  static init_method_set_position_smoothing_speed() {
    if (!this._bindings.method_set_position_smoothing_speed) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("set_position_smoothing_speed");
      this._bindings.method_set_position_smoothing_speed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_position_smoothing_speed() {
    if (!this._bindings.method_get_position_smoothing_speed) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("get_position_smoothing_speed");
      this._bindings.method_get_position_smoothing_speed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_position_smoothing_enabled() {
    if (!this._bindings.method_set_position_smoothing_enabled) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("set_position_smoothing_enabled");
      this._bindings.method_set_position_smoothing_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_position_smoothing_enabled() {
    if (!this._bindings.method_is_position_smoothing_enabled) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("is_position_smoothing_enabled");
      this._bindings.method_is_position_smoothing_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_rotation_smoothing_enabled() {
    if (!this._bindings.method_set_rotation_smoothing_enabled) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("set_rotation_smoothing_enabled");
      this._bindings.method_set_rotation_smoothing_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_rotation_smoothing_enabled() {
    if (!this._bindings.method_is_rotation_smoothing_enabled) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("is_rotation_smoothing_enabled");
      this._bindings.method_is_rotation_smoothing_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_rotation_smoothing_speed() {
    if (!this._bindings.method_set_rotation_smoothing_speed) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("set_rotation_smoothing_speed");
      this._bindings.method_set_rotation_smoothing_speed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_rotation_smoothing_speed() {
    if (!this._bindings.method_get_rotation_smoothing_speed) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("get_rotation_smoothing_speed");
      this._bindings.method_get_rotation_smoothing_speed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_force_update_scroll() {
    if (!this._bindings.method_force_update_scroll) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("force_update_scroll");
      this._bindings.method_force_update_scroll = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_reset_smoothing() {
    if (!this._bindings.method_reset_smoothing) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("reset_smoothing");
      this._bindings.method_reset_smoothing = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_align() {
    if (!this._bindings.method_align) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("align");
      this._bindings.method_align = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_screen_drawing_enabled() {
    if (!this._bindings.method_set_screen_drawing_enabled) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("set_screen_drawing_enabled");
      this._bindings.method_set_screen_drawing_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_screen_drawing_enabled() {
    if (!this._bindings.method_is_screen_drawing_enabled) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("is_screen_drawing_enabled");
      this._bindings.method_is_screen_drawing_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_limit_drawing_enabled() {
    if (!this._bindings.method_set_limit_drawing_enabled) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("set_limit_drawing_enabled");
      this._bindings.method_set_limit_drawing_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_limit_drawing_enabled() {
    if (!this._bindings.method_is_limit_drawing_enabled) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("is_limit_drawing_enabled");
      this._bindings.method_is_limit_drawing_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_margin_drawing_enabled() {
    if (!this._bindings.method_set_margin_drawing_enabled) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("set_margin_drawing_enabled");
      this._bindings.method_set_margin_drawing_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_margin_drawing_enabled() {
    if (!this._bindings.method_is_margin_drawing_enabled) {
      let classname = new StringName("Camera2D");
      let methodname = new StringName("is_margin_drawing_enabled");
      this._bindings.method_is_margin_drawing_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_offset(_offset) {
    Camera2D.init_method_set_offset();
    return _call_native_mb_no_ret(
      Camera2D._bindings.method_set_offset,
      this._owner,
      _offset
    );
    
  }
  get_offset() {
    Camera2D.init_method_get_offset();
    return _call_native_mb_ret(
      Camera2D._bindings.method_get_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_anchor_mode(_anchor_mode) {
    Camera2D.init_method_set_anchor_mode();
    return _call_native_mb_no_ret(
      Camera2D._bindings.method_set_anchor_mode,
      this._owner,
      _anchor_mode
    );
    
  }
  get_anchor_mode() {
    Camera2D.init_method_get_anchor_mode();
    return _call_native_mb_ret(
      Camera2D._bindings.method_get_anchor_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_ignore_rotation(_ignore) {
    Camera2D.init_method_set_ignore_rotation();
    return _call_native_mb_no_ret(
      Camera2D._bindings.method_set_ignore_rotation,
      this._owner,
      _ignore
    );
    
  }
  is_ignoring_rotation() {
    Camera2D.init_method_is_ignoring_rotation();
    return _call_native_mb_ret(
      Camera2D._bindings.method_is_ignoring_rotation,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_process_callback(_mode) {
    Camera2D.init_method_set_process_callback();
    return _call_native_mb_no_ret(
      Camera2D._bindings.method_set_process_callback,
      this._owner,
      _mode
    );
    
  }
  get_process_callback() {
    Camera2D.init_method_get_process_callback();
    return _call_native_mb_ret(
      Camera2D._bindings.method_get_process_callback,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_enabled(_enabled) {
    Camera2D.init_method_set_enabled();
    return _call_native_mb_no_ret(
      Camera2D._bindings.method_set_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_enabled() {
    Camera2D.init_method_is_enabled();
    return _call_native_mb_ret(
      Camera2D._bindings.method_is_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  make_current() {
    Camera2D.init_method_make_current();
    return _call_native_mb_no_ret(
      Camera2D._bindings.method_make_current,
      this._owner,
      
    );
    
  }
  is_current() {
    Camera2D.init_method_is_current();
    return _call_native_mb_ret(
      Camera2D._bindings.method_is_current,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_limit(_margin, _limit) {
    Camera2D.init_method_set_limit();
    return _call_native_mb_no_ret(
      Camera2D._bindings.method_set_limit,
      this._owner,
      _margin, _limit
    );
    
  }
  get_limit(_margin) {
    Camera2D.init_method_get_limit();
    return _call_native_mb_ret(
      Camera2D._bindings.method_get_limit,
      this._owner,
			Variant.Type.INT,
    
      _margin
    );
    
  }
  set_limit_smoothing_enabled(_limit_smoothing_enabled) {
    Camera2D.init_method_set_limit_smoothing_enabled();
    return _call_native_mb_no_ret(
      Camera2D._bindings.method_set_limit_smoothing_enabled,
      this._owner,
      _limit_smoothing_enabled
    );
    
  }
  is_limit_smoothing_enabled() {
    Camera2D.init_method_is_limit_smoothing_enabled();
    return _call_native_mb_ret(
      Camera2D._bindings.method_is_limit_smoothing_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_drag_vertical_enabled(_enabled) {
    Camera2D.init_method_set_drag_vertical_enabled();
    return _call_native_mb_no_ret(
      Camera2D._bindings.method_set_drag_vertical_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_drag_vertical_enabled() {
    Camera2D.init_method_is_drag_vertical_enabled();
    return _call_native_mb_ret(
      Camera2D._bindings.method_is_drag_vertical_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_drag_horizontal_enabled(_enabled) {
    Camera2D.init_method_set_drag_horizontal_enabled();
    return _call_native_mb_no_ret(
      Camera2D._bindings.method_set_drag_horizontal_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_drag_horizontal_enabled() {
    Camera2D.init_method_is_drag_horizontal_enabled();
    return _call_native_mb_ret(
      Camera2D._bindings.method_is_drag_horizontal_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_drag_vertical_offset(_offset) {
    Camera2D.init_method_set_drag_vertical_offset();
    return _call_native_mb_no_ret(
      Camera2D._bindings.method_set_drag_vertical_offset,
      this._owner,
      _offset
    );
    
  }
  get_drag_vertical_offset() {
    Camera2D.init_method_get_drag_vertical_offset();
    return _call_native_mb_ret(
      Camera2D._bindings.method_get_drag_vertical_offset,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_drag_horizontal_offset(_offset) {
    Camera2D.init_method_set_drag_horizontal_offset();
    return _call_native_mb_no_ret(
      Camera2D._bindings.method_set_drag_horizontal_offset,
      this._owner,
      _offset
    );
    
  }
  get_drag_horizontal_offset() {
    Camera2D.init_method_get_drag_horizontal_offset();
    return _call_native_mb_ret(
      Camera2D._bindings.method_get_drag_horizontal_offset,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_drag_margin(_margin, _drag_margin) {
    Camera2D.init_method_set_drag_margin();
    return _call_native_mb_no_ret(
      Camera2D._bindings.method_set_drag_margin,
      this._owner,
      _margin, _drag_margin
    );
    
  }
  get_drag_margin(_margin) {
    Camera2D.init_method_get_drag_margin();
    return _call_native_mb_ret(
      Camera2D._bindings.method_get_drag_margin,
      this._owner,
			Variant.Type.FLOAT,
    
      _margin
    );
    
  }
  get_target_position() {
    Camera2D.init_method_get_target_position();
    return _call_native_mb_ret(
      Camera2D._bindings.method_get_target_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_screen_center_position() {
    Camera2D.init_method_get_screen_center_position();
    return _call_native_mb_ret(
      Camera2D._bindings.method_get_screen_center_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_zoom(_zoom) {
    Camera2D.init_method_set_zoom();
    return _call_native_mb_no_ret(
      Camera2D._bindings.method_set_zoom,
      this._owner,
      _zoom
    );
    
  }
  get_zoom() {
    Camera2D.init_method_get_zoom();
    return _call_native_mb_ret(
      Camera2D._bindings.method_get_zoom,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_custom_viewport(_viewport) {
    Camera2D.init_method_set_custom_viewport();
    return _call_native_mb_no_ret(
      Camera2D._bindings.method_set_custom_viewport,
      this._owner,
      _viewport
    );
    
  }
  get_custom_viewport() {
    Camera2D.init_method_get_custom_viewport();
    return _call_native_mb_ret(
      Camera2D._bindings.method_get_custom_viewport,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_position_smoothing_speed(_position_smoothing_speed) {
    Camera2D.init_method_set_position_smoothing_speed();
    return _call_native_mb_no_ret(
      Camera2D._bindings.method_set_position_smoothing_speed,
      this._owner,
      _position_smoothing_speed
    );
    
  }
  get_position_smoothing_speed() {
    Camera2D.init_method_get_position_smoothing_speed();
    return _call_native_mb_ret(
      Camera2D._bindings.method_get_position_smoothing_speed,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_position_smoothing_enabled(_position_smoothing_speed) {
    Camera2D.init_method_set_position_smoothing_enabled();
    return _call_native_mb_no_ret(
      Camera2D._bindings.method_set_position_smoothing_enabled,
      this._owner,
      _position_smoothing_speed
    );
    
  }
  is_position_smoothing_enabled() {
    Camera2D.init_method_is_position_smoothing_enabled();
    return _call_native_mb_ret(
      Camera2D._bindings.method_is_position_smoothing_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_rotation_smoothing_enabled(_enabled) {
    Camera2D.init_method_set_rotation_smoothing_enabled();
    return _call_native_mb_no_ret(
      Camera2D._bindings.method_set_rotation_smoothing_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_rotation_smoothing_enabled() {
    Camera2D.init_method_is_rotation_smoothing_enabled();
    return _call_native_mb_ret(
      Camera2D._bindings.method_is_rotation_smoothing_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_rotation_smoothing_speed(_speed) {
    Camera2D.init_method_set_rotation_smoothing_speed();
    return _call_native_mb_no_ret(
      Camera2D._bindings.method_set_rotation_smoothing_speed,
      this._owner,
      _speed
    );
    
  }
  get_rotation_smoothing_speed() {
    Camera2D.init_method_get_rotation_smoothing_speed();
    return _call_native_mb_ret(
      Camera2D._bindings.method_get_rotation_smoothing_speed,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  force_update_scroll() {
    Camera2D.init_method_force_update_scroll();
    return _call_native_mb_no_ret(
      Camera2D._bindings.method_force_update_scroll,
      this._owner,
      
    );
    
  }
  reset_smoothing() {
    Camera2D.init_method_reset_smoothing();
    return _call_native_mb_no_ret(
      Camera2D._bindings.method_reset_smoothing,
      this._owner,
      
    );
    
  }
  align() {
    Camera2D.init_method_align();
    return _call_native_mb_no_ret(
      Camera2D._bindings.method_align,
      this._owner,
      
    );
    
  }
  set_screen_drawing_enabled(_screen_drawing_enabled) {
    Camera2D.init_method_set_screen_drawing_enabled();
    return _call_native_mb_no_ret(
      Camera2D._bindings.method_set_screen_drawing_enabled,
      this._owner,
      _screen_drawing_enabled
    );
    
  }
  is_screen_drawing_enabled() {
    Camera2D.init_method_is_screen_drawing_enabled();
    return _call_native_mb_ret(
      Camera2D._bindings.method_is_screen_drawing_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_limit_drawing_enabled(_limit_drawing_enabled) {
    Camera2D.init_method_set_limit_drawing_enabled();
    return _call_native_mb_no_ret(
      Camera2D._bindings.method_set_limit_drawing_enabled,
      this._owner,
      _limit_drawing_enabled
    );
    
  }
  is_limit_drawing_enabled() {
    Camera2D.init_method_is_limit_drawing_enabled();
    return _call_native_mb_ret(
      Camera2D._bindings.method_is_limit_drawing_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_margin_drawing_enabled(_margin_drawing_enabled) {
    Camera2D.init_method_set_margin_drawing_enabled();
    return _call_native_mb_no_ret(
      Camera2D._bindings.method_set_margin_drawing_enabled,
      this._owner,
      _margin_drawing_enabled
    );
    
  }
  is_margin_drawing_enabled() {
    Camera2D.init_method_is_margin_drawing_enabled();
    return _call_native_mb_ret(
      Camera2D._bindings.method_is_margin_drawing_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get offset () {
  return this.get_offset();
}
set offset (new_value) {
  this.set_offset(new_value);
}
get anchor_mode () {
  return this.get_anchor_mode();
}
set anchor_mode (new_value) {
  this.set_anchor_mode(new_value);
}
get ignore_rotation () {
  return this.is_ignoring_rotation();
}
set ignore_rotation (new_value) {
  this.set_ignore_rotation(new_value);
}
get enabled () {
  return this.is_enabled();
}
set enabled (new_value) {
  this.set_enabled(new_value);
}
get zoom () {
  return this.get_zoom();
}
set zoom (new_value) {
  this.set_zoom(new_value);
}
get custom_viewport () {
  return this.get_custom_viewport();
}
set custom_viewport (new_value) {
  this.set_custom_viewport(new_value);
}
get process_callback () {
  return this.get_process_callback();
}
set process_callback (new_value) {
  this.set_process_callback(new_value);
}
get limit_left () {
  return this.get_limit();
}
set limit_left (new_value) {
  this.set_limit(new_value);
}
get limit_top () {
  return this.get_limit();
}
set limit_top (new_value) {
  this.set_limit(new_value);
}
get limit_right () {
  return this.get_limit();
}
set limit_right (new_value) {
  this.set_limit(new_value);
}
get limit_bottom () {
  return this.get_limit();
}
set limit_bottom (new_value) {
  this.set_limit(new_value);
}
get limit_smoothed () {
  return this.is_limit_smoothing_enabled();
}
set limit_smoothed (new_value) {
  this.set_limit_smoothing_enabled(new_value);
}
get position_smoothing_enabled () {
  return this.is_position_smoothing_enabled();
}
set position_smoothing_enabled (new_value) {
  this.set_position_smoothing_enabled(new_value);
}
get position_smoothing_speed () {
  return this.get_position_smoothing_speed();
}
set position_smoothing_speed (new_value) {
  this.set_position_smoothing_speed(new_value);
}
get rotation_smoothing_enabled () {
  return this.is_rotation_smoothing_enabled();
}
set rotation_smoothing_enabled (new_value) {
  this.set_rotation_smoothing_enabled(new_value);
}
get rotation_smoothing_speed () {
  return this.get_rotation_smoothing_speed();
}
set rotation_smoothing_speed (new_value) {
  this.set_rotation_smoothing_speed(new_value);
}
get drag_horizontal_enabled () {
  return this.is_drag_horizontal_enabled();
}
set drag_horizontal_enabled (new_value) {
  this.set_drag_horizontal_enabled(new_value);
}
get drag_vertical_enabled () {
  return this.is_drag_vertical_enabled();
}
set drag_vertical_enabled (new_value) {
  this.set_drag_vertical_enabled(new_value);
}
get drag_horizontal_offset () {
  return this.get_drag_horizontal_offset();
}
set drag_horizontal_offset (new_value) {
  this.set_drag_horizontal_offset(new_value);
}
get drag_vertical_offset () {
  return this.get_drag_vertical_offset();
}
set drag_vertical_offset (new_value) {
  this.set_drag_vertical_offset(new_value);
}
get drag_left_margin () {
  return this.get_drag_margin();
}
set drag_left_margin (new_value) {
  this.set_drag_margin(new_value);
}
get drag_top_margin () {
  return this.get_drag_margin();
}
set drag_top_margin (new_value) {
  this.set_drag_margin(new_value);
}
get drag_right_margin () {
  return this.get_drag_margin();
}
set drag_right_margin (new_value) {
  this.set_drag_margin(new_value);
}
get drag_bottom_margin () {
  return this.get_drag_margin();
}
set drag_bottom_margin (new_value) {
  this.set_drag_margin(new_value);
}
get editor_draw_screen () {
  return this.is_screen_drawing_enabled();
}
set editor_draw_screen (new_value) {
  this.set_screen_drawing_enabled(new_value);
}
get editor_draw_limits () {
  return this.is_limit_drawing_enabled();
}
set editor_draw_limits (new_value) {
  this.set_limit_drawing_enabled(new_value);
}
get editor_draw_drag_margin () {
  return this.is_margin_drawing_enabled();
}
set editor_draw_drag_margin (new_value) {
  this.set_margin_drawing_enabled(new_value);
}

  static AnchorMode = {
    ANCHOR_MODE_FIXED_TOP_LEFT: 0,
    ANCHOR_MODE_DRAG_CENTER: 1,
  }
  static Camera2DProcessCallback = {
    CAMERA2D_PROCESS_PHYSICS: 0,
    CAMERA2D_PROCESS_IDLE: 1,
  }
}