import * as internal from '__internal__';
import { Color } from 'src/js_godot/variant/color'
import { Viewport } from 'src/js_godot/classesviewport'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { GDString } from 'src/js_godot/variant/gd_string'
import { Vector2i } from 'src/js_godot/variant/vector2i'
import { StringName } from 'src/js_godot/variant/string_name'
import { PackedVector2Array } from 'src/js_godot/variant/packed_vector2_array'
import { Rect2i } from 'src/js_godot/variant/rect2i'
class _MethodBindings {
    method__get_contents_minimum_size;
    method_set_title;
    method_get_title;
    method_get_window_id;
    method_set_initial_position;
    method_get_initial_position;
    method_set_current_screen;
    method_get_current_screen;
    method_set_position;
    method_get_position;
    method_move_to_center;
    method_set_size;
    method_get_size;
    method_reset_size;
    method_get_position_with_decorations;
    method_get_size_with_decorations;
    method_set_max_size;
    method_get_max_size;
    method_set_min_size;
    method_get_min_size;
    method_set_mode;
    method_get_mode;
    method_set_flag;
    method_get_flag;
    method_is_maximize_allowed;
    method_request_attention;
    method_move_to_foreground;
    method_set_visible;
    method_is_visible;
    method_hide;
    method_show;
    method_set_transient;
    method_is_transient;
    method_set_transient_to_focused;
    method_is_transient_to_focused;
    method_set_exclusive;
    method_is_exclusive;
    method_set_unparent_when_invisible;
    method_can_draw;
    method_has_focus;
    method_grab_focus;
    method_set_ime_active;
    method_set_ime_position;
    method_is_embedded;
    method_get_contents_minimum_size;
    method_set_force_native;
    method_get_force_native;
    method_set_content_scale_size;
    method_get_content_scale_size;
    method_set_content_scale_mode;
    method_get_content_scale_mode;
    method_set_content_scale_aspect;
    method_get_content_scale_aspect;
    method_set_content_scale_stretch;
    method_get_content_scale_stretch;
    method_set_keep_title_visible;
    method_get_keep_title_visible;
    method_set_content_scale_factor;
    method_get_content_scale_factor;
    method_set_use_font_oversampling;
    method_is_using_font_oversampling;
    method_set_mouse_passthrough_polygon;
    method_get_mouse_passthrough_polygon;
    method_set_wrap_controls;
    method_is_wrapping_controls;
    method_child_controls_changed;
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
    method_set_layout_direction;
    method_get_layout_direction;
    method_is_layout_rtl;
    method_set_auto_translate;
    method_is_auto_translating;
    method_popup;
    method_popup_on_parent;
    method_popup_centered;
    method_popup_centered_ratio;
    method_popup_centered_clamped;
    method_popup_exclusive;
    method_popup_exclusive_on_parent;
    method_popup_exclusive_centered;
    method_popup_exclusive_centered_ratio;
    method_popup_exclusive_centered_clamped;
}


