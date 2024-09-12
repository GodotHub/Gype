import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Node } from '@js_godot/classes/node'
import { GDArray } from '@js_godot/variant/gd_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_world_2d;
  method_get_world_2d;
  method_find_world_2d;
  method_set_canvas_transform;
  method_get_canvas_transform;
  method_set_global_canvas_transform;
  method_get_global_canvas_transform;
  method_get_final_transform;
  method_get_screen_transform;
  method_get_visible_rect;
  method_set_transparent_background;
  method_has_transparent_background;
  method_set_use_hdr_2d;
  method_is_using_hdr_2d;
  method_set_msaa_2d;
  method_get_msaa_2d;
  method_set_msaa_3d;
  method_get_msaa_3d;
  method_set_screen_space_aa;
  method_get_screen_space_aa;
  method_set_use_taa;
  method_is_using_taa;
  method_set_use_debanding;
  method_is_using_debanding;
  method_set_use_occlusion_culling;
  method_is_using_occlusion_culling;
  method_set_debug_draw;
  method_get_debug_draw;
  method_get_render_info;
  method_get_texture;
  method_set_physics_object_picking;
  method_get_physics_object_picking;
  method_set_physics_object_picking_sort;
  method_get_physics_object_picking_sort;
  method_set_physics_object_picking_first_only;
  method_get_physics_object_picking_first_only;
  method_get_viewport_rid;
  method_push_text_input;
  method_push_input;
  method_push_unhandled_input;
  method_get_mouse_position;
  method_warp_mouse;
  method_update_mouse_cursor_state;
  method_gui_get_drag_data;
  method_gui_is_dragging;
  method_gui_is_drag_successful;
  method_gui_release_focus;
  method_gui_get_focus_owner;
  method_gui_get_hovered_control;
  method_set_disable_input;
  method_is_input_disabled;
  method_set_positional_shadow_atlas_size;
  method_get_positional_shadow_atlas_size;
  method_set_positional_shadow_atlas_16_bits;
  method_get_positional_shadow_atlas_16_bits;
  method_set_snap_controls_to_pixels;
  method_is_snap_controls_to_pixels_enabled;
  method_set_snap_2d_transforms_to_pixel;
  method_is_snap_2d_transforms_to_pixel_enabled;
  method_set_snap_2d_vertices_to_pixel;
  method_is_snap_2d_vertices_to_pixel_enabled;
  method_set_positional_shadow_atlas_quadrant_subdiv;
  method_get_positional_shadow_atlas_quadrant_subdiv;
  method_set_input_as_handled;
  method_is_input_handled;
  method_set_handle_input_locally;
  method_is_handling_input_locally;
  method_set_default_canvas_item_texture_filter;
  method_get_default_canvas_item_texture_filter;
  method_set_embedding_subwindows;
  method_is_embedding_subwindows;
  method_get_embedded_subwindows;
  method_set_canvas_cull_mask;
  method_get_canvas_cull_mask;
  method_set_canvas_cull_mask_bit;
  method_get_canvas_cull_mask_bit;
  method_set_default_canvas_item_texture_repeat;
  method_get_default_canvas_item_texture_repeat;
  method_set_sdf_oversize;
  method_get_sdf_oversize;
  method_set_sdf_scale;
  method_get_sdf_scale;
  method_set_mesh_lod_threshold;
  method_get_mesh_lod_threshold;
  method_set_as_audio_listener_2d;
  method_is_audio_listener_2d;
  method_get_camera_2d;
  method_set_world_3d;
  method_get_world_3d;
  method_find_world_3d;
  method_set_use_own_world_3d;
  method_is_using_own_world_3d;
  method_get_camera_3d;
  method_set_as_audio_listener_3d;
  method_is_audio_listener_3d;
  method_set_disable_3d;
  method_is_3d_disabled;
  method_set_use_xr;
  method_is_using_xr;
  method_set_scaling_3d_mode;
  method_get_scaling_3d_mode;
  method_set_scaling_3d_scale;
  method_get_scaling_3d_scale;
  method_set_fsr_sharpness;
  method_get_fsr_sharpness;
  method_set_texture_mipmap_bias;
  method_get_texture_mipmap_bias;
  method_set_vrs_mode;
  method_get_vrs_mode;
  method_set_vrs_update_mode;
  method_get_vrs_update_mode;
  method_set_vrs_texture;
  method_get_vrs_texture;
}
export class Viewport extends Node{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Viewport");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_world_2d() {
    if (!this.#_bindings.method_set_world_2d) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_world_2d");
      this.#_bindings.method_set_world_2d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2736080068
      );
    }
  }
  static init_method_get_world_2d() {
    if (!this.#_bindings.method_get_world_2d) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_world_2d");
      this.#_bindings.method_get_world_2d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339128592
      );
    }
  }
  static init_method_find_world_2d() {
    if (!this.#_bindings.method_find_world_2d) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("find_world_2d");
      this.#_bindings.method_find_world_2d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339128592
      );
    }
  }
  static init_method_set_canvas_transform() {
    if (!this.#_bindings.method_set_canvas_transform) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_canvas_transform");
      this.#_bindings.method_set_canvas_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2761652528
      );
    }
  }
  static init_method_get_canvas_transform() {
    if (!this.#_bindings.method_get_canvas_transform) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_canvas_transform");
      this.#_bindings.method_get_canvas_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3814499831
      );
    }
  }
  static init_method_set_global_canvas_transform() {
    if (!this.#_bindings.method_set_global_canvas_transform) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_global_canvas_transform");
      this.#_bindings.method_set_global_canvas_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2761652528
      );
    }
  }
  static init_method_get_global_canvas_transform() {
    if (!this.#_bindings.method_get_global_canvas_transform) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_global_canvas_transform");
      this.#_bindings.method_get_global_canvas_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3814499831
      );
    }
  }
  static init_method_get_final_transform() {
    if (!this.#_bindings.method_get_final_transform) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_final_transform");
      this.#_bindings.method_get_final_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3814499831
      );
    }
  }
  static init_method_get_screen_transform() {
    if (!this.#_bindings.method_get_screen_transform) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_screen_transform");
      this.#_bindings.method_get_screen_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3814499831
      );
    }
  }
  static init_method_get_visible_rect() {
    if (!this.#_bindings.method_get_visible_rect) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_visible_rect");
      this.#_bindings.method_get_visible_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1639390495
      );
    }
  }
  static init_method_set_transparent_background() {
    if (!this.#_bindings.method_set_transparent_background) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_transparent_background");
      this.#_bindings.method_set_transparent_background = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_has_transparent_background() {
    if (!this.#_bindings.method_has_transparent_background) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("has_transparent_background");
      this.#_bindings.method_has_transparent_background = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_use_hdr_2d() {
    if (!this.#_bindings.method_set_use_hdr_2d) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_use_hdr_2d");
      this.#_bindings.method_set_use_hdr_2d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_using_hdr_2d() {
    if (!this.#_bindings.method_is_using_hdr_2d) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("is_using_hdr_2d");
      this.#_bindings.method_is_using_hdr_2d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_msaa_2d() {
    if (!this.#_bindings.method_set_msaa_2d) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_msaa_2d");
      this.#_bindings.method_set_msaa_2d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3330258708
      );
    }
  }
  static init_method_get_msaa_2d() {
    if (!this.#_bindings.method_get_msaa_2d) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_msaa_2d");
      this.#_bindings.method_get_msaa_2d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2542055527
      );
    }
  }
  static init_method_set_msaa_3d() {
    if (!this.#_bindings.method_set_msaa_3d) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_msaa_3d");
      this.#_bindings.method_set_msaa_3d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3330258708
      );
    }
  }
  static init_method_get_msaa_3d() {
    if (!this.#_bindings.method_get_msaa_3d) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_msaa_3d");
      this.#_bindings.method_get_msaa_3d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2542055527
      );
    }
  }
  static init_method_set_screen_space_aa() {
    if (!this.#_bindings.method_set_screen_space_aa) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_screen_space_aa");
      this.#_bindings.method_set_screen_space_aa = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3544169389
      );
    }
  }
  static init_method_get_screen_space_aa() {
    if (!this.#_bindings.method_get_screen_space_aa) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_screen_space_aa");
      this.#_bindings.method_get_screen_space_aa = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1390814124
      );
    }
  }
  static init_method_set_use_taa() {
    if (!this.#_bindings.method_set_use_taa) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_use_taa");
      this.#_bindings.method_set_use_taa = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_using_taa() {
    if (!this.#_bindings.method_is_using_taa) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("is_using_taa");
      this.#_bindings.method_is_using_taa = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_use_debanding() {
    if (!this.#_bindings.method_set_use_debanding) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_use_debanding");
      this.#_bindings.method_set_use_debanding = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_using_debanding() {
    if (!this.#_bindings.method_is_using_debanding) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("is_using_debanding");
      this.#_bindings.method_is_using_debanding = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_use_occlusion_culling() {
    if (!this.#_bindings.method_set_use_occlusion_culling) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_use_occlusion_culling");
      this.#_bindings.method_set_use_occlusion_culling = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_using_occlusion_culling() {
    if (!this.#_bindings.method_is_using_occlusion_culling) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("is_using_occlusion_culling");
      this.#_bindings.method_is_using_occlusion_culling = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_debug_draw() {
    if (!this.#_bindings.method_set_debug_draw) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_debug_draw");
      this.#_bindings.method_set_debug_draw = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1970246205
      );
    }
  }
  static init_method_get_debug_draw() {
    if (!this.#_bindings.method_get_debug_draw) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_debug_draw");
      this.#_bindings.method_get_debug_draw = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        579191299
      );
    }
  }
  static init_method_get_render_info() {
    if (!this.#_bindings.method_get_render_info) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_render_info");
      this.#_bindings.method_get_render_info = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        481977019
      );
    }
  }
  static init_method_get_texture() {
    if (!this.#_bindings.method_get_texture) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_texture");
      this.#_bindings.method_get_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1746695840
      );
    }
  }
  static init_method_set_physics_object_picking() {
    if (!this.#_bindings.method_set_physics_object_picking) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_physics_object_picking");
      this.#_bindings.method_set_physics_object_picking = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_physics_object_picking() {
    if (!this.#_bindings.method_get_physics_object_picking) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_physics_object_picking");
      this.#_bindings.method_get_physics_object_picking = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_set_physics_object_picking_sort() {
    if (!this.#_bindings.method_set_physics_object_picking_sort) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_physics_object_picking_sort");
      this.#_bindings.method_set_physics_object_picking_sort = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_physics_object_picking_sort() {
    if (!this.#_bindings.method_get_physics_object_picking_sort) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_physics_object_picking_sort");
      this.#_bindings.method_get_physics_object_picking_sort = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_set_physics_object_picking_first_only() {
    if (!this.#_bindings.method_set_physics_object_picking_first_only) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_physics_object_picking_first_only");
      this.#_bindings.method_set_physics_object_picking_first_only = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_physics_object_picking_first_only() {
    if (!this.#_bindings.method_get_physics_object_picking_first_only) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_physics_object_picking_first_only");
      this.#_bindings.method_get_physics_object_picking_first_only = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_get_viewport_rid() {
    if (!this.#_bindings.method_get_viewport_rid) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_viewport_rid");
      this.#_bindings.method_get_viewport_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_push_text_input() {
    if (!this.#_bindings.method_push_text_input) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("push_text_input");
      this.#_bindings.method_push_text_input = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_push_input() {
    if (!this.#_bindings.method_push_input) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("push_input");
      this.#_bindings.method_push_input = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3644664830
      );
    }
  }
  static init_method_push_unhandled_input() {
    if (!this.#_bindings.method_push_unhandled_input) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("push_unhandled_input");
      this.#_bindings.method_push_unhandled_input = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3644664830
      );
    }
  }
  static init_method_get_mouse_position() {
    if (!this.#_bindings.method_get_mouse_position) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_mouse_position");
      this.#_bindings.method_get_mouse_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_warp_mouse() {
    if (!this.#_bindings.method_warp_mouse) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("warp_mouse");
      this.#_bindings.method_warp_mouse = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_update_mouse_cursor_state() {
    if (!this.#_bindings.method_update_mouse_cursor_state) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("update_mouse_cursor_state");
      this.#_bindings.method_update_mouse_cursor_state = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_gui_get_drag_data() {
    if (!this.#_bindings.method_gui_get_drag_data) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("gui_get_drag_data");
      this.#_bindings.method_gui_get_drag_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1214101251
      );
    }
  }
  static init_method_gui_is_dragging() {
    if (!this.#_bindings.method_gui_is_dragging) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("gui_is_dragging");
      this.#_bindings.method_gui_is_dragging = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_gui_is_drag_successful() {
    if (!this.#_bindings.method_gui_is_drag_successful) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("gui_is_drag_successful");
      this.#_bindings.method_gui_is_drag_successful = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_gui_release_focus() {
    if (!this.#_bindings.method_gui_release_focus) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("gui_release_focus");
      this.#_bindings.method_gui_release_focus = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_gui_get_focus_owner() {
    if (!this.#_bindings.method_gui_get_focus_owner) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("gui_get_focus_owner");
      this.#_bindings.method_gui_get_focus_owner = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2783021301
      );
    }
  }
  static init_method_gui_get_hovered_control() {
    if (!this.#_bindings.method_gui_get_hovered_control) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("gui_get_hovered_control");
      this.#_bindings.method_gui_get_hovered_control = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2783021301
      );
    }
  }
  static init_method_set_disable_input() {
    if (!this.#_bindings.method_set_disable_input) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_disable_input");
      this.#_bindings.method_set_disable_input = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_input_disabled() {
    if (!this.#_bindings.method_is_input_disabled) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("is_input_disabled");
      this.#_bindings.method_is_input_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_positional_shadow_atlas_size() {
    if (!this.#_bindings.method_set_positional_shadow_atlas_size) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_positional_shadow_atlas_size");
      this.#_bindings.method_set_positional_shadow_atlas_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_positional_shadow_atlas_size() {
    if (!this.#_bindings.method_get_positional_shadow_atlas_size) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_positional_shadow_atlas_size");
      this.#_bindings.method_get_positional_shadow_atlas_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_positional_shadow_atlas_16_bits() {
    if (!this.#_bindings.method_set_positional_shadow_atlas_16_bits) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_positional_shadow_atlas_16_bits");
      this.#_bindings.method_set_positional_shadow_atlas_16_bits = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_positional_shadow_atlas_16_bits() {
    if (!this.#_bindings.method_get_positional_shadow_atlas_16_bits) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_positional_shadow_atlas_16_bits");
      this.#_bindings.method_get_positional_shadow_atlas_16_bits = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_snap_controls_to_pixels() {
    if (!this.#_bindings.method_set_snap_controls_to_pixels) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_snap_controls_to_pixels");
      this.#_bindings.method_set_snap_controls_to_pixels = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_snap_controls_to_pixels_enabled() {
    if (!this.#_bindings.method_is_snap_controls_to_pixels_enabled) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("is_snap_controls_to_pixels_enabled");
      this.#_bindings.method_is_snap_controls_to_pixels_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_snap_2d_transforms_to_pixel() {
    if (!this.#_bindings.method_set_snap_2d_transforms_to_pixel) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_snap_2d_transforms_to_pixel");
      this.#_bindings.method_set_snap_2d_transforms_to_pixel = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_snap_2d_transforms_to_pixel_enabled() {
    if (!this.#_bindings.method_is_snap_2d_transforms_to_pixel_enabled) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("is_snap_2d_transforms_to_pixel_enabled");
      this.#_bindings.method_is_snap_2d_transforms_to_pixel_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_snap_2d_vertices_to_pixel() {
    if (!this.#_bindings.method_set_snap_2d_vertices_to_pixel) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_snap_2d_vertices_to_pixel");
      this.#_bindings.method_set_snap_2d_vertices_to_pixel = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_snap_2d_vertices_to_pixel_enabled() {
    if (!this.#_bindings.method_is_snap_2d_vertices_to_pixel_enabled) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("is_snap_2d_vertices_to_pixel_enabled");
      this.#_bindings.method_is_snap_2d_vertices_to_pixel_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_positional_shadow_atlas_quadrant_subdiv() {
    if (!this.#_bindings.method_set_positional_shadow_atlas_quadrant_subdiv) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_positional_shadow_atlas_quadrant_subdiv");
      this.#_bindings.method_set_positional_shadow_atlas_quadrant_subdiv = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2596956071
      );
    }
  }
  static init_method_get_positional_shadow_atlas_quadrant_subdiv() {
    if (!this.#_bindings.method_get_positional_shadow_atlas_quadrant_subdiv) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_positional_shadow_atlas_quadrant_subdiv");
      this.#_bindings.method_get_positional_shadow_atlas_quadrant_subdiv = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2676778355
      );
    }
  }
  static init_method_set_input_as_handled() {
    if (!this.#_bindings.method_set_input_as_handled) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_input_as_handled");
      this.#_bindings.method_set_input_as_handled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_is_input_handled() {
    if (!this.#_bindings.method_is_input_handled) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("is_input_handled");
      this.#_bindings.method_is_input_handled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_handle_input_locally() {
    if (!this.#_bindings.method_set_handle_input_locally) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_handle_input_locally");
      this.#_bindings.method_set_handle_input_locally = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_handling_input_locally() {
    if (!this.#_bindings.method_is_handling_input_locally) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("is_handling_input_locally");
      this.#_bindings.method_is_handling_input_locally = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_default_canvas_item_texture_filter() {
    if (!this.#_bindings.method_set_default_canvas_item_texture_filter) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_default_canvas_item_texture_filter");
      this.#_bindings.method_set_default_canvas_item_texture_filter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2815160100
      );
    }
  }
  static init_method_get_default_canvas_item_texture_filter() {
    if (!this.#_bindings.method_get_default_canvas_item_texture_filter) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_default_canvas_item_texture_filter");
      this.#_bindings.method_get_default_canvas_item_texture_filter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        896601198
      );
    }
  }
  static init_method_set_embedding_subwindows() {
    if (!this.#_bindings.method_set_embedding_subwindows) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_embedding_subwindows");
      this.#_bindings.method_set_embedding_subwindows = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_embedding_subwindows() {
    if (!this.#_bindings.method_is_embedding_subwindows) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("is_embedding_subwindows");
      this.#_bindings.method_is_embedding_subwindows = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_embedded_subwindows() {
    if (!this.#_bindings.method_get_embedded_subwindows) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_embedded_subwindows");
      this.#_bindings.method_get_embedded_subwindows = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_set_canvas_cull_mask() {
    if (!this.#_bindings.method_set_canvas_cull_mask) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_canvas_cull_mask");
      this.#_bindings.method_set_canvas_cull_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_canvas_cull_mask() {
    if (!this.#_bindings.method_get_canvas_cull_mask) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_canvas_cull_mask");
      this.#_bindings.method_get_canvas_cull_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_canvas_cull_mask_bit() {
    if (!this.#_bindings.method_set_canvas_cull_mask_bit) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_canvas_cull_mask_bit");
      this.#_bindings.method_set_canvas_cull_mask_bit = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_canvas_cull_mask_bit() {
    if (!this.#_bindings.method_get_canvas_cull_mask_bit) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_canvas_cull_mask_bit");
      this.#_bindings.method_get_canvas_cull_mask_bit = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_default_canvas_item_texture_repeat() {
    if (!this.#_bindings.method_set_default_canvas_item_texture_repeat) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_default_canvas_item_texture_repeat");
      this.#_bindings.method_set_default_canvas_item_texture_repeat = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1658513413
      );
    }
  }
  static init_method_get_default_canvas_item_texture_repeat() {
    if (!this.#_bindings.method_get_default_canvas_item_texture_repeat) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_default_canvas_item_texture_repeat");
      this.#_bindings.method_get_default_canvas_item_texture_repeat = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4049774160
      );
    }
  }
  static init_method_set_sdf_oversize() {
    if (!this.#_bindings.method_set_sdf_oversize) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_sdf_oversize");
      this.#_bindings.method_set_sdf_oversize = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2574159017
      );
    }
  }
  static init_method_get_sdf_oversize() {
    if (!this.#_bindings.method_get_sdf_oversize) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_sdf_oversize");
      this.#_bindings.method_get_sdf_oversize = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2631427510
      );
    }
  }
  static init_method_set_sdf_scale() {
    if (!this.#_bindings.method_set_sdf_scale) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_sdf_scale");
      this.#_bindings.method_set_sdf_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1402773951
      );
    }
  }
  static init_method_get_sdf_scale() {
    if (!this.#_bindings.method_get_sdf_scale) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_sdf_scale");
      this.#_bindings.method_get_sdf_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3162688184
      );
    }
  }
  static init_method_set_mesh_lod_threshold() {
    if (!this.#_bindings.method_set_mesh_lod_threshold) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_mesh_lod_threshold");
      this.#_bindings.method_set_mesh_lod_threshold = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_mesh_lod_threshold() {
    if (!this.#_bindings.method_get_mesh_lod_threshold) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_mesh_lod_threshold");
      this.#_bindings.method_get_mesh_lod_threshold = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_as_audio_listener_2d() {
    if (!this.#_bindings.method_set_as_audio_listener_2d) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_as_audio_listener_2d");
      this.#_bindings.method_set_as_audio_listener_2d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_audio_listener_2d() {
    if (!this.#_bindings.method_is_audio_listener_2d) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("is_audio_listener_2d");
      this.#_bindings.method_is_audio_listener_2d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_camera_2d() {
    if (!this.#_bindings.method_get_camera_2d) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_camera_2d");
      this.#_bindings.method_get_camera_2d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3551466917
      );
    }
  }
  static init_method_set_world_3d() {
    if (!this.#_bindings.method_set_world_3d) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_world_3d");
      this.#_bindings.method_set_world_3d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1400875337
      );
    }
  }
  static init_method_get_world_3d() {
    if (!this.#_bindings.method_get_world_3d) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_world_3d");
      this.#_bindings.method_get_world_3d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        317588385
      );
    }
  }
  static init_method_find_world_3d() {
    if (!this.#_bindings.method_find_world_3d) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("find_world_3d");
      this.#_bindings.method_find_world_3d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        317588385
      );
    }
  }
  static init_method_set_use_own_world_3d() {
    if (!this.#_bindings.method_set_use_own_world_3d) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_use_own_world_3d");
      this.#_bindings.method_set_use_own_world_3d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_using_own_world_3d() {
    if (!this.#_bindings.method_is_using_own_world_3d) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("is_using_own_world_3d");
      this.#_bindings.method_is_using_own_world_3d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_camera_3d() {
    if (!this.#_bindings.method_get_camera_3d) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_camera_3d");
      this.#_bindings.method_get_camera_3d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2285090890
      );
    }
  }
  static init_method_set_as_audio_listener_3d() {
    if (!this.#_bindings.method_set_as_audio_listener_3d) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_as_audio_listener_3d");
      this.#_bindings.method_set_as_audio_listener_3d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_audio_listener_3d() {
    if (!this.#_bindings.method_is_audio_listener_3d) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("is_audio_listener_3d");
      this.#_bindings.method_is_audio_listener_3d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_disable_3d() {
    if (!this.#_bindings.method_set_disable_3d) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_disable_3d");
      this.#_bindings.method_set_disable_3d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_3d_disabled() {
    if (!this.#_bindings.method_is_3d_disabled) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("is_3d_disabled");
      this.#_bindings.method_is_3d_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_use_xr() {
    if (!this.#_bindings.method_set_use_xr) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_use_xr");
      this.#_bindings.method_set_use_xr = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_using_xr() {
    if (!this.#_bindings.method_is_using_xr) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("is_using_xr");
      this.#_bindings.method_is_using_xr = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_set_scaling_3d_mode() {
    if (!this.#_bindings.method_set_scaling_3d_mode) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_scaling_3d_mode");
      this.#_bindings.method_set_scaling_3d_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1531597597
      );
    }
  }
  static init_method_get_scaling_3d_mode() {
    if (!this.#_bindings.method_get_scaling_3d_mode) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_scaling_3d_mode");
      this.#_bindings.method_get_scaling_3d_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2597660574
      );
    }
  }
  static init_method_set_scaling_3d_scale() {
    if (!this.#_bindings.method_set_scaling_3d_scale) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_scaling_3d_scale");
      this.#_bindings.method_set_scaling_3d_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_scaling_3d_scale() {
    if (!this.#_bindings.method_get_scaling_3d_scale) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_scaling_3d_scale");
      this.#_bindings.method_get_scaling_3d_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_fsr_sharpness() {
    if (!this.#_bindings.method_set_fsr_sharpness) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_fsr_sharpness");
      this.#_bindings.method_set_fsr_sharpness = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_fsr_sharpness() {
    if (!this.#_bindings.method_get_fsr_sharpness) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_fsr_sharpness");
      this.#_bindings.method_get_fsr_sharpness = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_texture_mipmap_bias() {
    if (!this.#_bindings.method_set_texture_mipmap_bias) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_texture_mipmap_bias");
      this.#_bindings.method_set_texture_mipmap_bias = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_texture_mipmap_bias() {
    if (!this.#_bindings.method_get_texture_mipmap_bias) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_texture_mipmap_bias");
      this.#_bindings.method_get_texture_mipmap_bias = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_vrs_mode() {
    if (!this.#_bindings.method_set_vrs_mode) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_vrs_mode");
      this.#_bindings.method_set_vrs_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2749867817
      );
    }
  }
  static init_method_get_vrs_mode() {
    if (!this.#_bindings.method_get_vrs_mode) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_vrs_mode");
      this.#_bindings.method_get_vrs_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        349660525
      );
    }
  }
  static init_method_set_vrs_update_mode() {
    if (!this.#_bindings.method_set_vrs_update_mode) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_vrs_update_mode");
      this.#_bindings.method_set_vrs_update_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3182412319
      );
    }
  }
  static init_method_get_vrs_update_mode() {
    if (!this.#_bindings.method_get_vrs_update_mode) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_vrs_update_mode");
      this.#_bindings.method_get_vrs_update_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2255951583
      );
    }
  }
  static init_method_set_vrs_texture() {
    if (!this.#_bindings.method_set_vrs_texture) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("set_vrs_texture");
      this.#_bindings.method_set_vrs_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_get_vrs_texture() {
    if (!this.#_bindings.method_get_vrs_texture) {
      let classname = new StringName("Viewport");
      let methodname = new StringName("get_vrs_texture");
      this.#_bindings.method_get_vrs_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }

  
  
  set_world_2d(_world_2d) {
    Viewport.init_method_set_world_2d();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_world_2d,
      this._owner,
      _world_2d
    );
    
  }
  get_world_2d() {
    Viewport.init_method_get_world_2d();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_world_2d,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  find_world_2d() {
    Viewport.init_method_find_world_2d();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_find_world_2d,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_canvas_transform(_xform) {
    Viewport.init_method_set_canvas_transform();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_canvas_transform,
      this._owner,
      _xform
    );
    
  }
  get_canvas_transform() {
    Viewport.init_method_get_canvas_transform();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_canvas_transform,
      this._owner,
			Variant.Type.TRANSFORM2D,
    
      
    );
    
  }
  set_global_canvas_transform(_xform) {
    Viewport.init_method_set_global_canvas_transform();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_global_canvas_transform,
      this._owner,
      _xform
    );
    
  }
  get_global_canvas_transform() {
    Viewport.init_method_get_global_canvas_transform();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_global_canvas_transform,
      this._owner,
			Variant.Type.TRANSFORM2D,
    
      
    );
    
  }
  get_final_transform() {
    Viewport.init_method_get_final_transform();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_final_transform,
      this._owner,
			Variant.Type.TRANSFORM2D,
    
      
    );
    
  }
  get_screen_transform() {
    Viewport.init_method_get_screen_transform();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_screen_transform,
      this._owner,
			Variant.Type.TRANSFORM2D,
    
      
    );
    
  }
  get_visible_rect() {
    Viewport.init_method_get_visible_rect();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_visible_rect,
      this._owner,
			Variant.Type.RECT2,
    
      
    );
    
  }
  set_transparent_background(_enable) {
    Viewport.init_method_set_transparent_background();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_transparent_background,
      this._owner,
      _enable
    );
    
  }
  has_transparent_background() {
    Viewport.init_method_has_transparent_background();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_has_transparent_background,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_use_hdr_2d(_enable) {
    Viewport.init_method_set_use_hdr_2d();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_use_hdr_2d,
      this._owner,
      _enable
    );
    
  }
  is_using_hdr_2d() {
    Viewport.init_method_is_using_hdr_2d();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_is_using_hdr_2d,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_msaa_2d(_msaa) {
    Viewport.init_method_set_msaa_2d();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_msaa_2d,
      this._owner,
      _msaa
    );
    
  }
  get_msaa_2d() {
    Viewport.init_method_get_msaa_2d();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_msaa_2d,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_msaa_3d(_msaa) {
    Viewport.init_method_set_msaa_3d();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_msaa_3d,
      this._owner,
      _msaa
    );
    
  }
  get_msaa_3d() {
    Viewport.init_method_get_msaa_3d();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_msaa_3d,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_screen_space_aa(_screen_space_aa) {
    Viewport.init_method_set_screen_space_aa();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_screen_space_aa,
      this._owner,
      _screen_space_aa
    );
    
  }
  get_screen_space_aa() {
    Viewport.init_method_get_screen_space_aa();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_screen_space_aa,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_use_taa(_enable) {
    Viewport.init_method_set_use_taa();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_use_taa,
      this._owner,
      _enable
    );
    
  }
  is_using_taa() {
    Viewport.init_method_is_using_taa();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_is_using_taa,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_use_debanding(_enable) {
    Viewport.init_method_set_use_debanding();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_use_debanding,
      this._owner,
      _enable
    );
    
  }
  is_using_debanding() {
    Viewport.init_method_is_using_debanding();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_is_using_debanding,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_use_occlusion_culling(_enable) {
    Viewport.init_method_set_use_occlusion_culling();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_use_occlusion_culling,
      this._owner,
      _enable
    );
    
  }
  is_using_occlusion_culling() {
    Viewport.init_method_is_using_occlusion_culling();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_is_using_occlusion_culling,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_debug_draw(_debug_draw) {
    Viewport.init_method_set_debug_draw();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_debug_draw,
      this._owner,
      _debug_draw
    );
    
  }
  get_debug_draw() {
    Viewport.init_method_get_debug_draw();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_debug_draw,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_render_info(_type, _info) {
    Viewport.init_method_get_render_info();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_render_info,
      this._owner,
			Variant.Type.INT,
    
      _type, _info
    );
    
  }
  get_texture() {
    Viewport.init_method_get_texture();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_texture,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_physics_object_picking(_enable) {
    Viewport.init_method_set_physics_object_picking();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_physics_object_picking,
      this._owner,
      _enable
    );
    
  }
  get_physics_object_picking() {
    Viewport.init_method_get_physics_object_picking();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_physics_object_picking,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_physics_object_picking_sort(_enable) {
    Viewport.init_method_set_physics_object_picking_sort();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_physics_object_picking_sort,
      this._owner,
      _enable
    );
    
  }
  get_physics_object_picking_sort() {
    Viewport.init_method_get_physics_object_picking_sort();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_physics_object_picking_sort,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_physics_object_picking_first_only(_enable) {
    Viewport.init_method_set_physics_object_picking_first_only();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_physics_object_picking_first_only,
      this._owner,
      _enable
    );
    
  }
  get_physics_object_picking_first_only() {
    Viewport.init_method_get_physics_object_picking_first_only();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_physics_object_picking_first_only,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_viewport_rid() {
    Viewport.init_method_get_viewport_rid();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_viewport_rid,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  push_text_input(_text) {
    Viewport.init_method_push_text_input();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_push_text_input,
      this._owner,
      _text
    );
    
  }
  push_input(_event, _in_local_coords) {
    Viewport.init_method_push_input();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_push_input,
      this._owner,
      _event, _in_local_coords
    );
    
  }
  push_unhandled_input(_event, _in_local_coords) {
    Viewport.init_method_push_unhandled_input();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_push_unhandled_input,
      this._owner,
      _event, _in_local_coords
    );
    
  }
  get_mouse_position() {
    Viewport.init_method_get_mouse_position();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_mouse_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  warp_mouse(_position) {
    Viewport.init_method_warp_mouse();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_warp_mouse,
      this._owner,
      _position
    );
    
  }
  update_mouse_cursor_state() {
    Viewport.init_method_update_mouse_cursor_state();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_update_mouse_cursor_state,
      this._owner,
      
    );
    
  }
  gui_get_drag_data() {
    Viewport.init_method_gui_get_drag_data();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_gui_get_drag_data,
      this._owner,
			Variant.Type.VARIANT,
    
      
    );
    
  }
  gui_is_dragging() {
    Viewport.init_method_gui_is_dragging();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_gui_is_dragging,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  gui_is_drag_successful() {
    Viewport.init_method_gui_is_drag_successful();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_gui_is_drag_successful,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  gui_release_focus() {
    Viewport.init_method_gui_release_focus();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_gui_release_focus,
      this._owner,
      
    );
    
  }
  gui_get_focus_owner() {
    Viewport.init_method_gui_get_focus_owner();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_gui_get_focus_owner,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  gui_get_hovered_control() {
    Viewport.init_method_gui_get_hovered_control();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_gui_get_hovered_control,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_disable_input(_disable) {
    Viewport.init_method_set_disable_input();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_disable_input,
      this._owner,
      _disable
    );
    
  }
  is_input_disabled() {
    Viewport.init_method_is_input_disabled();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_is_input_disabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_positional_shadow_atlas_size(_size) {
    Viewport.init_method_set_positional_shadow_atlas_size();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_positional_shadow_atlas_size,
      this._owner,
      _size
    );
    
  }
  get_positional_shadow_atlas_size() {
    Viewport.init_method_get_positional_shadow_atlas_size();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_positional_shadow_atlas_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_positional_shadow_atlas_16_bits(_enable) {
    Viewport.init_method_set_positional_shadow_atlas_16_bits();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_positional_shadow_atlas_16_bits,
      this._owner,
      _enable
    );
    
  }
  get_positional_shadow_atlas_16_bits() {
    Viewport.init_method_get_positional_shadow_atlas_16_bits();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_positional_shadow_atlas_16_bits,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_snap_controls_to_pixels(_enabled) {
    Viewport.init_method_set_snap_controls_to_pixels();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_snap_controls_to_pixels,
      this._owner,
      _enabled
    );
    
  }
  is_snap_controls_to_pixels_enabled() {
    Viewport.init_method_is_snap_controls_to_pixels_enabled();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_is_snap_controls_to_pixels_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_snap_2d_transforms_to_pixel(_enabled) {
    Viewport.init_method_set_snap_2d_transforms_to_pixel();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_snap_2d_transforms_to_pixel,
      this._owner,
      _enabled
    );
    
  }
  is_snap_2d_transforms_to_pixel_enabled() {
    Viewport.init_method_is_snap_2d_transforms_to_pixel_enabled();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_is_snap_2d_transforms_to_pixel_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_snap_2d_vertices_to_pixel(_enabled) {
    Viewport.init_method_set_snap_2d_vertices_to_pixel();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_snap_2d_vertices_to_pixel,
      this._owner,
      _enabled
    );
    
  }
  is_snap_2d_vertices_to_pixel_enabled() {
    Viewport.init_method_is_snap_2d_vertices_to_pixel_enabled();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_is_snap_2d_vertices_to_pixel_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_positional_shadow_atlas_quadrant_subdiv(_quadrant, _subdiv) {
    Viewport.init_method_set_positional_shadow_atlas_quadrant_subdiv();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_positional_shadow_atlas_quadrant_subdiv,
      this._owner,
      _quadrant, _subdiv
    );
    
  }
  get_positional_shadow_atlas_quadrant_subdiv(_quadrant) {
    Viewport.init_method_get_positional_shadow_atlas_quadrant_subdiv();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_positional_shadow_atlas_quadrant_subdiv,
      this._owner,
			Variant.Type.INT,
    
      _quadrant
    );
    
  }
  set_input_as_handled() {
    Viewport.init_method_set_input_as_handled();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_input_as_handled,
      this._owner,
      
    );
    
  }
  is_input_handled() {
    Viewport.init_method_is_input_handled();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_is_input_handled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_handle_input_locally(_enable) {
    Viewport.init_method_set_handle_input_locally();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_handle_input_locally,
      this._owner,
      _enable
    );
    
  }
  is_handling_input_locally() {
    Viewport.init_method_is_handling_input_locally();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_is_handling_input_locally,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_default_canvas_item_texture_filter(_mode) {
    Viewport.init_method_set_default_canvas_item_texture_filter();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_default_canvas_item_texture_filter,
      this._owner,
      _mode
    );
    
  }
  get_default_canvas_item_texture_filter() {
    Viewport.init_method_get_default_canvas_item_texture_filter();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_default_canvas_item_texture_filter,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_embedding_subwindows(_enable) {
    Viewport.init_method_set_embedding_subwindows();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_embedding_subwindows,
      this._owner,
      _enable
    );
    
  }
  is_embedding_subwindows() {
    Viewport.init_method_is_embedding_subwindows();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_is_embedding_subwindows,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_embedded_subwindows() {
    Viewport.init_method_get_embedded_subwindows();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_embedded_subwindows,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_canvas_cull_mask(_mask) {
    Viewport.init_method_set_canvas_cull_mask();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_canvas_cull_mask,
      this._owner,
      _mask
    );
    
  }
  get_canvas_cull_mask() {
    Viewport.init_method_get_canvas_cull_mask();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_canvas_cull_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_canvas_cull_mask_bit(_layer, _enable) {
    Viewport.init_method_set_canvas_cull_mask_bit();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_canvas_cull_mask_bit,
      this._owner,
      _layer, _enable
    );
    
  }
  get_canvas_cull_mask_bit(_layer) {
    Viewport.init_method_get_canvas_cull_mask_bit();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_canvas_cull_mask_bit,
      this._owner,
			Variant.Type.BOOL,
    
      _layer
    );
    
  }
  set_default_canvas_item_texture_repeat(_mode) {
    Viewport.init_method_set_default_canvas_item_texture_repeat();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_default_canvas_item_texture_repeat,
      this._owner,
      _mode
    );
    
  }
  get_default_canvas_item_texture_repeat() {
    Viewport.init_method_get_default_canvas_item_texture_repeat();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_default_canvas_item_texture_repeat,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_sdf_oversize(_oversize) {
    Viewport.init_method_set_sdf_oversize();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_sdf_oversize,
      this._owner,
      _oversize
    );
    
  }
  get_sdf_oversize() {
    Viewport.init_method_get_sdf_oversize();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_sdf_oversize,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_sdf_scale(_scale) {
    Viewport.init_method_set_sdf_scale();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_sdf_scale,
      this._owner,
      _scale
    );
    
  }
  get_sdf_scale() {
    Viewport.init_method_get_sdf_scale();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_sdf_scale,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_mesh_lod_threshold(_pixels) {
    Viewport.init_method_set_mesh_lod_threshold();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_mesh_lod_threshold,
      this._owner,
      _pixels
    );
    
  }
  get_mesh_lod_threshold() {
    Viewport.init_method_get_mesh_lod_threshold();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_mesh_lod_threshold,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_as_audio_listener_2d(_enable) {
    Viewport.init_method_set_as_audio_listener_2d();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_as_audio_listener_2d,
      this._owner,
      _enable
    );
    
  }
  is_audio_listener_2d() {
    Viewport.init_method_is_audio_listener_2d();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_is_audio_listener_2d,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_camera_2d() {
    Viewport.init_method_get_camera_2d();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_camera_2d,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_world_3d(_world_3d) {
    Viewport.init_method_set_world_3d();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_world_3d,
      this._owner,
      _world_3d
    );
    
  }
  get_world_3d() {
    Viewport.init_method_get_world_3d();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_world_3d,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  find_world_3d() {
    Viewport.init_method_find_world_3d();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_find_world_3d,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_use_own_world_3d(_enable) {
    Viewport.init_method_set_use_own_world_3d();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_use_own_world_3d,
      this._owner,
      _enable
    );
    
  }
  is_using_own_world_3d() {
    Viewport.init_method_is_using_own_world_3d();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_is_using_own_world_3d,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_camera_3d() {
    Viewport.init_method_get_camera_3d();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_camera_3d,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_as_audio_listener_3d(_enable) {
    Viewport.init_method_set_as_audio_listener_3d();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_as_audio_listener_3d,
      this._owner,
      _enable
    );
    
  }
  is_audio_listener_3d() {
    Viewport.init_method_is_audio_listener_3d();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_is_audio_listener_3d,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_disable_3d(_disable) {
    Viewport.init_method_set_disable_3d();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_disable_3d,
      this._owner,
      _disable
    );
    
  }
  is_3d_disabled() {
    Viewport.init_method_is_3d_disabled();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_is_3d_disabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_use_xr(_use) {
    Viewport.init_method_set_use_xr();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_use_xr,
      this._owner,
      _use
    );
    
  }
  is_using_xr() {
    Viewport.init_method_is_using_xr();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_is_using_xr,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_scaling_3d_mode(_scaling_3d_mode) {
    Viewport.init_method_set_scaling_3d_mode();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_scaling_3d_mode,
      this._owner,
      _scaling_3d_mode
    );
    
  }
  get_scaling_3d_mode() {
    Viewport.init_method_get_scaling_3d_mode();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_scaling_3d_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_scaling_3d_scale(_scale) {
    Viewport.init_method_set_scaling_3d_scale();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_scaling_3d_scale,
      this._owner,
      _scale
    );
    
  }
  get_scaling_3d_scale() {
    Viewport.init_method_get_scaling_3d_scale();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_scaling_3d_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_fsr_sharpness(_fsr_sharpness) {
    Viewport.init_method_set_fsr_sharpness();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_fsr_sharpness,
      this._owner,
      _fsr_sharpness
    );
    
  }
  get_fsr_sharpness() {
    Viewport.init_method_get_fsr_sharpness();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_fsr_sharpness,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_texture_mipmap_bias(_texture_mipmap_bias) {
    Viewport.init_method_set_texture_mipmap_bias();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_texture_mipmap_bias,
      this._owner,
      _texture_mipmap_bias
    );
    
  }
  get_texture_mipmap_bias() {
    Viewport.init_method_get_texture_mipmap_bias();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_texture_mipmap_bias,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_vrs_mode(_mode) {
    Viewport.init_method_set_vrs_mode();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_vrs_mode,
      this._owner,
      _mode
    );
    
  }
  get_vrs_mode() {
    Viewport.init_method_get_vrs_mode();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_vrs_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_vrs_update_mode(_mode) {
    Viewport.init_method_set_vrs_update_mode();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_vrs_update_mode,
      this._owner,
      _mode
    );
    
  }
  get_vrs_update_mode() {
    Viewport.init_method_get_vrs_update_mode();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_vrs_update_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_vrs_texture(_texture) {
    Viewport.init_method_set_vrs_texture();
    return _call_native_mb_no_ret(
      Viewport.#_bindings.method_set_vrs_texture,
      this._owner,
      _texture
    );
    
  }
  get_vrs_texture() {
    Viewport.init_method_get_vrs_texture();
    return _call_native_mb_ret(
      Viewport.#_bindings.method_get_vrs_texture,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get disable_3d () {
  return this.is_3d_disabled();
}
set disable_3d (new_value) {
  this.set_disable_3d(new_value);
}
get use_xr () {
  return this.is_using_xr();
}
set use_xr (new_value) {
  this.set_use_xr(new_value);
}
get own_world_3d () {
  return this.is_using_own_world_3d();
}
set own_world_3d (new_value) {
  this.set_use_own_world_3d(new_value);
}
get world_3d () {
  return this.get_world_3d();
}
set world_3d (new_value) {
  this.set_world_3d(new_value);
}
get world_2d () {
  return this.get_world_2d();
}
set world_2d (new_value) {
  this.set_world_2d(new_value);
}
get transparent_bg () {
  return this.has_transparent_background();
}
set transparent_bg (new_value) {
  this.set_transparent_background(new_value);
}
get handle_input_locally () {
  return this.is_handling_input_locally();
}
set handle_input_locally (new_value) {
  this.set_handle_input_locally(new_value);
}
get snap_2d_transforms_to_pixel () {
  return this.is_snap_2d_transforms_to_pixel_enabled();
}
set snap_2d_transforms_to_pixel (new_value) {
  this.set_snap_2d_transforms_to_pixel(new_value);
}
get snap_2d_vertices_to_pixel () {
  return this.is_snap_2d_vertices_to_pixel_enabled();
}
set snap_2d_vertices_to_pixel (new_value) {
  this.set_snap_2d_vertices_to_pixel(new_value);
}
get msaa_2d () {
  return this.get_msaa_2d();
}
set msaa_2d (new_value) {
  this.set_msaa_2d(new_value);
}
get msaa_3d () {
  return this.get_msaa_3d();
}
set msaa_3d (new_value) {
  this.set_msaa_3d(new_value);
}
get screen_space_aa () {
  return this.get_screen_space_aa();
}
set screen_space_aa (new_value) {
  this.set_screen_space_aa(new_value);
}
get use_taa () {
  return this.is_using_taa();
}
set use_taa (new_value) {
  this.set_use_taa(new_value);
}
get use_debanding () {
  return this.is_using_debanding();
}
set use_debanding (new_value) {
  this.set_use_debanding(new_value);
}
get use_occlusion_culling () {
  return this.is_using_occlusion_culling();
}
set use_occlusion_culling (new_value) {
  this.set_use_occlusion_culling(new_value);
}
get mesh_lod_threshold () {
  return this.get_mesh_lod_threshold();
}
set mesh_lod_threshold (new_value) {
  this.set_mesh_lod_threshold(new_value);
}
get debug_draw () {
  return this.get_debug_draw();
}
set debug_draw (new_value) {
  this.set_debug_draw(new_value);
}
get use_hdr_2d () {
  return this.is_using_hdr_2d();
}
set use_hdr_2d (new_value) {
  this.set_use_hdr_2d(new_value);
}
get scaling_3d_mode () {
  return this.get_scaling_3d_mode();
}
set scaling_3d_mode (new_value) {
  this.set_scaling_3d_mode(new_value);
}
get scaling_3d_scale () {
  return this.get_scaling_3d_scale();
}
set scaling_3d_scale (new_value) {
  this.set_scaling_3d_scale(new_value);
}
get texture_mipmap_bias () {
  return this.get_texture_mipmap_bias();
}
set texture_mipmap_bias (new_value) {
  this.set_texture_mipmap_bias(new_value);
}
get fsr_sharpness () {
  return this.get_fsr_sharpness();
}
set fsr_sharpness (new_value) {
  this.set_fsr_sharpness(new_value);
}
get vrs_mode () {
  return this.get_vrs_mode();
}
set vrs_mode (new_value) {
  this.set_vrs_mode(new_value);
}
get vrs_update_mode () {
  return this.get_vrs_update_mode();
}
set vrs_update_mode (new_value) {
  this.set_vrs_update_mode(new_value);
}
get vrs_texture () {
  return this.get_vrs_texture();
}
set vrs_texture (new_value) {
  this.set_vrs_texture(new_value);
}
get canvas_item_default_texture_filter () {
  return this.get_default_canvas_item_texture_filter();
}
set canvas_item_default_texture_filter (new_value) {
  this.set_default_canvas_item_texture_filter(new_value);
}
get canvas_item_default_texture_repeat () {
  return this.get_default_canvas_item_texture_repeat();
}
set canvas_item_default_texture_repeat (new_value) {
  this.set_default_canvas_item_texture_repeat(new_value);
}
get audio_listener_enable_2d () {
  return this.is_audio_listener_2d();
}
set audio_listener_enable_2d (new_value) {
  this.set_as_audio_listener_2d(new_value);
}
get audio_listener_enable_3d () {
  return this.is_audio_listener_3d();
}
set audio_listener_enable_3d (new_value) {
  this.set_as_audio_listener_3d(new_value);
}
get physics_object_picking () {
  return this.get_physics_object_picking();
}
set physics_object_picking (new_value) {
  this.set_physics_object_picking(new_value);
}
get physics_object_picking_sort () {
  return this.get_physics_object_picking_sort();
}
set physics_object_picking_sort (new_value) {
  this.set_physics_object_picking_sort(new_value);
}
get physics_object_picking_first_only () {
  return this.get_physics_object_picking_first_only();
}
set physics_object_picking_first_only (new_value) {
  this.set_physics_object_picking_first_only(new_value);
}
get gui_disable_input () {
  return this.is_input_disabled();
}
set gui_disable_input (new_value) {
  this.set_disable_input(new_value);
}
get gui_snap_controls_to_pixels () {
  return this.is_snap_controls_to_pixels_enabled();
}
set gui_snap_controls_to_pixels (new_value) {
  this.set_snap_controls_to_pixels(new_value);
}
get gui_embed_subwindows () {
  return this.is_embedding_subwindows();
}
set gui_embed_subwindows (new_value) {
  this.set_embedding_subwindows(new_value);
}
get sdf_oversize () {
  return this.get_sdf_oversize();
}
set sdf_oversize (new_value) {
  this.set_sdf_oversize(new_value);
}
get sdf_scale () {
  return this.get_sdf_scale();
}
set sdf_scale (new_value) {
  this.set_sdf_scale(new_value);
}
get positional_shadow_atlas_size () {
  return this.get_positional_shadow_atlas_size();
}
set positional_shadow_atlas_size (new_value) {
  this.set_positional_shadow_atlas_size(new_value);
}
get positional_shadow_atlas_16_bits () {
  return this.get_positional_shadow_atlas_16_bits();
}
set positional_shadow_atlas_16_bits (new_value) {
  this.set_positional_shadow_atlas_16_bits(new_value);
}
get positional_shadow_atlas_quad_0 () {
  return this.get_positional_shadow_atlas_quadrant_subdiv();
}
set positional_shadow_atlas_quad_0 (new_value) {
  this.set_positional_shadow_atlas_quadrant_subdiv(new_value);
}
get positional_shadow_atlas_quad_1 () {
  return this.get_positional_shadow_atlas_quadrant_subdiv();
}
set positional_shadow_atlas_quad_1 (new_value) {
  this.set_positional_shadow_atlas_quadrant_subdiv(new_value);
}
get positional_shadow_atlas_quad_2 () {
  return this.get_positional_shadow_atlas_quadrant_subdiv();
}
set positional_shadow_atlas_quad_2 (new_value) {
  this.set_positional_shadow_atlas_quadrant_subdiv(new_value);
}
get positional_shadow_atlas_quad_3 () {
  return this.get_positional_shadow_atlas_quadrant_subdiv();
}
set positional_shadow_atlas_quad_3 (new_value) {
  this.set_positional_shadow_atlas_quadrant_subdiv(new_value);
}
get canvas_transform () {
  return this.get_canvas_transform();
}
set canvas_transform (new_value) {
  this.set_canvas_transform(new_value);
}
get global_canvas_transform () {
  return this.get_global_canvas_transform();
}
set global_canvas_transform (new_value) {
  this.set_global_canvas_transform(new_value);
}
get canvas_cull_mask () {
  return this.get_canvas_cull_mask();
}
set canvas_cull_mask (new_value) {
  this.set_canvas_cull_mask(new_value);
}

  static PositionalShadowAtlasQuadrantSubdiv = {
    SHADOW_ATLAS_QUADRANT_SUBDIV_DISABLED: 0,
    SHADOW_ATLAS_QUADRANT_SUBDIV_1: 1,
    SHADOW_ATLAS_QUADRANT_SUBDIV_4: 2,
    SHADOW_ATLAS_QUADRANT_SUBDIV_16: 3,
    SHADOW_ATLAS_QUADRANT_SUBDIV_64: 4,
    SHADOW_ATLAS_QUADRANT_SUBDIV_256: 5,
    SHADOW_ATLAS_QUADRANT_SUBDIV_1024: 6,
    SHADOW_ATLAS_QUADRANT_SUBDIV_MAX: 7,
  }
  static Scaling3DMode = {
    SCALING_3D_MODE_BILINEAR: 0,
    SCALING_3D_MODE_FSR: 1,
    SCALING_3D_MODE_FSR2: 2,
    SCALING_3D_MODE_MAX: 3,
  }
  static MSAA = {
    MSAA_DISABLED: 0,
    MSAA_2X: 1,
    MSAA_4X: 2,
    MSAA_8X: 3,
    MSAA_MAX: 4,
  }
  static ScreenSpaceAA = {
    SCREEN_SPACE_AA_DISABLED: 0,
    SCREEN_SPACE_AA_FXAA: 1,
    SCREEN_SPACE_AA_MAX: 2,
  }
  static RenderInfo = {
    RENDER_INFO_OBJECTS_IN_FRAME: 0,
    RENDER_INFO_PRIMITIVES_IN_FRAME: 1,
    RENDER_INFO_DRAW_CALLS_IN_FRAME: 2,
    RENDER_INFO_MAX: 3,
  }
  static RenderInfoType = {
    RENDER_INFO_TYPE_VISIBLE: 0,
    RENDER_INFO_TYPE_SHADOW: 1,
    RENDER_INFO_TYPE_CANVAS: 2,
    RENDER_INFO_TYPE_MAX: 3,
  }
  static DebugDraw = {
    DEBUG_DRAW_DISABLED: 0,
    DEBUG_DRAW_UNSHADED: 1,
    DEBUG_DRAW_LIGHTING: 2,
    DEBUG_DRAW_OVERDRAW: 3,
    DEBUG_DRAW_WIREFRAME: 4,
    DEBUG_DRAW_NORMAL_BUFFER: 5,
    DEBUG_DRAW_VOXEL_GI_ALBEDO: 6,
    DEBUG_DRAW_VOXEL_GI_LIGHTING: 7,
    DEBUG_DRAW_VOXEL_GI_EMISSION: 8,
    DEBUG_DRAW_SHADOW_ATLAS: 9,
    DEBUG_DRAW_DIRECTIONAL_SHADOW_ATLAS: 10,
    DEBUG_DRAW_SCENE_LUMINANCE: 11,
    DEBUG_DRAW_SSAO: 12,
    DEBUG_DRAW_SSIL: 13,
    DEBUG_DRAW_PSSM_SPLITS: 14,
    DEBUG_DRAW_DECAL_ATLAS: 15,
    DEBUG_DRAW_SDFGI: 16,
    DEBUG_DRAW_SDFGI_PROBES: 17,
    DEBUG_DRAW_GI_BUFFER: 18,
    DEBUG_DRAW_DISABLE_LOD: 19,
    DEBUG_DRAW_CLUSTER_OMNI_LIGHTS: 20,
    DEBUG_DRAW_CLUSTER_SPOT_LIGHTS: 21,
    DEBUG_DRAW_CLUSTER_DECALS: 22,
    DEBUG_DRAW_CLUSTER_REFLECTION_PROBES: 23,
    DEBUG_DRAW_OCCLUDERS: 24,
    DEBUG_DRAW_MOTION_VECTORS: 25,
    DEBUG_DRAW_INTERNAL_BUFFER: 26,
  }
  static DefaultCanvasItemTextureFilter = {
    DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_NEAREST: 0,
    DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_LINEAR: 1,
    DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_LINEAR_WITH_MIPMAPS: 2,
    DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_NEAREST_WITH_MIPMAPS: 3,
    DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_MAX: 4,
  }
  static DefaultCanvasItemTextureRepeat = {
    DEFAULT_CANVAS_ITEM_TEXTURE_REPEAT_DISABLED: 0,
    DEFAULT_CANVAS_ITEM_TEXTURE_REPEAT_ENABLED: 1,
    DEFAULT_CANVAS_ITEM_TEXTURE_REPEAT_MIRROR: 2,
    DEFAULT_CANVAS_ITEM_TEXTURE_REPEAT_MAX: 3,
  }
  static SDFOversize = {
    SDF_OVERSIZE_100_PERCENT: 0,
    SDF_OVERSIZE_120_PERCENT: 1,
    SDF_OVERSIZE_150_PERCENT: 2,
    SDF_OVERSIZE_200_PERCENT: 3,
    SDF_OVERSIZE_MAX: 4,
  }
  static SDFScale = {
    SDF_SCALE_100_PERCENT: 0,
    SDF_SCALE_50_PERCENT: 1,
    SDF_SCALE_25_PERCENT: 2,
    SDF_SCALE_MAX: 3,
  }
  static VRSMode = {
    VRS_DISABLED: 0,
    VRS_TEXTURE: 1,
    VRS_XR: 2,
    VRS_MAX: 3,
  }
  static VRSUpdateMode = {
    VRS_UPDATE_DISABLED: 0,
    VRS_UPDATE_ONCE: 1,
    VRS_UPDATE_ALWAYS: 2,
    VRS_UPDATE_MAX: 3,
  }
}