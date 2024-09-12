import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant';
import { StringName } from '@js_godot/variant/string_name';
import { Node } from '@js_godot/classes/node';
import { call_utility_ret, call_utility_no_ret, _call_native_mb_ret, _call_native_mb_no_ret } from "@js_godot/core/engine_ptrcall";
class _MethodBindings {
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
export class CanvasItem extends Node {
    static #_bindings = new _MethodBindings();
    static #initialized = false;
    constructor(godot_object) {
        if (!godot_object) {
            super("CanvasItem");
        }
        else {
            super(godot_object);
        }
    }
    static init_method_get_canvas_item() {
        if (!this.#_bindings.method_get_canvas_item) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("get_canvas_item");
            this.#_bindings.method_get_canvas_item = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2944877500);
        }
    }
    static init_method_set_visible() {
        if (!this.#_bindings.method_set_visible) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("set_visible");
            this.#_bindings.method_set_visible = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2586408642);
        }
    }
    static init_method_is_visible() {
        if (!this.#_bindings.method_is_visible) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("is_visible");
            this.#_bindings.method_is_visible = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_is_visible_in_tree() {
        if (!this.#_bindings.method_is_visible_in_tree) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("is_visible_in_tree");
            this.#_bindings.method_is_visible_in_tree = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_show() {
        if (!this.#_bindings.method_show) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("show");
            this.#_bindings.method_show = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3218959716);
        }
    }
    static init_method_hide() {
        if (!this.#_bindings.method_hide) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("hide");
            this.#_bindings.method_hide = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3218959716);
        }
    }
    static init_method_queue_redraw() {
        if (!this.#_bindings.method_queue_redraw) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("queue_redraw");
            this.#_bindings.method_queue_redraw = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3218959716);
        }
    }
    static init_method_move_to_front() {
        if (!this.#_bindings.method_move_to_front) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("move_to_front");
            this.#_bindings.method_move_to_front = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3218959716);
        }
    }
    static init_method_set_as_top_level() {
        if (!this.#_bindings.method_set_as_top_level) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("set_as_top_level");
            this.#_bindings.method_set_as_top_level = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2586408642);
        }
    }
    static init_method_is_set_as_top_level() {
        if (!this.#_bindings.method_is_set_as_top_level) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("is_set_as_top_level");
            this.#_bindings.method_is_set_as_top_level = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_set_light_mask() {
        if (!this.#_bindings.method_set_light_mask) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("set_light_mask");
            this.#_bindings.method_set_light_mask = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1286410249);
        }
    }
    static init_method_get_light_mask() {
        if (!this.#_bindings.method_get_light_mask) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("get_light_mask");
            this.#_bindings.method_get_light_mask = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3905245786);
        }
    }
    static init_method_set_modulate() {
        if (!this.#_bindings.method_set_modulate) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("set_modulate");
            this.#_bindings.method_set_modulate = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2920490490);
        }
    }
    static init_method_get_modulate() {
        if (!this.#_bindings.method_get_modulate) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("get_modulate");
            this.#_bindings.method_get_modulate = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3444240500);
        }
    }
    static init_method_set_self_modulate() {
        if (!this.#_bindings.method_set_self_modulate) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("set_self_modulate");
            this.#_bindings.method_set_self_modulate = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2920490490);
        }
    }
    static init_method_get_self_modulate() {
        if (!this.#_bindings.method_get_self_modulate) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("get_self_modulate");
            this.#_bindings.method_get_self_modulate = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3444240500);
        }
    }
    static init_method_set_z_index() {
        if (!this.#_bindings.method_set_z_index) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("set_z_index");
            this.#_bindings.method_set_z_index = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1286410249);
        }
    }
    static init_method_get_z_index() {
        if (!this.#_bindings.method_get_z_index) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("get_z_index");
            this.#_bindings.method_get_z_index = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3905245786);
        }
    }
    static init_method_set_z_as_relative() {
        if (!this.#_bindings.method_set_z_as_relative) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("set_z_as_relative");
            this.#_bindings.method_set_z_as_relative = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2586408642);
        }
    }
    static init_method_is_z_relative() {
        if (!this.#_bindings.method_is_z_relative) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("is_z_relative");
            this.#_bindings.method_is_z_relative = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_set_y_sort_enabled() {
        if (!this.#_bindings.method_set_y_sort_enabled) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("set_y_sort_enabled");
            this.#_bindings.method_set_y_sort_enabled = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2586408642);
        }
    }
    static init_method_is_y_sort_enabled() {
        if (!this.#_bindings.method_is_y_sort_enabled) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("is_y_sort_enabled");
            this.#_bindings.method_is_y_sort_enabled = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_set_draw_behind_parent() {
        if (!this.#_bindings.method_set_draw_behind_parent) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("set_draw_behind_parent");
            this.#_bindings.method_set_draw_behind_parent = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2586408642);
        }
    }
    static init_method_is_draw_behind_parent_enabled() {
        if (!this.#_bindings.method_is_draw_behind_parent_enabled) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("is_draw_behind_parent_enabled");
            this.#_bindings.method_is_draw_behind_parent_enabled = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_draw_line() {
        if (!this.#_bindings.method_draw_line) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_line");
            this.#_bindings.method_draw_line = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1562330099);
        }
    }
    static init_method_draw_dashed_line() {
        if (!this.#_bindings.method_draw_dashed_line) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_dashed_line");
            this.#_bindings.method_draw_dashed_line = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3653831622);
        }
    }
    static init_method_draw_polyline() {
        if (!this.#_bindings.method_draw_polyline) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_polyline");
            this.#_bindings.method_draw_polyline = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3797364428);
        }
    }
    static init_method_draw_polyline_colors() {
        if (!this.#_bindings.method_draw_polyline_colors) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_polyline_colors");
            this.#_bindings.method_draw_polyline_colors = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2311979562);
        }
    }
    static init_method_draw_arc() {
        if (!this.#_bindings.method_draw_arc) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_arc");
            this.#_bindings.method_draw_arc = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 4140652635);
        }
    }
    static init_method_draw_multiline() {
        if (!this.#_bindings.method_draw_multiline) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_multiline");
            this.#_bindings.method_draw_multiline = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3797364428);
        }
    }
    static init_method_draw_multiline_colors() {
        if (!this.#_bindings.method_draw_multiline_colors) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_multiline_colors");
            this.#_bindings.method_draw_multiline_colors = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2311979562);
        }
    }
    static init_method_draw_rect() {
        if (!this.#_bindings.method_draw_rect) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_rect");
            this.#_bindings.method_draw_rect = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2773573813);
        }
    }
    static init_method_draw_circle() {
        if (!this.#_bindings.method_draw_circle) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_circle");
            this.#_bindings.method_draw_circle = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3153026596);
        }
    }
    static init_method_draw_texture() {
        if (!this.#_bindings.method_draw_texture) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_texture");
            this.#_bindings.method_draw_texture = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 520200117);
        }
    }
    static init_method_draw_texture_rect() {
        if (!this.#_bindings.method_draw_texture_rect) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_texture_rect");
            this.#_bindings.method_draw_texture_rect = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3832805018);
        }
    }
    static init_method_draw_texture_rect_region() {
        if (!this.#_bindings.method_draw_texture_rect_region) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_texture_rect_region");
            this.#_bindings.method_draw_texture_rect_region = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3883821411);
        }
    }
    static init_method_draw_msdf_texture_rect_region() {
        if (!this.#_bindings.method_draw_msdf_texture_rect_region) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_msdf_texture_rect_region");
            this.#_bindings.method_draw_msdf_texture_rect_region = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 4219163252);
        }
    }
    static init_method_draw_lcd_texture_rect_region() {
        if (!this.#_bindings.method_draw_lcd_texture_rect_region) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_lcd_texture_rect_region");
            this.#_bindings.method_draw_lcd_texture_rect_region = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3212350954);
        }
    }
    static init_method_draw_style_box() {
        if (!this.#_bindings.method_draw_style_box) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_style_box");
            this.#_bindings.method_draw_style_box = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 388176283);
        }
    }
    static init_method_draw_primitive() {
        if (!this.#_bindings.method_draw_primitive) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_primitive");
            this.#_bindings.method_draw_primitive = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3288481815);
        }
    }
    static init_method_draw_polygon() {
        if (!this.#_bindings.method_draw_polygon) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_polygon");
            this.#_bindings.method_draw_polygon = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 974537912);
        }
    }
    static init_method_draw_colored_polygon() {
        if (!this.#_bindings.method_draw_colored_polygon) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_colored_polygon");
            this.#_bindings.method_draw_colored_polygon = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 15245644);
        }
    }
    static init_method_draw_string() {
        if (!this.#_bindings.method_draw_string) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_string");
            this.#_bindings.method_draw_string = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 728290553);
        }
    }
    static init_method_draw_multiline_string() {
        if (!this.#_bindings.method_draw_multiline_string) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_multiline_string");
            this.#_bindings.method_draw_multiline_string = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1927038192);
        }
    }
    static init_method_draw_string_outline() {
        if (!this.#_bindings.method_draw_string_outline) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_string_outline");
            this.#_bindings.method_draw_string_outline = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 340562381);
        }
    }
    static init_method_draw_multiline_string_outline() {
        if (!this.#_bindings.method_draw_multiline_string_outline) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_multiline_string_outline");
            this.#_bindings.method_draw_multiline_string_outline = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1912318525);
        }
    }
    static init_method_draw_char() {
        if (!this.#_bindings.method_draw_char) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_char");
            this.#_bindings.method_draw_char = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3339793283);
        }
    }
    static init_method_draw_char_outline() {
        if (!this.#_bindings.method_draw_char_outline) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_char_outline");
            this.#_bindings.method_draw_char_outline = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3302344391);
        }
    }
    static init_method_draw_mesh() {
        if (!this.#_bindings.method_draw_mesh) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_mesh");
            this.#_bindings.method_draw_mesh = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 153818295);
        }
    }
    static init_method_draw_multimesh() {
        if (!this.#_bindings.method_draw_multimesh) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_multimesh");
            this.#_bindings.method_draw_multimesh = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 937992368);
        }
    }
    static init_method_draw_set_transform() {
        if (!this.#_bindings.method_draw_set_transform) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_set_transform");
            this.#_bindings.method_draw_set_transform = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 288975085);
        }
    }
    static init_method_draw_set_transform_matrix() {
        if (!this.#_bindings.method_draw_set_transform_matrix) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_set_transform_matrix");
            this.#_bindings.method_draw_set_transform_matrix = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2761652528);
        }
    }
    static init_method_draw_animation_slice() {
        if (!this.#_bindings.method_draw_animation_slice) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_animation_slice");
            this.#_bindings.method_draw_animation_slice = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3112831842);
        }
    }
    static init_method_draw_end_animation() {
        if (!this.#_bindings.method_draw_end_animation) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("draw_end_animation");
            this.#_bindings.method_draw_end_animation = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3218959716);
        }
    }
    static init_method_get_transform() {
        if (!this.#_bindings.method_get_transform) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("get_transform");
            this.#_bindings.method_get_transform = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3814499831);
        }
    }
    static init_method_get_global_transform() {
        if (!this.#_bindings.method_get_global_transform) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("get_global_transform");
            this.#_bindings.method_get_global_transform = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3814499831);
        }
    }
    static init_method_get_global_transform_with_canvas() {
        if (!this.#_bindings.method_get_global_transform_with_canvas) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("get_global_transform_with_canvas");
            this.#_bindings.method_get_global_transform_with_canvas = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3814499831);
        }
    }
    static init_method_get_viewport_transform() {
        if (!this.#_bindings.method_get_viewport_transform) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("get_viewport_transform");
            this.#_bindings.method_get_viewport_transform = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3814499831);
        }
    }
    static init_method_get_viewport_rect() {
        if (!this.#_bindings.method_get_viewport_rect) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("get_viewport_rect");
            this.#_bindings.method_get_viewport_rect = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1639390495);
        }
    }
    static init_method_get_canvas_transform() {
        if (!this.#_bindings.method_get_canvas_transform) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("get_canvas_transform");
            this.#_bindings.method_get_canvas_transform = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3814499831);
        }
    }
    static init_method_get_screen_transform() {
        if (!this.#_bindings.method_get_screen_transform) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("get_screen_transform");
            this.#_bindings.method_get_screen_transform = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3814499831);
        }
    }
    static init_method_get_local_mouse_position() {
        if (!this.#_bindings.method_get_local_mouse_position) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("get_local_mouse_position");
            this.#_bindings.method_get_local_mouse_position = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3341600327);
        }
    }
    static init_method_get_global_mouse_position() {
        if (!this.#_bindings.method_get_global_mouse_position) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("get_global_mouse_position");
            this.#_bindings.method_get_global_mouse_position = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3341600327);
        }
    }
    static init_method_get_canvas() {
        if (!this.#_bindings.method_get_canvas) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("get_canvas");
            this.#_bindings.method_get_canvas = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2944877500);
        }
    }
    static init_method_get_canvas_layer_node() {
        if (!this.#_bindings.method_get_canvas_layer_node) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("get_canvas_layer_node");
            this.#_bindings.method_get_canvas_layer_node = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2602762519);
        }
    }
    static init_method_get_world_2d() {
        if (!this.#_bindings.method_get_world_2d) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("get_world_2d");
            this.#_bindings.method_get_world_2d = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2339128592);
        }
    }
    static init_method_set_material() {
        if (!this.#_bindings.method_set_material) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("set_material");
            this.#_bindings.method_set_material = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2757459619);
        }
    }
    static init_method_get_material() {
        if (!this.#_bindings.method_get_material) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("get_material");
            this.#_bindings.method_get_material = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 5934680);
        }
    }
    static init_method_set_use_parent_material() {
        if (!this.#_bindings.method_set_use_parent_material) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("set_use_parent_material");
            this.#_bindings.method_set_use_parent_material = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2586408642);
        }
    }
    static init_method_get_use_parent_material() {
        if (!this.#_bindings.method_get_use_parent_material) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("get_use_parent_material");
            this.#_bindings.method_get_use_parent_material = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_set_notify_local_transform() {
        if (!this.#_bindings.method_set_notify_local_transform) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("set_notify_local_transform");
            this.#_bindings.method_set_notify_local_transform = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2586408642);
        }
    }
    static init_method_is_local_transform_notification_enabled() {
        if (!this.#_bindings.method_is_local_transform_notification_enabled) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("is_local_transform_notification_enabled");
            this.#_bindings.method_is_local_transform_notification_enabled = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_set_notify_transform() {
        if (!this.#_bindings.method_set_notify_transform) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("set_notify_transform");
            this.#_bindings.method_set_notify_transform = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2586408642);
        }
    }
    static init_method_is_transform_notification_enabled() {
        if (!this.#_bindings.method_is_transform_notification_enabled) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("is_transform_notification_enabled");
            this.#_bindings.method_is_transform_notification_enabled = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_force_update_transform() {
        if (!this.#_bindings.method_force_update_transform) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("force_update_transform");
            this.#_bindings.method_force_update_transform = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3218959716);
        }
    }
    static init_method_make_canvas_position_local() {
        if (!this.#_bindings.method_make_canvas_position_local) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("make_canvas_position_local");
            this.#_bindings.method_make_canvas_position_local = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2656412154);
        }
    }
    static init_method_make_input_local() {
        if (!this.#_bindings.method_make_input_local) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("make_input_local");
            this.#_bindings.method_make_input_local = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 811130057);
        }
    }
    static init_method_set_visibility_layer() {
        if (!this.#_bindings.method_set_visibility_layer) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("set_visibility_layer");
            this.#_bindings.method_set_visibility_layer = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1286410249);
        }
    }
    static init_method_get_visibility_layer() {
        if (!this.#_bindings.method_get_visibility_layer) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("get_visibility_layer");
            this.#_bindings.method_get_visibility_layer = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3905245786);
        }
    }
    static init_method_set_visibility_layer_bit() {
        if (!this.#_bindings.method_set_visibility_layer_bit) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("set_visibility_layer_bit");
            this.#_bindings.method_set_visibility_layer_bit = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 300928843);
        }
    }
    static init_method_get_visibility_layer_bit() {
        if (!this.#_bindings.method_get_visibility_layer_bit) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("get_visibility_layer_bit");
            this.#_bindings.method_get_visibility_layer_bit = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1116898809);
        }
    }
    static init_method_set_texture_filter() {
        if (!this.#_bindings.method_set_texture_filter) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("set_texture_filter");
            this.#_bindings.method_set_texture_filter = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1037999706);
        }
    }
    static init_method_get_texture_filter() {
        if (!this.#_bindings.method_get_texture_filter) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("get_texture_filter");
            this.#_bindings.method_get_texture_filter = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 121960042);
        }
    }
    static init_method_set_texture_repeat() {
        if (!this.#_bindings.method_set_texture_repeat) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("set_texture_repeat");
            this.#_bindings.method_set_texture_repeat = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1716472974);
        }
    }
    static init_method_get_texture_repeat() {
        if (!this.#_bindings.method_get_texture_repeat) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("get_texture_repeat");
            this.#_bindings.method_get_texture_repeat = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2667158319);
        }
    }
    static init_method_set_clip_children_mode() {
        if (!this.#_bindings.method_set_clip_children_mode) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("set_clip_children_mode");
            this.#_bindings.method_set_clip_children_mode = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1319393776);
        }
    }
    static init_method_get_clip_children_mode() {
        if (!this.#_bindings.method_get_clip_children_mode) {
            let classname = new StringName("CanvasItem");
            let methodname = new StringName("get_clip_children_mode");
            this.#_bindings.method_get_clip_children_mode = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3581808349);
        }
    }
    _draw() {
    }
    get_canvas_item() {
        CanvasItem.init_method_get_canvas_item();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_get_canvas_item, this._owner, Variant.Type.RID);
    }
    set_visible(_visible) {
        CanvasItem.init_method_set_visible();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_set_visible, this._owner, _visible);
    }
    is_visible() {
        CanvasItem.init_method_is_visible();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_is_visible, this._owner, Variant.Type.BOOL);
    }
    is_visible_in_tree() {
        CanvasItem.init_method_is_visible_in_tree();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_is_visible_in_tree, this._owner, Variant.Type.BOOL);
    }
    show() {
        CanvasItem.init_method_show();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_show, this._owner);
    }
    hide() {
        CanvasItem.init_method_hide();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_hide, this._owner);
    }
    queue_redraw() {
        CanvasItem.init_method_queue_redraw();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_queue_redraw, this._owner);
    }
    move_to_front() {
        CanvasItem.init_method_move_to_front();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_move_to_front, this._owner);
    }
    set_as_top_level(_enable) {
        CanvasItem.init_method_set_as_top_level();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_set_as_top_level, this._owner, _enable);
    }
    is_set_as_top_level() {
        CanvasItem.init_method_is_set_as_top_level();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_is_set_as_top_level, this._owner, Variant.Type.BOOL);
    }
    set_light_mask(_light_mask) {
        CanvasItem.init_method_set_light_mask();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_set_light_mask, this._owner, _light_mask);
    }
    get_light_mask() {
        CanvasItem.init_method_get_light_mask();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_get_light_mask, this._owner, Variant.Type.INT);
    }
    set_modulate(_modulate) {
        CanvasItem.init_method_set_modulate();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_set_modulate, this._owner, _modulate);
    }
    get_modulate() {
        CanvasItem.init_method_get_modulate();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_get_modulate, this._owner, Variant.Type.COLOR);
    }
    set_self_modulate(_self_modulate) {
        CanvasItem.init_method_set_self_modulate();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_set_self_modulate, this._owner, _self_modulate);
    }
    get_self_modulate() {
        CanvasItem.init_method_get_self_modulate();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_get_self_modulate, this._owner, Variant.Type.COLOR);
    }
    set_z_index(_z_index) {
        CanvasItem.init_method_set_z_index();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_set_z_index, this._owner, _z_index);
    }
    get_z_index() {
        CanvasItem.init_method_get_z_index();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_get_z_index, this._owner, Variant.Type.INT);
    }
    set_z_as_relative(_enable) {
        CanvasItem.init_method_set_z_as_relative();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_set_z_as_relative, this._owner, _enable);
    }
    is_z_relative() {
        CanvasItem.init_method_is_z_relative();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_is_z_relative, this._owner, Variant.Type.BOOL);
    }
    set_y_sort_enabled(_enabled) {
        CanvasItem.init_method_set_y_sort_enabled();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_set_y_sort_enabled, this._owner, _enabled);
    }
    is_y_sort_enabled() {
        CanvasItem.init_method_is_y_sort_enabled();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_is_y_sort_enabled, this._owner, Variant.Type.BOOL);
    }
    set_draw_behind_parent(_enable) {
        CanvasItem.init_method_set_draw_behind_parent();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_set_draw_behind_parent, this._owner, _enable);
    }
    is_draw_behind_parent_enabled() {
        CanvasItem.init_method_is_draw_behind_parent_enabled();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_is_draw_behind_parent_enabled, this._owner, Variant.Type.BOOL);
    }
    draw_line(_from, _to, _color, _width, _antialiased) {
        CanvasItem.init_method_draw_line();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_line, this._owner, _from, _to, _color, _width, _antialiased);
    }
    draw_dashed_line(_from, _to, _color, _width, _dash, _aligned, _antialiased) {
        CanvasItem.init_method_draw_dashed_line();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_dashed_line, this._owner, _from, _to, _color, _width, _dash, _aligned, _antialiased);
    }
    draw_polyline(_points, _color, _width, _antialiased) {
        CanvasItem.init_method_draw_polyline();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_polyline, this._owner, _points, _color, _width, _antialiased);
    }
    draw_polyline_colors(_points, _colors, _width, _antialiased) {
        CanvasItem.init_method_draw_polyline_colors();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_polyline_colors, this._owner, _points, _colors, _width, _antialiased);
    }
    draw_arc(_center, _radius, _start_angle, _end_angle, _point_count, _color, _width, _antialiased) {
        CanvasItem.init_method_draw_arc();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_arc, this._owner, _center, _radius, _start_angle, _end_angle, _point_count, _color, _width, _antialiased);
    }
    draw_multiline(_points, _color, _width, _antialiased) {
        CanvasItem.init_method_draw_multiline();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_multiline, this._owner, _points, _color, _width, _antialiased);
    }
    draw_multiline_colors(_points, _colors, _width, _antialiased) {
        CanvasItem.init_method_draw_multiline_colors();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_multiline_colors, this._owner, _points, _colors, _width, _antialiased);
    }
    draw_rect(_rect, _color, _filled, _width, _antialiased) {
        CanvasItem.init_method_draw_rect();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_rect, this._owner, _rect, _color, _filled, _width, _antialiased);
    }
    draw_circle(_position, _radius, _color, _filled, _width, _antialiased) {
        CanvasItem.init_method_draw_circle();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_circle, this._owner, _position, _radius, _color, _filled, _width, _antialiased);
    }
    draw_texture(_texture, _position, _modulate) {
        CanvasItem.init_method_draw_texture();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_texture, this._owner, _texture, _position, _modulate);
    }
    draw_texture_rect(_texture, _rect, _tile, _modulate, _transpose) {
        CanvasItem.init_method_draw_texture_rect();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_texture_rect, this._owner, _texture, _rect, _tile, _modulate, _transpose);
    }
    draw_texture_rect_region(_texture, _rect, _src_rect, _modulate, _transpose, _clip_uv) {
        CanvasItem.init_method_draw_texture_rect_region();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_texture_rect_region, this._owner, _texture, _rect, _src_rect, _modulate, _transpose, _clip_uv);
    }
    draw_msdf_texture_rect_region(_texture, _rect, _src_rect, _modulate, _outline, _pixel_range, _scale) {
        CanvasItem.init_method_draw_msdf_texture_rect_region();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_msdf_texture_rect_region, this._owner, _texture, _rect, _src_rect, _modulate, _outline, _pixel_range, _scale);
    }
    draw_lcd_texture_rect_region(_texture, _rect, _src_rect, _modulate) {
        CanvasItem.init_method_draw_lcd_texture_rect_region();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_lcd_texture_rect_region, this._owner, _texture, _rect, _src_rect, _modulate);
    }
    draw_style_box(_style_box, _rect) {
        CanvasItem.init_method_draw_style_box();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_style_box, this._owner, _style_box, _rect);
    }
    draw_primitive(_points, _colors, _uvs, _texture) {
        CanvasItem.init_method_draw_primitive();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_primitive, this._owner, _points, _colors, _uvs, _texture);
    }
    draw_polygon(_points, _colors, _uvs, _texture) {
        CanvasItem.init_method_draw_polygon();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_polygon, this._owner, _points, _colors, _uvs, _texture);
    }
    draw_colored_polygon(_points, _color, _uvs, _texture) {
        CanvasItem.init_method_draw_colored_polygon();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_colored_polygon, this._owner, _points, _color, _uvs, _texture);
    }
    draw_string(_font, _pos, _text, _alignment, _width, _font_size, _modulate, _justification_flags, _direction, _orientation) {
        CanvasItem.init_method_draw_string();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_string, this._owner, _font, _pos, _text, _alignment, _width, _font_size, _modulate, _justification_flags, _direction, _orientation);
    }
    draw_multiline_string(_font, _pos, _text, _alignment, _width, _font_size, _max_lines, _modulate, _brk_flags, _justification_flags, _direction, _orientation) {
        CanvasItem.init_method_draw_multiline_string();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_multiline_string, this._owner, _font, _pos, _text, _alignment, _width, _font_size, _max_lines, _modulate, _brk_flags, _justification_flags, _direction, _orientation);
    }
    draw_string_outline(_font, _pos, _text, _alignment, _width, _font_size, _size, _modulate, _justification_flags, _direction, _orientation) {
        CanvasItem.init_method_draw_string_outline();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_string_outline, this._owner, _font, _pos, _text, _alignment, _width, _font_size, _size, _modulate, _justification_flags, _direction, _orientation);
    }
    draw_multiline_string_outline(_font, _pos, _text, _alignment, _width, _font_size, _max_lines, _size, _modulate, _brk_flags, _justification_flags, _direction, _orientation) {
        CanvasItem.init_method_draw_multiline_string_outline();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_multiline_string_outline, this._owner, _font, _pos, _text, _alignment, _width, _font_size, _max_lines, _size, _modulate, _brk_flags, _justification_flags, _direction, _orientation);
    }
    draw_char(_font, _pos, _char, _font_size, _modulate) {
        CanvasItem.init_method_draw_char();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_char, this._owner, _font, _pos, _char, _font_size, _modulate);
    }
    draw_char_outline(_font, _pos, _char, _font_size, _size, _modulate) {
        CanvasItem.init_method_draw_char_outline();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_char_outline, this._owner, _font, _pos, _char, _font_size, _size, _modulate);
    }
    draw_mesh(_mesh, _texture, _transform, _modulate) {
        CanvasItem.init_method_draw_mesh();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_mesh, this._owner, _mesh, _texture, _transform, _modulate);
    }
    draw_multimesh(_multimesh, _texture) {
        CanvasItem.init_method_draw_multimesh();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_multimesh, this._owner, _multimesh, _texture);
    }
    draw_set_transform(_position, _rotation, _scale) {
        CanvasItem.init_method_draw_set_transform();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_set_transform, this._owner, _position, _rotation, _scale);
    }
    draw_set_transform_matrix(_xform) {
        CanvasItem.init_method_draw_set_transform_matrix();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_set_transform_matrix, this._owner, _xform);
    }
    draw_animation_slice(_animation_length, _slice_begin, _slice_end, _offset) {
        CanvasItem.init_method_draw_animation_slice();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_animation_slice, this._owner, _animation_length, _slice_begin, _slice_end, _offset);
    }
    draw_end_animation() {
        CanvasItem.init_method_draw_end_animation();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_draw_end_animation, this._owner);
    }
    get_transform() {
        CanvasItem.init_method_get_transform();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_get_transform, this._owner, Variant.Type.TRANSFORM2D);
    }
    get_global_transform() {
        CanvasItem.init_method_get_global_transform();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_get_global_transform, this._owner, Variant.Type.TRANSFORM2D);
    }
    get_global_transform_with_canvas() {
        CanvasItem.init_method_get_global_transform_with_canvas();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_get_global_transform_with_canvas, this._owner, Variant.Type.TRANSFORM2D);
    }
    get_viewport_transform() {
        CanvasItem.init_method_get_viewport_transform();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_get_viewport_transform, this._owner, Variant.Type.TRANSFORM2D);
    }
    get_viewport_rect() {
        CanvasItem.init_method_get_viewport_rect();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_get_viewport_rect, this._owner, Variant.Type.RECT2);
    }
    get_canvas_transform() {
        CanvasItem.init_method_get_canvas_transform();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_get_canvas_transform, this._owner, Variant.Type.TRANSFORM2D);
    }
    get_screen_transform() {
        CanvasItem.init_method_get_screen_transform();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_get_screen_transform, this._owner, Variant.Type.TRANSFORM2D);
    }
    get_local_mouse_position() {
        CanvasItem.init_method_get_local_mouse_position();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_get_local_mouse_position, this._owner, Variant.Type.VECTOR2);
    }
    get_global_mouse_position() {
        CanvasItem.init_method_get_global_mouse_position();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_get_global_mouse_position, this._owner, Variant.Type.VECTOR2);
    }
    get_canvas() {
        CanvasItem.init_method_get_canvas();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_get_canvas, this._owner, Variant.Type.RID);
    }
    get_canvas_layer_node() {
        CanvasItem.init_method_get_canvas_layer_node();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_get_canvas_layer_node, this._owner, Variant.Type.OBJECT);
    }
    get_world_2d() {
        CanvasItem.init_method_get_world_2d();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_get_world_2d, this._owner, Variant.Type.OBJECT);
    }
    set_material(_material) {
        CanvasItem.init_method_set_material();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_set_material, this._owner, _material);
    }
    get_material() {
        CanvasItem.init_method_get_material();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_get_material, this._owner, Variant.Type.OBJECT);
    }
    set_use_parent_material(_enable) {
        CanvasItem.init_method_set_use_parent_material();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_set_use_parent_material, this._owner, _enable);
    }
    get_use_parent_material() {
        CanvasItem.init_method_get_use_parent_material();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_get_use_parent_material, this._owner, Variant.Type.BOOL);
    }
    set_notify_local_transform(_enable) {
        CanvasItem.init_method_set_notify_local_transform();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_set_notify_local_transform, this._owner, _enable);
    }
    is_local_transform_notification_enabled() {
        CanvasItem.init_method_is_local_transform_notification_enabled();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_is_local_transform_notification_enabled, this._owner, Variant.Type.BOOL);
    }
    set_notify_transform(_enable) {
        CanvasItem.init_method_set_notify_transform();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_set_notify_transform, this._owner, _enable);
    }
    is_transform_notification_enabled() {
        CanvasItem.init_method_is_transform_notification_enabled();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_is_transform_notification_enabled, this._owner, Variant.Type.BOOL);
    }
    force_update_transform() {
        CanvasItem.init_method_force_update_transform();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_force_update_transform, this._owner);
    }
    make_canvas_position_local(_screen_point) {
        CanvasItem.init_method_make_canvas_position_local();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_make_canvas_position_local, this._owner, Variant.Type.VECTOR2, _screen_point);
    }
    make_input_local(_event) {
        CanvasItem.init_method_make_input_local();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_make_input_local, this._owner, Variant.Type.OBJECT, _event);
    }
    set_visibility_layer(_layer) {
        CanvasItem.init_method_set_visibility_layer();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_set_visibility_layer, this._owner, _layer);
    }
    get_visibility_layer() {
        CanvasItem.init_method_get_visibility_layer();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_get_visibility_layer, this._owner, Variant.Type.INT);
    }
    set_visibility_layer_bit(_layer, _enabled) {
        CanvasItem.init_method_set_visibility_layer_bit();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_set_visibility_layer_bit, this._owner, _layer, _enabled);
    }
    get_visibility_layer_bit(_layer) {
        CanvasItem.init_method_get_visibility_layer_bit();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_get_visibility_layer_bit, this._owner, Variant.Type.BOOL, _layer);
    }
    set_texture_filter(_mode) {
        CanvasItem.init_method_set_texture_filter();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_set_texture_filter, this._owner, _mode);
    }
    get_texture_filter() {
        CanvasItem.init_method_get_texture_filter();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_get_texture_filter, this._owner, Variant.Type.INT);
    }
    set_texture_repeat(_mode) {
        CanvasItem.init_method_set_texture_repeat();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_set_texture_repeat, this._owner, _mode);
    }
    get_texture_repeat() {
        CanvasItem.init_method_get_texture_repeat();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_get_texture_repeat, this._owner, Variant.Type.INT);
    }
    set_clip_children_mode(_mode) {
        CanvasItem.init_method_set_clip_children_mode();
        return _call_native_mb_no_ret(CanvasItem.#_bindings.method_set_clip_children_mode, this._owner, _mode);
    }
    get_clip_children_mode() {
        CanvasItem.init_method_get_clip_children_mode();
        return _call_native_mb_ret(CanvasItem.#_bindings.method_get_clip_children_mode, this._owner, Variant.Type.INT);
    }
    get visible() {
        return this.is_visible();
    }
    set visible(new_value) {
        this.set_visible(new_value);
    }
    get modulate() {
        return this.get_modulate();
    }
    set modulate(new_value) {
        this.set_modulate(new_value);
    }
    get self_modulate() {
        return this.get_self_modulate();
    }
    set self_modulate(new_value) {
        this.set_self_modulate(new_value);
    }
    get show_behind_parent() {
        return this.is_draw_behind_parent_enabled();
    }
    set show_behind_parent(new_value) {
        this.set_draw_behind_parent(new_value);
    }
    get top_level() {
        return this.is_set_as_top_level();
    }
    set top_level(new_value) {
        this.set_as_top_level(new_value);
    }
    get clip_children() {
        return this.get_clip_children_mode();
    }
    set clip_children(new_value) {
        this.set_clip_children_mode(new_value);
    }
    get light_mask() {
        return this.get_light_mask();
    }
    set light_mask(new_value) {
        this.set_light_mask(new_value);
    }
    get visibility_layer() {
        return this.get_visibility_layer();
    }
    set visibility_layer(new_value) {
        this.set_visibility_layer(new_value);
    }
    get z_index() {
        return this.get_z_index();
    }
    set z_index(new_value) {
        this.set_z_index(new_value);
    }
    get z_as_relative() {
        return this.is_z_relative();
    }
    set z_as_relative(new_value) {
        this.set_z_as_relative(new_value);
    }
    get y_sort_enabled() {
        return this.is_y_sort_enabled();
    }
    set y_sort_enabled(new_value) {
        this.set_y_sort_enabled(new_value);
    }
    get texture_filter() {
        return this.get_texture_filter();
    }
    set texture_filter(new_value) {
        this.set_texture_filter(new_value);
    }
    get texture_repeat() {
        return this.get_texture_repeat();
    }
    set texture_repeat(new_value) {
        this.set_texture_repeat(new_value);
    }
    get material() {
        return this.get_material();
    }
    set material(new_value) {
        this.set_material(new_value);
    }
    get use_parent_material() {
        return this.get_use_parent_material();
    }
    set use_parent_material(new_value) {
        this.set_use_parent_material(new_value);
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
    };
    static TextureRepeat = {
        TEXTURE_REPEAT_PARENT_NODE: 0,
        TEXTURE_REPEAT_DISABLED: 1,
        TEXTURE_REPEAT_ENABLED: 2,
        TEXTURE_REPEAT_MIRROR: 3,
        TEXTURE_REPEAT_MAX: 4,
    };
    static ClipChildrenMode = {
        CLIP_CHILDREN_DISABLED: 0,
        CLIP_CHILDREN_ONLY: 1,
        CLIP_CHILDREN_AND_DRAW: 2,
        CLIP_CHILDREN_MAX: 3,
    };
}