export class Window extends Viewport{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Window");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("Window");
      let methodname = new StringName("_get_contents_minimum_size");
      this._bindings.method__get_contents_minimum_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_title");
      this._bindings.method_set_title = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_title");
      this._bindings.method_get_title = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_window_id");
      this._bindings.method_get_window_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_initial_position");
      this._bindings.method_set_initial_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4084468099
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_initial_position");
      this._bindings.method_get_initial_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4294066647
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_current_screen");
      this._bindings.method_set_current_screen = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_current_screen");
      this._bindings.method_get_current_screen = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_position");
      this._bindings.method_set_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1130785943
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_position");
      this._bindings.method_get_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3690982128
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("move_to_center");
      this._bindings.method_move_to_center = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_size");
      this._bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1130785943
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3690982128
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("reset_size");
      this._bindings.method_reset_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_position_with_decorations");
      this._bindings.method_get_position_with_decorations = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3690982128
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_size_with_decorations");
      this._bindings.method_get_size_with_decorations = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3690982128
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_max_size");
      this._bindings.method_set_max_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1130785943
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_max_size");
      this._bindings.method_get_max_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3690982128
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_min_size");
      this._bindings.method_set_min_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1130785943
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_min_size");
      this._bindings.method_get_min_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3690982128
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_mode");
      this._bindings.method_set_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3095236531
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_mode");
      this._bindings.method_get_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2566346114
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_flag");
      this._bindings.method_set_flag = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3426449779
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_flag");
      this._bindings.method_get_flag = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3062752289
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("is_maximize_allowed");
      this._bindings.method_is_maximize_allowed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("request_attention");
      this._bindings.method_request_attention = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("move_to_foreground");
      this._bindings.method_move_to_foreground = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_visible");
      this._bindings.method_set_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("is_visible");
      this._bindings.method_is_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("hide");
      this._bindings.method_hide = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("show");
      this._bindings.method_show = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_transient");
      this._bindings.method_set_transient = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("is_transient");
      this._bindings.method_is_transient = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_transient_to_focused");
      this._bindings.method_set_transient_to_focused = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("is_transient_to_focused");
      this._bindings.method_is_transient_to_focused = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_exclusive");
      this._bindings.method_set_exclusive = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("is_exclusive");
      this._bindings.method_is_exclusive = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_unparent_when_invisible");
      this._bindings.method_set_unparent_when_invisible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("can_draw");
      this._bindings.method_can_draw = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("has_focus");
      this._bindings.method_has_focus = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("grab_focus");
      this._bindings.method_grab_focus = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_ime_active");
      this._bindings.method_set_ime_active = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_ime_position");
      this._bindings.method_set_ime_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1130785943
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("is_embedded");
      this._bindings.method_is_embedded = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_contents_minimum_size");
      this._bindings.method_get_contents_minimum_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_force_native");
      this._bindings.method_set_force_native = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_force_native");
      this._bindings.method_get_force_native = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_content_scale_size");
      this._bindings.method_set_content_scale_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1130785943
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_content_scale_size");
      this._bindings.method_get_content_scale_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3690982128
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_content_scale_mode");
      this._bindings.method_set_content_scale_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2937716473
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_content_scale_mode");
      this._bindings.method_get_content_scale_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        161585230
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_content_scale_aspect");
      this._bindings.method_set_content_scale_aspect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2370399418
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_content_scale_aspect");
      this._bindings.method_get_content_scale_aspect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4158790715
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_content_scale_stretch");
      this._bindings.method_set_content_scale_stretch = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        349355940
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_content_scale_stretch");
      this._bindings.method_get_content_scale_stretch = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        536857316
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_keep_title_visible");
      this._bindings.method_set_keep_title_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_keep_title_visible");
      this._bindings.method_get_keep_title_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_content_scale_factor");
      this._bindings.method_set_content_scale_factor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_content_scale_factor");
      this._bindings.method_get_content_scale_factor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_use_font_oversampling");
      this._bindings.method_set_use_font_oversampling = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("is_using_font_oversampling");
      this._bindings.method_is_using_font_oversampling = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_mouse_passthrough_polygon");
      this._bindings.method_set_mouse_passthrough_polygon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1509147220
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_mouse_passthrough_polygon");
      this._bindings.method_get_mouse_passthrough_polygon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2961356807
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_wrap_controls");
      this._bindings.method_set_wrap_controls = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("is_wrapping_controls");
      this._bindings.method_is_wrapping_controls = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("child_controls_changed");
      this._bindings.method_child_controls_changed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_theme");
      this._bindings.method_set_theme = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2326690814
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_theme");
      this._bindings.method_get_theme = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3846893731
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_theme_type_variation");
      this._bindings.method_set_theme_type_variation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_theme_type_variation");
      this._bindings.method_get_theme_type_variation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2002593661
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("begin_bulk_theme_override");
      this._bindings.method_begin_bulk_theme_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("end_bulk_theme_override");
      this._bindings.method_end_bulk_theme_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("add_theme_icon_override");
      this._bindings.method_add_theme_icon_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1373065600
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("add_theme_stylebox_override");
      this._bindings.method_add_theme_stylebox_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4188838905
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("add_theme_font_override");
      this._bindings.method_add_theme_font_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3518018674
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("add_theme_font_size_override");
      this._bindings.method_add_theme_font_size_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2415702435
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("add_theme_color_override");
      this._bindings.method_add_theme_color_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4260178595
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("add_theme_constant_override");
      this._bindings.method_add_theme_constant_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2415702435
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("remove_theme_icon_override");
      this._bindings.method_remove_theme_icon_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("remove_theme_stylebox_override");
      this._bindings.method_remove_theme_stylebox_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("remove_theme_font_override");
      this._bindings.method_remove_theme_font_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("remove_theme_font_size_override");
      this._bindings.method_remove_theme_font_size_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("remove_theme_color_override");
      this._bindings.method_remove_theme_color_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("remove_theme_constant_override");
      this._bindings.method_remove_theme_constant_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_theme_icon");
      this._bindings.method_get_theme_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2336455395
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_theme_stylebox");
      this._bindings.method_get_theme_stylebox = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2759935355
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_theme_font");
      this._bindings.method_get_theme_font = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        387378635
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_theme_font_size");
      this._bindings.method_get_theme_font_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        229578101
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_theme_color");
      this._bindings.method_get_theme_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2377051548
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_theme_constant");
      this._bindings.method_get_theme_constant = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        229578101
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("has_theme_icon_override");
      this._bindings.method_has_theme_icon_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2619796661
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("has_theme_stylebox_override");
      this._bindings.method_has_theme_stylebox_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2619796661
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("has_theme_font_override");
      this._bindings.method_has_theme_font_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2619796661
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("has_theme_font_size_override");
      this._bindings.method_has_theme_font_size_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2619796661
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("has_theme_color_override");
      this._bindings.method_has_theme_color_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2619796661
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("has_theme_constant_override");
      this._bindings.method_has_theme_constant_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2619796661
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("has_theme_icon");
      this._bindings.method_has_theme_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1187511791
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("has_theme_stylebox");
      this._bindings.method_has_theme_stylebox = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1187511791
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("has_theme_font");
      this._bindings.method_has_theme_font = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1187511791
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("has_theme_font_size");
      this._bindings.method_has_theme_font_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1187511791
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("has_theme_color");
      this._bindings.method_has_theme_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1187511791
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("has_theme_constant");
      this._bindings.method_has_theme_constant = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1187511791
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_theme_default_base_scale");
      this._bindings.method_get_theme_default_base_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_theme_default_font");
      this._bindings.method_get_theme_default_font = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3229501585
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_theme_default_font_size");
      this._bindings.method_get_theme_default_font_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_layout_direction");
      this._bindings.method_set_layout_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3094704184
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("get_layout_direction");
      this._bindings.method_get_layout_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3909617982
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("is_layout_rtl");
      this._bindings.method_is_layout_rtl = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("set_auto_translate");
      this._bindings.method_set_auto_translate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("is_auto_translating");
      this._bindings.method_is_auto_translating = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("popup");
      this._bindings.method_popup = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1680304321
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("popup_on_parent");
      this._bindings.method_popup_on_parent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1763793166
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("popup_centered");
      this._bindings.method_popup_centered = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3447975422
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("popup_centered_ratio");
      this._bindings.method_popup_centered_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1014814997
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("popup_centered_clamped");
      this._bindings.method_popup_centered_clamped = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2613752477
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("popup_exclusive");
      this._bindings.method_popup_exclusive = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2134721627
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("popup_exclusive_on_parent");
      this._bindings.method_popup_exclusive_on_parent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2344671043
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("popup_exclusive_centered");
      this._bindings.method_popup_exclusive_centered = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3357594017
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("popup_exclusive_centered_ratio");
      this._bindings.method_popup_exclusive_centered_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2284776287
      );
    }
    {
      let classname = new StringName("Window");
      let methodname = new StringName("popup_exclusive_centered_clamped");
      this._bindings.method_popup_exclusive_centered_clamped = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2612708785
      );
    }
  }
  _get_contents_minimum_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_contents_minimum_size,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_title(_title) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_title,
      this._owner,
      _title
    );
  }
  get_title() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_title,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  get_window_id() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_window_id,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_initial_position(_initial_position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_initial_position,
      this._owner,
      _initial_position
    );
  }
  get_initial_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_initial_position,
      this._owner,
			Variant.INT,
      
    );
  }
  set_current_screen(_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_current_screen,
      this._owner,
      _index
    );
  }
  get_current_screen() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_current_screen,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_position(_position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_position,
      this._owner,
      _position
    );
  }
  get_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_position,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      
    );
  }
  move_to_center() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_move_to_center,
      this._owner,
      
    );
  }
  set_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_size,
      this._owner,
      _size
    );
  }
  get_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      
    );
  }
  reset_size() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_reset_size,
      this._owner,
      
    );
  }
  get_position_with_decorations() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_position_with_decorations,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      
    );
  }
  get_size_with_decorations() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_size_with_decorations,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      
    );
  }
  set_max_size(_max_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_max_size,
      this._owner,
      _max_size
    );
  }
  get_max_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_max_size,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      
    );
  }
  set_min_size(_min_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_min_size,
      this._owner,
      _min_size
    );
  }
  get_min_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_min_size,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      
    );
  }
  set_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mode,
      this._owner,
      _mode
    );
  }
  get_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_flag(_flag, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_flag,
      this._owner,
      _flag, _enabled
    );
  }
  get_flag(_flag) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_flag,
      this._owner,
			Variant.Type.BOOL,
      _flag
    );
  }
  is_maximize_allowed() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_maximize_allowed,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  request_attention() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_request_attention,
      this._owner,
      
    );
  }
  move_to_foreground() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_move_to_foreground,
      this._owner,
      
    );
  }
  set_visible(_visible) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_visible,
      this._owner,
      _visible
    );
  }
  is_visible() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_visible,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  hide() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_hide,
      this._owner,
      
    );
  }
  show() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_show,
      this._owner,
      
    );
  }
  set_transient(_transient) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_transient,
      this._owner,
      _transient
    );
  }
  is_transient() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_transient,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_transient_to_focused(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_transient_to_focused,
      this._owner,
      _enable
    );
  }
  is_transient_to_focused() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_transient_to_focused,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_exclusive(_exclusive) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_exclusive,
      this._owner,
      _exclusive
    );
  }
  is_exclusive() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_exclusive,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_unparent_when_invisible(_unparent) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_unparent_when_invisible,
      this._owner,
      _unparent
    );
  }
  can_draw() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_can_draw,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  has_focus() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_focus,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  grab_focus() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_grab_focus,
      this._owner,
      
    );
  }
  set_ime_active(_active) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ime_active,
      this._owner,
      _active
    );
  }
  set_ime_position(_position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ime_position,
      this._owner,
      _position
    );
  }
  is_embedded() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_embedded,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  get_contents_minimum_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_contents_minimum_size,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_force_native(_force_native) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_force_native,
      this._owner,
      _force_native
    );
  }
  get_force_native() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_force_native,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_content_scale_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_content_scale_size,
      this._owner,
      _size
    );
  }
  get_content_scale_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_content_scale_size,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      
    );
  }
  set_content_scale_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_content_scale_mode,
      this._owner,
      _mode
    );
  }
  get_content_scale_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_content_scale_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_content_scale_aspect(_aspect) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_content_scale_aspect,
      this._owner,
      _aspect
    );
  }
  get_content_scale_aspect() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_content_scale_aspect,
      this._owner,
			Variant.INT,
      
    );
  }
  set_content_scale_stretch(_stretch) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_content_scale_stretch,
      this._owner,
      _stretch
    );
  }
  get_content_scale_stretch() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_content_scale_stretch,
      this._owner,
			Variant.INT,
      
    );
  }
  set_keep_title_visible(_title_visible) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_keep_title_visible,
      this._owner,
      _title_visible
    );
  }
  get_keep_title_visible() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_keep_title_visible,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_content_scale_factor(_factor) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_content_scale_factor,
      this._owner,
      _factor
    );
  }
  get_content_scale_factor() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_content_scale_factor,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_use_font_oversampling(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_use_font_oversampling,
      this._owner,
      _enable
    );
  }
  is_using_font_oversampling() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_using_font_oversampling,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_mouse_passthrough_polygon(_polygon) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mouse_passthrough_polygon,
      this._owner,
      _polygon
    );
  }
  get_mouse_passthrough_polygon() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mouse_passthrough_polygon,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY
    ,
      
    );
  }
  set_wrap_controls(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_wrap_controls,
      this._owner,
      _enable
    );
  }
  is_wrapping_controls() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_wrapping_controls,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  child_controls_changed() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_child_controls_changed,
      this._owner,
      
    );
  }
  set_theme(_theme) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_theme,
      this._owner,
      _theme
    );
  }
  get_theme() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_theme,
      this._owner,
			Variant.INT,
      
    );
  }
  set_theme_type_variation(_theme_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_theme_type_variation,
      this._owner,
      _theme_type
    );
  }
  get_theme_type_variation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_theme_type_variation,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      
    );
  }
  begin_bulk_theme_override() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_begin_bulk_theme_override,
      this._owner,
      
    );
  }
  end_bulk_theme_override() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_end_bulk_theme_override,
      this._owner,
      
    );
  }
  add_theme_icon_override(_name, _texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_theme_icon_override,
      this._owner,
      _name, _texture
    );
  }
  add_theme_stylebox_override(_name, _stylebox) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_theme_stylebox_override,
      this._owner,
      _name, _stylebox
    );
  }
  add_theme_font_override(_name, _font) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_theme_font_override,
      this._owner,
      _name, _font
    );
  }
  add_theme_font_size_override(_name, _font_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_theme_font_size_override,
      this._owner,
      _name, _font_size
    );
  }
  add_theme_color_override(_name, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_theme_color_override,
      this._owner,
      _name, _color
    );
  }
  add_theme_constant_override(_name, _constant) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_theme_constant_override,
      this._owner,
      _name, _constant
    );
  }
  remove_theme_icon_override(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_theme_icon_override,
      this._owner,
      _name
    );
  }
  remove_theme_stylebox_override(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_theme_stylebox_override,
      this._owner,
      _name
    );
  }
  remove_theme_font_override(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_theme_font_override,
      this._owner,
      _name
    );
  }
  remove_theme_font_size_override(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_theme_font_size_override,
      this._owner,
      _name
    );
  }
  remove_theme_color_override(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_theme_color_override,
      this._owner,
      _name
    );
  }
  remove_theme_constant_override(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_theme_constant_override,
      this._owner,
      _name
    );
  }
  get_theme_icon(_name, _theme_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_theme_icon,
      this._owner,
			Variant.INT,
      _name, _theme_type
    );
  }
  get_theme_stylebox(_name, _theme_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_theme_stylebox,
      this._owner,
			Variant.INT,
      _name, _theme_type
    );
  }
  get_theme_font(_name, _theme_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_theme_font,
      this._owner,
			Variant.INT,
      _name, _theme_type
    );
  }
  get_theme_font_size(_name, _theme_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_theme_font_size,
      this._owner,
			Variant.Type.INT,
      _name, _theme_type
    );
  }
  get_theme_color(_name, _theme_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_theme_color,
      this._owner,
			Variant.Type.COLOR
    ,
      _name, _theme_type
    );
  }
  get_theme_constant(_name, _theme_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_theme_constant,
      this._owner,
			Variant.Type.INT,
      _name, _theme_type
    );
  }
  has_theme_icon_override(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_theme_icon_override,
      this._owner,
			Variant.Type.BOOL,
      _name
    );
  }
  has_theme_stylebox_override(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_theme_stylebox_override,
      this._owner,
			Variant.Type.BOOL,
      _name
    );
  }
  has_theme_font_override(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_theme_font_override,
      this._owner,
			Variant.Type.BOOL,
      _name
    );
  }
  has_theme_font_size_override(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_theme_font_size_override,
      this._owner,
			Variant.Type.BOOL,
      _name
    );
  }
  has_theme_color_override(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_theme_color_override,
      this._owner,
			Variant.Type.BOOL,
      _name
    );
  }
  has_theme_constant_override(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_theme_constant_override,
      this._owner,
			Variant.Type.BOOL,
      _name
    );
  }
  has_theme_icon(_name, _theme_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_theme_icon,
      this._owner,
			Variant.Type.BOOL,
      _name, _theme_type
    );
  }
  has_theme_stylebox(_name, _theme_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_theme_stylebox,
      this._owner,
			Variant.Type.BOOL,
      _name, _theme_type
    );
  }
  has_theme_font(_name, _theme_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_theme_font,
      this._owner,
			Variant.Type.BOOL,
      _name, _theme_type
    );
  }
  has_theme_font_size(_name, _theme_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_theme_font_size,
      this._owner,
			Variant.Type.BOOL,
      _name, _theme_type
    );
  }
  has_theme_color(_name, _theme_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_theme_color,
      this._owner,
			Variant.Type.BOOL,
      _name, _theme_type
    );
  }
  has_theme_constant(_name, _theme_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_theme_constant,
      this._owner,
			Variant.Type.BOOL,
      _name, _theme_type
    );
  }
  get_theme_default_base_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_theme_default_base_scale,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  get_theme_default_font() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_theme_default_font,
      this._owner,
			Variant.INT,
      
    );
  }
  get_theme_default_font_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_theme_default_font_size,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_layout_direction(_direction) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_layout_direction,
      this._owner,
      _direction
    );
  }
  get_layout_direction() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_layout_direction,
      this._owner,
			Variant.INT,
      
    );
  }
  is_layout_rtl() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_layout_rtl,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_auto_translate(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_auto_translate,
      this._owner,
      _enable
    );
  }
  is_auto_translating() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_auto_translating,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  popup(_rect) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_popup,
      this._owner,
      _rect
    );
  }
  popup_on_parent(_parent_rect) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_popup_on_parent,
      this._owner,
      _parent_rect
    );
  }
  popup_centered(_minsize) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_popup_centered,
      this._owner,
      _minsize
    );
  }
  popup_centered_ratio(_ratio) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_popup_centered_ratio,
      this._owner,
      _ratio
    );
  }
  popup_centered_clamped(_minsize, _fallback_ratio) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_popup_centered_clamped,
      this._owner,
      _minsize, _fallback_ratio
    );
  }
  popup_exclusive(_from_node, _rect) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_popup_exclusive,
      this._owner,
      _from_node, _rect
    );
  }
  popup_exclusive_on_parent(_from_node, _parent_rect) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_popup_exclusive_on_parent,
      this._owner,
      _from_node, _parent_rect
    );
  }
  popup_exclusive_centered(_from_node, _minsize) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_popup_exclusive_centered,
      this._owner,
      _from_node, _minsize
    );
  }
  popup_exclusive_centered_ratio(_from_node, _ratio) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_popup_exclusive_centered_ratio,
      this._owner,
      _from_node, _ratio
    );
  }
  popup_exclusive_centered_clamped(_from_node, _minsize, _fallback_ratio) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_popup_exclusive_centered_clamped,
      this._owner,
      _from_node, _minsize, _fallback_ratio
    );
  }
  static Mode = {
    MODE_WINDOWED: 0,
    MODE_MINIMIZED: 1,
    MODE_MAXIMIZED: 2,
    MODE_FULLSCREEN: 3,
    MODE_EXCLUSIVE_FULLSCREEN: 4,
  }
  static Flags = {
    FLAG_RESIZE_DISABLED: 0,
    FLAG_BORDERLESS: 1,
    FLAG_ALWAYS_ON_TOP: 2,
    FLAG_TRANSPARENT: 3,
    FLAG_NO_FOCUS: 4,
    FLAG_POPUP: 5,
    FLAG_EXTEND_TO_TITLE: 6,
    FLAG_MOUSE_PASSTHROUGH: 7,
    FLAG_MAX: 8,
  }
  static ContentScaleMode = {
    CONTENT_SCALE_MODE_DISABLED: 0,
    CONTENT_SCALE_MODE_CANVAS_ITEMS: 1,
    CONTENT_SCALE_MODE_VIEWPORT: 2,
  }
  static ContentScaleAspect = {
    CONTENT_SCALE_ASPECT_IGNORE: 0,
    CONTENT_SCALE_ASPECT_KEEP: 1,
    CONTENT_SCALE_ASPECT_KEEP_WIDTH: 2,
    CONTENT_SCALE_ASPECT_KEEP_HEIGHT: 3,
    CONTENT_SCALE_ASPECT_EXPAND: 4,
  }
  static ContentScaleStretch = {
    CONTENT_SCALE_STRETCH_FRACTIONAL: 0,
    CONTENT_SCALE_STRETCH_INTEGER: 1,
  }
  static LayoutDirection = {
    LAYOUT_DIRECTION_INHERITED: 0,
    LAYOUT_DIRECTION_LOCALE: 1,
    LAYOUT_DIRECTION_LTR: 2,
    LAYOUT_DIRECTION_RTL: 3,
  }
  static WindowInitialPosition = {
    WINDOW_INITIAL_POSITION_ABSOLUTE: 0,
    WINDOW_INITIAL_POSITION_CENTER_PRIMARY_SCREEN: 1,
    WINDOW_INITIAL_POSITION_CENTER_MAIN_WINDOW_SCREEN: 2,
    WINDOW_INITIAL_POSITION_CENTER_OTHER_SCREEN: 3,
    WINDOW_INITIAL_POSITION_CENTER_SCREEN_WITH_MOUSE_FOCUS: 4,
    WINDOW_INITIAL_POSITION_CENTER_SCREEN_WITH_KEYBOARD_FOCUS: 5,
  }
}