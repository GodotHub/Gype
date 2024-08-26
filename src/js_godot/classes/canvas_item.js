import * as internal from '__internal__';
import { Color } from 'src/js_godot/variant/color'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { GDString } from 'src/js_godot/variant/gd_string'
import { Rect2 } from 'src/js_godot/variant/rect2'
import { PackedVector2Array } from 'src/js_godot/variant/packed_vector2_array'
import { Node } from 'src/js_godot/classesnode'
import { PackedColorArray } from 'src/js_godot/variant/packed_color_array'
import { RID } from 'src/js_godot/variant/rid'
import { Transform2D } from 'src/js_godot/variant/transform2d'
class _MethodBindings {
    method__draw;
    method_get_canvas_item;
    method_set_visible;
    method_is_visible;
    method_is_visible_in_tree;
    method_show;
    method_hide;
    method_queue_redraw;
    method_move_to_front;
    method_set_as_top_level;
    method_is_set_as_top_level;
    method_set_light_mask;
    method_get_light_mask;
    method_set_modulate;
    method_get_modulate;
    method_set_self_modulate;
    method_get_self_modulate;
    method_set_z_index;
    method_get_z_index;
    method_set_z_as_relative;
    method_is_z_relative;
    method_set_y_sort_enabled;
    method_is_y_sort_enabled;
    method_set_draw_behind_parent;
    method_is_draw_behind_parent_enabled;
    method_draw_line;
    method_draw_dashed_line;
    method_draw_polyline;
    method_draw_polyline_colors;
    method_draw_arc;
    method_draw_multiline;
    method_draw_multiline_colors;
    method_draw_rect;
    method_draw_circle;
    method_draw_texture;
    method_draw_texture_rect;
    method_draw_texture_rect_region;
    method_draw_msdf_texture_rect_region;
    method_draw_lcd_texture_rect_region;
    method_draw_style_box;
    method_draw_primitive;
    method_draw_polygon;
    method_draw_colored_polygon;
    method_draw_string;
    method_draw_multiline_string;
    method_draw_string_outline;
    method_draw_multiline_string_outline;
    method_draw_char;
    method_draw_char_outline;
    method_draw_mesh;
    method_draw_multimesh;
    method_draw_set_transform;
    method_draw_set_transform_matrix;
    method_draw_animation_slice;
    method_draw_end_animation;
    method_get_transform;
    method_get_global_transform;
    method_get_global_transform_with_canvas;
    method_get_viewport_transform;
    method_get_viewport_rect;
    method_get_canvas_transform;
    method_get_screen_transform;
    method_get_local_mouse_position;
    method_get_global_mouse_position;
    method_get_canvas;
    method_get_canvas_layer_node;
    method_get_world_2d;
    method_set_material;
    method_get_material;
    method_set_use_parent_material;
    method_get_use_parent_material;
    method_set_notify_local_transform;
    method_is_local_transform_notification_enabled;
    method_set_notify_transform;
    method_is_transform_notification_enabled;
    method_force_update_transform;
    method_make_canvas_position_local;
    method_make_input_local;
    method_set_visibility_layer;
    method_get_visibility_layer;
    method_set_visibility_layer_bit;
    method_get_visibility_layer_bit;
    method_set_texture_filter;
    method_get_texture_filter;
    method_set_texture_repeat;
    method_get_texture_repeat;
    method_set_clip_children_mode;
    method_get_clip_children_mode;
}


