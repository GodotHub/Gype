import * as internal from '__internal__';
import { Vector2i } from '@js_godot/variant/vector2i'
import { PackedColorArray } from '@js_godot/variant/packed_color_array'
import { RID } from '@js_godot/variant/rid'
import { Color } from '@js_godot/variant/color'
import { PackedByteArray } from '@js_godot/variant/packed_byte_array'
import { PackedInt64Array } from '@js_godot/variant/packed_int64_array'
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GodotObject } from '@js_godot/classes/godot_object'
import { Rect2 } from '@js_godot/variant/rect2'
import { Vector3 } from '@js_godot/variant/vector3'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_texture_create;
  method_texture_create_shared;
  method_texture_create_shared_from_slice;
  method_texture_create_from_extension;
  method_texture_update;
  method_texture_get_data;
  method_texture_is_format_supported_for_usage;
  method_texture_is_shared;
  method_texture_is_valid;
  method_texture_copy;
  method_texture_clear;
  method_texture_resolve_multisample;
  method_texture_get_format;
  method_texture_get_native_handle;
  method_framebuffer_format_create;
  method_framebuffer_format_create_multipass;
  method_framebuffer_format_create_empty;
  method_framebuffer_format_get_texture_samples;
  method_framebuffer_create;
  method_framebuffer_create_multipass;
  method_framebuffer_create_empty;
  method_framebuffer_get_format;
  method_framebuffer_is_valid;
  method_sampler_create;
  method_sampler_is_format_supported_for_filter;
  method_vertex_buffer_create;
  method_vertex_format_create;
  method_vertex_array_create;
  method_index_buffer_create;
  method_index_array_create;
  method_shader_compile_spirv_from_source;
  method_shader_compile_binary_from_spirv;
  method_shader_create_from_spirv;
  method_shader_create_from_bytecode;
  method_shader_create_placeholder;
  method_shader_get_vertex_input_attribute_mask;
  method_uniform_buffer_create;
  method_storage_buffer_create;
  method_texture_buffer_create;
  method_uniform_set_create;
  method_uniform_set_is_valid;
  method_buffer_copy;
  method_buffer_update;
  method_buffer_clear;
  method_buffer_get_data;
  method_render_pipeline_create;
  method_render_pipeline_is_valid;
  method_compute_pipeline_create;
  method_compute_pipeline_is_valid;
  method_screen_get_width;
  method_screen_get_height;
  method_screen_get_framebuffer_format;
  method_draw_list_begin_for_screen;
  method_draw_list_begin;
  method_draw_list_begin_split;
  method_draw_list_set_blend_constants;
  method_draw_list_bind_render_pipeline;
  method_draw_list_bind_uniform_set;
  method_draw_list_bind_vertex_array;
  method_draw_list_bind_index_array;
  method_draw_list_set_push_constant;
  method_draw_list_draw;
  method_draw_list_enable_scissor;
  method_draw_list_disable_scissor;
  method_draw_list_switch_to_next_pass;
  method_draw_list_switch_to_next_pass_split;
  method_draw_list_end;
  method_compute_list_begin;
  method_compute_list_bind_compute_pipeline;
  method_compute_list_set_push_constant;
  method_compute_list_bind_uniform_set;
  method_compute_list_dispatch;
  method_compute_list_dispatch_indirect;
  method_compute_list_add_barrier;
  method_compute_list_end;
  method_free_rid;
  method_capture_timestamp;
  method_get_captured_timestamps_count;
  method_get_captured_timestamps_frame;
  method_get_captured_timestamp_gpu_time;
  method_get_captured_timestamp_cpu_time;
  method_get_captured_timestamp_name;
  method_limit_get;
  method_get_frame_delay;
  method_submit;
  method_sync;
  method_barrier;
  method_full_barrier;
  method_create_local_device;
  method_set_resource_name;
  method_draw_command_begin_label;
  method_draw_command_insert_label;
  method_draw_command_end_label;
  method_get_device_vendor_name;
  method_get_device_name;
  method_get_device_pipeline_cache_uuid;
  method_get_memory_usage;
  method_get_driver_resource;
}
export class RenderingDevice extends GodotObject{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("RenderingDevice");
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
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("texture_create");
      this._bindings.method_texture_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3709173589
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("texture_create_shared");
      this._bindings.method_texture_create_shared = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3178156134
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("texture_create_shared_from_slice");
      this._bindings.method_texture_create_shared_from_slice = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1808971279
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("texture_create_from_extension");
      this._bindings.method_texture_create_from_extension = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1397171480
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("texture_update");
      this._bindings.method_texture_update = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1349464008
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("texture_get_data");
      this._bindings.method_texture_get_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1859412099
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("texture_is_format_supported_for_usage");
      this._bindings.method_texture_is_format_supported_for_usage = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2592520478
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("texture_is_shared");
      this._bindings.method_texture_is_shared = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3521089500
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("texture_is_valid");
      this._bindings.method_texture_is_valid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3521089500
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("texture_copy");
      this._bindings.method_texture_copy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2859522160
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("texture_clear");
      this._bindings.method_texture_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3477703247
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("texture_resolve_multisample");
      this._bindings.method_texture_resolve_multisample = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3181288260
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("texture_get_format");
      this._bindings.method_texture_get_format = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1374471690
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("texture_get_native_handle");
      this._bindings.method_texture_get_native_handle = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3917799429
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("framebuffer_format_create");
      this._bindings.method_framebuffer_format_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        697032759
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("framebuffer_format_create_multipass");
      this._bindings.method_framebuffer_format_create_multipass = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2647479094
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("framebuffer_format_create_empty");
      this._bindings.method_framebuffer_format_create_empty = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        555930169
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("framebuffer_format_get_texture_samples");
      this._bindings.method_framebuffer_format_get_texture_samples = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4223391010
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("framebuffer_create");
      this._bindings.method_framebuffer_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3284231055
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("framebuffer_create_multipass");
      this._bindings.method_framebuffer_create_multipass = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1750306695
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("framebuffer_create_empty");
      this._bindings.method_framebuffer_create_empty = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3058360618
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("framebuffer_get_format");
      this._bindings.method_framebuffer_get_format = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3917799429
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("framebuffer_is_valid");
      this._bindings.method_framebuffer_is_valid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4155700596
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("sampler_create");
      this._bindings.method_sampler_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2327892535
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("sampler_is_format_supported_for_filter");
      this._bindings.method_sampler_is_format_supported_for_filter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2247922238
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("vertex_buffer_create");
      this._bindings.method_vertex_buffer_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3410049843
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("vertex_format_create");
      this._bindings.method_vertex_format_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1242678479
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("vertex_array_create");
      this._bindings.method_vertex_array_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3799816279
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("index_buffer_create");
      this._bindings.method_index_buffer_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3935920523
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("index_array_create");
      this._bindings.method_index_array_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2256026069
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("shader_compile_spirv_from_source");
      this._bindings.method_shader_compile_spirv_from_source = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1178973306
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("shader_compile_binary_from_spirv");
      this._bindings.method_shader_compile_binary_from_spirv = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        134910450
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("shader_create_from_spirv");
      this._bindings.method_shader_create_from_spirv = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        342949005
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("shader_create_from_bytecode");
      this._bindings.method_shader_create_from_bytecode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1687031350
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("shader_create_placeholder");
      this._bindings.method_shader_create_placeholder = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        529393457
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("shader_get_vertex_input_attribute_mask");
      this._bindings.method_shader_get_vertex_input_attribute_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3917799429
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("uniform_buffer_create");
      this._bindings.method_uniform_buffer_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        34556762
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("storage_buffer_create");
      this._bindings.method_storage_buffer_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2316365934
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("texture_buffer_create");
      this._bindings.method_texture_buffer_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1470338698
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("uniform_set_create");
      this._bindings.method_uniform_set_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2280795797
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("uniform_set_is_valid");
      this._bindings.method_uniform_set_is_valid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3521089500
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("buffer_copy");
      this._bindings.method_buffer_copy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        864257779
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("buffer_update");
      this._bindings.method_buffer_update = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3454956949
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("buffer_clear");
      this._bindings.method_buffer_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2452320800
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("buffer_get_data");
      this._bindings.method_buffer_get_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3101830688
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("render_pipeline_create");
      this._bindings.method_render_pipeline_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2385451958
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("render_pipeline_is_valid");
      this._bindings.method_render_pipeline_is_valid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3521089500
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("compute_pipeline_create");
      this._bindings.method_compute_pipeline_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1448838280
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("compute_pipeline_is_valid");
      this._bindings.method_compute_pipeline_is_valid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3521089500
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("screen_get_width");
      this._bindings.method_screen_get_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1591665591
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("screen_get_height");
      this._bindings.method_screen_get_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1591665591
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("screen_get_framebuffer_format");
      this._bindings.method_screen_get_framebuffer_format = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1591665591
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("draw_list_begin_for_screen");
      this._bindings.method_draw_list_begin_for_screen = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3988079995
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("draw_list_begin");
      this._bindings.method_draw_list_begin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2686605154
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("draw_list_begin_split");
      this._bindings.method_draw_list_begin_split = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2406300660
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("draw_list_set_blend_constants");
      this._bindings.method_draw_list_set_blend_constants = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2878471219
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("draw_list_bind_render_pipeline");
      this._bindings.method_draw_list_bind_render_pipeline = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4040184819
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("draw_list_bind_uniform_set");
      this._bindings.method_draw_list_bind_uniform_set = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        749655778
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("draw_list_bind_vertex_array");
      this._bindings.method_draw_list_bind_vertex_array = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4040184819
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("draw_list_bind_index_array");
      this._bindings.method_draw_list_bind_index_array = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4040184819
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("draw_list_set_push_constant");
      this._bindings.method_draw_list_set_push_constant = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2772371345
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("draw_list_draw");
      this._bindings.method_draw_list_draw = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4230067973
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("draw_list_enable_scissor");
      this._bindings.method_draw_list_enable_scissor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        244650101
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("draw_list_disable_scissor");
      this._bindings.method_draw_list_disable_scissor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("draw_list_switch_to_next_pass");
      this._bindings.method_draw_list_switch_to_next_pass = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("draw_list_switch_to_next_pass_split");
      this._bindings.method_draw_list_switch_to_next_pass_split = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2865087369
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("draw_list_end");
      this._bindings.method_draw_list_end = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("compute_list_begin");
      this._bindings.method_compute_list_begin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("compute_list_bind_compute_pipeline");
      this._bindings.method_compute_list_bind_compute_pipeline = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4040184819
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("compute_list_set_push_constant");
      this._bindings.method_compute_list_set_push_constant = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2772371345
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("compute_list_bind_uniform_set");
      this._bindings.method_compute_list_bind_uniform_set = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        749655778
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("compute_list_dispatch");
      this._bindings.method_compute_list_dispatch = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4275841770
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("compute_list_dispatch_indirect");
      this._bindings.method_compute_list_dispatch_indirect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        749655778
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("compute_list_add_barrier");
      this._bindings.method_compute_list_add_barrier = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("compute_list_end");
      this._bindings.method_compute_list_end = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("free_rid");
      this._bindings.method_free_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2722037293
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("capture_timestamp");
      this._bindings.method_capture_timestamp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("get_captured_timestamps_count");
      this._bindings.method_get_captured_timestamps_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("get_captured_timestamps_frame");
      this._bindings.method_get_captured_timestamps_frame = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("get_captured_timestamp_gpu_time");
      this._bindings.method_get_captured_timestamp_gpu_time = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("get_captured_timestamp_cpu_time");
      this._bindings.method_get_captured_timestamp_cpu_time = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("get_captured_timestamp_name");
      this._bindings.method_get_captured_timestamp_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("limit_get");
      this._bindings.method_limit_get = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1559202131
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("get_frame_delay");
      this._bindings.method_get_frame_delay = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("submit");
      this._bindings.method_submit = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("sync");
      this._bindings.method_sync = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("barrier");
      this._bindings.method_barrier = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3718155691
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("full_barrier");
      this._bindings.method_full_barrier = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("create_local_device");
      this._bindings.method_create_local_device = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2846302423
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("set_resource_name");
      this._bindings.method_set_resource_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2726140452
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("draw_command_begin_label");
      this._bindings.method_draw_command_begin_label = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1636512886
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("draw_command_insert_label");
      this._bindings.method_draw_command_insert_label = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1636512886
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("draw_command_end_label");
      this._bindings.method_draw_command_end_label = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("get_device_vendor_name");
      this._bindings.method_get_device_vendor_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("get_device_name");
      this._bindings.method_get_device_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("get_device_pipeline_cache_uuid");
      this._bindings.method_get_device_pipeline_cache_uuid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("get_memory_usage");
      this._bindings.method_get_memory_usage = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        251690689
      );
    }
    {
      let classname = new StringName("RenderingDevice");
      let methodname = new StringName("get_driver_resource");
      this._bindings.method_get_driver_resource = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        501815484
      );
    }
  }
  
  texture_create(_format, _view, _data) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_texture_create,
      this._owner,
			Variant.Type.RID,
    
      _format, _view, _data
    );
    
  }
  texture_create_shared(_view, _with_texture) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_texture_create_shared,
      this._owner,
			Variant.Type.RID,
    
      _view, _with_texture
    );
    
  }
  texture_create_shared_from_slice(_view, _with_texture, _layer, _mipmap, _mipmaps, _slice_type) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_texture_create_shared_from_slice,
      this._owner,
			Variant.Type.RID,
    
      _view, _with_texture, _layer, _mipmap, _mipmaps, _slice_type
    );
    
  }
  texture_create_from_extension(_type, _format, _samples, _usage_flags, _image, _width, _height, _depth, _layers) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_texture_create_from_extension,
      this._owner,
			Variant.Type.RID,
    
      _type, _format, _samples, _usage_flags, _image, _width, _height, _depth, _layers
    );
    
  }
  texture_update(_texture, _layer, _data) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_texture_update,
      this._owner,
			Variant.INT,
      _texture, _layer, _data
    );
    
  }
  texture_get_data(_texture, _layer) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_texture_get_data,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      _texture, _layer
    );
    
  }
  texture_is_format_supported_for_usage(_format, _usage_flags) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_texture_is_format_supported_for_usage,
      this._owner,
			Variant.Type.BOOL,
      _format, _usage_flags
    );
    
  }
  texture_is_shared(_texture) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_texture_is_shared,
      this._owner,
			Variant.Type.BOOL,
      _texture
    );
    
  }
  texture_is_valid(_texture) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_texture_is_valid,
      this._owner,
			Variant.Type.BOOL,
      _texture
    );
    
  }
  texture_copy(_from_texture, _to_texture, _from_pos, _to_pos, _size, _src_mipmap, _dst_mipmap, _src_layer, _dst_layer) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_texture_copy,
      this._owner,
			Variant.INT,
      _from_texture, _to_texture, _from_pos, _to_pos, _size, _src_mipmap, _dst_mipmap, _src_layer, _dst_layer
    );
    
  }
  texture_clear(_texture, _color, _base_mipmap, _mipmap_count, _base_layer, _layer_count) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_texture_clear,
      this._owner,
			Variant.INT,
      _texture, _color, _base_mipmap, _mipmap_count, _base_layer, _layer_count
    );
    
  }
  texture_resolve_multisample(_from_texture, _to_texture) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_texture_resolve_multisample,
      this._owner,
			Variant.INT,
      _from_texture, _to_texture
    );
    
  }
  texture_get_format(_texture) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_texture_get_format,
      this._owner,
			Variant.INT,
      _texture
    );
    
  }
  texture_get_native_handle(_texture) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_texture_get_native_handle,
      this._owner,
			Variant.Type.INT,
      _texture
    );
    
  }
  framebuffer_format_create(_attachments, _view_count) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_framebuffer_format_create,
      this._owner,
			Variant.Type.INT,
      _attachments, _view_count
    );
    
  }
  framebuffer_format_create_multipass(_attachments, _passes, _view_count) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_framebuffer_format_create_multipass,
      this._owner,
			Variant.Type.INT,
      _attachments, _passes, _view_count
    );
    
  }
  framebuffer_format_create_empty(_samples) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_framebuffer_format_create_empty,
      this._owner,
			Variant.Type.INT,
      _samples
    );
    
  }
  framebuffer_format_get_texture_samples(_format, _render_pass) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_framebuffer_format_get_texture_samples,
      this._owner,
			Variant.INT,
      _format, _render_pass
    );
    
  }
  framebuffer_create(_textures, _validate_with_format, _view_count) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_framebuffer_create,
      this._owner,
			Variant.Type.RID,
    
      _textures, _validate_with_format, _view_count
    );
    
  }
  framebuffer_create_multipass(_textures, _passes, _validate_with_format, _view_count) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_framebuffer_create_multipass,
      this._owner,
			Variant.Type.RID,
    
      _textures, _passes, _validate_with_format, _view_count
    );
    
  }
  framebuffer_create_empty(_size, _samples, _validate_with_format) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_framebuffer_create_empty,
      this._owner,
			Variant.Type.RID,
    
      _size, _samples, _validate_with_format
    );
    
  }
  framebuffer_get_format(_framebuffer) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_framebuffer_get_format,
      this._owner,
			Variant.Type.INT,
      _framebuffer
    );
    
  }
  framebuffer_is_valid(_framebuffer) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_framebuffer_is_valid,
      this._owner,
			Variant.Type.BOOL,
      _framebuffer
    );
    
  }
  sampler_create(_state) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_sampler_create,
      this._owner,
			Variant.Type.RID,
    
      _state
    );
    
  }
  sampler_is_format_supported_for_filter(_format, _sampler_filter) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_sampler_is_format_supported_for_filter,
      this._owner,
			Variant.Type.BOOL,
      _format, _sampler_filter
    );
    
  }
  vertex_buffer_create(_size_bytes, _data, _use_as_storage) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_vertex_buffer_create,
      this._owner,
			Variant.Type.RID,
    
      _size_bytes, _data, _use_as_storage
    );
    
  }
  vertex_format_create(_vertex_descriptions) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_vertex_format_create,
      this._owner,
			Variant.Type.INT,
      _vertex_descriptions
    );
    
  }
  vertex_array_create(_vertex_count, _vertex_format, _src_buffers, _offsets) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_vertex_array_create,
      this._owner,
			Variant.Type.RID,
    
      _vertex_count, _vertex_format, _src_buffers, _offsets
    );
    
  }
  index_buffer_create(_size_indices, _format, _data, _use_restart_indices) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_index_buffer_create,
      this._owner,
			Variant.Type.RID,
    
      _size_indices, _format, _data, _use_restart_indices
    );
    
  }
  index_array_create(_index_buffer, _index_offset, _index_count) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_index_array_create,
      this._owner,
			Variant.Type.RID,
    
      _index_buffer, _index_offset, _index_count
    );
    
  }
  shader_compile_spirv_from_source(_shader_source, _allow_cache) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_shader_compile_spirv_from_source,
      this._owner,
			Variant.INT,
      _shader_source, _allow_cache
    );
    
  }
  shader_compile_binary_from_spirv(_spirv_data, _name) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_shader_compile_binary_from_spirv,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      _spirv_data, _name
    );
    
  }
  shader_create_from_spirv(_spirv_data, _name) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_shader_create_from_spirv,
      this._owner,
			Variant.Type.RID,
    
      _spirv_data, _name
    );
    
  }
  shader_create_from_bytecode(_binary_data, _placeholder_rid) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_shader_create_from_bytecode,
      this._owner,
			Variant.Type.RID,
    
      _binary_data, _placeholder_rid
    );
    
  }
  shader_create_placeholder() {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_shader_create_placeholder,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  shader_get_vertex_input_attribute_mask(_shader) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_shader_get_vertex_input_attribute_mask,
      this._owner,
			Variant.Type.INT,
      _shader
    );
    
  }
  uniform_buffer_create(_size_bytes, _data) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_uniform_buffer_create,
      this._owner,
			Variant.Type.RID,
    
      _size_bytes, _data
    );
    
  }
  storage_buffer_create(_size_bytes, _data, _usage) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_storage_buffer_create,
      this._owner,
			Variant.Type.RID,
    
      _size_bytes, _data, _usage
    );
    
  }
  texture_buffer_create(_size_bytes, _format, _data) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_texture_buffer_create,
      this._owner,
			Variant.Type.RID,
    
      _size_bytes, _format, _data
    );
    
  }
  uniform_set_create(_uniforms, _shader, _shader_set) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_uniform_set_create,
      this._owner,
			Variant.Type.RID,
    
      _uniforms, _shader, _shader_set
    );
    
  }
  uniform_set_is_valid(_uniform_set) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_uniform_set_is_valid,
      this._owner,
			Variant.Type.BOOL,
      _uniform_set
    );
    
  }
  buffer_copy(_src_buffer, _dst_buffer, _src_offset, _dst_offset, _size) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_buffer_copy,
      this._owner,
			Variant.INT,
      _src_buffer, _dst_buffer, _src_offset, _dst_offset, _size
    );
    
  }
  buffer_update(_buffer, _offset, _size_bytes, _data) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_buffer_update,
      this._owner,
			Variant.INT,
      _buffer, _offset, _size_bytes, _data
    );
    
  }
  buffer_clear(_buffer, _offset, _size_bytes) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_buffer_clear,
      this._owner,
			Variant.INT,
      _buffer, _offset, _size_bytes
    );
    
  }
  buffer_get_data(_buffer, _offset_bytes, _size_bytes) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_buffer_get_data,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      _buffer, _offset_bytes, _size_bytes
    );
    
  }
  render_pipeline_create(_shader, _framebuffer_format, _vertex_format, _primitive, _rasterization_state, _multisample_state, _stencil_state, _color_blend_state, _dynamic_state_flags, _for_render_pass, _specialization_constants) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_render_pipeline_create,
      this._owner,
			Variant.Type.RID,
    
      _shader, _framebuffer_format, _vertex_format, _primitive, _rasterization_state, _multisample_state, _stencil_state, _color_blend_state, _dynamic_state_flags, _for_render_pass, _specialization_constants
    );
    
  }
  render_pipeline_is_valid(_render_pipeline) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_render_pipeline_is_valid,
      this._owner,
			Variant.Type.BOOL,
      _render_pipeline
    );
    
  }
  compute_pipeline_create(_shader, _specialization_constants) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_compute_pipeline_create,
      this._owner,
			Variant.Type.RID,
    
      _shader, _specialization_constants
    );
    
  }
  compute_pipeline_is_valid(_compute_pipeline) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_compute_pipeline_is_valid,
      this._owner,
			Variant.Type.BOOL,
      _compute_pipeline
    );
    
  }
  screen_get_width(_screen) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_screen_get_width,
      this._owner,
			Variant.Type.INT,
      _screen
    );
    
  }
  screen_get_height(_screen) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_screen_get_height,
      this._owner,
			Variant.Type.INT,
      _screen
    );
    
  }
  screen_get_framebuffer_format(_screen) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_screen_get_framebuffer_format,
      this._owner,
			Variant.Type.INT,
      _screen
    );
    
  }
  draw_list_begin_for_screen(_screen, _clear_color) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_draw_list_begin_for_screen,
      this._owner,
			Variant.Type.INT,
      _screen, _clear_color
    );
    
  }
  draw_list_begin(_framebuffer, _initial_color_action, _final_color_action, _initial_depth_action, _final_depth_action, _clear_color_values, _clear_depth, _clear_stencil, _region) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_draw_list_begin,
      this._owner,
			Variant.Type.INT,
      _framebuffer, _initial_color_action, _final_color_action, _initial_depth_action, _final_depth_action, _clear_color_values, _clear_depth, _clear_stencil, _region
    );
    
  }
  draw_list_begin_split(_framebuffer, _splits, _initial_color_action, _final_color_action, _initial_depth_action, _final_depth_action, _clear_color_values, _clear_depth, _clear_stencil, _region, _storage_textures) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_draw_list_begin_split,
      this._owner,
			Variant.Type.PACKED_INT64_ARRAY,
    
      _framebuffer, _splits, _initial_color_action, _final_color_action, _initial_depth_action, _final_depth_action, _clear_color_values, _clear_depth, _clear_stencil, _region, _storage_textures
    );
    
  }
  draw_list_set_blend_constants(_draw_list, _color) {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_draw_list_set_blend_constants,
      this._owner,
      _draw_list, _color
    );
    
  }
  draw_list_bind_render_pipeline(_draw_list, _render_pipeline) {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_draw_list_bind_render_pipeline,
      this._owner,
      _draw_list, _render_pipeline
    );
    
  }
  draw_list_bind_uniform_set(_draw_list, _uniform_set, _set_index) {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_draw_list_bind_uniform_set,
      this._owner,
      _draw_list, _uniform_set, _set_index
    );
    
  }
  draw_list_bind_vertex_array(_draw_list, _vertex_array) {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_draw_list_bind_vertex_array,
      this._owner,
      _draw_list, _vertex_array
    );
    
  }
  draw_list_bind_index_array(_draw_list, _index_array) {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_draw_list_bind_index_array,
      this._owner,
      _draw_list, _index_array
    );
    
  }
  draw_list_set_push_constant(_draw_list, _buffer, _size_bytes) {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_draw_list_set_push_constant,
      this._owner,
      _draw_list, _buffer, _size_bytes
    );
    
  }
  draw_list_draw(_draw_list, _use_indices, _instances, _procedural_vertex_count) {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_draw_list_draw,
      this._owner,
      _draw_list, _use_indices, _instances, _procedural_vertex_count
    );
    
  }
  draw_list_enable_scissor(_draw_list, _rect) {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_draw_list_enable_scissor,
      this._owner,
      _draw_list, _rect
    );
    
  }
  draw_list_disable_scissor(_draw_list) {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_draw_list_disable_scissor,
      this._owner,
      _draw_list
    );
    
  }
  draw_list_switch_to_next_pass() {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_draw_list_switch_to_next_pass,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  draw_list_switch_to_next_pass_split(_splits) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_draw_list_switch_to_next_pass_split,
      this._owner,
			Variant.Type.PACKED_INT64_ARRAY,
    
      _splits
    );
    
  }
  draw_list_end() {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_draw_list_end,
      this._owner,
      
    );
    
  }
  compute_list_begin() {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_compute_list_begin,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  compute_list_bind_compute_pipeline(_compute_list, _compute_pipeline) {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_compute_list_bind_compute_pipeline,
      this._owner,
      _compute_list, _compute_pipeline
    );
    
  }
  compute_list_set_push_constant(_compute_list, _buffer, _size_bytes) {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_compute_list_set_push_constant,
      this._owner,
      _compute_list, _buffer, _size_bytes
    );
    
  }
  compute_list_bind_uniform_set(_compute_list, _uniform_set, _set_index) {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_compute_list_bind_uniform_set,
      this._owner,
      _compute_list, _uniform_set, _set_index
    );
    
  }
  compute_list_dispatch(_compute_list, _x_groups, _y_groups, _z_groups) {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_compute_list_dispatch,
      this._owner,
      _compute_list, _x_groups, _y_groups, _z_groups
    );
    
  }
  compute_list_dispatch_indirect(_compute_list, _buffer, _offset) {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_compute_list_dispatch_indirect,
      this._owner,
      _compute_list, _buffer, _offset
    );
    
  }
  compute_list_add_barrier(_compute_list) {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_compute_list_add_barrier,
      this._owner,
      _compute_list
    );
    
  }
  compute_list_end() {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_compute_list_end,
      this._owner,
      
    );
    
  }
  free_rid(_rid) {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_free_rid,
      this._owner,
      _rid
    );
    
  }
  capture_timestamp(_name) {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_capture_timestamp,
      this._owner,
      _name
    );
    
  }
  get_captured_timestamps_count() {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_get_captured_timestamps_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_captured_timestamps_frame() {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_get_captured_timestamps_frame,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_captured_timestamp_gpu_time(_index) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_get_captured_timestamp_gpu_time,
      this._owner,
			Variant.Type.INT,
      _index
    );
    
  }
  get_captured_timestamp_cpu_time(_index) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_get_captured_timestamp_cpu_time,
      this._owner,
			Variant.Type.INT,
      _index
    );
    
  }
  get_captured_timestamp_name(_index) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_get_captured_timestamp_name,
      this._owner,
			Variant.Type.STRING,
    
      _index
    );
    
  }
  limit_get(_limit) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_limit_get,
      this._owner,
			Variant.Type.INT,
      _limit
    );
    
  }
  get_frame_delay() {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_get_frame_delay,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  submit() {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_submit,
      this._owner,
      
    );
    
  }
  sync() {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_sync,
      this._owner,
      
    );
    
  }
  barrier(_from, _to) {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_barrier,
      this._owner,
      _from, _to
    );
    
  }
  full_barrier() {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_full_barrier,
      this._owner,
      
    );
    
  }
  create_local_device() {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_create_local_device,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_resource_name(_id, _name) {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_set_resource_name,
      this._owner,
      _id, _name
    );
    
  }
  draw_command_begin_label(_name, _color) {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_draw_command_begin_label,
      this._owner,
      _name, _color
    );
    
  }
  draw_command_insert_label(_name, _color) {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_draw_command_insert_label,
      this._owner,
      _name, _color
    );
    
  }
  draw_command_end_label() {
    return _call_native_mb_no_ret(
      RenderingDevice._bindings.method_draw_command_end_label,
      this._owner,
      
    );
    
  }
  get_device_vendor_name() {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_get_device_vendor_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_device_name() {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_get_device_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_device_pipeline_cache_uuid() {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_get_device_pipeline_cache_uuid,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_memory_usage(_type) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_get_memory_usage,
      this._owner,
			Variant.Type.INT,
      _type
    );
    
  }
  get_driver_resource(_resource, _rid, _index) {
    return _call_native_mb_ret(
      RenderingDevice._bindings.method_get_driver_resource,
      this._owner,
			Variant.Type.INT,
      _resource, _rid, _index
    );
    
  }
  

  static DeviceType = {
    DEVICE_TYPE_OTHER: 0,
    DEVICE_TYPE_INTEGRATED_GPU: 1,
    DEVICE_TYPE_DISCRETE_GPU: 2,
    DEVICE_TYPE_VIRTUAL_GPU: 3,
    DEVICE_TYPE_CPU: 4,
    DEVICE_TYPE_MAX: 5,
  }
  static DriverResource = {
    DRIVER_RESOURCE_LOGICAL_DEVICE: 0,
    DRIVER_RESOURCE_PHYSICAL_DEVICE: 1,
    DRIVER_RESOURCE_TOPMOST_OBJECT: 2,
    DRIVER_RESOURCE_COMMAND_QUEUE: 3,
    DRIVER_RESOURCE_QUEUE_FAMILY: 4,
    DRIVER_RESOURCE_TEXTURE: 5,
    DRIVER_RESOURCE_TEXTURE_VIEW: 6,
    DRIVER_RESOURCE_TEXTURE_DATA_FORMAT: 7,
    DRIVER_RESOURCE_SAMPLER: 8,
    DRIVER_RESOURCE_UNIFORM_SET: 9,
    DRIVER_RESOURCE_BUFFER: 10,
    DRIVER_RESOURCE_COMPUTE_PIPELINE: 11,
    DRIVER_RESOURCE_RENDER_PIPELINE: 12,
    DRIVER_RESOURCE_VULKAN_DEVICE: 0,
    DRIVER_RESOURCE_VULKAN_PHYSICAL_DEVICE: 1,
    DRIVER_RESOURCE_VULKAN_INSTANCE: 2,
    DRIVER_RESOURCE_VULKAN_QUEUE: 3,
    DRIVER_RESOURCE_VULKAN_QUEUE_FAMILY_INDEX: 4,
    DRIVER_RESOURCE_VULKAN_IMAGE: 5,
    DRIVER_RESOURCE_VULKAN_IMAGE_VIEW: 6,
    DRIVER_RESOURCE_VULKAN_IMAGE_NATIVE_TEXTURE_FORMAT: 7,
    DRIVER_RESOURCE_VULKAN_SAMPLER: 8,
    DRIVER_RESOURCE_VULKAN_DESCRIPTOR_SET: 9,
    DRIVER_RESOURCE_VULKAN_BUFFER: 10,
    DRIVER_RESOURCE_VULKAN_COMPUTE_PIPELINE: 11,
    DRIVER_RESOURCE_VULKAN_RENDER_PIPELINE: 12,
  }
  static DataFormat = {
    DATA_FORMAT_R4G4_UNORM_PACK8: 0,
    DATA_FORMAT_R4G4B4A4_UNORM_PACK16: 1,
    DATA_FORMAT_B4G4R4A4_UNORM_PACK16: 2,
    DATA_FORMAT_R5G6B5_UNORM_PACK16: 3,
    DATA_FORMAT_B5G6R5_UNORM_PACK16: 4,
    DATA_FORMAT_R5G5B5A1_UNORM_PACK16: 5,
    DATA_FORMAT_B5G5R5A1_UNORM_PACK16: 6,
    DATA_FORMAT_A1R5G5B5_UNORM_PACK16: 7,
    DATA_FORMAT_R8_UNORM: 8,
    DATA_FORMAT_R8_SNORM: 9,
    DATA_FORMAT_R8_USCALED: 10,
    DATA_FORMAT_R8_SSCALED: 11,
    DATA_FORMAT_R8_UINT: 12,
    DATA_FORMAT_R8_SINT: 13,
    DATA_FORMAT_R8_SRGB: 14,
    DATA_FORMAT_R8G8_UNORM: 15,
    DATA_FORMAT_R8G8_SNORM: 16,
    DATA_FORMAT_R8G8_USCALED: 17,
    DATA_FORMAT_R8G8_SSCALED: 18,
    DATA_FORMAT_R8G8_UINT: 19,
    DATA_FORMAT_R8G8_SINT: 20,
    DATA_FORMAT_R8G8_SRGB: 21,
    DATA_FORMAT_R8G8B8_UNORM: 22,
    DATA_FORMAT_R8G8B8_SNORM: 23,
    DATA_FORMAT_R8G8B8_USCALED: 24,
    DATA_FORMAT_R8G8B8_SSCALED: 25,
    DATA_FORMAT_R8G8B8_UINT: 26,
    DATA_FORMAT_R8G8B8_SINT: 27,
    DATA_FORMAT_R8G8B8_SRGB: 28,
    DATA_FORMAT_B8G8R8_UNORM: 29,
    DATA_FORMAT_B8G8R8_SNORM: 30,
    DATA_FORMAT_B8G8R8_USCALED: 31,
    DATA_FORMAT_B8G8R8_SSCALED: 32,
    DATA_FORMAT_B8G8R8_UINT: 33,
    DATA_FORMAT_B8G8R8_SINT: 34,
    DATA_FORMAT_B8G8R8_SRGB: 35,
    DATA_FORMAT_R8G8B8A8_UNORM: 36,
    DATA_FORMAT_R8G8B8A8_SNORM: 37,
    DATA_FORMAT_R8G8B8A8_USCALED: 38,
    DATA_FORMAT_R8G8B8A8_SSCALED: 39,
    DATA_FORMAT_R8G8B8A8_UINT: 40,
    DATA_FORMAT_R8G8B8A8_SINT: 41,
    DATA_FORMAT_R8G8B8A8_SRGB: 42,
    DATA_FORMAT_B8G8R8A8_UNORM: 43,
    DATA_FORMAT_B8G8R8A8_SNORM: 44,
    DATA_FORMAT_B8G8R8A8_USCALED: 45,
    DATA_FORMAT_B8G8R8A8_SSCALED: 46,
    DATA_FORMAT_B8G8R8A8_UINT: 47,
    DATA_FORMAT_B8G8R8A8_SINT: 48,
    DATA_FORMAT_B8G8R8A8_SRGB: 49,
    DATA_FORMAT_A8B8G8R8_UNORM_PACK32: 50,
    DATA_FORMAT_A8B8G8R8_SNORM_PACK32: 51,
    DATA_FORMAT_A8B8G8R8_USCALED_PACK32: 52,
    DATA_FORMAT_A8B8G8R8_SSCALED_PACK32: 53,
    DATA_FORMAT_A8B8G8R8_UINT_PACK32: 54,
    DATA_FORMAT_A8B8G8R8_SINT_PACK32: 55,
    DATA_FORMAT_A8B8G8R8_SRGB_PACK32: 56,
    DATA_FORMAT_A2R10G10B10_UNORM_PACK32: 57,
    DATA_FORMAT_A2R10G10B10_SNORM_PACK32: 58,
    DATA_FORMAT_A2R10G10B10_USCALED_PACK32: 59,
    DATA_FORMAT_A2R10G10B10_SSCALED_PACK32: 60,
    DATA_FORMAT_A2R10G10B10_UINT_PACK32: 61,
    DATA_FORMAT_A2R10G10B10_SINT_PACK32: 62,
    DATA_FORMAT_A2B10G10R10_UNORM_PACK32: 63,
    DATA_FORMAT_A2B10G10R10_SNORM_PACK32: 64,
    DATA_FORMAT_A2B10G10R10_USCALED_PACK32: 65,
    DATA_FORMAT_A2B10G10R10_SSCALED_PACK32: 66,
    DATA_FORMAT_A2B10G10R10_UINT_PACK32: 67,
    DATA_FORMAT_A2B10G10R10_SINT_PACK32: 68,
    DATA_FORMAT_R16_UNORM: 69,
    DATA_FORMAT_R16_SNORM: 70,
    DATA_FORMAT_R16_USCALED: 71,
    DATA_FORMAT_R16_SSCALED: 72,
    DATA_FORMAT_R16_UINT: 73,
    DATA_FORMAT_R16_SINT: 74,
    DATA_FORMAT_R16_SFLOAT: 75,
    DATA_FORMAT_R16G16_UNORM: 76,
    DATA_FORMAT_R16G16_SNORM: 77,
    DATA_FORMAT_R16G16_USCALED: 78,
    DATA_FORMAT_R16G16_SSCALED: 79,
    DATA_FORMAT_R16G16_UINT: 80,
    DATA_FORMAT_R16G16_SINT: 81,
    DATA_FORMAT_R16G16_SFLOAT: 82,
    DATA_FORMAT_R16G16B16_UNORM: 83,
    DATA_FORMAT_R16G16B16_SNORM: 84,
    DATA_FORMAT_R16G16B16_USCALED: 85,
    DATA_FORMAT_R16G16B16_SSCALED: 86,
    DATA_FORMAT_R16G16B16_UINT: 87,
    DATA_FORMAT_R16G16B16_SINT: 88,
    DATA_FORMAT_R16G16B16_SFLOAT: 89,
    DATA_FORMAT_R16G16B16A16_UNORM: 90,
    DATA_FORMAT_R16G16B16A16_SNORM: 91,
    DATA_FORMAT_R16G16B16A16_USCALED: 92,
    DATA_FORMAT_R16G16B16A16_SSCALED: 93,
    DATA_FORMAT_R16G16B16A16_UINT: 94,
    DATA_FORMAT_R16G16B16A16_SINT: 95,
    DATA_FORMAT_R16G16B16A16_SFLOAT: 96,
    DATA_FORMAT_R32_UINT: 97,
    DATA_FORMAT_R32_SINT: 98,
    DATA_FORMAT_R32_SFLOAT: 99,
    DATA_FORMAT_R32G32_UINT: 100,
    DATA_FORMAT_R32G32_SINT: 101,
    DATA_FORMAT_R32G32_SFLOAT: 102,
    DATA_FORMAT_R32G32B32_UINT: 103,
    DATA_FORMAT_R32G32B32_SINT: 104,
    DATA_FORMAT_R32G32B32_SFLOAT: 105,
    DATA_FORMAT_R32G32B32A32_UINT: 106,
    DATA_FORMAT_R32G32B32A32_SINT: 107,
    DATA_FORMAT_R32G32B32A32_SFLOAT: 108,
    DATA_FORMAT_R64_UINT: 109,
    DATA_FORMAT_R64_SINT: 110,
    DATA_FORMAT_R64_SFLOAT: 111,
    DATA_FORMAT_R64G64_UINT: 112,
    DATA_FORMAT_R64G64_SINT: 113,
    DATA_FORMAT_R64G64_SFLOAT: 114,
    DATA_FORMAT_R64G64B64_UINT: 115,
    DATA_FORMAT_R64G64B64_SINT: 116,
    DATA_FORMAT_R64G64B64_SFLOAT: 117,
    DATA_FORMAT_R64G64B64A64_UINT: 118,
    DATA_FORMAT_R64G64B64A64_SINT: 119,
    DATA_FORMAT_R64G64B64A64_SFLOAT: 120,
    DATA_FORMAT_B10G11R11_UFLOAT_PACK32: 121,
    DATA_FORMAT_E5B9G9R9_UFLOAT_PACK32: 122,
    DATA_FORMAT_D16_UNORM: 123,
    DATA_FORMAT_X8_D24_UNORM_PACK32: 124,
    DATA_FORMAT_D32_SFLOAT: 125,
    DATA_FORMAT_S8_UINT: 126,
    DATA_FORMAT_D16_UNORM_S8_UINT: 127,
    DATA_FORMAT_D24_UNORM_S8_UINT: 128,
    DATA_FORMAT_D32_SFLOAT_S8_UINT: 129,
    DATA_FORMAT_BC1_RGB_UNORM_BLOCK: 130,
    DATA_FORMAT_BC1_RGB_SRGB_BLOCK: 131,
    DATA_FORMAT_BC1_RGBA_UNORM_BLOCK: 132,
    DATA_FORMAT_BC1_RGBA_SRGB_BLOCK: 133,
    DATA_FORMAT_BC2_UNORM_BLOCK: 134,
    DATA_FORMAT_BC2_SRGB_BLOCK: 135,
    DATA_FORMAT_BC3_UNORM_BLOCK: 136,
    DATA_FORMAT_BC3_SRGB_BLOCK: 137,
    DATA_FORMAT_BC4_UNORM_BLOCK: 138,
    DATA_FORMAT_BC4_SNORM_BLOCK: 139,
    DATA_FORMAT_BC5_UNORM_BLOCK: 140,
    DATA_FORMAT_BC5_SNORM_BLOCK: 141,
    DATA_FORMAT_BC6H_UFLOAT_BLOCK: 142,
    DATA_FORMAT_BC6H_SFLOAT_BLOCK: 143,
    DATA_FORMAT_BC7_UNORM_BLOCK: 144,
    DATA_FORMAT_BC7_SRGB_BLOCK: 145,
    DATA_FORMAT_ETC2_R8G8B8_UNORM_BLOCK: 146,
    DATA_FORMAT_ETC2_R8G8B8_SRGB_BLOCK: 147,
    DATA_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK: 148,
    DATA_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK: 149,
    DATA_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK: 150,
    DATA_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK: 151,
    DATA_FORMAT_EAC_R11_UNORM_BLOCK: 152,
    DATA_FORMAT_EAC_R11_SNORM_BLOCK: 153,
    DATA_FORMAT_EAC_R11G11_UNORM_BLOCK: 154,
    DATA_FORMAT_EAC_R11G11_SNORM_BLOCK: 155,
    DATA_FORMAT_ASTC_4x4_UNORM_BLOCK: 156,
    DATA_FORMAT_ASTC_4x4_SRGB_BLOCK: 157,
    DATA_FORMAT_ASTC_5x4_UNORM_BLOCK: 158,
    DATA_FORMAT_ASTC_5x4_SRGB_BLOCK: 159,
    DATA_FORMAT_ASTC_5x5_UNORM_BLOCK: 160,
    DATA_FORMAT_ASTC_5x5_SRGB_BLOCK: 161,
    DATA_FORMAT_ASTC_6x5_UNORM_BLOCK: 162,
    DATA_FORMAT_ASTC_6x5_SRGB_BLOCK: 163,
    DATA_FORMAT_ASTC_6x6_UNORM_BLOCK: 164,
    DATA_FORMAT_ASTC_6x6_SRGB_BLOCK: 165,
    DATA_FORMAT_ASTC_8x5_UNORM_BLOCK: 166,
    DATA_FORMAT_ASTC_8x5_SRGB_BLOCK: 167,
    DATA_FORMAT_ASTC_8x6_UNORM_BLOCK: 168,
    DATA_FORMAT_ASTC_8x6_SRGB_BLOCK: 169,
    DATA_FORMAT_ASTC_8x8_UNORM_BLOCK: 170,
    DATA_FORMAT_ASTC_8x8_SRGB_BLOCK: 171,
    DATA_FORMAT_ASTC_10x5_UNORM_BLOCK: 172,
    DATA_FORMAT_ASTC_10x5_SRGB_BLOCK: 173,
    DATA_FORMAT_ASTC_10x6_UNORM_BLOCK: 174,
    DATA_FORMAT_ASTC_10x6_SRGB_BLOCK: 175,
    DATA_FORMAT_ASTC_10x8_UNORM_BLOCK: 176,
    DATA_FORMAT_ASTC_10x8_SRGB_BLOCK: 177,
    DATA_FORMAT_ASTC_10x10_UNORM_BLOCK: 178,
    DATA_FORMAT_ASTC_10x10_SRGB_BLOCK: 179,
    DATA_FORMAT_ASTC_12x10_UNORM_BLOCK: 180,
    DATA_FORMAT_ASTC_12x10_SRGB_BLOCK: 181,
    DATA_FORMAT_ASTC_12x12_UNORM_BLOCK: 182,
    DATA_FORMAT_ASTC_12x12_SRGB_BLOCK: 183,
    DATA_FORMAT_G8B8G8R8_422_UNORM: 184,
    DATA_FORMAT_B8G8R8G8_422_UNORM: 185,
    DATA_FORMAT_G8_B8_R8_3PLANE_420_UNORM: 186,
    DATA_FORMAT_G8_B8R8_2PLANE_420_UNORM: 187,
    DATA_FORMAT_G8_B8_R8_3PLANE_422_UNORM: 188,
    DATA_FORMAT_G8_B8R8_2PLANE_422_UNORM: 189,
    DATA_FORMAT_G8_B8_R8_3PLANE_444_UNORM: 190,
    DATA_FORMAT_R10X6_UNORM_PACK16: 191,
    DATA_FORMAT_R10X6G10X6_UNORM_2PACK16: 192,
    DATA_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16: 193,
    DATA_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16: 194,
    DATA_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16: 195,
    DATA_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16: 196,
    DATA_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16: 197,
    DATA_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16: 198,
    DATA_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16: 199,
    DATA_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16: 200,
    DATA_FORMAT_R12X4_UNORM_PACK16: 201,
    DATA_FORMAT_R12X4G12X4_UNORM_2PACK16: 202,
    DATA_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16: 203,
    DATA_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16: 204,
    DATA_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16: 205,
    DATA_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16: 206,
    DATA_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16: 207,
    DATA_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16: 208,
    DATA_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16: 209,
    DATA_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16: 210,
    DATA_FORMAT_G16B16G16R16_422_UNORM: 211,
    DATA_FORMAT_B16G16R16G16_422_UNORM: 212,
    DATA_FORMAT_G16_B16_R16_3PLANE_420_UNORM: 213,
    DATA_FORMAT_G16_B16R16_2PLANE_420_UNORM: 214,
    DATA_FORMAT_G16_B16_R16_3PLANE_422_UNORM: 215,
    DATA_FORMAT_G16_B16R16_2PLANE_422_UNORM: 216,
    DATA_FORMAT_G16_B16_R16_3PLANE_444_UNORM: 217,
    DATA_FORMAT_MAX: 218,
  }
  static BarrierMask = {
    BARRIER_MASK_VERTEX: 1,
    BARRIER_MASK_FRAGMENT: 8,
    BARRIER_MASK_COMPUTE: 2,
    BARRIER_MASK_TRANSFER: 4,
    BARRIER_MASK_RASTER: 9,
    BARRIER_MASK_ALL_BARRIERS: 32767,
    BARRIER_MASK_NO_BARRIER: 32768,
  }
  static TextureType = {
    TEXTURE_TYPE_1D: 0,
    TEXTURE_TYPE_2D: 1,
    TEXTURE_TYPE_3D: 2,
    TEXTURE_TYPE_CUBE: 3,
    TEXTURE_TYPE_1D_ARRAY: 4,
    TEXTURE_TYPE_2D_ARRAY: 5,
    TEXTURE_TYPE_CUBE_ARRAY: 6,
    TEXTURE_TYPE_MAX: 7,
  }
  static TextureSamples = {
    TEXTURE_SAMPLES_1: 0,
    TEXTURE_SAMPLES_2: 1,
    TEXTURE_SAMPLES_4: 2,
    TEXTURE_SAMPLES_8: 3,
    TEXTURE_SAMPLES_16: 4,
    TEXTURE_SAMPLES_32: 5,
    TEXTURE_SAMPLES_64: 6,
    TEXTURE_SAMPLES_MAX: 7,
  }
  static TextureUsageBits = {
    TEXTURE_USAGE_SAMPLING_BIT: 1,
    TEXTURE_USAGE_COLOR_ATTACHMENT_BIT: 2,
    TEXTURE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT: 4,
    TEXTURE_USAGE_STORAGE_BIT: 8,
    TEXTURE_USAGE_STORAGE_ATOMIC_BIT: 16,
    TEXTURE_USAGE_CPU_READ_BIT: 32,
    TEXTURE_USAGE_CAN_UPDATE_BIT: 64,
    TEXTURE_USAGE_CAN_COPY_FROM_BIT: 128,
    TEXTURE_USAGE_CAN_COPY_TO_BIT: 256,
    TEXTURE_USAGE_INPUT_ATTACHMENT_BIT: 512,
  }
  static TextureSwizzle = {
    TEXTURE_SWIZZLE_IDENTITY: 0,
    TEXTURE_SWIZZLE_ZERO: 1,
    TEXTURE_SWIZZLE_ONE: 2,
    TEXTURE_SWIZZLE_R: 3,
    TEXTURE_SWIZZLE_G: 4,
    TEXTURE_SWIZZLE_B: 5,
    TEXTURE_SWIZZLE_A: 6,
    TEXTURE_SWIZZLE_MAX: 7,
  }
  static TextureSliceType = {
    TEXTURE_SLICE_2D: 0,
    TEXTURE_SLICE_CUBEMAP: 1,
    TEXTURE_SLICE_3D: 2,
  }
  static SamplerFilter = {
    SAMPLER_FILTER_NEAREST: 0,
    SAMPLER_FILTER_LINEAR: 1,
  }
  static SamplerRepeatMode = {
    SAMPLER_REPEAT_MODE_REPEAT: 0,
    SAMPLER_REPEAT_MODE_MIRRORED_REPEAT: 1,
    SAMPLER_REPEAT_MODE_CLAMP_TO_EDGE: 2,
    SAMPLER_REPEAT_MODE_CLAMP_TO_BORDER: 3,
    SAMPLER_REPEAT_MODE_MIRROR_CLAMP_TO_EDGE: 4,
    SAMPLER_REPEAT_MODE_MAX: 5,
  }
  static SamplerBorderColor = {
    SAMPLER_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK: 0,
    SAMPLER_BORDER_COLOR_INT_TRANSPARENT_BLACK: 1,
    SAMPLER_BORDER_COLOR_FLOAT_OPAQUE_BLACK: 2,
    SAMPLER_BORDER_COLOR_INT_OPAQUE_BLACK: 3,
    SAMPLER_BORDER_COLOR_FLOAT_OPAQUE_WHITE: 4,
    SAMPLER_BORDER_COLOR_INT_OPAQUE_WHITE: 5,
    SAMPLER_BORDER_COLOR_MAX: 6,
  }
  static VertexFrequency = {
    VERTEX_FREQUENCY_VERTEX: 0,
    VERTEX_FREQUENCY_INSTANCE: 1,
  }
  static IndexBufferFormat = {
    INDEX_BUFFER_FORMAT_UINT16: 0,
    INDEX_BUFFER_FORMAT_UINT32: 1,
  }
  static StorageBufferUsage = {
    STORAGE_BUFFER_USAGE_DISPATCH_INDIRECT: 1,
  }
  static UniformType = {
    UNIFORM_TYPE_SAMPLER: 0,
    UNIFORM_TYPE_SAMPLER_WITH_TEXTURE: 1,
    UNIFORM_TYPE_TEXTURE: 2,
    UNIFORM_TYPE_IMAGE: 3,
    UNIFORM_TYPE_TEXTURE_BUFFER: 4,
    UNIFORM_TYPE_SAMPLER_WITH_TEXTURE_BUFFER: 5,
    UNIFORM_TYPE_IMAGE_BUFFER: 6,
    UNIFORM_TYPE_UNIFORM_BUFFER: 7,
    UNIFORM_TYPE_STORAGE_BUFFER: 8,
    UNIFORM_TYPE_INPUT_ATTACHMENT: 9,
    UNIFORM_TYPE_MAX: 10,
  }
  static RenderPrimitive = {
    RENDER_PRIMITIVE_POINTS: 0,
    RENDER_PRIMITIVE_LINES: 1,
    RENDER_PRIMITIVE_LINES_WITH_ADJACENCY: 2,
    RENDER_PRIMITIVE_LINESTRIPS: 3,
    RENDER_PRIMITIVE_LINESTRIPS_WITH_ADJACENCY: 4,
    RENDER_PRIMITIVE_TRIANGLES: 5,
    RENDER_PRIMITIVE_TRIANGLES_WITH_ADJACENCY: 6,
    RENDER_PRIMITIVE_TRIANGLE_STRIPS: 7,
    RENDER_PRIMITIVE_TRIANGLE_STRIPS_WITH_AJACENCY: 8,
    RENDER_PRIMITIVE_TRIANGLE_STRIPS_WITH_RESTART_INDEX: 9,
    RENDER_PRIMITIVE_TESSELATION_PATCH: 10,
    RENDER_PRIMITIVE_MAX: 11,
  }
  static PolygonCullMode = {
    POLYGON_CULL_DISABLED: 0,
    POLYGON_CULL_FRONT: 1,
    POLYGON_CULL_BACK: 2,
  }
  static PolygonFrontFace = {
    POLYGON_FRONT_FACE_CLOCKWISE: 0,
    POLYGON_FRONT_FACE_COUNTER_CLOCKWISE: 1,
  }
  static StencilOperation = {
    STENCIL_OP_KEEP: 0,
    STENCIL_OP_ZERO: 1,
    STENCIL_OP_REPLACE: 2,
    STENCIL_OP_INCREMENT_AND_CLAMP: 3,
    STENCIL_OP_DECREMENT_AND_CLAMP: 4,
    STENCIL_OP_INVERT: 5,
    STENCIL_OP_INCREMENT_AND_WRAP: 6,
    STENCIL_OP_DECREMENT_AND_WRAP: 7,
    STENCIL_OP_MAX: 8,
  }
  static CompareOperator = {
    COMPARE_OP_NEVER: 0,
    COMPARE_OP_LESS: 1,
    COMPARE_OP_EQUAL: 2,
    COMPARE_OP_LESS_OR_EQUAL: 3,
    COMPARE_OP_GREATER: 4,
    COMPARE_OP_NOT_EQUAL: 5,
    COMPARE_OP_GREATER_OR_EQUAL: 6,
    COMPARE_OP_ALWAYS: 7,
    COMPARE_OP_MAX: 8,
  }
  static LogicOperation = {
    LOGIC_OP_CLEAR: 0,
    LOGIC_OP_AND: 1,
    LOGIC_OP_AND_REVERSE: 2,
    LOGIC_OP_COPY: 3,
    LOGIC_OP_AND_INVERTED: 4,
    LOGIC_OP_NO_OP: 5,
    LOGIC_OP_XOR: 6,
    LOGIC_OP_OR: 7,
    LOGIC_OP_NOR: 8,
    LOGIC_OP_EQUIVALENT: 9,
    LOGIC_OP_INVERT: 10,
    LOGIC_OP_OR_REVERSE: 11,
    LOGIC_OP_COPY_INVERTED: 12,
    LOGIC_OP_OR_INVERTED: 13,
    LOGIC_OP_NAND: 14,
    LOGIC_OP_SET: 15,
    LOGIC_OP_MAX: 16,
  }
  static BlendFactor = {
    BLEND_FACTOR_ZERO: 0,
    BLEND_FACTOR_ONE: 1,
    BLEND_FACTOR_SRC_COLOR: 2,
    BLEND_FACTOR_ONE_MINUS_SRC_COLOR: 3,
    BLEND_FACTOR_DST_COLOR: 4,
    BLEND_FACTOR_ONE_MINUS_DST_COLOR: 5,
    BLEND_FACTOR_SRC_ALPHA: 6,
    BLEND_FACTOR_ONE_MINUS_SRC_ALPHA: 7,
    BLEND_FACTOR_DST_ALPHA: 8,
    BLEND_FACTOR_ONE_MINUS_DST_ALPHA: 9,
    BLEND_FACTOR_CONSTANT_COLOR: 10,
    BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR: 11,
    BLEND_FACTOR_CONSTANT_ALPHA: 12,
    BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA: 13,
    BLEND_FACTOR_SRC_ALPHA_SATURATE: 14,
    BLEND_FACTOR_SRC1_COLOR: 15,
    BLEND_FACTOR_ONE_MINUS_SRC1_COLOR: 16,
    BLEND_FACTOR_SRC1_ALPHA: 17,
    BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA: 18,
    BLEND_FACTOR_MAX: 19,
  }
  static BlendOperation = {
    BLEND_OP_ADD: 0,
    BLEND_OP_SUBTRACT: 1,
    BLEND_OP_REVERSE_SUBTRACT: 2,
    BLEND_OP_MINIMUM: 3,
    BLEND_OP_MAXIMUM: 4,
    BLEND_OP_MAX: 5,
  }
  static PipelineDynamicStateFlags = {
    DYNAMIC_STATE_LINE_WIDTH: 1,
    DYNAMIC_STATE_DEPTH_BIAS: 2,
    DYNAMIC_STATE_BLEND_CONSTANTS: 4,
    DYNAMIC_STATE_DEPTH_BOUNDS: 8,
    DYNAMIC_STATE_STENCIL_COMPARE_MASK: 16,
    DYNAMIC_STATE_STENCIL_WRITE_MASK: 32,
    DYNAMIC_STATE_STENCIL_REFERENCE: 64,
  }
  static InitialAction = {
    INITIAL_ACTION_LOAD: 0,
    INITIAL_ACTION_CLEAR: 1,
    INITIAL_ACTION_DISCARD: 2,
    INITIAL_ACTION_MAX: 3,
    INITIAL_ACTION_CLEAR_REGION: 1,
    INITIAL_ACTION_CLEAR_REGION_CONTINUE: 1,
    INITIAL_ACTION_KEEP: 0,
    INITIAL_ACTION_DROP: 2,
    INITIAL_ACTION_CONTINUE: 0,
  }
  static FinalAction = {
    FINAL_ACTION_STORE: 0,
    FINAL_ACTION_DISCARD: 1,
    FINAL_ACTION_MAX: 2,
    FINAL_ACTION_READ: 0,
    FINAL_ACTION_CONTINUE: 0,
  }
  static ShaderStage = {
    SHADER_STAGE_VERTEX: 0,
    SHADER_STAGE_FRAGMENT: 1,
    SHADER_STAGE_TESSELATION_CONTROL: 2,
    SHADER_STAGE_TESSELATION_EVALUATION: 3,
    SHADER_STAGE_COMPUTE: 4,
    SHADER_STAGE_MAX: 5,
    SHADER_STAGE_VERTEX_BIT: 1,
    SHADER_STAGE_FRAGMENT_BIT: 2,
    SHADER_STAGE_TESSELATION_CONTROL_BIT: 4,
    SHADER_STAGE_TESSELATION_EVALUATION_BIT: 8,
    SHADER_STAGE_COMPUTE_BIT: 16,
  }
  static ShaderLanguage = {
    SHADER_LANGUAGE_GLSL: 0,
    SHADER_LANGUAGE_HLSL: 1,
  }
  static PipelineSpecializationConstantType = {
    PIPELINE_SPECIALIZATION_CONSTANT_TYPE_BOOL: 0,
    PIPELINE_SPECIALIZATION_CONSTANT_TYPE_INT: 1,
    PIPELINE_SPECIALIZATION_CONSTANT_TYPE_FLOAT: 2,
  }
  static Limit = {
    LIMIT_MAX_BOUND_UNIFORM_SETS: 0,
    LIMIT_MAX_FRAMEBUFFER_COLOR_ATTACHMENTS: 1,
    LIMIT_MAX_TEXTURES_PER_UNIFORM_SET: 2,
    LIMIT_MAX_SAMPLERS_PER_UNIFORM_SET: 3,
    LIMIT_MAX_STORAGE_BUFFERS_PER_UNIFORM_SET: 4,
    LIMIT_MAX_STORAGE_IMAGES_PER_UNIFORM_SET: 5,
    LIMIT_MAX_UNIFORM_BUFFERS_PER_UNIFORM_SET: 6,
    LIMIT_MAX_DRAW_INDEXED_INDEX: 7,
    LIMIT_MAX_FRAMEBUFFER_HEIGHT: 8,
    LIMIT_MAX_FRAMEBUFFER_WIDTH: 9,
    LIMIT_MAX_TEXTURE_ARRAY_LAYERS: 10,
    LIMIT_MAX_TEXTURE_SIZE_1D: 11,
    LIMIT_MAX_TEXTURE_SIZE_2D: 12,
    LIMIT_MAX_TEXTURE_SIZE_3D: 13,
    LIMIT_MAX_TEXTURE_SIZE_CUBE: 14,
    LIMIT_MAX_TEXTURES_PER_SHADER_STAGE: 15,
    LIMIT_MAX_SAMPLERS_PER_SHADER_STAGE: 16,
    LIMIT_MAX_STORAGE_BUFFERS_PER_SHADER_STAGE: 17,
    LIMIT_MAX_STORAGE_IMAGES_PER_SHADER_STAGE: 18,
    LIMIT_MAX_UNIFORM_BUFFERS_PER_SHADER_STAGE: 19,
    LIMIT_MAX_PUSH_CONSTANT_SIZE: 20,
    LIMIT_MAX_UNIFORM_BUFFER_SIZE: 21,
    LIMIT_MAX_VERTEX_INPUT_ATTRIBUTE_OFFSET: 22,
    LIMIT_MAX_VERTEX_INPUT_ATTRIBUTES: 23,
    LIMIT_MAX_VERTEX_INPUT_BINDINGS: 24,
    LIMIT_MAX_VERTEX_INPUT_BINDING_STRIDE: 25,
    LIMIT_MIN_UNIFORM_BUFFER_OFFSET_ALIGNMENT: 26,
    LIMIT_MAX_COMPUTE_SHARED_MEMORY_SIZE: 27,
    LIMIT_MAX_COMPUTE_WORKGROUP_COUNT_X: 28,
    LIMIT_MAX_COMPUTE_WORKGROUP_COUNT_Y: 29,
    LIMIT_MAX_COMPUTE_WORKGROUP_COUNT_Z: 30,
    LIMIT_MAX_COMPUTE_WORKGROUP_INVOCATIONS: 31,
    LIMIT_MAX_COMPUTE_WORKGROUP_SIZE_X: 32,
    LIMIT_MAX_COMPUTE_WORKGROUP_SIZE_Y: 33,
    LIMIT_MAX_COMPUTE_WORKGROUP_SIZE_Z: 34,
    LIMIT_MAX_VIEWPORT_DIMENSIONS_X: 35,
    LIMIT_MAX_VIEWPORT_DIMENSIONS_Y: 36,
  }
  static MemoryType = {
    MEMORY_TEXTURES: 0,
    MEMORY_BUFFERS: 1,
    MEMORY_TOTAL: 2,
  }

  static {
    this._init_bindings();
  }
}