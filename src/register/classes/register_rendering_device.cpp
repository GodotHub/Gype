
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/rd_pipeline_rasterization_state.hpp>
#include <godot_cpp/classes/rd_texture_format.hpp>
#include <godot_cpp/classes/rd_pipeline_specialization_constant.hpp>
#include <godot_cpp/classes/rd_shader_spirv.hpp>
#include <godot_cpp/classes/rendering_device.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/rd_texture_view.hpp>
#include <godot_cpp/classes/rd_sampler_state.hpp>
#include <godot_cpp/classes/rd_shader_source.hpp>
#include <godot_cpp/classes/rd_attachment_format.hpp>
#include <godot_cpp/classes/rd_framebuffer_pass.hpp>
#include <godot_cpp/classes/rd_pipeline_multisample_state.hpp>
#include <godot_cpp/classes/rd_pipeline_depth_stencil_state.hpp>
#include <godot_cpp/classes/rd_pipeline_color_blend_state.hpp>
#include <godot_cpp/classes/rd_vertex_attribute.hpp>
#include <godot_cpp/classes/rd_uniform.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void rendering_device_class_finalizer(JSRuntime *rt, JSValue val) {
	RenderingDevice *rendering_device = static_cast<RenderingDevice *>(JS_GetOpaque(val, RenderingDevice::__class_id));
	if (rendering_device)
		RenderingDevice::free(nullptr, rendering_device);
}

static JSClassDef rendering_device_class_def = {
	"RenderingDevice",
	.finalizer = rendering_device_class_finalizer
};