export class CanvasItem extends Node{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CanvasItem");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("_draw");
      this._bindings.method__draw = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("get_canvas_item");
      this._bindings.method_get_canvas_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("set_visible");
      this._bindings.method_set_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("is_visible");
      this._bindings.method_is_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("is_visible_in_tree");
      this._bindings.method_is_visible_in_tree = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("show");
      this._bindings.method_show = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("hide");
      this._bindings.method_hide = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("queue_redraw");
      this._bindings.method_queue_redraw = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("move_to_front");
      this._bindings.method_move_to_front = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("set_as_top_level");
      this._bindings.method_set_as_top_level = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("is_set_as_top_level");
      this._bindings.method_is_set_as_top_level = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("set_light_mask");
      this._bindings.method_set_light_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("get_light_mask");
      this._bindings.method_get_light_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("set_modulate");
      this._bindings.method_set_modulate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("get_modulate");
      this._bindings.method_get_modulate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("set_self_modulate");
      this._bindings.method_set_self_modulate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("get_self_modulate");
      this._bindings.method_get_self_modulate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("set_z_index");
      this._bindings.method_set_z_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("get_z_index");
      this._bindings.method_get_z_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("set_z_as_relative");
      this._bindings.method_set_z_as_relative = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("is_z_relative");
      this._bindings.method_is_z_relative = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("set_y_sort_enabled");
      this._bindings.method_set_y_sort_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("is_y_sort_enabled");
      this._bindings.method_is_y_sort_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("set_draw_behind_parent");
      this._bindings.method_set_draw_behind_parent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("is_draw_behind_parent_enabled");
      this._bindings.method_is_draw_behind_parent_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_line");
      this._bindings.method_draw_line = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1562330099
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_dashed_line");
      this._bindings.method_draw_dashed_line = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3653831622
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_polyline");
      this._bindings.method_draw_polyline = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3797364428
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_polyline_colors");
      this._bindings.method_draw_polyline_colors = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2311979562
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_arc");
      this._bindings.method_draw_arc = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4140652635
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_multiline");
      this._bindings.method_draw_multiline = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3797364428
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_multiline_colors");
      this._bindings.method_draw_multiline_colors = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2311979562
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_rect");
      this._bindings.method_draw_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2773573813
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_circle");
      this._bindings.method_draw_circle = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3153026596
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_texture");
      this._bindings.method_draw_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        520200117
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_texture_rect");
      this._bindings.method_draw_texture_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3832805018
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_texture_rect_region");
      this._bindings.method_draw_texture_rect_region = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3883821411
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_msdf_texture_rect_region");
      this._bindings.method_draw_msdf_texture_rect_region = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4219163252
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_lcd_texture_rect_region");
      this._bindings.method_draw_lcd_texture_rect_region = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3212350954
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_style_box");
      this._bindings.method_draw_style_box = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        388176283
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_primitive");
      this._bindings.method_draw_primitive = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3288481815
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_polygon");
      this._bindings.method_draw_polygon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        974537912
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_colored_polygon");
      this._bindings.method_draw_colored_polygon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        15245644
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_string");
      this._bindings.method_draw_string = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        728290553
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_multiline_string");
      this._bindings.method_draw_multiline_string = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1927038192
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_string_outline");
      this._bindings.method_draw_string_outline = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        340562381
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_multiline_string_outline");
      this._bindings.method_draw_multiline_string_outline = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1912318525
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_char");
      this._bindings.method_draw_char = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3339793283
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_char_outline");
      this._bindings.method_draw_char_outline = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3302344391
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_mesh");
      this._bindings.method_draw_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        153818295
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_multimesh");
      this._bindings.method_draw_multimesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        937992368
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_set_transform");
      this._bindings.method_draw_set_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        288975085
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_set_transform_matrix");
      this._bindings.method_draw_set_transform_matrix = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2761652528
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_animation_slice");
      this._bindings.method_draw_animation_slice = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3112831842
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("draw_end_animation");
      this._bindings.method_draw_end_animation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("get_transform");
      this._bindings.method_get_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3814499831
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("get_global_transform");
      this._bindings.method_get_global_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3814499831
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("get_global_transform_with_canvas");
      this._bindings.method_get_global_transform_with_canvas = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3814499831
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("get_viewport_transform");
      this._bindings.method_get_viewport_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3814499831
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("get_viewport_rect");
      this._bindings.method_get_viewport_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1639390495
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("get_canvas_transform");
      this._bindings.method_get_canvas_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3814499831
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("get_screen_transform");
      this._bindings.method_get_screen_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3814499831
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("get_local_mouse_position");
      this._bindings.method_get_local_mouse_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("get_global_mouse_position");
      this._bindings.method_get_global_mouse_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("get_canvas");
      this._bindings.method_get_canvas = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("get_canvas_layer_node");
      this._bindings.method_get_canvas_layer_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2602762519
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("get_world_2d");
      this._bindings.method_get_world_2d = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2339128592
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("set_material");
      this._bindings.method_set_material = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2757459619
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("get_material");
      this._bindings.method_get_material = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        5934680
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("set_use_parent_material");
      this._bindings.method_set_use_parent_material = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("get_use_parent_material");
      this._bindings.method_get_use_parent_material = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("set_notify_local_transform");
      this._bindings.method_set_notify_local_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("is_local_transform_notification_enabled");
      this._bindings.method_is_local_transform_notification_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("set_notify_transform");
      this._bindings.method_set_notify_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("is_transform_notification_enabled");
      this._bindings.method_is_transform_notification_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("force_update_transform");
      this._bindings.method_force_update_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("make_canvas_position_local");
      this._bindings.method_make_canvas_position_local = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2656412154
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("make_input_local");
      this._bindings.method_make_input_local = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        811130057
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("set_visibility_layer");
      this._bindings.method_set_visibility_layer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("get_visibility_layer");
      this._bindings.method_get_visibility_layer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("set_visibility_layer_bit");
      this._bindings.method_set_visibility_layer_bit = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("get_visibility_layer_bit");
      this._bindings.method_get_visibility_layer_bit = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("set_texture_filter");
      this._bindings.method_set_texture_filter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1037999706
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("get_texture_filter");
      this._bindings.method_get_texture_filter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        121960042
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("set_texture_repeat");
      this._bindings.method_set_texture_repeat = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1716472974
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("get_texture_repeat");
      this._bindings.method_get_texture_repeat = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2667158319
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("set_clip_children_mode");
      this._bindings.method_set_clip_children_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1319393776
      );
    }
    {
      let classname = new StringName("CanvasItem");
      let methodname = new StringName("get_clip_children_mode");
      this._bindings.method_get_clip_children_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3581808349
      );
    }
  }
  _draw() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__draw,
      this._owner,
      
    );
  }
  get_canvas_item() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_canvas_item,
      this._owner,
			Variant.Type.RID
    ,
      
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
  is_visible_in_tree() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_visible_in_tree,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  show() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_show,
      this._owner,
      
    );
  }
  hide() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_hide,
      this._owner,
      
    );
  }
  queue_redraw() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_queue_redraw,
      this._owner,
      
    );
  }
  move_to_front() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_move_to_front,
      this._owner,
      
    );
  }
  set_as_top_level(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_as_top_level,
      this._owner,
      _enable
    );
  }
  is_set_as_top_level() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_set_as_top_level,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_light_mask(_light_mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_light_mask,
      this._owner,
      _light_mask
    );
  }
  get_light_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_light_mask,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_modulate(_modulate) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_modulate,
      this._owner,
      _modulate
    );
  }
  get_modulate() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_modulate,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
  set_self_modulate(_self_modulate) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_self_modulate,
      this._owner,
      _self_modulate
    );
  }
  get_self_modulate() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_self_modulate,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
  set_z_index(_z_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_z_index,
      this._owner,
      _z_index
    );
  }
  get_z_index() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_z_index,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_z_as_relative(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_z_as_relative,
      this._owner,
      _enable
    );
  }
  is_z_relative() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_z_relative,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_y_sort_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_y_sort_enabled,
      this._owner,
      _enabled
    );
  }
  is_y_sort_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_y_sort_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_draw_behind_parent(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_draw_behind_parent,
      this._owner,
      _enable
    );
  }
  is_draw_behind_parent_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_draw_behind_parent_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  draw_line(_from, _to, _color, _width, _antialiased) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_line,
      this._owner,
      _from, _to, _color, _width, _antialiased
    );
  }
  draw_dashed_line(_from, _to, _color, _width, _dash, _aligned, _antialiased) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_dashed_line,
      this._owner,
      _from, _to, _color, _width, _dash, _aligned, _antialiased
    );
  }
  draw_polyline(_points, _color, _width, _antialiased) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_polyline,
      this._owner,
      _points, _color, _width, _antialiased
    );
  }
  draw_polyline_colors(_points, _colors, _width, _antialiased) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_polyline_colors,
      this._owner,
      _points, _colors, _width, _antialiased
    );
  }
  draw_arc(_center, _radius, _start_angle, _end_angle, _point_count, _color, _width, _antialiased) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_arc,
      this._owner,
      _center, _radius, _start_angle, _end_angle, _point_count, _color, _width, _antialiased
    );
  }
  draw_multiline(_points, _color, _width, _antialiased) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_multiline,
      this._owner,
      _points, _color, _width, _antialiased
    );
  }
  draw_multiline_colors(_points, _colors, _width, _antialiased) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_multiline_colors,
      this._owner,
      _points, _colors, _width, _antialiased
    );
  }
  draw_rect(_rect, _color, _filled, _width, _antialiased) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_rect,
      this._owner,
      _rect, _color, _filled, _width, _antialiased
    );
  }
  draw_circle(_position, _radius, _color, _filled, _width, _antialiased) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_circle,
      this._owner,
      _position, _radius, _color, _filled, _width, _antialiased
    );
  }
  draw_texture(_texture, _position, _modulate) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_texture,
      this._owner,
      _texture, _position, _modulate
    );
  }
  draw_texture_rect(_texture, _rect, _tile, _modulate, _transpose) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_texture_rect,
      this._owner,
      _texture, _rect, _tile, _modulate, _transpose
    );
  }
  draw_texture_rect_region(_texture, _rect, _src_rect, _modulate, _transpose, _clip_uv) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_texture_rect_region,
      this._owner,
      _texture, _rect, _src_rect, _modulate, _transpose, _clip_uv
    );
  }
  draw_msdf_texture_rect_region(_texture, _rect, _src_rect, _modulate, _outline, _pixel_range, _scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_msdf_texture_rect_region,
      this._owner,
      _texture, _rect, _src_rect, _modulate, _outline, _pixel_range, _scale
    );
  }
  draw_lcd_texture_rect_region(_texture, _rect, _src_rect, _modulate) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_lcd_texture_rect_region,
      this._owner,
      _texture, _rect, _src_rect, _modulate
    );
  }
  draw_style_box(_style_box, _rect) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_style_box,
      this._owner,
      _style_box, _rect
    );
  }
  draw_primitive(_points, _colors, _uvs, _texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_primitive,
      this._owner,
      _points, _colors, _uvs, _texture
    );
  }
  draw_polygon(_points, _colors, _uvs, _texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_polygon,
      this._owner,
      _points, _colors, _uvs, _texture
    );
  }
  draw_colored_polygon(_points, _color, _uvs, _texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_colored_polygon,
      this._owner,
      _points, _color, _uvs, _texture
    );
  }
  draw_string(_font, _pos, _text, _alignment, _width, _font_size, _modulate, _justification_flags, _direction, _orientation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_string,
      this._owner,
      _font, _pos, _text, _alignment, _width, _font_size, _modulate, _justification_flags, _direction, _orientation
    );
  }
  draw_multiline_string(_font, _pos, _text, _alignment, _width, _font_size, _max_lines, _modulate, _brk_flags, _justification_flags, _direction, _orientation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_multiline_string,
      this._owner,
      _font, _pos, _text, _alignment, _width, _font_size, _max_lines, _modulate, _brk_flags, _justification_flags, _direction, _orientation
    );
  }
  draw_string_outline(_font, _pos, _text, _alignment, _width, _font_size, _size, _modulate, _justification_flags, _direction, _orientation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_string_outline,
      this._owner,
      _font, _pos, _text, _alignment, _width, _font_size, _size, _modulate, _justification_flags, _direction, _orientation
    );
  }
  draw_multiline_string_outline(_font, _pos, _text, _alignment, _width, _font_size, _max_lines, _size, _modulate, _brk_flags, _justification_flags, _direction, _orientation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_multiline_string_outline,
      this._owner,
      _font, _pos, _text, _alignment, _width, _font_size, _max_lines, _size, _modulate, _brk_flags, _justification_flags, _direction, _orientation
    );
  }
  draw_char(_font, _pos, _char, _font_size, _modulate) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_char,
      this._owner,
      _font, _pos, _char, _font_size, _modulate
    );
  }
  draw_char_outline(_font, _pos, _char, _font_size, _size, _modulate) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_char_outline,
      this._owner,
      _font, _pos, _char, _font_size, _size, _modulate
    );
  }
  draw_mesh(_mesh, _texture, _transform, _modulate) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_mesh,
      this._owner,
      _mesh, _texture, _transform, _modulate
    );
  }
  draw_multimesh(_multimesh, _texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_multimesh,
      this._owner,
      _multimesh, _texture
    );
  }
  draw_set_transform(_position, _rotation, _scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_set_transform,
      this._owner,
      _position, _rotation, _scale
    );
  }
  draw_set_transform_matrix(_xform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_set_transform_matrix,
      this._owner,
      _xform
    );
  }
  draw_animation_slice(_animation_length, _slice_begin, _slice_end, _offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_animation_slice,
      this._owner,
      _animation_length, _slice_begin, _slice_end, _offset
    );
  }
  draw_end_animation() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_draw_end_animation,
      this._owner,
      
    );
  }
  get_transform() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_transform,
      this._owner,
			Variant.Type.TRANSFORM2D
    ,
      
    );
  }
  get_global_transform() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_global_transform,
      this._owner,
			Variant.Type.TRANSFORM2D
    ,
      
    );
  }
  get_global_transform_with_canvas() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_global_transform_with_canvas,
      this._owner,
			Variant.Type.TRANSFORM2D
    ,
      
    );
  }
  get_viewport_transform() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_viewport_transform,
      this._owner,
			Variant.Type.TRANSFORM2D
    ,
      
    );
  }
  get_viewport_rect() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_viewport_rect,
      this._owner,
			Variant.Type.RECT2
    ,
      
    );
  }
  get_canvas_transform() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_canvas_transform,
      this._owner,
			Variant.Type.TRANSFORM2D
    ,
      
    );
  }
  get_screen_transform() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_screen_transform,
      this._owner,
			Variant.Type.TRANSFORM2D
    ,
      
    );
  }
  get_local_mouse_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_local_mouse_position,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  get_global_mouse_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_global_mouse_position,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  get_canvas() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_canvas,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  get_canvas_layer_node() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_canvas_layer_node,
      this._owner,
			Variant.INT,
      
    );
  }
  get_world_2d() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_world_2d,
      this._owner,
			Variant.INT,
      
    );
  }
  set_material(_material) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_material,
      this._owner,
      _material
    );
  }
  get_material() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_material,
      this._owner,
			Variant.INT,
      
    );
  }
  set_use_parent_material(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_use_parent_material,
      this._owner,
      _enable
    );
  }
  get_use_parent_material() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_use_parent_material,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_notify_local_transform(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_notify_local_transform,
      this._owner,
      _enable
    );
  }
  is_local_transform_notification_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_local_transform_notification_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_notify_transform(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_notify_transform,
      this._owner,
      _enable
    );
  }
  is_transform_notification_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_transform_notification_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  force_update_transform() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_force_update_transform,
      this._owner,
      
    );
  }
  make_canvas_position_local(_screen_point) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_make_canvas_position_local,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _screen_point
    );
  }
  make_input_local(_event) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_make_input_local,
      this._owner,
			Variant.INT,
      _event
    );
  }
  set_visibility_layer(_layer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_visibility_layer,
      this._owner,
      _layer
    );
  }
  get_visibility_layer() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_visibility_layer,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_visibility_layer_bit(_layer, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_visibility_layer_bit,
      this._owner,
      _layer, _enabled
    );
  }
  get_visibility_layer_bit(_layer) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_visibility_layer_bit,
      this._owner,
			Variant.Type.BOOL,
      _layer
    );
  }
  set_texture_filter(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_filter,
      this._owner,
      _mode
    );
  }
  get_texture_filter() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_filter,
      this._owner,
			Variant.INT,
      
    );
  }
  set_texture_repeat(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_repeat,
      this._owner,
      _mode
    );
  }
  get_texture_repeat() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_repeat,
      this._owner,
			Variant.INT,
      
    );
  }
  set_clip_children_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_clip_children_mode,
      this._owner,
      _mode
    );
  }
  get_clip_children_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_clip_children_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  static TextureFilter = {
    TEXTURE_FILTER_PARENT_NODE: 0,
    TEXTURE_FILTER_NEAREST: 1,
    TEXTURE_FILTER_LINEAR: 2,
    TEXTURE_FILTER_NEAREST_WITH_MIPMAPS: 3,
    TEXTURE_FILTER_LINEAR_WITH_MIPMAPS: 4,
    TEXTURE_FILTER_NEAREST_WITH_MIPMAPS_ANISOTROPIC: 5,
    TEXTURE_FILTER_LINEAR_WITH_MIPMAPS_ANISOTROPIC: 6,
    TEXTURE_FILTER_MAX: 7,
  }
  static TextureRepeat = {
    TEXTURE_REPEAT_PARENT_NODE: 0,
    TEXTURE_REPEAT_DISABLED: 1,
    TEXTURE_REPEAT_ENABLED: 2,
    TEXTURE_REPEAT_MIRROR: 3,
    TEXTURE_REPEAT_MAX: 4,
  }
  static ClipChildrenMode = {
    CLIP_CHILDREN_DISABLED: 0,
    CLIP_CHILDREN_ONLY: 1,
    CLIP_CHILDREN_AND_DRAW: 2,
    CLIP_CHILDREN_MAX: 3,
  }
}