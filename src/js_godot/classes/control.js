import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { CanvasItem } from '@js_godot/classes/canvas_item'
import { NodePath } from '@js_godot/variant/node_path'
import { Variant } from '@js_godot/variant/variant'
import { Color } from '@js_godot/variant/color'
import { Vector2 } from '@js_godot/variant/vector2'
import { StringName } from '@js_godot/variant/string_name'
import { Rect2 } from '@js_godot/variant/rect2'
import { Callable } from '@js_godot/variant/callable'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_accept_event;
  method_get_minimum_size;
  method_get_combined_minimum_size;
  method_set_anchors_preset;
  method_set_offsets_preset;
  method_set_anchors_and_offsets_preset;
  method_set_anchor;
  method_get_anchor;
  method_set_offset;
  method_get_offset;
  method_set_anchor_and_offset;
  method_set_begin;
  method_set_end;
  method_set_position;
  method_set_size;
  method_reset_size;
  method_set_custom_minimum_size;
  method_set_global_position;
  method_set_rotation;
  method_set_rotation_degrees;
  method_set_scale;
  method_set_pivot_offset;
  method_get_begin;
  method_get_end;
  method_get_position;
  method_get_size;
  method_get_rotation;
  method_get_rotation_degrees;
  method_get_scale;
  method_get_pivot_offset;
  method_get_custom_minimum_size;
  method_get_parent_area_size;
  method_get_global_position;
  method_get_screen_position;
  method_get_rect;
  method_get_global_rect;
  method_set_focus_mode;
  method_get_focus_mode;
  method_has_focus;
  method_grab_focus;
  method_release_focus;
  method_find_prev_valid_focus;
  method_find_next_valid_focus;
  method_find_valid_focus_neighbor;
  method_set_h_size_flags;
  method_get_h_size_flags;
  method_set_stretch_ratio;
  method_get_stretch_ratio;
  method_set_v_size_flags;
  method_get_v_size_flags;
  method_set_theme;
  method_get_theme;
  method_set_theme_type_variation;
  method_get_theme_type_variation;
  method_begin_bulk_theme_override;
  method_end_bulk_theme_override;
  method_add_theme_icon_override;
  method_add_theme_stylebox_override;
  method_add_theme_font_override;
  method_add_theme_font_size_override;
  method_add_theme_color_override;
  method_add_theme_constant_override;
  method_remove_theme_icon_override;
  method_remove_theme_stylebox_override;
  method_remove_theme_font_override;
  method_remove_theme_font_size_override;
  method_remove_theme_color_override;
  method_remove_theme_constant_override;
  method_get_theme_icon;
  method_get_theme_stylebox;
  method_get_theme_font;
  method_get_theme_font_size;
  method_get_theme_color;
  method_get_theme_constant;
  method_has_theme_icon_override;
  method_has_theme_stylebox_override;
  method_has_theme_font_override;
  method_has_theme_font_size_override;
  method_has_theme_color_override;
  method_has_theme_constant_override;
  method_has_theme_icon;
  method_has_theme_stylebox;
  method_has_theme_font;
  method_has_theme_font_size;
  method_has_theme_color;
  method_has_theme_constant;
  method_get_theme_default_base_scale;
  method_get_theme_default_font;
  method_get_theme_default_font_size;
  method_get_parent_control;
  method_set_h_grow_direction;
  method_get_h_grow_direction;
  method_set_v_grow_direction;
  method_get_v_grow_direction;
  method_set_tooltip_text;
  method_get_tooltip_text;
  method_get_tooltip;
  method_set_default_cursor_shape;
  method_get_default_cursor_shape;
  method_get_cursor_shape;
  method_set_focus_neighbor;
  method_get_focus_neighbor;
  method_set_focus_next;
  method_get_focus_next;
  method_set_focus_previous;
  method_get_focus_previous;
  method_force_drag;
  method_set_mouse_filter;
  method_get_mouse_filter;
  method_set_force_pass_scroll_events;
  method_is_force_pass_scroll_events;
  method_set_clip_contents;
  method_is_clipping_contents;
  method_grab_click_focus;
  method_set_drag_forwarding;
  method_set_drag_preview;
  method_is_drag_successful;
  method_warp_mouse;
  method_set_shortcut_context;
  method_get_shortcut_context;
  method_update_minimum_size;
  method_set_layout_direction;
  method_get_layout_direction;
  method_is_layout_rtl;
  method_set_auto_translate;
  method_is_auto_translating;
  method_set_localize_numeral_system;
  method_is_localizing_numeral_system;
}
export class Control extends CanvasItem{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Control");
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
      let classname = new StringName("Control");
      let methodname = new StringName("accept_event");
      this._bindings.method_accept_event = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_minimum_size");
      this._bindings.method_get_minimum_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_combined_minimum_size");
      this._bindings.method_get_combined_minimum_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_anchors_preset");
      this._bindings.method_set_anchors_preset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        509135270
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_offsets_preset");
      this._bindings.method_set_offsets_preset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3724524307
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_anchors_and_offsets_preset");
      this._bindings.method_set_anchors_and_offsets_preset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3724524307
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_anchor");
      this._bindings.method_set_anchor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2302782885
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_anchor");
      this._bindings.method_get_anchor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2869120046
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_offset");
      this._bindings.method_set_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4290182280
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_offset");
      this._bindings.method_get_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2869120046
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_anchor_and_offset");
      this._bindings.method_set_anchor_and_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4031722181
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_begin");
      this._bindings.method_set_begin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_end");
      this._bindings.method_set_end = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_position");
      this._bindings.method_set_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2436320129
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_size");
      this._bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2436320129
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("reset_size");
      this._bindings.method_reset_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_custom_minimum_size");
      this._bindings.method_set_custom_minimum_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_global_position");
      this._bindings.method_set_global_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2436320129
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_rotation");
      this._bindings.method_set_rotation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_rotation_degrees");
      this._bindings.method_set_rotation_degrees = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_scale");
      this._bindings.method_set_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_pivot_offset");
      this._bindings.method_set_pivot_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_begin");
      this._bindings.method_get_begin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_end");
      this._bindings.method_get_end = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_position");
      this._bindings.method_get_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_rotation");
      this._bindings.method_get_rotation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_rotation_degrees");
      this._bindings.method_get_rotation_degrees = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_scale");
      this._bindings.method_get_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_pivot_offset");
      this._bindings.method_get_pivot_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_custom_minimum_size");
      this._bindings.method_get_custom_minimum_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_parent_area_size");
      this._bindings.method_get_parent_area_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_global_position");
      this._bindings.method_get_global_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_screen_position");
      this._bindings.method_get_screen_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_rect");
      this._bindings.method_get_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1639390495
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_global_rect");
      this._bindings.method_get_global_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1639390495
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_focus_mode");
      this._bindings.method_set_focus_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3232914922
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_focus_mode");
      this._bindings.method_get_focus_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2132829277
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("has_focus");
      this._bindings.method_has_focus = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("grab_focus");
      this._bindings.method_grab_focus = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("release_focus");
      this._bindings.method_release_focus = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("find_prev_valid_focus");
      this._bindings.method_find_prev_valid_focus = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2783021301
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("find_next_valid_focus");
      this._bindings.method_find_next_valid_focus = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2783021301
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("find_valid_focus_neighbor");
      this._bindings.method_find_valid_focus_neighbor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1543910170
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_h_size_flags");
      this._bindings.method_set_h_size_flags = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        394851643
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_h_size_flags");
      this._bindings.method_get_h_size_flags = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3781367401
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_stretch_ratio");
      this._bindings.method_set_stretch_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_stretch_ratio");
      this._bindings.method_get_stretch_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_v_size_flags");
      this._bindings.method_set_v_size_flags = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        394851643
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_v_size_flags");
      this._bindings.method_get_v_size_flags = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3781367401
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_theme");
      this._bindings.method_set_theme = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2326690814
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_theme");
      this._bindings.method_get_theme = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3846893731
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_theme_type_variation");
      this._bindings.method_set_theme_type_variation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_theme_type_variation");
      this._bindings.method_get_theme_type_variation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2002593661
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("begin_bulk_theme_override");
      this._bindings.method_begin_bulk_theme_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("end_bulk_theme_override");
      this._bindings.method_end_bulk_theme_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("add_theme_icon_override");
      this._bindings.method_add_theme_icon_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1373065600
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("add_theme_stylebox_override");
      this._bindings.method_add_theme_stylebox_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4188838905
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("add_theme_font_override");
      this._bindings.method_add_theme_font_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3518018674
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("add_theme_font_size_override");
      this._bindings.method_add_theme_font_size_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2415702435
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("add_theme_color_override");
      this._bindings.method_add_theme_color_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4260178595
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("add_theme_constant_override");
      this._bindings.method_add_theme_constant_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2415702435
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("remove_theme_icon_override");
      this._bindings.method_remove_theme_icon_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("remove_theme_stylebox_override");
      this._bindings.method_remove_theme_stylebox_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("remove_theme_font_override");
      this._bindings.method_remove_theme_font_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("remove_theme_font_size_override");
      this._bindings.method_remove_theme_font_size_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("remove_theme_color_override");
      this._bindings.method_remove_theme_color_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("remove_theme_constant_override");
      this._bindings.method_remove_theme_constant_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_theme_icon");
      this._bindings.method_get_theme_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2336455395
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_theme_stylebox");
      this._bindings.method_get_theme_stylebox = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2759935355
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_theme_font");
      this._bindings.method_get_theme_font = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        387378635
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_theme_font_size");
      this._bindings.method_get_theme_font_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        229578101
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_theme_color");
      this._bindings.method_get_theme_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2377051548
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_theme_constant");
      this._bindings.method_get_theme_constant = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        229578101
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("has_theme_icon_override");
      this._bindings.method_has_theme_icon_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2619796661
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("has_theme_stylebox_override");
      this._bindings.method_has_theme_stylebox_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2619796661
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("has_theme_font_override");
      this._bindings.method_has_theme_font_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2619796661
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("has_theme_font_size_override");
      this._bindings.method_has_theme_font_size_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2619796661
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("has_theme_color_override");
      this._bindings.method_has_theme_color_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2619796661
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("has_theme_constant_override");
      this._bindings.method_has_theme_constant_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2619796661
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("has_theme_icon");
      this._bindings.method_has_theme_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1187511791
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("has_theme_stylebox");
      this._bindings.method_has_theme_stylebox = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1187511791
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("has_theme_font");
      this._bindings.method_has_theme_font = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1187511791
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("has_theme_font_size");
      this._bindings.method_has_theme_font_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1187511791
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("has_theme_color");
      this._bindings.method_has_theme_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1187511791
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("has_theme_constant");
      this._bindings.method_has_theme_constant = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1187511791
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_theme_default_base_scale");
      this._bindings.method_get_theme_default_base_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_theme_default_font");
      this._bindings.method_get_theme_default_font = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3229501585
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_theme_default_font_size");
      this._bindings.method_get_theme_default_font_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_parent_control");
      this._bindings.method_get_parent_control = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2783021301
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_h_grow_direction");
      this._bindings.method_set_h_grow_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2022385301
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_h_grow_direction");
      this._bindings.method_get_h_grow_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635610155
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_v_grow_direction");
      this._bindings.method_set_v_grow_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2022385301
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_v_grow_direction");
      this._bindings.method_get_v_grow_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635610155
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_tooltip_text");
      this._bindings.method_set_tooltip_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_tooltip_text");
      this._bindings.method_get_tooltip_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_tooltip");
      this._bindings.method_get_tooltip = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2895288280
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_default_cursor_shape");
      this._bindings.method_set_default_cursor_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        217062046
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_default_cursor_shape");
      this._bindings.method_get_default_cursor_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2359535750
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_cursor_shape");
      this._bindings.method_get_cursor_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1395773853
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_focus_neighbor");
      this._bindings.method_set_focus_neighbor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2024461774
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_focus_neighbor");
      this._bindings.method_get_focus_neighbor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2757935761
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_focus_next");
      this._bindings.method_set_focus_next = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1348162250
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_focus_next");
      this._bindings.method_get_focus_next = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4075236667
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_focus_previous");
      this._bindings.method_set_focus_previous = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1348162250
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_focus_previous");
      this._bindings.method_get_focus_previous = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4075236667
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("force_drag");
      this._bindings.method_force_drag = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3191844692
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_mouse_filter");
      this._bindings.method_set_mouse_filter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3891156122
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_mouse_filter");
      this._bindings.method_get_mouse_filter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1572545674
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_force_pass_scroll_events");
      this._bindings.method_set_force_pass_scroll_events = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("is_force_pass_scroll_events");
      this._bindings.method_is_force_pass_scroll_events = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_clip_contents");
      this._bindings.method_set_clip_contents = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("is_clipping_contents");
      this._bindings.method_is_clipping_contents = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("grab_click_focus");
      this._bindings.method_grab_click_focus = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_drag_forwarding");
      this._bindings.method_set_drag_forwarding = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1076571380
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_drag_preview");
      this._bindings.method_set_drag_preview = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1496901182
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("is_drag_successful");
      this._bindings.method_is_drag_successful = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("warp_mouse");
      this._bindings.method_warp_mouse = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_shortcut_context");
      this._bindings.method_set_shortcut_context = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1078189570
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_shortcut_context");
      this._bindings.method_get_shortcut_context = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3160264692
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("update_minimum_size");
      this._bindings.method_update_minimum_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_layout_direction");
      this._bindings.method_set_layout_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3310692370
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("get_layout_direction");
      this._bindings.method_get_layout_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1546772008
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("is_layout_rtl");
      this._bindings.method_is_layout_rtl = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_auto_translate");
      this._bindings.method_set_auto_translate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("is_auto_translating");
      this._bindings.method_is_auto_translating = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("set_localize_numeral_system");
      this._bindings.method_set_localize_numeral_system = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Control");
      let methodname = new StringName("is_localizing_numeral_system");
      this._bindings.method_is_localizing_numeral_system = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  
  _has_point(_point) {
  }
  _structured_text_parser(_args, _text) {
  }
  _get_minimum_size() {
  }
  _get_tooltip(_at_position) {
  }
  _get_drag_data(_at_position) {
  }
  _can_drop_data(_at_position, _data) {
  }
  _drop_data(_at_position, _data) {
  }
  _make_custom_tooltip(_for_text) {
  }
  _gui_input(_event) {
  }
  accept_event() {
    return _call_native_mb_no_ret(
      Control._bindings.method_accept_event,
      this._owner,
      
    );
    
  }
  get_minimum_size() {
    return _call_native_mb_ret(
      Control._bindings.method_get_minimum_size,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_combined_minimum_size() {
    return _call_native_mb_ret(
      Control._bindings.method_get_combined_minimum_size,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_anchors_preset(_preset, _keep_offsets) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_anchors_preset,
      this._owner,
      _preset, _keep_offsets
    );
    
  }
  set_offsets_preset(_preset, _resize_mode, _margin) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_offsets_preset,
      this._owner,
      _preset, _resize_mode, _margin
    );
    
  }
  set_anchors_and_offsets_preset(_preset, _resize_mode, _margin) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_anchors_and_offsets_preset,
      this._owner,
      _preset, _resize_mode, _margin
    );
    
  }
  set_anchor(_side, _anchor, _keep_offset, _push_opposite_anchor) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_anchor,
      this._owner,
      _side, _anchor, _keep_offset, _push_opposite_anchor
    );
    
  }
  get_anchor(_side) {
    return _call_native_mb_ret(
      Control._bindings.method_get_anchor,
      this._owner,
			Variant.Type.FLOAT,
      _side
    );
    
  }
  set_offset(_side, _offset) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_offset,
      this._owner,
      _side, _offset
    );
    
  }
  get_offset(_offset) {
    return _call_native_mb_ret(
      Control._bindings.method_get_offset,
      this._owner,
			Variant.Type.FLOAT,
      _offset
    );
    
  }
  set_anchor_and_offset(_side, _anchor, _offset, _push_opposite_anchor) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_anchor_and_offset,
      this._owner,
      _side, _anchor, _offset, _push_opposite_anchor
    );
    
  }
  set_begin(_position) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_begin,
      this._owner,
      _position
    );
    
  }
  set_end(_position) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_end,
      this._owner,
      _position
    );
    
  }
  set_position(_position, _keep_offsets) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_position,
      this._owner,
      _position, _keep_offsets
    );
    
  }
  set_size(_size, _keep_offsets) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_size,
      this._owner,
      _size, _keep_offsets
    );
    
  }
  reset_size() {
    return _call_native_mb_no_ret(
      Control._bindings.method_reset_size,
      this._owner,
      
    );
    
  }
  set_custom_minimum_size(_size) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_custom_minimum_size,
      this._owner,
      _size
    );
    
  }
  set_global_position(_position, _keep_offsets) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_global_position,
      this._owner,
      _position, _keep_offsets
    );
    
  }
  set_rotation(_radians) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_rotation,
      this._owner,
      _radians
    );
    
  }
  set_rotation_degrees(_degrees) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_rotation_degrees,
      this._owner,
      _degrees
    );
    
  }
  set_scale(_scale) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_scale,
      this._owner,
      _scale
    );
    
  }
  set_pivot_offset(_pivot_offset) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_pivot_offset,
      this._owner,
      _pivot_offset
    );
    
  }
  get_begin() {
    return _call_native_mb_ret(
      Control._bindings.method_get_begin,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_end() {
    return _call_native_mb_ret(
      Control._bindings.method_get_end,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_position() {
    return _call_native_mb_ret(
      Control._bindings.method_get_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_size() {
    return _call_native_mb_ret(
      Control._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_rotation() {
    return _call_native_mb_ret(
      Control._bindings.method_get_rotation,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_rotation_degrees() {
    return _call_native_mb_ret(
      Control._bindings.method_get_rotation_degrees,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_scale() {
    return _call_native_mb_ret(
      Control._bindings.method_get_scale,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_pivot_offset() {
    return _call_native_mb_ret(
      Control._bindings.method_get_pivot_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_custom_minimum_size() {
    return _call_native_mb_ret(
      Control._bindings.method_get_custom_minimum_size,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_parent_area_size() {
    return _call_native_mb_ret(
      Control._bindings.method_get_parent_area_size,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_global_position() {
    return _call_native_mb_ret(
      Control._bindings.method_get_global_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_screen_position() {
    return _call_native_mb_ret(
      Control._bindings.method_get_screen_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_rect() {
    return _call_native_mb_ret(
      Control._bindings.method_get_rect,
      this._owner,
			Variant.Type.RECT2,
    
      
    );
    
  }
  get_global_rect() {
    return _call_native_mb_ret(
      Control._bindings.method_get_global_rect,
      this._owner,
			Variant.Type.RECT2,
    
      
    );
    
  }
  set_focus_mode(_mode) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_focus_mode,
      this._owner,
      _mode
    );
    
  }
  get_focus_mode() {
    return _call_native_mb_ret(
      Control._bindings.method_get_focus_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  has_focus() {
    return _call_native_mb_ret(
      Control._bindings.method_has_focus,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  grab_focus() {
    return _call_native_mb_no_ret(
      Control._bindings.method_grab_focus,
      this._owner,
      
    );
    
  }
  release_focus() {
    return _call_native_mb_no_ret(
      Control._bindings.method_release_focus,
      this._owner,
      
    );
    
  }
  find_prev_valid_focus() {
    return _call_native_mb_ret(
      Control._bindings.method_find_prev_valid_focus,
      this._owner,
			Variant.INT,
      
    );
    
  }
  find_next_valid_focus() {
    return _call_native_mb_ret(
      Control._bindings.method_find_next_valid_focus,
      this._owner,
			Variant.INT,
      
    );
    
  }
  find_valid_focus_neighbor(_side) {
    return _call_native_mb_ret(
      Control._bindings.method_find_valid_focus_neighbor,
      this._owner,
			Variant.INT,
      _side
    );
    
  }
  set_h_size_flags(_flags) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_h_size_flags,
      this._owner,
      _flags
    );
    
  }
  get_h_size_flags() {
    return _call_native_mb_ret(
      Control._bindings.method_get_h_size_flags,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_stretch_ratio(_ratio) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_stretch_ratio,
      this._owner,
      _ratio
    );
    
  }
  get_stretch_ratio() {
    return _call_native_mb_ret(
      Control._bindings.method_get_stretch_ratio,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_v_size_flags(_flags) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_v_size_flags,
      this._owner,
      _flags
    );
    
  }
  get_v_size_flags() {
    return _call_native_mb_ret(
      Control._bindings.method_get_v_size_flags,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_theme(_theme) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_theme,
      this._owner,
      _theme
    );
    
  }
  get_theme() {
    return _call_native_mb_ret(
      Control._bindings.method_get_theme,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_theme_type_variation(_theme_type) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_theme_type_variation,
      this._owner,
      _theme_type
    );
    
  }
  get_theme_type_variation() {
    return _call_native_mb_ret(
      Control._bindings.method_get_theme_type_variation,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  begin_bulk_theme_override() {
    return _call_native_mb_no_ret(
      Control._bindings.method_begin_bulk_theme_override,
      this._owner,
      
    );
    
  }
  end_bulk_theme_override() {
    return _call_native_mb_no_ret(
      Control._bindings.method_end_bulk_theme_override,
      this._owner,
      
    );
    
  }
  add_theme_icon_override(_name, _texture) {
    return _call_native_mb_no_ret(
      Control._bindings.method_add_theme_icon_override,
      this._owner,
      _name, _texture
    );
    
  }
  add_theme_stylebox_override(_name, _stylebox) {
    return _call_native_mb_no_ret(
      Control._bindings.method_add_theme_stylebox_override,
      this._owner,
      _name, _stylebox
    );
    
  }
  add_theme_font_override(_name, _font) {
    return _call_native_mb_no_ret(
      Control._bindings.method_add_theme_font_override,
      this._owner,
      _name, _font
    );
    
  }
  add_theme_font_size_override(_name, _font_size) {
    return _call_native_mb_no_ret(
      Control._bindings.method_add_theme_font_size_override,
      this._owner,
      _name, _font_size
    );
    
  }
  add_theme_color_override(_name, _color) {
    return _call_native_mb_no_ret(
      Control._bindings.method_add_theme_color_override,
      this._owner,
      _name, _color
    );
    
  }
  add_theme_constant_override(_name, _constant) {
    return _call_native_mb_no_ret(
      Control._bindings.method_add_theme_constant_override,
      this._owner,
      _name, _constant
    );
    
  }
  remove_theme_icon_override(_name) {
    return _call_native_mb_no_ret(
      Control._bindings.method_remove_theme_icon_override,
      this._owner,
      _name
    );
    
  }
  remove_theme_stylebox_override(_name) {
    return _call_native_mb_no_ret(
      Control._bindings.method_remove_theme_stylebox_override,
      this._owner,
      _name
    );
    
  }
  remove_theme_font_override(_name) {
    return _call_native_mb_no_ret(
      Control._bindings.method_remove_theme_font_override,
      this._owner,
      _name
    );
    
  }
  remove_theme_font_size_override(_name) {
    return _call_native_mb_no_ret(
      Control._bindings.method_remove_theme_font_size_override,
      this._owner,
      _name
    );
    
  }
  remove_theme_color_override(_name) {
    return _call_native_mb_no_ret(
      Control._bindings.method_remove_theme_color_override,
      this._owner,
      _name
    );
    
  }
  remove_theme_constant_override(_name) {
    return _call_native_mb_no_ret(
      Control._bindings.method_remove_theme_constant_override,
      this._owner,
      _name
    );
    
  }
  get_theme_icon(_name, _theme_type) {
    return _call_native_mb_ret(
      Control._bindings.method_get_theme_icon,
      this._owner,
			Variant.INT,
      _name, _theme_type
    );
    
  }
  get_theme_stylebox(_name, _theme_type) {
    return _call_native_mb_ret(
      Control._bindings.method_get_theme_stylebox,
      this._owner,
			Variant.INT,
      _name, _theme_type
    );
    
  }
  get_theme_font(_name, _theme_type) {
    return _call_native_mb_ret(
      Control._bindings.method_get_theme_font,
      this._owner,
			Variant.INT,
      _name, _theme_type
    );
    
  }
  get_theme_font_size(_name, _theme_type) {
    return _call_native_mb_ret(
      Control._bindings.method_get_theme_font_size,
      this._owner,
			Variant.Type.INT,
      _name, _theme_type
    );
    
  }
  get_theme_color(_name, _theme_type) {
    return _call_native_mb_ret(
      Control._bindings.method_get_theme_color,
      this._owner,
			Variant.Type.COLOR,
    
      _name, _theme_type
    );
    
  }
  get_theme_constant(_name, _theme_type) {
    return _call_native_mb_ret(
      Control._bindings.method_get_theme_constant,
      this._owner,
			Variant.Type.INT,
      _name, _theme_type
    );
    
  }
  has_theme_icon_override(_name) {
    return _call_native_mb_ret(
      Control._bindings.method_has_theme_icon_override,
      this._owner,
			Variant.Type.BOOL,
      _name
    );
    
  }
  has_theme_stylebox_override(_name) {
    return _call_native_mb_ret(
      Control._bindings.method_has_theme_stylebox_override,
      this._owner,
			Variant.Type.BOOL,
      _name
    );
    
  }
  has_theme_font_override(_name) {
    return _call_native_mb_ret(
      Control._bindings.method_has_theme_font_override,
      this._owner,
			Variant.Type.BOOL,
      _name
    );
    
  }
  has_theme_font_size_override(_name) {
    return _call_native_mb_ret(
      Control._bindings.method_has_theme_font_size_override,
      this._owner,
			Variant.Type.BOOL,
      _name
    );
    
  }
  has_theme_color_override(_name) {
    return _call_native_mb_ret(
      Control._bindings.method_has_theme_color_override,
      this._owner,
			Variant.Type.BOOL,
      _name
    );
    
  }
  has_theme_constant_override(_name) {
    return _call_native_mb_ret(
      Control._bindings.method_has_theme_constant_override,
      this._owner,
			Variant.Type.BOOL,
      _name
    );
    
  }
  has_theme_icon(_name, _theme_type) {
    return _call_native_mb_ret(
      Control._bindings.method_has_theme_icon,
      this._owner,
			Variant.Type.BOOL,
      _name, _theme_type
    );
    
  }
  has_theme_stylebox(_name, _theme_type) {
    return _call_native_mb_ret(
      Control._bindings.method_has_theme_stylebox,
      this._owner,
			Variant.Type.BOOL,
      _name, _theme_type
    );
    
  }
  has_theme_font(_name, _theme_type) {
    return _call_native_mb_ret(
      Control._bindings.method_has_theme_font,
      this._owner,
			Variant.Type.BOOL,
      _name, _theme_type
    );
    
  }
  has_theme_font_size(_name, _theme_type) {
    return _call_native_mb_ret(
      Control._bindings.method_has_theme_font_size,
      this._owner,
			Variant.Type.BOOL,
      _name, _theme_type
    );
    
  }
  has_theme_color(_name, _theme_type) {
    return _call_native_mb_ret(
      Control._bindings.method_has_theme_color,
      this._owner,
			Variant.Type.BOOL,
      _name, _theme_type
    );
    
  }
  has_theme_constant(_name, _theme_type) {
    return _call_native_mb_ret(
      Control._bindings.method_has_theme_constant,
      this._owner,
			Variant.Type.BOOL,
      _name, _theme_type
    );
    
  }
  get_theme_default_base_scale() {
    return _call_native_mb_ret(
      Control._bindings.method_get_theme_default_base_scale,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_theme_default_font() {
    return _call_native_mb_ret(
      Control._bindings.method_get_theme_default_font,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_theme_default_font_size() {
    return _call_native_mb_ret(
      Control._bindings.method_get_theme_default_font_size,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_parent_control() {
    return _call_native_mb_ret(
      Control._bindings.method_get_parent_control,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_h_grow_direction(_direction) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_h_grow_direction,
      this._owner,
      _direction
    );
    
  }
  get_h_grow_direction() {
    return _call_native_mb_ret(
      Control._bindings.method_get_h_grow_direction,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_v_grow_direction(_direction) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_v_grow_direction,
      this._owner,
      _direction
    );
    
  }
  get_v_grow_direction() {
    return _call_native_mb_ret(
      Control._bindings.method_get_v_grow_direction,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_tooltip_text(_hint) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_tooltip_text,
      this._owner,
      _hint
    );
    
  }
  get_tooltip_text() {
    return _call_native_mb_ret(
      Control._bindings.method_get_tooltip_text,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_tooltip(_at_position) {
    return _call_native_mb_ret(
      Control._bindings.method_get_tooltip,
      this._owner,
			Variant.Type.STRING,
    
      _at_position
    );
    
  }
  set_default_cursor_shape(_shape) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_default_cursor_shape,
      this._owner,
      _shape
    );
    
  }
  get_default_cursor_shape() {
    return _call_native_mb_ret(
      Control._bindings.method_get_default_cursor_shape,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_cursor_shape(_position) {
    return _call_native_mb_ret(
      Control._bindings.method_get_cursor_shape,
      this._owner,
			Variant.INT,
      _position
    );
    
  }
  set_focus_neighbor(_side, _neighbor) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_focus_neighbor,
      this._owner,
      _side, _neighbor
    );
    
  }
  get_focus_neighbor(_side) {
    return _call_native_mb_ret(
      Control._bindings.method_get_focus_neighbor,
      this._owner,
			Variant.Type.NODE_PATH,
    
      _side
    );
    
  }
  set_focus_next(_next) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_focus_next,
      this._owner,
      _next
    );
    
  }
  get_focus_next() {
    return _call_native_mb_ret(
      Control._bindings.method_get_focus_next,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_focus_previous(_previous) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_focus_previous,
      this._owner,
      _previous
    );
    
  }
  get_focus_previous() {
    return _call_native_mb_ret(
      Control._bindings.method_get_focus_previous,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  force_drag(_data, _preview) {
    return _call_native_mb_no_ret(
      Control._bindings.method_force_drag,
      this._owner,
      _data, _preview
    );
    
  }
  set_mouse_filter(_filter) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_mouse_filter,
      this._owner,
      _filter
    );
    
  }
  get_mouse_filter() {
    return _call_native_mb_ret(
      Control._bindings.method_get_mouse_filter,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_force_pass_scroll_events(_force_pass_scroll_events) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_force_pass_scroll_events,
      this._owner,
      _force_pass_scroll_events
    );
    
  }
  is_force_pass_scroll_events() {
    return _call_native_mb_ret(
      Control._bindings.method_is_force_pass_scroll_events,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_clip_contents(_enable) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_clip_contents,
      this._owner,
      _enable
    );
    
  }
  is_clipping_contents() {
    return _call_native_mb_ret(
      Control._bindings.method_is_clipping_contents,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  grab_click_focus() {
    return _call_native_mb_no_ret(
      Control._bindings.method_grab_click_focus,
      this._owner,
      
    );
    
  }
  set_drag_forwarding(_drag_func, _can_drop_func, _drop_func) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_drag_forwarding,
      this._owner,
      _drag_func, _can_drop_func, _drop_func
    );
    
  }
  set_drag_preview(_control) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_drag_preview,
      this._owner,
      _control
    );
    
  }
  is_drag_successful() {
    return _call_native_mb_ret(
      Control._bindings.method_is_drag_successful,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  warp_mouse(_position) {
    return _call_native_mb_no_ret(
      Control._bindings.method_warp_mouse,
      this._owner,
      _position
    );
    
  }
  set_shortcut_context(_node) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_shortcut_context,
      this._owner,
      _node
    );
    
  }
  get_shortcut_context() {
    return _call_native_mb_ret(
      Control._bindings.method_get_shortcut_context,
      this._owner,
			Variant.INT,
      
    );
    
  }
  update_minimum_size() {
    return _call_native_mb_no_ret(
      Control._bindings.method_update_minimum_size,
      this._owner,
      
    );
    
  }
  set_layout_direction(_direction) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_layout_direction,
      this._owner,
      _direction
    );
    
  }
  get_layout_direction() {
    return _call_native_mb_ret(
      Control._bindings.method_get_layout_direction,
      this._owner,
			Variant.INT,
      
    );
    
  }
  is_layout_rtl() {
    return _call_native_mb_ret(
      Control._bindings.method_is_layout_rtl,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_auto_translate(_enable) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_auto_translate,
      this._owner,
      _enable
    );
    
  }
  is_auto_translating() {
    return _call_native_mb_ret(
      Control._bindings.method_is_auto_translating,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_localize_numeral_system(_enable) {
    return _call_native_mb_no_ret(
      Control._bindings.method_set_localize_numeral_system,
      this._owner,
      _enable
    );
    
  }
  is_localizing_numeral_system() {
    return _call_native_mb_ret(
      Control._bindings.method_is_localizing_numeral_system,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  
get clip_contents () {
  return this.is_clipping_contents();
}
set clip_contents (new_value) {
  this.set_clip_contents(new_value);
}
get custom_minimum_size () {
  return this.get_custom_minimum_size();
}
set custom_minimum_size (new_value) {
  this.set_custom_minimum_size(new_value);
}
get layout_direction () {
  return this.get_layout_direction();
}
set layout_direction (new_value) {
  this.set_layout_direction(new_value);
}
get layout_mode () {
  return this._get_layout_mode();
}
set layout_mode (new_value) {
  this._set_layout_mode(new_value);
}
get anchors_preset () {
  return this._get_anchors_layout_preset();
}
set anchors_preset (new_value) {
  this._set_anchors_layout_preset(new_value);
}
get anchor_left () {
  return this.get_anchor();
}
set anchor_left (new_value) {
  this._set_anchor(new_value);
}
get anchor_top () {
  return this.get_anchor();
}
set anchor_top (new_value) {
  this._set_anchor(new_value);
}
get anchor_right () {
  return this.get_anchor();
}
set anchor_right (new_value) {
  this._set_anchor(new_value);
}
get anchor_bottom () {
  return this.get_anchor();
}
set anchor_bottom (new_value) {
  this._set_anchor(new_value);
}
get offset_left () {
  return this.get_offset();
}
set offset_left (new_value) {
  this.set_offset(new_value);
}
get offset_top () {
  return this.get_offset();
}
set offset_top (new_value) {
  this.set_offset(new_value);
}
get offset_right () {
  return this.get_offset();
}
set offset_right (new_value) {
  this.set_offset(new_value);
}
get offset_bottom () {
  return this.get_offset();
}
set offset_bottom (new_value) {
  this.set_offset(new_value);
}
get grow_horizontal () {
  return this.get_h_grow_direction();
}
set grow_horizontal (new_value) {
  this.set_h_grow_direction(new_value);
}
get grow_vertical () {
  return this.get_v_grow_direction();
}
set grow_vertical (new_value) {
  this.set_v_grow_direction(new_value);
}
get size () {
  return this.get_size();
}
set size (new_value) {
  this._set_size(new_value);
}
get position () {
  return this.get_position();
}
set position (new_value) {
  this._set_position(new_value);
}
get global_position () {
  return this.get_global_position();
}
set global_position (new_value) {
  this._set_global_position(new_value);
}
get rotation () {
  return this.get_rotation();
}
set rotation (new_value) {
  this.set_rotation(new_value);
}
get rotation_degrees () {
  return this.get_rotation_degrees();
}
set rotation_degrees (new_value) {
  this.set_rotation_degrees(new_value);
}
get scale () {
  return this.get_scale();
}
set scale (new_value) {
  this.set_scale(new_value);
}
get pivot_offset () {
  return this.get_pivot_offset();
}
set pivot_offset (new_value) {
  this.set_pivot_offset(new_value);
}
get size_flags_horizontal () {
  return this.get_h_size_flags();
}
set size_flags_horizontal (new_value) {
  this.set_h_size_flags(new_value);
}
get size_flags_vertical () {
  return this.get_v_size_flags();
}
set size_flags_vertical (new_value) {
  this.set_v_size_flags(new_value);
}
get size_flags_stretch_ratio () {
  return this.get_stretch_ratio();
}
set size_flags_stretch_ratio (new_value) {
  this.set_stretch_ratio(new_value);
}
get localize_numeral_system () {
  return this.is_localizing_numeral_system();
}
set localize_numeral_system (new_value) {
  this.set_localize_numeral_system(new_value);
}
get auto_translate () {
  return this.is_auto_translating();
}
set auto_translate (new_value) {
  this.set_auto_translate(new_value);
}
get tooltip_text () {
  return this.get_tooltip_text();
}
set tooltip_text (new_value) {
  this.set_tooltip_text(new_value);
}
get focus_neighbor_left () {
  return this.get_focus_neighbor();
}
set focus_neighbor_left (new_value) {
  this.set_focus_neighbor(new_value);
}
get focus_neighbor_top () {
  return this.get_focus_neighbor();
}
set focus_neighbor_top (new_value) {
  this.set_focus_neighbor(new_value);
}
get focus_neighbor_right () {
  return this.get_focus_neighbor();
}
set focus_neighbor_right (new_value) {
  this.set_focus_neighbor(new_value);
}
get focus_neighbor_bottom () {
  return this.get_focus_neighbor();
}
set focus_neighbor_bottom (new_value) {
  this.set_focus_neighbor(new_value);
}
get focus_next () {
  return this.get_focus_next();
}
set focus_next (new_value) {
  this.set_focus_next(new_value);
}
get focus_previous () {
  return this.get_focus_previous();
}
set focus_previous (new_value) {
  this.set_focus_previous(new_value);
}
get focus_mode () {
  return this.get_focus_mode();
}
set focus_mode (new_value) {
  this.set_focus_mode(new_value);
}
get mouse_filter () {
  return this.get_mouse_filter();
}
set mouse_filter (new_value) {
  this.set_mouse_filter(new_value);
}
get mouse_force_pass_scroll_events () {
  return this.is_force_pass_scroll_events();
}
set mouse_force_pass_scroll_events (new_value) {
  this.set_force_pass_scroll_events(new_value);
}
get mouse_default_cursor_shape () {
  return this.get_default_cursor_shape();
}
set mouse_default_cursor_shape (new_value) {
  this.set_default_cursor_shape(new_value);
}
get shortcut_context () {
  return this.get_shortcut_context();
}
set shortcut_context (new_value) {
  this.set_shortcut_context(new_value);
}
get theme () {
  return this.get_theme();
}
set theme (new_value) {
  this.set_theme(new_value);
}
get theme_type_variation () {
  return this.get_theme_type_variation();
}
set theme_type_variation (new_value) {
  this.set_theme_type_variation(new_value);
}

  static FocusMode = {
    FOCUS_NONE: 0,
    FOCUS_CLICK: 1,
    FOCUS_ALL: 2,
  }
  static CursorShape = {
    CURSOR_ARROW: 0,
    CURSOR_IBEAM: 1,
    CURSOR_POINTING_HAND: 2,
    CURSOR_CROSS: 3,
    CURSOR_WAIT: 4,
    CURSOR_BUSY: 5,
    CURSOR_DRAG: 6,
    CURSOR_CAN_DROP: 7,
    CURSOR_FORBIDDEN: 8,
    CURSOR_VSIZE: 9,
    CURSOR_HSIZE: 10,
    CURSOR_BDIAGSIZE: 11,
    CURSOR_FDIAGSIZE: 12,
    CURSOR_MOVE: 13,
    CURSOR_VSPLIT: 14,
    CURSOR_HSPLIT: 15,
    CURSOR_HELP: 16,
  }
  static LayoutPreset = {
    PRESET_TOP_LEFT: 0,
    PRESET_TOP_RIGHT: 1,
    PRESET_BOTTOM_LEFT: 2,
    PRESET_BOTTOM_RIGHT: 3,
    PRESET_CENTER_LEFT: 4,
    PRESET_CENTER_TOP: 5,
    PRESET_CENTER_RIGHT: 6,
    PRESET_CENTER_BOTTOM: 7,
    PRESET_CENTER: 8,
    PRESET_LEFT_WIDE: 9,
    PRESET_TOP_WIDE: 10,
    PRESET_RIGHT_WIDE: 11,
    PRESET_BOTTOM_WIDE: 12,
    PRESET_VCENTER_WIDE: 13,
    PRESET_HCENTER_WIDE: 14,
    PRESET_FULL_RECT: 15,
  }
  static LayoutPresetMode = {
    PRESET_MODE_MINSIZE: 0,
    PRESET_MODE_KEEP_WIDTH: 1,
    PRESET_MODE_KEEP_HEIGHT: 2,
    PRESET_MODE_KEEP_SIZE: 3,
  }
  static SizeFlags = {
    SIZE_SHRINK_BEGIN: 0,
    SIZE_FILL: 1,
    SIZE_EXPAND: 2,
    SIZE_EXPAND_FILL: 3,
    SIZE_SHRINK_CENTER: 4,
    SIZE_SHRINK_END: 8,
  }
  static MouseFilter = {
    MOUSE_FILTER_STOP: 0,
    MOUSE_FILTER_PASS: 1,
    MOUSE_FILTER_IGNORE: 2,
  }
  static GrowDirection = {
    GROW_DIRECTION_BEGIN: 0,
    GROW_DIRECTION_END: 1,
    GROW_DIRECTION_BOTH: 2,
  }
  static Anchor = {
    ANCHOR_BEGIN: 0,
    ANCHOR_END: 1,
  }
  static LayoutDirection = {
    LAYOUT_DIRECTION_INHERITED: 0,
    LAYOUT_DIRECTION_LOCALE: 1,
    LAYOUT_DIRECTION_LTR: 2,
    LAYOUT_DIRECTION_RTL: 3,
  }
  static TextDirection = {
    TEXT_DIRECTION_INHERITED: 3,
    TEXT_DIRECTION_AUTO: 0,
    TEXT_DIRECTION_LTR: 1,
    TEXT_DIRECTION_RTL: 2,
  }

  static {
    this._init_bindings();
  }
}