static JSValue rendering_device_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RenderingDevice *rendering_device_class;
	JSValue obj = JS_NewObjectClass(ctx, RenderingDevice::__class_id);
	if (JS_IsException(obj))
		return obj;
	rendering_device_class = memnew(RenderingDevice);
	if (!rendering_device_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rendering_device_class);
	return obj;
}
static JSValue rendering_device_class_texture_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::texture_create, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_texture_create_shared(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::texture_create_shared, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_texture_create_shared_from_slice(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::texture_create_shared_from_slice, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_texture_create_from_extension(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::texture_create_from_extension, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_texture_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::texture_update, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_texture_get_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::texture_get_data, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_texture_is_format_supported_for_usage(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderingDevice::texture_is_format_supported_for_usage, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_texture_is_shared(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::texture_is_shared, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_texture_is_valid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::texture_is_valid, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_texture_copy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::texture_copy, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_texture_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::texture_clear, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_texture_resolve_multisample(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::texture_resolve_multisample, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_texture_get_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::texture_get_format, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_texture_get_native_handle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::texture_get_native_handle, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_framebuffer_format_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::framebuffer_format_create, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_framebuffer_format_create_multipass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::framebuffer_format_create_multipass, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_framebuffer_format_create_empty(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::framebuffer_format_create_empty, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_framebuffer_format_get_texture_samples(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::framebuffer_format_get_texture_samples, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_framebuffer_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::framebuffer_create, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_framebuffer_create_multipass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::framebuffer_create_multipass, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_framebuffer_create_empty(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::framebuffer_create_empty, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_framebuffer_get_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::framebuffer_get_format, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_framebuffer_is_valid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderingDevice::framebuffer_is_valid, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_sampler_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::sampler_create, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_sampler_is_format_supported_for_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderingDevice::sampler_is_format_supported_for_filter, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_vertex_buffer_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::vertex_buffer_create, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_vertex_format_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::vertex_format_create, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_vertex_array_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::vertex_array_create, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_index_buffer_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::index_buffer_create, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_index_array_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::index_array_create, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_shader_compile_spirv_from_source(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::shader_compile_spirv_from_source, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_shader_compile_binary_from_spirv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::shader_compile_binary_from_spirv, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_shader_create_from_spirv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::shader_create_from_spirv, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_shader_create_from_bytecode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::shader_create_from_bytecode, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_shader_create_placeholder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::shader_create_placeholder, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_shader_get_vertex_input_attribute_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::shader_get_vertex_input_attribute_mask, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_uniform_buffer_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::uniform_buffer_create, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_storage_buffer_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::storage_buffer_create, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_texture_buffer_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::texture_buffer_create, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_uniform_set_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::uniform_set_create, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_uniform_set_is_valid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::uniform_set_is_valid, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_buffer_copy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::buffer_copy, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_buffer_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::buffer_update, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_buffer_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::buffer_clear, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_buffer_get_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::buffer_get_data, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_render_pipeline_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::render_pipeline_create, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_render_pipeline_is_valid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::render_pipeline_is_valid, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_compute_pipeline_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::compute_pipeline_create, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_compute_pipeline_is_valid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::compute_pipeline_is_valid, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_screen_get_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderingDevice::screen_get_width, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_screen_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderingDevice::screen_get_height, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_screen_get_framebuffer_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderingDevice::screen_get_framebuffer_format, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_draw_list_begin_for_screen(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::draw_list_begin_for_screen, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_draw_list_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::draw_list_begin, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_draw_list_begin_split(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::draw_list_begin_split, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_draw_list_set_blend_constants(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::draw_list_set_blend_constants, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_draw_list_bind_render_pipeline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::draw_list_bind_render_pipeline, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_draw_list_bind_uniform_set(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::draw_list_bind_uniform_set, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_draw_list_bind_vertex_array(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::draw_list_bind_vertex_array, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_draw_list_bind_index_array(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::draw_list_bind_index_array, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_draw_list_set_push_constant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::draw_list_set_push_constant, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_draw_list_draw(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::draw_list_draw, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_draw_list_enable_scissor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::draw_list_enable_scissor, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_draw_list_disable_scissor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::draw_list_disable_scissor, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_draw_list_switch_to_next_pass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::draw_list_switch_to_next_pass, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_draw_list_switch_to_next_pass_split(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::draw_list_switch_to_next_pass_split, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_draw_list_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::draw_list_end, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_compute_list_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::compute_list_begin, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_compute_list_bind_compute_pipeline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::compute_list_bind_compute_pipeline, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_compute_list_set_push_constant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::compute_list_set_push_constant, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_compute_list_bind_uniform_set(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::compute_list_bind_uniform_set, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_compute_list_dispatch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::compute_list_dispatch, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_compute_list_dispatch_indirect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::compute_list_dispatch_indirect, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_compute_list_add_barrier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::compute_list_add_barrier, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_compute_list_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::compute_list_end, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_free_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::free_rid, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_capture_timestamp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::capture_timestamp, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_get_captured_timestamps_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderingDevice::get_captured_timestamps_count, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_get_captured_timestamps_frame(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderingDevice::get_captured_timestamps_frame, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_get_captured_timestamp_gpu_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderingDevice::get_captured_timestamp_gpu_time, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_get_captured_timestamp_cpu_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderingDevice::get_captured_timestamp_cpu_time, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_get_captured_timestamp_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderingDevice::get_captured_timestamp_name, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_limit_get(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderingDevice::limit_get, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_get_frame_delay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderingDevice::get_frame_delay, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_submit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::submit, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_sync(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::sync, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_barrier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::barrier, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_full_barrier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::full_barrier, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_create_local_device(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::create_local_device, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_set_resource_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::set_resource_name, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_draw_command_begin_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::draw_command_begin_label, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_draw_command_insert_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::draw_command_insert_label, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_draw_command_end_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderingDevice::draw_command_end_label, RenderingDevice::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue rendering_device_class_get_device_vendor_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderingDevice::get_device_vendor_name, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_get_device_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderingDevice::get_device_name, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_get_device_pipeline_cache_uuid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderingDevice::get_device_pipeline_cache_uuid, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_get_memory_usage(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderingDevice::get_memory_usage, RenderingDevice::__class_id, ctx, this_val, argv);
};
static JSValue rendering_device_class_get_driver_resource(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderingDevice::get_driver_resource, RenderingDevice::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry rendering_device_class_proto_funcs[] = {
	JS_CFUNC_DEF("texture_create", 3, &rendering_device_class_texture_create),
	JS_CFUNC_DEF("texture_create_shared", 2, &rendering_device_class_texture_create_shared),
	JS_CFUNC_DEF("texture_create_shared_from_slice", 6, &rendering_device_class_texture_create_shared_from_slice),
	JS_CFUNC_DEF("texture_create_from_extension", 9, &rendering_device_class_texture_create_from_extension),
	JS_CFUNC_DEF("texture_update", 3, &rendering_device_class_texture_update),
	JS_CFUNC_DEF("texture_get_data", 2, &rendering_device_class_texture_get_data),
	JS_CFUNC_DEF("texture_is_format_supported_for_usage", 2, &rendering_device_class_texture_is_format_supported_for_usage),
	JS_CFUNC_DEF("texture_is_shared", 1, &rendering_device_class_texture_is_shared),
	JS_CFUNC_DEF("texture_is_valid", 1, &rendering_device_class_texture_is_valid),
	JS_CFUNC_DEF("texture_copy", 9, &rendering_device_class_texture_copy),
	JS_CFUNC_DEF("texture_clear", 6, &rendering_device_class_texture_clear),
	JS_CFUNC_DEF("texture_resolve_multisample", 2, &rendering_device_class_texture_resolve_multisample),
	JS_CFUNC_DEF("texture_get_format", 1, &rendering_device_class_texture_get_format),
	JS_CFUNC_DEF("texture_get_native_handle", 1, &rendering_device_class_texture_get_native_handle),
	JS_CFUNC_DEF("framebuffer_format_create", 2, &rendering_device_class_framebuffer_format_create),
	JS_CFUNC_DEF("framebuffer_format_create_multipass", 3, &rendering_device_class_framebuffer_format_create_multipass),
	JS_CFUNC_DEF("framebuffer_format_create_empty", 1, &rendering_device_class_framebuffer_format_create_empty),
	JS_CFUNC_DEF("framebuffer_format_get_texture_samples", 2, &rendering_device_class_framebuffer_format_get_texture_samples),
	JS_CFUNC_DEF("framebuffer_create", 3, &rendering_device_class_framebuffer_create),
	JS_CFUNC_DEF("framebuffer_create_multipass", 4, &rendering_device_class_framebuffer_create_multipass),
	JS_CFUNC_DEF("framebuffer_create_empty", 3, &rendering_device_class_framebuffer_create_empty),
	JS_CFUNC_DEF("framebuffer_get_format", 1, &rendering_device_class_framebuffer_get_format),
	JS_CFUNC_DEF("framebuffer_is_valid", 1, &rendering_device_class_framebuffer_is_valid),
	JS_CFUNC_DEF("sampler_create", 1, &rendering_device_class_sampler_create),
	JS_CFUNC_DEF("sampler_is_format_supported_for_filter", 2, &rendering_device_class_sampler_is_format_supported_for_filter),
	JS_CFUNC_DEF("vertex_buffer_create", 3, &rendering_device_class_vertex_buffer_create),
	JS_CFUNC_DEF("vertex_format_create", 1, &rendering_device_class_vertex_format_create),
	JS_CFUNC_DEF("vertex_array_create", 4, &rendering_device_class_vertex_array_create),
	JS_CFUNC_DEF("index_buffer_create", 4, &rendering_device_class_index_buffer_create),
	JS_CFUNC_DEF("index_array_create", 3, &rendering_device_class_index_array_create),
	JS_CFUNC_DEF("shader_compile_spirv_from_source", 2, &rendering_device_class_shader_compile_spirv_from_source),
	JS_CFUNC_DEF("shader_compile_binary_from_spirv", 2, &rendering_device_class_shader_compile_binary_from_spirv),
	JS_CFUNC_DEF("shader_create_from_spirv", 2, &rendering_device_class_shader_create_from_spirv),
	JS_CFUNC_DEF("shader_create_from_bytecode", 2, &rendering_device_class_shader_create_from_bytecode),
	JS_CFUNC_DEF("shader_create_placeholder", 0, &rendering_device_class_shader_create_placeholder),
	JS_CFUNC_DEF("shader_get_vertex_input_attribute_mask", 1, &rendering_device_class_shader_get_vertex_input_attribute_mask),
	JS_CFUNC_DEF("uniform_buffer_create", 2, &rendering_device_class_uniform_buffer_create),
	JS_CFUNC_DEF("storage_buffer_create", 3, &rendering_device_class_storage_buffer_create),
	JS_CFUNC_DEF("texture_buffer_create", 3, &rendering_device_class_texture_buffer_create),
	JS_CFUNC_DEF("uniform_set_create", 3, &rendering_device_class_uniform_set_create),
	JS_CFUNC_DEF("uniform_set_is_valid", 1, &rendering_device_class_uniform_set_is_valid),
	JS_CFUNC_DEF("buffer_copy", 5, &rendering_device_class_buffer_copy),
	JS_CFUNC_DEF("buffer_update", 4, &rendering_device_class_buffer_update),
	JS_CFUNC_DEF("buffer_clear", 3, &rendering_device_class_buffer_clear),
	JS_CFUNC_DEF("buffer_get_data", 3, &rendering_device_class_buffer_get_data),
	JS_CFUNC_DEF("render_pipeline_create", 11, &rendering_device_class_render_pipeline_create),
	JS_CFUNC_DEF("render_pipeline_is_valid", 1, &rendering_device_class_render_pipeline_is_valid),
	JS_CFUNC_DEF("compute_pipeline_create", 2, &rendering_device_class_compute_pipeline_create),
	JS_CFUNC_DEF("compute_pipeline_is_valid", 1, &rendering_device_class_compute_pipeline_is_valid),
	JS_CFUNC_DEF("screen_get_width", 1, &rendering_device_class_screen_get_width),
	JS_CFUNC_DEF("screen_get_height", 1, &rendering_device_class_screen_get_height),
	JS_CFUNC_DEF("screen_get_framebuffer_format", 1, &rendering_device_class_screen_get_framebuffer_format),
	JS_CFUNC_DEF("draw_list_begin_for_screen", 2, &rendering_device_class_draw_list_begin_for_screen),
	JS_CFUNC_DEF("draw_list_begin", 9, &rendering_device_class_draw_list_begin),
	JS_CFUNC_DEF("draw_list_begin_split", 11, &rendering_device_class_draw_list_begin_split),
	JS_CFUNC_DEF("draw_list_set_blend_constants", 2, &rendering_device_class_draw_list_set_blend_constants),
	JS_CFUNC_DEF("draw_list_bind_render_pipeline", 2, &rendering_device_class_draw_list_bind_render_pipeline),
	JS_CFUNC_DEF("draw_list_bind_uniform_set", 3, &rendering_device_class_draw_list_bind_uniform_set),
	JS_CFUNC_DEF("draw_list_bind_vertex_array", 2, &rendering_device_class_draw_list_bind_vertex_array),
	JS_CFUNC_DEF("draw_list_bind_index_array", 2, &rendering_device_class_draw_list_bind_index_array),
	JS_CFUNC_DEF("draw_list_set_push_constant", 3, &rendering_device_class_draw_list_set_push_constant),
	JS_CFUNC_DEF("draw_list_draw", 4, &rendering_device_class_draw_list_draw),
	JS_CFUNC_DEF("draw_list_enable_scissor", 2, &rendering_device_class_draw_list_enable_scissor),
	JS_CFUNC_DEF("draw_list_disable_scissor", 1, &rendering_device_class_draw_list_disable_scissor),
	JS_CFUNC_DEF("draw_list_switch_to_next_pass", 0, &rendering_device_class_draw_list_switch_to_next_pass),
	JS_CFUNC_DEF("draw_list_switch_to_next_pass_split", 1, &rendering_device_class_draw_list_switch_to_next_pass_split),
	JS_CFUNC_DEF("draw_list_end", 0, &rendering_device_class_draw_list_end),
	JS_CFUNC_DEF("compute_list_begin", 0, &rendering_device_class_compute_list_begin),
	JS_CFUNC_DEF("compute_list_bind_compute_pipeline", 2, &rendering_device_class_compute_list_bind_compute_pipeline),
	JS_CFUNC_DEF("compute_list_set_push_constant", 3, &rendering_device_class_compute_list_set_push_constant),
	JS_CFUNC_DEF("compute_list_bind_uniform_set", 3, &rendering_device_class_compute_list_bind_uniform_set),
	JS_CFUNC_DEF("compute_list_dispatch", 4, &rendering_device_class_compute_list_dispatch),
	JS_CFUNC_DEF("compute_list_dispatch_indirect", 3, &rendering_device_class_compute_list_dispatch_indirect),
	JS_CFUNC_DEF("compute_list_add_barrier", 1, &rendering_device_class_compute_list_add_barrier),
	JS_CFUNC_DEF("compute_list_end", 0, &rendering_device_class_compute_list_end),
	JS_CFUNC_DEF("free_rid", 1, &rendering_device_class_free_rid),
	JS_CFUNC_DEF("capture_timestamp", 1, &rendering_device_class_capture_timestamp),
	JS_CFUNC_DEF("get_captured_timestamps_count", 0, &rendering_device_class_get_captured_timestamps_count),
	JS_CFUNC_DEF("get_captured_timestamps_frame", 0, &rendering_device_class_get_captured_timestamps_frame),
	JS_CFUNC_DEF("get_captured_timestamp_gpu_time", 1, &rendering_device_class_get_captured_timestamp_gpu_time),
	JS_CFUNC_DEF("get_captured_timestamp_cpu_time", 1, &rendering_device_class_get_captured_timestamp_cpu_time),
	JS_CFUNC_DEF("get_captured_timestamp_name", 1, &rendering_device_class_get_captured_timestamp_name),
	JS_CFUNC_DEF("limit_get", 1, &rendering_device_class_limit_get),
	JS_CFUNC_DEF("get_frame_delay", 0, &rendering_device_class_get_frame_delay),
	JS_CFUNC_DEF("submit", 0, &rendering_device_class_submit),
	JS_CFUNC_DEF("sync", 0, &rendering_device_class_sync),
	JS_CFUNC_DEF("barrier", 2, &rendering_device_class_barrier),
	JS_CFUNC_DEF("full_barrier", 0, &rendering_device_class_full_barrier),
	JS_CFUNC_DEF("create_local_device", 0, &rendering_device_class_create_local_device),
	JS_CFUNC_DEF("set_resource_name", 2, &rendering_device_class_set_resource_name),
	JS_CFUNC_DEF("draw_command_begin_label", 2, &rendering_device_class_draw_command_begin_label),
	JS_CFUNC_DEF("draw_command_insert_label", 2, &rendering_device_class_draw_command_insert_label),
	JS_CFUNC_DEF("draw_command_end_label", 0, &rendering_device_class_draw_command_end_label),
	JS_CFUNC_DEF("get_device_vendor_name", 0, &rendering_device_class_get_device_vendor_name),
	JS_CFUNC_DEF("get_device_name", 0, &rendering_device_class_get_device_name),
	JS_CFUNC_DEF("get_device_pipeline_cache_uuid", 0, &rendering_device_class_get_device_pipeline_cache_uuid),
	JS_CFUNC_DEF("get_memory_usage", 1, &rendering_device_class_get_memory_usage),
	JS_CFUNC_DEF("get_driver_resource", 3, &rendering_device_class_get_driver_resource),
};

static int js_rendering_device_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RenderingDevice::__class_id);
	classes["RenderingDevice"] = RenderingDevice::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RenderingDevice::__class_id, &rendering_device_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RenderingDevice::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, rendering_device_class_proto_funcs, _countof(rendering_device_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, rendering_device_class_constructor, "RenderingDevice", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RenderingDevice", ctor);

	return 0;
}

JSModuleDef *_js_init_rendering_device_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rendering_device_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RenderingDevice");
	return m;
}

JSModuleDef *js_init_rendering_device_module(JSContext *ctx) {
	return _js_init_rendering_device_module(ctx, "godot/classes/rendering_device");
}

void register_rendering_device() {
	js_init_rendering_device_module(ctx);
}