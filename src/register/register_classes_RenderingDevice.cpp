
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/rd_attachment_format.hpp>
#include <godot_cpp/classes/rd_framebuffer_pass.hpp>
#include <godot_cpp/classes/rd_pipeline_color_blend_state.hpp>
#include <godot_cpp/classes/rd_pipeline_depth_stencil_state.hpp>
#include <godot_cpp/classes/rd_pipeline_multisample_state.hpp>
#include <godot_cpp/classes/rd_pipeline_rasterization_state.hpp>
#include <godot_cpp/classes/rd_pipeline_specialization_constant.hpp>
#include <godot_cpp/classes/rd_sampler_state.hpp>
#include <godot_cpp/classes/rd_shader_source.hpp>
#include <godot_cpp/classes/rd_shader_spirv.hpp>
#include <godot_cpp/classes/rd_texture_format.hpp>
#include <godot_cpp/classes/rd_texture_view.hpp>
#include <godot_cpp/classes/rd_uniform.hpp>
#include <godot_cpp/classes/rd_vertex_attribute.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/rendering_device.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_color_array.hpp>
#include <godot_cpp/variant/packed_int64_array.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RenderingDevice() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RenderingDevice>("RenderingDevice")
			.constructor<>()
			.base<Object>()
			.static_fun<&RenderingDevice::INVALID_ID>((new std::string("INVALID_ID"))->c_str())
			.static_fun<&RenderingDevice::INVALID_FORMAT_ID>((new std::string("INVALID_FORMAT_ID"))->c_str())
			.fun<static_cast<RID (RenderingDevice::*)(const Ref<RDTextureFormat> &, const Ref<RDTextureView> &, const TypedArray<PackedByteArray> &)>(&RenderingDevice::texture_create)>((new std::string("texture_create"))->c_str())
			.fun<static_cast<RID (RenderingDevice::*)(const Ref<RDTextureView> &, const RID &)>(&RenderingDevice::texture_create_shared)>((new std::string("texture_create_shared"))->c_str())
			.fun<static_cast<RID (RenderingDevice::*)(const Ref<RDTextureView> &, const RID &, uint32_t, uint32_t, uint32_t, RenderingDevice::TextureSliceType)>(&RenderingDevice::texture_create_shared_from_slice)>((new std::string("texture_create_shared_from_slice"))->c_str())
			.fun<static_cast<RID (RenderingDevice::*)(RenderingDevice::TextureType, RenderingDevice::DataFormat, RenderingDevice::TextureSamples, BitField<RenderingDevice::TextureUsageBits>, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t)>(&RenderingDevice::texture_create_from_extension)>((new std::string("texture_create_from_extension"))->c_str())
			.fun<static_cast<Error (RenderingDevice::*)(const RID &, uint32_t, const PackedByteArray &)>(&RenderingDevice::texture_update)>((new std::string("texture_update"))->c_str())
			.fun<static_cast<PackedByteArray (RenderingDevice::*)(const RID &, uint32_t)>(&RenderingDevice::texture_get_data)>((new std::string("texture_get_data"))->c_str())
			.fun<static_cast<bool (RenderingDevice::*)(RenderingDevice::DataFormat, BitField<RenderingDevice::TextureUsageBits>) const>(&RenderingDevice::texture_is_format_supported_for_usage)>((new std::string("texture_is_format_supported_for_usage"))->c_str())
			.fun<static_cast<bool (RenderingDevice::*)(const RID &)>(&RenderingDevice::texture_is_shared)>((new std::string("texture_is_shared"))->c_str())
			.fun<static_cast<bool (RenderingDevice::*)(const RID &)>(&RenderingDevice::texture_is_valid)>((new std::string("texture_is_valid"))->c_str())
			.fun<static_cast<Error (RenderingDevice::*)(const RID &, const RID &, const Vector3 &, const Vector3 &, const Vector3 &, uint32_t, uint32_t, uint32_t, uint32_t)>(&RenderingDevice::texture_copy)>((new std::string("texture_copy"))->c_str())
			.fun<static_cast<Error (RenderingDevice::*)(const RID &, const Color &, uint32_t, uint32_t, uint32_t, uint32_t)>(&RenderingDevice::texture_clear)>((new std::string("texture_clear"))->c_str())
			.fun<static_cast<Error (RenderingDevice::*)(const RID &, const RID &)>(&RenderingDevice::texture_resolve_multisample)>((new std::string("texture_resolve_multisample"))->c_str())
			.fun<static_cast<Ref<RDTextureFormat> (RenderingDevice::*)(const RID &)>(&RenderingDevice::texture_get_format)>((new std::string("texture_get_format"))->c_str())
			.fun<static_cast<uint64_t (RenderingDevice::*)(const RID &)>(&RenderingDevice::texture_get_native_handle)>((new std::string("texture_get_native_handle"))->c_str())
			.fun<static_cast<int64_t (RenderingDevice::*)(const TypedArray<RDAttachmentFormat> &, uint32_t)>(&RenderingDevice::framebuffer_format_create)>((new std::string("framebuffer_format_create"))->c_str())
			.fun<static_cast<int64_t (RenderingDevice::*)(const TypedArray<RDAttachmentFormat> &, const TypedArray<RDFramebufferPass> &, uint32_t)>(&RenderingDevice::framebuffer_format_create_multipass)>((new std::string("framebuffer_format_create_multipass"))->c_str())
			.fun<static_cast<int64_t (RenderingDevice::*)(RenderingDevice::TextureSamples)>(&RenderingDevice::framebuffer_format_create_empty)>((new std::string("framebuffer_format_create_empty"))->c_str())
			.fun<static_cast<RenderingDevice::TextureSamples (RenderingDevice::*)(int64_t, uint32_t)>(&RenderingDevice::framebuffer_format_get_texture_samples)>((new std::string("framebuffer_format_get_texture_samples"))->c_str())
			.fun<static_cast<RID (RenderingDevice::*)(const TypedArray<RID> &, int64_t, uint32_t)>(&RenderingDevice::framebuffer_create)>((new std::string("framebuffer_create"))->c_str())
			.fun<static_cast<RID (RenderingDevice::*)(const TypedArray<RID> &, const TypedArray<RDFramebufferPass> &, int64_t, uint32_t)>(&RenderingDevice::framebuffer_create_multipass)>((new std::string("framebuffer_create_multipass"))->c_str())
			.fun<static_cast<RID (RenderingDevice::*)(const Vector2i &, RenderingDevice::TextureSamples, int64_t)>(&RenderingDevice::framebuffer_create_empty)>((new std::string("framebuffer_create_empty"))->c_str())
			.fun<static_cast<int64_t (RenderingDevice::*)(const RID &)>(&RenderingDevice::framebuffer_get_format)>((new std::string("framebuffer_get_format"))->c_str())
			.fun<static_cast<bool (RenderingDevice::*)(const RID &) const>(&RenderingDevice::framebuffer_is_valid)>((new std::string("framebuffer_is_valid"))->c_str())
			.fun<static_cast<RID (RenderingDevice::*)(const Ref<RDSamplerState> &)>(&RenderingDevice::sampler_create)>((new std::string("sampler_create"))->c_str())
			.fun<static_cast<bool (RenderingDevice::*)(RenderingDevice::DataFormat, RenderingDevice::SamplerFilter) const>(&RenderingDevice::sampler_is_format_supported_for_filter)>((new std::string("sampler_is_format_supported_for_filter"))->c_str())
			.fun<static_cast<RID (RenderingDevice::*)(uint32_t, const PackedByteArray &, bool)>(&RenderingDevice::vertex_buffer_create)>((new std::string("vertex_buffer_create"))->c_str())
			.fun<static_cast<int64_t (RenderingDevice::*)(const TypedArray<RDVertexAttribute> &)>(&RenderingDevice::vertex_format_create)>((new std::string("vertex_format_create"))->c_str())
			.fun<static_cast<RID (RenderingDevice::*)(uint32_t, int64_t, const TypedArray<RID> &, const PackedInt64Array &)>(&RenderingDevice::vertex_array_create)>((new std::string("vertex_array_create"))->c_str())
			.fun<static_cast<RID (RenderingDevice::*)(uint32_t, RenderingDevice::IndexBufferFormat, const PackedByteArray &, bool)>(&RenderingDevice::index_buffer_create)>((new std::string("index_buffer_create"))->c_str())
			.fun<static_cast<RID (RenderingDevice::*)(const RID &, uint32_t, uint32_t)>(&RenderingDevice::index_array_create)>((new std::string("index_array_create"))->c_str())
			.fun<static_cast<Ref<RDShaderSPIRV> (RenderingDevice::*)(const Ref<RDShaderSource> &, bool)>(&RenderingDevice::shader_compile_spirv_from_source)>((new std::string("shader_compile_spirv_from_source"))->c_str())
			.fun<static_cast<PackedByteArray (RenderingDevice::*)(const Ref<RDShaderSPIRV> &, const String &)>(&RenderingDevice::shader_compile_binary_from_spirv)>((new std::string("shader_compile_binary_from_spirv"))->c_str())
			.fun<static_cast<RID (RenderingDevice::*)(const Ref<RDShaderSPIRV> &, const String &)>(&RenderingDevice::shader_create_from_spirv)>((new std::string("shader_create_from_spirv"))->c_str())
			.fun<static_cast<RID (RenderingDevice::*)(const PackedByteArray &, const RID &)>(&RenderingDevice::shader_create_from_bytecode)>((new std::string("shader_create_from_bytecode"))->c_str())
			.fun<static_cast<RID (RenderingDevice::*)()>(&RenderingDevice::shader_create_placeholder)>((new std::string("shader_create_placeholder"))->c_str())
			.fun<static_cast<uint64_t (RenderingDevice::*)(const RID &)>(&RenderingDevice::shader_get_vertex_input_attribute_mask)>((new std::string("shader_get_vertex_input_attribute_mask"))->c_str())
			.fun<static_cast<RID (RenderingDevice::*)(uint32_t, const PackedByteArray &)>(&RenderingDevice::uniform_buffer_create)>((new std::string("uniform_buffer_create"))->c_str())
			.fun<static_cast<RID (RenderingDevice::*)(uint32_t, const PackedByteArray &, BitField<RenderingDevice::StorageBufferUsage>)>(&RenderingDevice::storage_buffer_create)>((new std::string("storage_buffer_create"))->c_str())
			.fun<static_cast<RID (RenderingDevice::*)(uint32_t, RenderingDevice::DataFormat, const PackedByteArray &)>(&RenderingDevice::texture_buffer_create)>((new std::string("texture_buffer_create"))->c_str())
			.fun<static_cast<RID (RenderingDevice::*)(const TypedArray<RDUniform> &, const RID &, uint32_t)>(&RenderingDevice::uniform_set_create)>((new std::string("uniform_set_create"))->c_str())
			.fun<static_cast<bool (RenderingDevice::*)(const RID &)>(&RenderingDevice::uniform_set_is_valid)>((new std::string("uniform_set_is_valid"))->c_str())
			.fun<static_cast<Error (RenderingDevice::*)(const RID &, const RID &, uint32_t, uint32_t, uint32_t)>(&RenderingDevice::buffer_copy)>((new std::string("buffer_copy"))->c_str())
			.fun<static_cast<Error (RenderingDevice::*)(const RID &, uint32_t, uint32_t, const PackedByteArray &)>(&RenderingDevice::buffer_update)>((new std::string("buffer_update"))->c_str())
			.fun<static_cast<Error (RenderingDevice::*)(const RID &, uint32_t, uint32_t)>(&RenderingDevice::buffer_clear)>((new std::string("buffer_clear"))->c_str())
			.fun<static_cast<PackedByteArray (RenderingDevice::*)(const RID &, uint32_t, uint32_t)>(&RenderingDevice::buffer_get_data)>((new std::string("buffer_get_data"))->c_str())
			.fun<static_cast<RID (RenderingDevice::*)(const RID &, int64_t, int64_t, RenderingDevice::RenderPrimitive, const Ref<RDPipelineRasterizationState> &, const Ref<RDPipelineMultisampleState> &, const Ref<RDPipelineDepthStencilState> &, const Ref<RDPipelineColorBlendState> &, BitField<RenderingDevice::PipelineDynamicStateFlags>, uint32_t, const TypedArray<RDPipelineSpecializationConstant> &)>(&RenderingDevice::render_pipeline_create)>((new std::string("render_pipeline_create"))->c_str())
			.fun<static_cast<bool (RenderingDevice::*)(const RID &)>(&RenderingDevice::render_pipeline_is_valid)>((new std::string("render_pipeline_is_valid"))->c_str())
			.fun<static_cast<RID (RenderingDevice::*)(const RID &, const TypedArray<RDPipelineSpecializationConstant> &)>(&RenderingDevice::compute_pipeline_create)>((new std::string("compute_pipeline_create"))->c_str())
			.fun<static_cast<bool (RenderingDevice::*)(const RID &)>(&RenderingDevice::compute_pipeline_is_valid)>((new std::string("compute_pipeline_is_valid"))->c_str())
			.fun<static_cast<int32_t (RenderingDevice::*)(int32_t) const>(&RenderingDevice::screen_get_width)>((new std::string("screen_get_width"))->c_str())
			.fun<static_cast<int32_t (RenderingDevice::*)(int32_t) const>(&RenderingDevice::screen_get_height)>((new std::string("screen_get_height"))->c_str())
			.fun<static_cast<int64_t (RenderingDevice::*)(int32_t) const>(&RenderingDevice::screen_get_framebuffer_format)>((new std::string("screen_get_framebuffer_format"))->c_str())
			.fun<static_cast<int64_t (RenderingDevice::*)(int32_t, const Color &)>(&RenderingDevice::draw_list_begin_for_screen)>((new std::string("draw_list_begin_for_screen"))->c_str())
			.fun<static_cast<int64_t (RenderingDevice::*)(const RID &, RenderingDevice::InitialAction, RenderingDevice::FinalAction, RenderingDevice::InitialAction, RenderingDevice::FinalAction, const PackedColorArray &, double, uint32_t, const Rect2 &)>(&RenderingDevice::draw_list_begin)>((new std::string("draw_list_begin"))->c_str())
			.fun<static_cast<PackedInt64Array (RenderingDevice::*)(const RID &, uint32_t, RenderingDevice::InitialAction, RenderingDevice::FinalAction, RenderingDevice::InitialAction, RenderingDevice::FinalAction, const PackedColorArray &, double, uint32_t, const Rect2 &, const TypedArray<RID> &)>(&RenderingDevice::draw_list_begin_split)>((new std::string("draw_list_begin_split"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)(int64_t, const Color &)>(&RenderingDevice::draw_list_set_blend_constants)>((new std::string("draw_list_set_blend_constants"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)(int64_t, const RID &)>(&RenderingDevice::draw_list_bind_render_pipeline)>((new std::string("draw_list_bind_render_pipeline"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)(int64_t, const RID &, uint32_t)>(&RenderingDevice::draw_list_bind_uniform_set)>((new std::string("draw_list_bind_uniform_set"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)(int64_t, const RID &)>(&RenderingDevice::draw_list_bind_vertex_array)>((new std::string("draw_list_bind_vertex_array"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)(int64_t, const RID &)>(&RenderingDevice::draw_list_bind_index_array)>((new std::string("draw_list_bind_index_array"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)(int64_t, const PackedByteArray &, uint32_t)>(&RenderingDevice::draw_list_set_push_constant)>((new std::string("draw_list_set_push_constant"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)(int64_t, bool, uint32_t, uint32_t)>(&RenderingDevice::draw_list_draw)>((new std::string("draw_list_draw"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)(int64_t, const Rect2 &)>(&RenderingDevice::draw_list_enable_scissor)>((new std::string("draw_list_enable_scissor"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)(int64_t)>(&RenderingDevice::draw_list_disable_scissor)>((new std::string("draw_list_disable_scissor"))->c_str())
			.fun<static_cast<int64_t (RenderingDevice::*)()>(&RenderingDevice::draw_list_switch_to_next_pass)>((new std::string("draw_list_switch_to_next_pass"))->c_str())
			.fun<static_cast<PackedInt64Array (RenderingDevice::*)(uint32_t)>(&RenderingDevice::draw_list_switch_to_next_pass_split)>((new std::string("draw_list_switch_to_next_pass_split"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)()>(&RenderingDevice::draw_list_end)>((new std::string("draw_list_end"))->c_str())
			.fun<static_cast<int64_t (RenderingDevice::*)()>(&RenderingDevice::compute_list_begin)>((new std::string("compute_list_begin"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)(int64_t, const RID &)>(&RenderingDevice::compute_list_bind_compute_pipeline)>((new std::string("compute_list_bind_compute_pipeline"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)(int64_t, const PackedByteArray &, uint32_t)>(&RenderingDevice::compute_list_set_push_constant)>((new std::string("compute_list_set_push_constant"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)(int64_t, const RID &, uint32_t)>(&RenderingDevice::compute_list_bind_uniform_set)>((new std::string("compute_list_bind_uniform_set"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)(int64_t, uint32_t, uint32_t, uint32_t)>(&RenderingDevice::compute_list_dispatch)>((new std::string("compute_list_dispatch"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)(int64_t, const RID &, uint32_t)>(&RenderingDevice::compute_list_dispatch_indirect)>((new std::string("compute_list_dispatch_indirect"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)(int64_t)>(&RenderingDevice::compute_list_add_barrier)>((new std::string("compute_list_add_barrier"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)()>(&RenderingDevice::compute_list_end)>((new std::string("compute_list_end"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)(const RID &)>(&RenderingDevice::free_rid)>((new std::string("free_rid"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)(const String &)>(&RenderingDevice::capture_timestamp)>((new std::string("capture_timestamp"))->c_str())
			.fun<static_cast<uint32_t (RenderingDevice::*)() const>(&RenderingDevice::get_captured_timestamps_count)>((new std::string("get_captured_timestamps_count"))->c_str())
			.fun<static_cast<uint64_t (RenderingDevice::*)() const>(&RenderingDevice::get_captured_timestamps_frame)>((new std::string("get_captured_timestamps_frame"))->c_str())
			.fun<static_cast<uint64_t (RenderingDevice::*)(uint32_t) const>(&RenderingDevice::get_captured_timestamp_gpu_time)>((new std::string("get_captured_timestamp_gpu_time"))->c_str())
			.fun<static_cast<uint64_t (RenderingDevice::*)(uint32_t) const>(&RenderingDevice::get_captured_timestamp_cpu_time)>((new std::string("get_captured_timestamp_cpu_time"))->c_str())
			.fun<static_cast<String (RenderingDevice::*)(uint32_t) const>(&RenderingDevice::get_captured_timestamp_name)>((new std::string("get_captured_timestamp_name"))->c_str())
			.fun<static_cast<uint64_t (RenderingDevice::*)(RenderingDevice::Limit) const>(&RenderingDevice::limit_get)>((new std::string("limit_get"))->c_str())
			.fun<static_cast<uint32_t (RenderingDevice::*)() const>(&RenderingDevice::get_frame_delay)>((new std::string("get_frame_delay"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)()>(&RenderingDevice::submit)>((new std::string("submit"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)()>(&RenderingDevice::sync)>((new std::string("sync"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)(BitField<RenderingDevice::BarrierMask>, BitField<RenderingDevice::BarrierMask>)>(&RenderingDevice::barrier)>((new std::string("barrier"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)()>(&RenderingDevice::full_barrier)>((new std::string("full_barrier"))->c_str())
			.fun<static_cast<RenderingDevice *(RenderingDevice::*)()>(&RenderingDevice::create_local_device)>((new std::string("create_local_device"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)(const RID &, const String &)>(&RenderingDevice::set_resource_name)>((new std::string("set_resource_name"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)(const String &, const Color &)>(&RenderingDevice::draw_command_begin_label)>((new std::string("draw_command_begin_label"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)(const String &, const Color &)>(&RenderingDevice::draw_command_insert_label)>((new std::string("draw_command_insert_label"))->c_str())
			.fun<static_cast<void (RenderingDevice::*)()>(&RenderingDevice::draw_command_end_label)>((new std::string("draw_command_end_label"))->c_str())
			.fun<static_cast<String (RenderingDevice::*)() const>(&RenderingDevice::get_device_vendor_name)>((new std::string("get_device_vendor_name"))->c_str())
			.fun<static_cast<String (RenderingDevice::*)() const>(&RenderingDevice::get_device_name)>((new std::string("get_device_name"))->c_str())
			.fun<static_cast<String (RenderingDevice::*)() const>(&RenderingDevice::get_device_pipeline_cache_uuid)>((new std::string("get_device_pipeline_cache_uuid"))->c_str())
			.fun<static_cast<uint64_t (RenderingDevice::*)(RenderingDevice::MemoryType) const>(&RenderingDevice::get_memory_usage)>((new std::string("get_memory_usage"))->c_str())
			.fun<static_cast<uint64_t (RenderingDevice::*)(RenderingDevice::DriverResource, const RID &, uint64_t)>(&RenderingDevice::get_driver_resource)>((new std::string("get_driver_resource"))->c_str());
	qjs::Value _DeviceType = context->newObject();
	_DeviceType[(new std::string("DEVICE_TYPE_OTHER"))->c_str()] = RenderingDevice::DeviceType::DEVICE_TYPE_OTHER;
	_DeviceType[(new std::string("DEVICE_TYPE_INTEGRATED_GPU"))->c_str()] = RenderingDevice::DeviceType::DEVICE_TYPE_INTEGRATED_GPU;
	_DeviceType[(new std::string("DEVICE_TYPE_DISCRETE_GPU"))->c_str()] = RenderingDevice::DeviceType::DEVICE_TYPE_DISCRETE_GPU;
	_DeviceType[(new std::string("DEVICE_TYPE_VIRTUAL_GPU"))->c_str()] = RenderingDevice::DeviceType::DEVICE_TYPE_VIRTUAL_GPU;
	_DeviceType[(new std::string("DEVICE_TYPE_CPU"))->c_str()] = RenderingDevice::DeviceType::DEVICE_TYPE_CPU;
	_DeviceType[(new std::string("DEVICE_TYPE_MAX"))->c_str()] = RenderingDevice::DeviceType::DEVICE_TYPE_MAX;
	_module.add("DeviceType", std::move(_DeviceType));
	qjs::Value _DriverResource = context->newObject();
	_DriverResource[(new std::string("DRIVER_RESOURCE_LOGICAL_DEVICE"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_LOGICAL_DEVICE;
	_DriverResource[(new std::string("DRIVER_RESOURCE_PHYSICAL_DEVICE"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_PHYSICAL_DEVICE;
	_DriverResource[(new std::string("DRIVER_RESOURCE_TOPMOST_OBJECT"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_TOPMOST_OBJECT;
	_DriverResource[(new std::string("DRIVER_RESOURCE_COMMAND_QUEUE"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_COMMAND_QUEUE;
	_DriverResource[(new std::string("DRIVER_RESOURCE_QUEUE_FAMILY"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_QUEUE_FAMILY;
	_DriverResource[(new std::string("DRIVER_RESOURCE_TEXTURE"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_TEXTURE;
	_DriverResource[(new std::string("DRIVER_RESOURCE_TEXTURE_VIEW"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_TEXTURE_VIEW;
	_DriverResource[(new std::string("DRIVER_RESOURCE_TEXTURE_DATA_FORMAT"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_TEXTURE_DATA_FORMAT;
	_DriverResource[(new std::string("DRIVER_RESOURCE_SAMPLER"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_SAMPLER;
	_DriverResource[(new std::string("DRIVER_RESOURCE_UNIFORM_SET"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_UNIFORM_SET;
	_DriverResource[(new std::string("DRIVER_RESOURCE_BUFFER"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_BUFFER;
	_DriverResource[(new std::string("DRIVER_RESOURCE_COMPUTE_PIPELINE"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_COMPUTE_PIPELINE;
	_DriverResource[(new std::string("DRIVER_RESOURCE_RENDER_PIPELINE"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_RENDER_PIPELINE;
	_DriverResource[(new std::string("DRIVER_RESOURCE_VULKAN_DEVICE"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_DEVICE;
	_DriverResource[(new std::string("DRIVER_RESOURCE_VULKAN_PHYSICAL_DEVICE"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_PHYSICAL_DEVICE;
	_DriverResource[(new std::string("DRIVER_RESOURCE_VULKAN_INSTANCE"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_INSTANCE;
	_DriverResource[(new std::string("DRIVER_RESOURCE_VULKAN_QUEUE"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_QUEUE;
	_DriverResource[(new std::string("DRIVER_RESOURCE_VULKAN_QUEUE_FAMILY_INDEX"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_QUEUE_FAMILY_INDEX;
	_DriverResource[(new std::string("DRIVER_RESOURCE_VULKAN_IMAGE"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_IMAGE;
	_DriverResource[(new std::string("DRIVER_RESOURCE_VULKAN_IMAGE_VIEW"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_IMAGE_VIEW;
	_DriverResource[(new std::string("DRIVER_RESOURCE_VULKAN_IMAGE_NATIVE_TEXTURE_FORMAT"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_IMAGE_NATIVE_TEXTURE_FORMAT;
	_DriverResource[(new std::string("DRIVER_RESOURCE_VULKAN_SAMPLER"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_SAMPLER;
	_DriverResource[(new std::string("DRIVER_RESOURCE_VULKAN_DESCRIPTOR_SET"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_DESCRIPTOR_SET;
	_DriverResource[(new std::string("DRIVER_RESOURCE_VULKAN_BUFFER"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_BUFFER;
	_DriverResource[(new std::string("DRIVER_RESOURCE_VULKAN_COMPUTE_PIPELINE"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_COMPUTE_PIPELINE;
	_DriverResource[(new std::string("DRIVER_RESOURCE_VULKAN_RENDER_PIPELINE"))->c_str()] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_RENDER_PIPELINE;
	_module.add("DriverResource", std::move(_DriverResource));
	qjs::Value _DataFormat = context->newObject();
	_DataFormat[(new std::string("DATA_FORMAT_R4G4_UNORM_PACK8"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R4G4_UNORM_PACK8;
	_DataFormat[(new std::string("DATA_FORMAT_R4G4B4A4_UNORM_PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R4G4B4A4_UNORM_PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_B4G4R4A4_UNORM_PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_B4G4R4A4_UNORM_PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_R5G6B5_UNORM_PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R5G6B5_UNORM_PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_B5G6R5_UNORM_PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_B5G6R5_UNORM_PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_R5G5B5A1_UNORM_PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R5G5B5A1_UNORM_PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_B5G5R5A1_UNORM_PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_B5G5R5A1_UNORM_PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_A1R5G5B5_UNORM_PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_A1R5G5B5_UNORM_PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_R8_UNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8_UNORM;
	_DataFormat[(new std::string("DATA_FORMAT_R8_SNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8_SNORM;
	_DataFormat[(new std::string("DATA_FORMAT_R8_USCALED"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8_USCALED;
	_DataFormat[(new std::string("DATA_FORMAT_R8_SSCALED"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8_SSCALED;
	_DataFormat[(new std::string("DATA_FORMAT_R8_UINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8_UINT;
	_DataFormat[(new std::string("DATA_FORMAT_R8_SINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8_SINT;
	_DataFormat[(new std::string("DATA_FORMAT_R8_SRGB"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8_SRGB;
	_DataFormat[(new std::string("DATA_FORMAT_R8G8_UNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8_UNORM;
	_DataFormat[(new std::string("DATA_FORMAT_R8G8_SNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8_SNORM;
	_DataFormat[(new std::string("DATA_FORMAT_R8G8_USCALED"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8_USCALED;
	_DataFormat[(new std::string("DATA_FORMAT_R8G8_SSCALED"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8_SSCALED;
	_DataFormat[(new std::string("DATA_FORMAT_R8G8_UINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8_UINT;
	_DataFormat[(new std::string("DATA_FORMAT_R8G8_SINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8_SINT;
	_DataFormat[(new std::string("DATA_FORMAT_R8G8_SRGB"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8_SRGB;
	_DataFormat[(new std::string("DATA_FORMAT_R8G8B8_UNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8_UNORM;
	_DataFormat[(new std::string("DATA_FORMAT_R8G8B8_SNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8_SNORM;
	_DataFormat[(new std::string("DATA_FORMAT_R8G8B8_USCALED"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8_USCALED;
	_DataFormat[(new std::string("DATA_FORMAT_R8G8B8_SSCALED"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8_SSCALED;
	_DataFormat[(new std::string("DATA_FORMAT_R8G8B8_UINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8_UINT;
	_DataFormat[(new std::string("DATA_FORMAT_R8G8B8_SINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8_SINT;
	_DataFormat[(new std::string("DATA_FORMAT_R8G8B8_SRGB"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8_SRGB;
	_DataFormat[(new std::string("DATA_FORMAT_B8G8R8_UNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8_UNORM;
	_DataFormat[(new std::string("DATA_FORMAT_B8G8R8_SNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8_SNORM;
	_DataFormat[(new std::string("DATA_FORMAT_B8G8R8_USCALED"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8_USCALED;
	_DataFormat[(new std::string("DATA_FORMAT_B8G8R8_SSCALED"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8_SSCALED;
	_DataFormat[(new std::string("DATA_FORMAT_B8G8R8_UINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8_UINT;
	_DataFormat[(new std::string("DATA_FORMAT_B8G8R8_SINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8_SINT;
	_DataFormat[(new std::string("DATA_FORMAT_B8G8R8_SRGB"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8_SRGB;
	_DataFormat[(new std::string("DATA_FORMAT_R8G8B8A8_UNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8A8_UNORM;
	_DataFormat[(new std::string("DATA_FORMAT_R8G8B8A8_SNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8A8_SNORM;
	_DataFormat[(new std::string("DATA_FORMAT_R8G8B8A8_USCALED"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8A8_USCALED;
	_DataFormat[(new std::string("DATA_FORMAT_R8G8B8A8_SSCALED"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8A8_SSCALED;
	_DataFormat[(new std::string("DATA_FORMAT_R8G8B8A8_UINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8A8_UINT;
	_DataFormat[(new std::string("DATA_FORMAT_R8G8B8A8_SINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8A8_SINT;
	_DataFormat[(new std::string("DATA_FORMAT_R8G8B8A8_SRGB"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8A8_SRGB;
	_DataFormat[(new std::string("DATA_FORMAT_B8G8R8A8_UNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8A8_UNORM;
	_DataFormat[(new std::string("DATA_FORMAT_B8G8R8A8_SNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8A8_SNORM;
	_DataFormat[(new std::string("DATA_FORMAT_B8G8R8A8_USCALED"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8A8_USCALED;
	_DataFormat[(new std::string("DATA_FORMAT_B8G8R8A8_SSCALED"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8A8_SSCALED;
	_DataFormat[(new std::string("DATA_FORMAT_B8G8R8A8_UINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8A8_UINT;
	_DataFormat[(new std::string("DATA_FORMAT_B8G8R8A8_SINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8A8_SINT;
	_DataFormat[(new std::string("DATA_FORMAT_B8G8R8A8_SRGB"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8A8_SRGB;
	_DataFormat[(new std::string("DATA_FORMAT_A8B8G8R8_UNORM_PACK32"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_A8B8G8R8_UNORM_PACK32;
	_DataFormat[(new std::string("DATA_FORMAT_A8B8G8R8_SNORM_PACK32"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_A8B8G8R8_SNORM_PACK32;
	_DataFormat[(new std::string("DATA_FORMAT_A8B8G8R8_USCALED_PACK32"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_A8B8G8R8_USCALED_PACK32;
	_DataFormat[(new std::string("DATA_FORMAT_A8B8G8R8_SSCALED_PACK32"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_A8B8G8R8_SSCALED_PACK32;
	_DataFormat[(new std::string("DATA_FORMAT_A8B8G8R8_UINT_PACK32"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_A8B8G8R8_UINT_PACK32;
	_DataFormat[(new std::string("DATA_FORMAT_A8B8G8R8_SINT_PACK32"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_A8B8G8R8_SINT_PACK32;
	_DataFormat[(new std::string("DATA_FORMAT_A8B8G8R8_SRGB_PACK32"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_A8B8G8R8_SRGB_PACK32;
	_DataFormat[(new std::string("DATA_FORMAT_A2R10G10B10_UNORM_PACK32"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_A2R10G10B10_UNORM_PACK32;
	_DataFormat[(new std::string("DATA_FORMAT_A2R10G10B10_SNORM_PACK32"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_A2R10G10B10_SNORM_PACK32;
	_DataFormat[(new std::string("DATA_FORMAT_A2R10G10B10_USCALED_PACK32"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_A2R10G10B10_USCALED_PACK32;
	_DataFormat[(new std::string("DATA_FORMAT_A2R10G10B10_SSCALED_PACK32"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_A2R10G10B10_SSCALED_PACK32;
	_DataFormat[(new std::string("DATA_FORMAT_A2R10G10B10_UINT_PACK32"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_A2R10G10B10_UINT_PACK32;
	_DataFormat[(new std::string("DATA_FORMAT_A2R10G10B10_SINT_PACK32"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_A2R10G10B10_SINT_PACK32;
	_DataFormat[(new std::string("DATA_FORMAT_A2B10G10R10_UNORM_PACK32"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_A2B10G10R10_UNORM_PACK32;
	_DataFormat[(new std::string("DATA_FORMAT_A2B10G10R10_SNORM_PACK32"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_A2B10G10R10_SNORM_PACK32;
	_DataFormat[(new std::string("DATA_FORMAT_A2B10G10R10_USCALED_PACK32"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_A2B10G10R10_USCALED_PACK32;
	_DataFormat[(new std::string("DATA_FORMAT_A2B10G10R10_SSCALED_PACK32"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_A2B10G10R10_SSCALED_PACK32;
	_DataFormat[(new std::string("DATA_FORMAT_A2B10G10R10_UINT_PACK32"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_A2B10G10R10_UINT_PACK32;
	_DataFormat[(new std::string("DATA_FORMAT_A2B10G10R10_SINT_PACK32"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_A2B10G10R10_SINT_PACK32;
	_DataFormat[(new std::string("DATA_FORMAT_R16_UNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16_UNORM;
	_DataFormat[(new std::string("DATA_FORMAT_R16_SNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16_SNORM;
	_DataFormat[(new std::string("DATA_FORMAT_R16_USCALED"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16_USCALED;
	_DataFormat[(new std::string("DATA_FORMAT_R16_SSCALED"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16_SSCALED;
	_DataFormat[(new std::string("DATA_FORMAT_R16_UINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16_UINT;
	_DataFormat[(new std::string("DATA_FORMAT_R16_SINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16_SINT;
	_DataFormat[(new std::string("DATA_FORMAT_R16_SFLOAT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16_SFLOAT;
	_DataFormat[(new std::string("DATA_FORMAT_R16G16_UNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16_UNORM;
	_DataFormat[(new std::string("DATA_FORMAT_R16G16_SNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16_SNORM;
	_DataFormat[(new std::string("DATA_FORMAT_R16G16_USCALED"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16_USCALED;
	_DataFormat[(new std::string("DATA_FORMAT_R16G16_SSCALED"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16_SSCALED;
	_DataFormat[(new std::string("DATA_FORMAT_R16G16_UINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16_UINT;
	_DataFormat[(new std::string("DATA_FORMAT_R16G16_SINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16_SINT;
	_DataFormat[(new std::string("DATA_FORMAT_R16G16_SFLOAT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16_SFLOAT;
	_DataFormat[(new std::string("DATA_FORMAT_R16G16B16_UNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16_UNORM;
	_DataFormat[(new std::string("DATA_FORMAT_R16G16B16_SNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16_SNORM;
	_DataFormat[(new std::string("DATA_FORMAT_R16G16B16_USCALED"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16_USCALED;
	_DataFormat[(new std::string("DATA_FORMAT_R16G16B16_SSCALED"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16_SSCALED;
	_DataFormat[(new std::string("DATA_FORMAT_R16G16B16_UINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16_UINT;
	_DataFormat[(new std::string("DATA_FORMAT_R16G16B16_SINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16_SINT;
	_DataFormat[(new std::string("DATA_FORMAT_R16G16B16_SFLOAT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16_SFLOAT;
	_DataFormat[(new std::string("DATA_FORMAT_R16G16B16A16_UNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16A16_UNORM;
	_DataFormat[(new std::string("DATA_FORMAT_R16G16B16A16_SNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16A16_SNORM;
	_DataFormat[(new std::string("DATA_FORMAT_R16G16B16A16_USCALED"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16A16_USCALED;
	_DataFormat[(new std::string("DATA_FORMAT_R16G16B16A16_SSCALED"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16A16_SSCALED;
	_DataFormat[(new std::string("DATA_FORMAT_R16G16B16A16_UINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16A16_UINT;
	_DataFormat[(new std::string("DATA_FORMAT_R16G16B16A16_SINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16A16_SINT;
	_DataFormat[(new std::string("DATA_FORMAT_R16G16B16A16_SFLOAT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16A16_SFLOAT;
	_DataFormat[(new std::string("DATA_FORMAT_R32_UINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R32_UINT;
	_DataFormat[(new std::string("DATA_FORMAT_R32_SINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R32_SINT;
	_DataFormat[(new std::string("DATA_FORMAT_R32_SFLOAT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R32_SFLOAT;
	_DataFormat[(new std::string("DATA_FORMAT_R32G32_UINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R32G32_UINT;
	_DataFormat[(new std::string("DATA_FORMAT_R32G32_SINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R32G32_SINT;
	_DataFormat[(new std::string("DATA_FORMAT_R32G32_SFLOAT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R32G32_SFLOAT;
	_DataFormat[(new std::string("DATA_FORMAT_R32G32B32_UINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R32G32B32_UINT;
	_DataFormat[(new std::string("DATA_FORMAT_R32G32B32_SINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R32G32B32_SINT;
	_DataFormat[(new std::string("DATA_FORMAT_R32G32B32_SFLOAT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R32G32B32_SFLOAT;
	_DataFormat[(new std::string("DATA_FORMAT_R32G32B32A32_UINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R32G32B32A32_UINT;
	_DataFormat[(new std::string("DATA_FORMAT_R32G32B32A32_SINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R32G32B32A32_SINT;
	_DataFormat[(new std::string("DATA_FORMAT_R32G32B32A32_SFLOAT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R32G32B32A32_SFLOAT;
	_DataFormat[(new std::string("DATA_FORMAT_R64_UINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R64_UINT;
	_DataFormat[(new std::string("DATA_FORMAT_R64_SINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R64_SINT;
	_DataFormat[(new std::string("DATA_FORMAT_R64_SFLOAT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R64_SFLOAT;
	_DataFormat[(new std::string("DATA_FORMAT_R64G64_UINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R64G64_UINT;
	_DataFormat[(new std::string("DATA_FORMAT_R64G64_SINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R64G64_SINT;
	_DataFormat[(new std::string("DATA_FORMAT_R64G64_SFLOAT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R64G64_SFLOAT;
	_DataFormat[(new std::string("DATA_FORMAT_R64G64B64_UINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R64G64B64_UINT;
	_DataFormat[(new std::string("DATA_FORMAT_R64G64B64_SINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R64G64B64_SINT;
	_DataFormat[(new std::string("DATA_FORMAT_R64G64B64_SFLOAT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R64G64B64_SFLOAT;
	_DataFormat[(new std::string("DATA_FORMAT_R64G64B64A64_UINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R64G64B64A64_UINT;
	_DataFormat[(new std::string("DATA_FORMAT_R64G64B64A64_SINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R64G64B64A64_SINT;
	_DataFormat[(new std::string("DATA_FORMAT_R64G64B64A64_SFLOAT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R64G64B64A64_SFLOAT;
	_DataFormat[(new std::string("DATA_FORMAT_B10G11R11_UFLOAT_PACK32"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_B10G11R11_UFLOAT_PACK32;
	_DataFormat[(new std::string("DATA_FORMAT_E5B9G9R9_UFLOAT_PACK32"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_E5B9G9R9_UFLOAT_PACK32;
	_DataFormat[(new std::string("DATA_FORMAT_D16_UNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_D16_UNORM;
	_DataFormat[(new std::string("DATA_FORMAT_X8_D24_UNORM_PACK32"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_X8_D24_UNORM_PACK32;
	_DataFormat[(new std::string("DATA_FORMAT_D32_SFLOAT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_D32_SFLOAT;
	_DataFormat[(new std::string("DATA_FORMAT_S8_UINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_S8_UINT;
	_DataFormat[(new std::string("DATA_FORMAT_D16_UNORM_S8_UINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_D16_UNORM_S8_UINT;
	_DataFormat[(new std::string("DATA_FORMAT_D24_UNORM_S8_UINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_D24_UNORM_S8_UINT;
	_DataFormat[(new std::string("DATA_FORMAT_D32_SFLOAT_S8_UINT"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_D32_SFLOAT_S8_UINT;
	_DataFormat[(new std::string("DATA_FORMAT_BC1_RGB_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_BC1_RGB_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_BC1_RGB_SRGB_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_BC1_RGB_SRGB_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_BC1_RGBA_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_BC1_RGBA_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_BC1_RGBA_SRGB_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_BC1_RGBA_SRGB_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_BC2_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_BC2_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_BC2_SRGB_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_BC2_SRGB_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_BC3_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_BC3_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_BC3_SRGB_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_BC3_SRGB_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_BC4_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_BC4_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_BC4_SNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_BC4_SNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_BC5_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_BC5_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_BC5_SNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_BC5_SNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_BC6H_UFLOAT_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_BC6H_UFLOAT_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_BC6H_SFLOAT_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_BC6H_SFLOAT_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_BC7_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_BC7_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_BC7_SRGB_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_BC7_SRGB_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ETC2_R8G8B8_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ETC2_R8G8B8_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ETC2_R8G8B8_SRGB_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ETC2_R8G8B8_SRGB_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_EAC_R11_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_EAC_R11_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_EAC_R11_SNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_EAC_R11_SNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_EAC_R11G11_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_EAC_R11G11_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_EAC_R11G11_SNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_EAC_R11G11_SNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_4x4_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_4x4_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_4x4_SRGB_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_4x4_SRGB_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_5x4_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_5x4_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_5x4_SRGB_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_5x4_SRGB_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_5x5_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_5x5_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_5x5_SRGB_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_5x5_SRGB_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_6x5_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_6x5_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_6x5_SRGB_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_6x5_SRGB_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_6x6_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_6x6_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_6x6_SRGB_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_6x6_SRGB_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_8x5_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_8x5_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_8x5_SRGB_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_8x5_SRGB_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_8x6_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_8x6_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_8x6_SRGB_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_8x6_SRGB_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_8x8_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_8x8_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_8x8_SRGB_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_8x8_SRGB_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_10x5_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_10x5_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_10x5_SRGB_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_10x5_SRGB_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_10x6_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_10x6_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_10x6_SRGB_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_10x6_SRGB_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_10x8_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_10x8_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_10x8_SRGB_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_10x8_SRGB_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_10x10_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_10x10_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_10x10_SRGB_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_10x10_SRGB_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_12x10_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_12x10_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_12x10_SRGB_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_12x10_SRGB_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_12x12_UNORM_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_12x12_UNORM_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_ASTC_12x12_SRGB_BLOCK"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_12x12_SRGB_BLOCK;
	_DataFormat[(new std::string("DATA_FORMAT_G8B8G8R8_422_UNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_G8B8G8R8_422_UNORM;
	_DataFormat[(new std::string("DATA_FORMAT_B8G8R8G8_422_UNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8G8_422_UNORM;
	_DataFormat[(new std::string("DATA_FORMAT_G8_B8_R8_3PLANE_420_UNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_G8_B8_R8_3PLANE_420_UNORM;
	_DataFormat[(new std::string("DATA_FORMAT_G8_B8R8_2PLANE_420_UNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_G8_B8R8_2PLANE_420_UNORM;
	_DataFormat[(new std::string("DATA_FORMAT_G8_B8_R8_3PLANE_422_UNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_G8_B8_R8_3PLANE_422_UNORM;
	_DataFormat[(new std::string("DATA_FORMAT_G8_B8R8_2PLANE_422_UNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_G8_B8R8_2PLANE_422_UNORM;
	_DataFormat[(new std::string("DATA_FORMAT_G8_B8_R8_3PLANE_444_UNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_G8_B8_R8_3PLANE_444_UNORM;
	_DataFormat[(new std::string("DATA_FORMAT_R10X6_UNORM_PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R10X6_UNORM_PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_R10X6G10X6_UNORM_2PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R10X6G10X6_UNORM_2PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_R12X4_UNORM_PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R12X4_UNORM_PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_R12X4G12X4_UNORM_2PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R12X4G12X4_UNORM_2PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16;
	_DataFormat[(new std::string("DATA_FORMAT_G16B16G16R16_422_UNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_G16B16G16R16_422_UNORM;
	_DataFormat[(new std::string("DATA_FORMAT_B16G16R16G16_422_UNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_B16G16R16G16_422_UNORM;
	_DataFormat[(new std::string("DATA_FORMAT_G16_B16_R16_3PLANE_420_UNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_G16_B16_R16_3PLANE_420_UNORM;
	_DataFormat[(new std::string("DATA_FORMAT_G16_B16R16_2PLANE_420_UNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_G16_B16R16_2PLANE_420_UNORM;
	_DataFormat[(new std::string("DATA_FORMAT_G16_B16_R16_3PLANE_422_UNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_G16_B16_R16_3PLANE_422_UNORM;
	_DataFormat[(new std::string("DATA_FORMAT_G16_B16R16_2PLANE_422_UNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_G16_B16R16_2PLANE_422_UNORM;
	_DataFormat[(new std::string("DATA_FORMAT_G16_B16_R16_3PLANE_444_UNORM"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_G16_B16_R16_3PLANE_444_UNORM;
	_DataFormat[(new std::string("DATA_FORMAT_MAX"))->c_str()] = RenderingDevice::DataFormat::DATA_FORMAT_MAX;
	_module.add("DataFormat", std::move(_DataFormat));
	qjs::Value _BarrierMask = context->newObject();
	_BarrierMask[(new std::string("BARRIER_MASK_VERTEX"))->c_str()] = RenderingDevice::BarrierMask::BARRIER_MASK_VERTEX;
	_BarrierMask[(new std::string("BARRIER_MASK_FRAGMENT"))->c_str()] = RenderingDevice::BarrierMask::BARRIER_MASK_FRAGMENT;
	_BarrierMask[(new std::string("BARRIER_MASK_COMPUTE"))->c_str()] = RenderingDevice::BarrierMask::BARRIER_MASK_COMPUTE;
	_BarrierMask[(new std::string("BARRIER_MASK_TRANSFER"))->c_str()] = RenderingDevice::BarrierMask::BARRIER_MASK_TRANSFER;
	_BarrierMask[(new std::string("BARRIER_MASK_RASTER"))->c_str()] = RenderingDevice::BarrierMask::BARRIER_MASK_RASTER;
	_BarrierMask[(new std::string("BARRIER_MASK_ALL_BARRIERS"))->c_str()] = RenderingDevice::BarrierMask::BARRIER_MASK_ALL_BARRIERS;
	_BarrierMask[(new std::string("BARRIER_MASK_NO_BARRIER"))->c_str()] = RenderingDevice::BarrierMask::BARRIER_MASK_NO_BARRIER;
	_module.add("BarrierMask", std::move(_BarrierMask));
	qjs::Value _TextureType = context->newObject();
	_TextureType[(new std::string("TEXTURE_TYPE_1D"))->c_str()] = RenderingDevice::TextureType::TEXTURE_TYPE_1D;
	_TextureType[(new std::string("TEXTURE_TYPE_2D"))->c_str()] = RenderingDevice::TextureType::TEXTURE_TYPE_2D;
	_TextureType[(new std::string("TEXTURE_TYPE_3D"))->c_str()] = RenderingDevice::TextureType::TEXTURE_TYPE_3D;
	_TextureType[(new std::string("TEXTURE_TYPE_CUBE"))->c_str()] = RenderingDevice::TextureType::TEXTURE_TYPE_CUBE;
	_TextureType[(new std::string("TEXTURE_TYPE_1D_ARRAY"))->c_str()] = RenderingDevice::TextureType::TEXTURE_TYPE_1D_ARRAY;
	_TextureType[(new std::string("TEXTURE_TYPE_2D_ARRAY"))->c_str()] = RenderingDevice::TextureType::TEXTURE_TYPE_2D_ARRAY;
	_TextureType[(new std::string("TEXTURE_TYPE_CUBE_ARRAY"))->c_str()] = RenderingDevice::TextureType::TEXTURE_TYPE_CUBE_ARRAY;
	_TextureType[(new std::string("TEXTURE_TYPE_MAX"))->c_str()] = RenderingDevice::TextureType::TEXTURE_TYPE_MAX;
	_module.add("TextureType", std::move(_TextureType));
	qjs::Value _TextureSamples = context->newObject();
	_TextureSamples[(new std::string("TEXTURE_SAMPLES_1"))->c_str()] = RenderingDevice::TextureSamples::TEXTURE_SAMPLES_1;
	_TextureSamples[(new std::string("TEXTURE_SAMPLES_2"))->c_str()] = RenderingDevice::TextureSamples::TEXTURE_SAMPLES_2;
	_TextureSamples[(new std::string("TEXTURE_SAMPLES_4"))->c_str()] = RenderingDevice::TextureSamples::TEXTURE_SAMPLES_4;
	_TextureSamples[(new std::string("TEXTURE_SAMPLES_8"))->c_str()] = RenderingDevice::TextureSamples::TEXTURE_SAMPLES_8;
	_TextureSamples[(new std::string("TEXTURE_SAMPLES_16"))->c_str()] = RenderingDevice::TextureSamples::TEXTURE_SAMPLES_16;
	_TextureSamples[(new std::string("TEXTURE_SAMPLES_32"))->c_str()] = RenderingDevice::TextureSamples::TEXTURE_SAMPLES_32;
	_TextureSamples[(new std::string("TEXTURE_SAMPLES_64"))->c_str()] = RenderingDevice::TextureSamples::TEXTURE_SAMPLES_64;
	_TextureSamples[(new std::string("TEXTURE_SAMPLES_MAX"))->c_str()] = RenderingDevice::TextureSamples::TEXTURE_SAMPLES_MAX;
	_module.add("TextureSamples", std::move(_TextureSamples));
	qjs::Value _TextureUsageBits = context->newObject();
	_TextureUsageBits[(new std::string("TEXTURE_USAGE_SAMPLING_BIT"))->c_str()] = RenderingDevice::TextureUsageBits::TEXTURE_USAGE_SAMPLING_BIT;
	_TextureUsageBits[(new std::string("TEXTURE_USAGE_COLOR_ATTACHMENT_BIT"))->c_str()] = RenderingDevice::TextureUsageBits::TEXTURE_USAGE_COLOR_ATTACHMENT_BIT;
	_TextureUsageBits[(new std::string("TEXTURE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT"))->c_str()] = RenderingDevice::TextureUsageBits::TEXTURE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;
	_TextureUsageBits[(new std::string("TEXTURE_USAGE_STORAGE_BIT"))->c_str()] = RenderingDevice::TextureUsageBits::TEXTURE_USAGE_STORAGE_BIT;
	_TextureUsageBits[(new std::string("TEXTURE_USAGE_STORAGE_ATOMIC_BIT"))->c_str()] = RenderingDevice::TextureUsageBits::TEXTURE_USAGE_STORAGE_ATOMIC_BIT;
	_TextureUsageBits[(new std::string("TEXTURE_USAGE_CPU_READ_BIT"))->c_str()] = RenderingDevice::TextureUsageBits::TEXTURE_USAGE_CPU_READ_BIT;
	_TextureUsageBits[(new std::string("TEXTURE_USAGE_CAN_UPDATE_BIT"))->c_str()] = RenderingDevice::TextureUsageBits::TEXTURE_USAGE_CAN_UPDATE_BIT;
	_TextureUsageBits[(new std::string("TEXTURE_USAGE_CAN_COPY_FROM_BIT"))->c_str()] = RenderingDevice::TextureUsageBits::TEXTURE_USAGE_CAN_COPY_FROM_BIT;
	_TextureUsageBits[(new std::string("TEXTURE_USAGE_CAN_COPY_TO_BIT"))->c_str()] = RenderingDevice::TextureUsageBits::TEXTURE_USAGE_CAN_COPY_TO_BIT;
	_TextureUsageBits[(new std::string("TEXTURE_USAGE_INPUT_ATTACHMENT_BIT"))->c_str()] = RenderingDevice::TextureUsageBits::TEXTURE_USAGE_INPUT_ATTACHMENT_BIT;
	_module.add("TextureUsageBits", std::move(_TextureUsageBits));
	qjs::Value _TextureSwizzle = context->newObject();
	_TextureSwizzle[(new std::string("TEXTURE_SWIZZLE_IDENTITY"))->c_str()] = RenderingDevice::TextureSwizzle::TEXTURE_SWIZZLE_IDENTITY;
	_TextureSwizzle[(new std::string("TEXTURE_SWIZZLE_ZERO"))->c_str()] = RenderingDevice::TextureSwizzle::TEXTURE_SWIZZLE_ZERO;
	_TextureSwizzle[(new std::string("TEXTURE_SWIZZLE_ONE"))->c_str()] = RenderingDevice::TextureSwizzle::TEXTURE_SWIZZLE_ONE;
	_TextureSwizzle[(new std::string("TEXTURE_SWIZZLE_R"))->c_str()] = RenderingDevice::TextureSwizzle::TEXTURE_SWIZZLE_R;
	_TextureSwizzle[(new std::string("TEXTURE_SWIZZLE_G"))->c_str()] = RenderingDevice::TextureSwizzle::TEXTURE_SWIZZLE_G;
	_TextureSwizzle[(new std::string("TEXTURE_SWIZZLE_B"))->c_str()] = RenderingDevice::TextureSwizzle::TEXTURE_SWIZZLE_B;
	_TextureSwizzle[(new std::string("TEXTURE_SWIZZLE_A"))->c_str()] = RenderingDevice::TextureSwizzle::TEXTURE_SWIZZLE_A;
	_TextureSwizzle[(new std::string("TEXTURE_SWIZZLE_MAX"))->c_str()] = RenderingDevice::TextureSwizzle::TEXTURE_SWIZZLE_MAX;
	_module.add("TextureSwizzle", std::move(_TextureSwizzle));
	qjs::Value _TextureSliceType = context->newObject();
	_TextureSliceType[(new std::string("TEXTURE_SLICE_2D"))->c_str()] = RenderingDevice::TextureSliceType::TEXTURE_SLICE_2D;
	_TextureSliceType[(new std::string("TEXTURE_SLICE_CUBEMAP"))->c_str()] = RenderingDevice::TextureSliceType::TEXTURE_SLICE_CUBEMAP;
	_TextureSliceType[(new std::string("TEXTURE_SLICE_3D"))->c_str()] = RenderingDevice::TextureSliceType::TEXTURE_SLICE_3D;
	_module.add("TextureSliceType", std::move(_TextureSliceType));
	qjs::Value _SamplerFilter = context->newObject();
	_SamplerFilter[(new std::string("SAMPLER_FILTER_NEAREST"))->c_str()] = RenderingDevice::SamplerFilter::SAMPLER_FILTER_NEAREST;
	_SamplerFilter[(new std::string("SAMPLER_FILTER_LINEAR"))->c_str()] = RenderingDevice::SamplerFilter::SAMPLER_FILTER_LINEAR;
	_module.add("SamplerFilter", std::move(_SamplerFilter));
	qjs::Value _SamplerRepeatMode = context->newObject();
	_SamplerRepeatMode[(new std::string("SAMPLER_REPEAT_MODE_REPEAT"))->c_str()] = RenderingDevice::SamplerRepeatMode::SAMPLER_REPEAT_MODE_REPEAT;
	_SamplerRepeatMode[(new std::string("SAMPLER_REPEAT_MODE_MIRRORED_REPEAT"))->c_str()] = RenderingDevice::SamplerRepeatMode::SAMPLER_REPEAT_MODE_MIRRORED_REPEAT;
	_SamplerRepeatMode[(new std::string("SAMPLER_REPEAT_MODE_CLAMP_TO_EDGE"))->c_str()] = RenderingDevice::SamplerRepeatMode::SAMPLER_REPEAT_MODE_CLAMP_TO_EDGE;
	_SamplerRepeatMode[(new std::string("SAMPLER_REPEAT_MODE_CLAMP_TO_BORDER"))->c_str()] = RenderingDevice::SamplerRepeatMode::SAMPLER_REPEAT_MODE_CLAMP_TO_BORDER;
	_SamplerRepeatMode[(new std::string("SAMPLER_REPEAT_MODE_MIRROR_CLAMP_TO_EDGE"))->c_str()] = RenderingDevice::SamplerRepeatMode::SAMPLER_REPEAT_MODE_MIRROR_CLAMP_TO_EDGE;
	_SamplerRepeatMode[(new std::string("SAMPLER_REPEAT_MODE_MAX"))->c_str()] = RenderingDevice::SamplerRepeatMode::SAMPLER_REPEAT_MODE_MAX;
	_module.add("SamplerRepeatMode", std::move(_SamplerRepeatMode));
	qjs::Value _SamplerBorderColor = context->newObject();
	_SamplerBorderColor[(new std::string("SAMPLER_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK"))->c_str()] = RenderingDevice::SamplerBorderColor::SAMPLER_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK;
	_SamplerBorderColor[(new std::string("SAMPLER_BORDER_COLOR_INT_TRANSPARENT_BLACK"))->c_str()] = RenderingDevice::SamplerBorderColor::SAMPLER_BORDER_COLOR_INT_TRANSPARENT_BLACK;
	_SamplerBorderColor[(new std::string("SAMPLER_BORDER_COLOR_FLOAT_OPAQUE_BLACK"))->c_str()] = RenderingDevice::SamplerBorderColor::SAMPLER_BORDER_COLOR_FLOAT_OPAQUE_BLACK;
	_SamplerBorderColor[(new std::string("SAMPLER_BORDER_COLOR_INT_OPAQUE_BLACK"))->c_str()] = RenderingDevice::SamplerBorderColor::SAMPLER_BORDER_COLOR_INT_OPAQUE_BLACK;
	_SamplerBorderColor[(new std::string("SAMPLER_BORDER_COLOR_FLOAT_OPAQUE_WHITE"))->c_str()] = RenderingDevice::SamplerBorderColor::SAMPLER_BORDER_COLOR_FLOAT_OPAQUE_WHITE;
	_SamplerBorderColor[(new std::string("SAMPLER_BORDER_COLOR_INT_OPAQUE_WHITE"))->c_str()] = RenderingDevice::SamplerBorderColor::SAMPLER_BORDER_COLOR_INT_OPAQUE_WHITE;
	_SamplerBorderColor[(new std::string("SAMPLER_BORDER_COLOR_MAX"))->c_str()] = RenderingDevice::SamplerBorderColor::SAMPLER_BORDER_COLOR_MAX;
	_module.add("SamplerBorderColor", std::move(_SamplerBorderColor));
	qjs::Value _VertexFrequency = context->newObject();
	_VertexFrequency[(new std::string("VERTEX_FREQUENCY_VERTEX"))->c_str()] = RenderingDevice::VertexFrequency::VERTEX_FREQUENCY_VERTEX;
	_VertexFrequency[(new std::string("VERTEX_FREQUENCY_INSTANCE"))->c_str()] = RenderingDevice::VertexFrequency::VERTEX_FREQUENCY_INSTANCE;
	_module.add("VertexFrequency", std::move(_VertexFrequency));
	qjs::Value _IndexBufferFormat = context->newObject();
	_IndexBufferFormat[(new std::string("INDEX_BUFFER_FORMAT_UINT16"))->c_str()] = RenderingDevice::IndexBufferFormat::INDEX_BUFFER_FORMAT_UINT16;
	_IndexBufferFormat[(new std::string("INDEX_BUFFER_FORMAT_UINT32"))->c_str()] = RenderingDevice::IndexBufferFormat::INDEX_BUFFER_FORMAT_UINT32;
	_module.add("IndexBufferFormat", std::move(_IndexBufferFormat));
	qjs::Value _StorageBufferUsage = context->newObject();
	_StorageBufferUsage[(new std::string("STORAGE_BUFFER_USAGE_DISPATCH_INDIRECT"))->c_str()] = RenderingDevice::StorageBufferUsage::STORAGE_BUFFER_USAGE_DISPATCH_INDIRECT;
	_module.add("StorageBufferUsage", std::move(_StorageBufferUsage));
	qjs::Value _UniformType = context->newObject();
	_UniformType[(new std::string("UNIFORM_TYPE_SAMPLER"))->c_str()] = RenderingDevice::UniformType::UNIFORM_TYPE_SAMPLER;
	_UniformType[(new std::string("UNIFORM_TYPE_SAMPLER_WITH_TEXTURE"))->c_str()] = RenderingDevice::UniformType::UNIFORM_TYPE_SAMPLER_WITH_TEXTURE;
	_UniformType[(new std::string("UNIFORM_TYPE_TEXTURE"))->c_str()] = RenderingDevice::UniformType::UNIFORM_TYPE_TEXTURE;
	_UniformType[(new std::string("UNIFORM_TYPE_IMAGE"))->c_str()] = RenderingDevice::UniformType::UNIFORM_TYPE_IMAGE;
	_UniformType[(new std::string("UNIFORM_TYPE_TEXTURE_BUFFER"))->c_str()] = RenderingDevice::UniformType::UNIFORM_TYPE_TEXTURE_BUFFER;
	_UniformType[(new std::string("UNIFORM_TYPE_SAMPLER_WITH_TEXTURE_BUFFER"))->c_str()] = RenderingDevice::UniformType::UNIFORM_TYPE_SAMPLER_WITH_TEXTURE_BUFFER;
	_UniformType[(new std::string("UNIFORM_TYPE_IMAGE_BUFFER"))->c_str()] = RenderingDevice::UniformType::UNIFORM_TYPE_IMAGE_BUFFER;
	_UniformType[(new std::string("UNIFORM_TYPE_UNIFORM_BUFFER"))->c_str()] = RenderingDevice::UniformType::UNIFORM_TYPE_UNIFORM_BUFFER;
	_UniformType[(new std::string("UNIFORM_TYPE_STORAGE_BUFFER"))->c_str()] = RenderingDevice::UniformType::UNIFORM_TYPE_STORAGE_BUFFER;
	_UniformType[(new std::string("UNIFORM_TYPE_INPUT_ATTACHMENT"))->c_str()] = RenderingDevice::UniformType::UNIFORM_TYPE_INPUT_ATTACHMENT;
	_UniformType[(new std::string("UNIFORM_TYPE_MAX"))->c_str()] = RenderingDevice::UniformType::UNIFORM_TYPE_MAX;
	_module.add("UniformType", std::move(_UniformType));
	qjs::Value _RenderPrimitive = context->newObject();
	_RenderPrimitive[(new std::string("RENDER_PRIMITIVE_POINTS"))->c_str()] = RenderingDevice::RenderPrimitive::RENDER_PRIMITIVE_POINTS;
	_RenderPrimitive[(new std::string("RENDER_PRIMITIVE_LINES"))->c_str()] = RenderingDevice::RenderPrimitive::RENDER_PRIMITIVE_LINES;
	_RenderPrimitive[(new std::string("RENDER_PRIMITIVE_LINES_WITH_ADJACENCY"))->c_str()] = RenderingDevice::RenderPrimitive::RENDER_PRIMITIVE_LINES_WITH_ADJACENCY;
	_RenderPrimitive[(new std::string("RENDER_PRIMITIVE_LINESTRIPS"))->c_str()] = RenderingDevice::RenderPrimitive::RENDER_PRIMITIVE_LINESTRIPS;
	_RenderPrimitive[(new std::string("RENDER_PRIMITIVE_LINESTRIPS_WITH_ADJACENCY"))->c_str()] = RenderingDevice::RenderPrimitive::RENDER_PRIMITIVE_LINESTRIPS_WITH_ADJACENCY;
	_RenderPrimitive[(new std::string("RENDER_PRIMITIVE_TRIANGLES"))->c_str()] = RenderingDevice::RenderPrimitive::RENDER_PRIMITIVE_TRIANGLES;
	_RenderPrimitive[(new std::string("RENDER_PRIMITIVE_TRIANGLES_WITH_ADJACENCY"))->c_str()] = RenderingDevice::RenderPrimitive::RENDER_PRIMITIVE_TRIANGLES_WITH_ADJACENCY;
	_RenderPrimitive[(new std::string("RENDER_PRIMITIVE_TRIANGLE_STRIPS"))->c_str()] = RenderingDevice::RenderPrimitive::RENDER_PRIMITIVE_TRIANGLE_STRIPS;
	_RenderPrimitive[(new std::string("RENDER_PRIMITIVE_TRIANGLE_STRIPS_WITH_AJACENCY"))->c_str()] = RenderingDevice::RenderPrimitive::RENDER_PRIMITIVE_TRIANGLE_STRIPS_WITH_AJACENCY;
	_RenderPrimitive[(new std::string("RENDER_PRIMITIVE_TRIANGLE_STRIPS_WITH_RESTART_INDEX"))->c_str()] = RenderingDevice::RenderPrimitive::RENDER_PRIMITIVE_TRIANGLE_STRIPS_WITH_RESTART_INDEX;
	_RenderPrimitive[(new std::string("RENDER_PRIMITIVE_TESSELATION_PATCH"))->c_str()] = RenderingDevice::RenderPrimitive::RENDER_PRIMITIVE_TESSELATION_PATCH;
	_RenderPrimitive[(new std::string("RENDER_PRIMITIVE_MAX"))->c_str()] = RenderingDevice::RenderPrimitive::RENDER_PRIMITIVE_MAX;
	_module.add("RenderPrimitive", std::move(_RenderPrimitive));
	qjs::Value _PolygonCullMode = context->newObject();
	_PolygonCullMode[(new std::string("POLYGON_CULL_DISABLED"))->c_str()] = RenderingDevice::PolygonCullMode::POLYGON_CULL_DISABLED;
	_PolygonCullMode[(new std::string("POLYGON_CULL_FRONT"))->c_str()] = RenderingDevice::PolygonCullMode::POLYGON_CULL_FRONT;
	_PolygonCullMode[(new std::string("POLYGON_CULL_BACK"))->c_str()] = RenderingDevice::PolygonCullMode::POLYGON_CULL_BACK;
	_module.add("PolygonCullMode", std::move(_PolygonCullMode));
	qjs::Value _PolygonFrontFace = context->newObject();
	_PolygonFrontFace[(new std::string("POLYGON_FRONT_FACE_CLOCKWISE"))->c_str()] = RenderingDevice::PolygonFrontFace::POLYGON_FRONT_FACE_CLOCKWISE;
	_PolygonFrontFace[(new std::string("POLYGON_FRONT_FACE_COUNTER_CLOCKWISE"))->c_str()] = RenderingDevice::PolygonFrontFace::POLYGON_FRONT_FACE_COUNTER_CLOCKWISE;
	_module.add("PolygonFrontFace", std::move(_PolygonFrontFace));
	qjs::Value _StencilOperation = context->newObject();
	_StencilOperation[(new std::string("STENCIL_OP_KEEP"))->c_str()] = RenderingDevice::StencilOperation::STENCIL_OP_KEEP;
	_StencilOperation[(new std::string("STENCIL_OP_ZERO"))->c_str()] = RenderingDevice::StencilOperation::STENCIL_OP_ZERO;
	_StencilOperation[(new std::string("STENCIL_OP_REPLACE"))->c_str()] = RenderingDevice::StencilOperation::STENCIL_OP_REPLACE;
	_StencilOperation[(new std::string("STENCIL_OP_INCREMENT_AND_CLAMP"))->c_str()] = RenderingDevice::StencilOperation::STENCIL_OP_INCREMENT_AND_CLAMP;
	_StencilOperation[(new std::string("STENCIL_OP_DECREMENT_AND_CLAMP"))->c_str()] = RenderingDevice::StencilOperation::STENCIL_OP_DECREMENT_AND_CLAMP;
	_StencilOperation[(new std::string("STENCIL_OP_INVERT"))->c_str()] = RenderingDevice::StencilOperation::STENCIL_OP_INVERT;
	_StencilOperation[(new std::string("STENCIL_OP_INCREMENT_AND_WRAP"))->c_str()] = RenderingDevice::StencilOperation::STENCIL_OP_INCREMENT_AND_WRAP;
	_StencilOperation[(new std::string("STENCIL_OP_DECREMENT_AND_WRAP"))->c_str()] = RenderingDevice::StencilOperation::STENCIL_OP_DECREMENT_AND_WRAP;
	_StencilOperation[(new std::string("STENCIL_OP_MAX"))->c_str()] = RenderingDevice::StencilOperation::STENCIL_OP_MAX;
	_module.add("StencilOperation", std::move(_StencilOperation));
	qjs::Value _CompareOperator = context->newObject();
	_CompareOperator[(new std::string("COMPARE_OP_NEVER"))->c_str()] = RenderingDevice::CompareOperator::COMPARE_OP_NEVER;
	_CompareOperator[(new std::string("COMPARE_OP_LESS"))->c_str()] = RenderingDevice::CompareOperator::COMPARE_OP_LESS;
	_CompareOperator[(new std::string("COMPARE_OP_EQUAL"))->c_str()] = RenderingDevice::CompareOperator::COMPARE_OP_EQUAL;
	_CompareOperator[(new std::string("COMPARE_OP_LESS_OR_EQUAL"))->c_str()] = RenderingDevice::CompareOperator::COMPARE_OP_LESS_OR_EQUAL;
	_CompareOperator[(new std::string("COMPARE_OP_GREATER"))->c_str()] = RenderingDevice::CompareOperator::COMPARE_OP_GREATER;
	_CompareOperator[(new std::string("COMPARE_OP_NOT_EQUAL"))->c_str()] = RenderingDevice::CompareOperator::COMPARE_OP_NOT_EQUAL;
	_CompareOperator[(new std::string("COMPARE_OP_GREATER_OR_EQUAL"))->c_str()] = RenderingDevice::CompareOperator::COMPARE_OP_GREATER_OR_EQUAL;
	_CompareOperator[(new std::string("COMPARE_OP_ALWAYS"))->c_str()] = RenderingDevice::CompareOperator::COMPARE_OP_ALWAYS;
	_CompareOperator[(new std::string("COMPARE_OP_MAX"))->c_str()] = RenderingDevice::CompareOperator::COMPARE_OP_MAX;
	_module.add("CompareOperator", std::move(_CompareOperator));
	qjs::Value _LogicOperation = context->newObject();
	_LogicOperation[(new std::string("LOGIC_OP_CLEAR"))->c_str()] = RenderingDevice::LogicOperation::LOGIC_OP_CLEAR;
	_LogicOperation[(new std::string("LOGIC_OP_AND"))->c_str()] = RenderingDevice::LogicOperation::LOGIC_OP_AND;
	_LogicOperation[(new std::string("LOGIC_OP_AND_REVERSE"))->c_str()] = RenderingDevice::LogicOperation::LOGIC_OP_AND_REVERSE;
	_LogicOperation[(new std::string("LOGIC_OP_COPY"))->c_str()] = RenderingDevice::LogicOperation::LOGIC_OP_COPY;
	_LogicOperation[(new std::string("LOGIC_OP_AND_INVERTED"))->c_str()] = RenderingDevice::LogicOperation::LOGIC_OP_AND_INVERTED;
	_LogicOperation[(new std::string("LOGIC_OP_NO_OP"))->c_str()] = RenderingDevice::LogicOperation::LOGIC_OP_NO_OP;
	_LogicOperation[(new std::string("LOGIC_OP_XOR"))->c_str()] = RenderingDevice::LogicOperation::LOGIC_OP_XOR;
	_LogicOperation[(new std::string("LOGIC_OP_OR"))->c_str()] = RenderingDevice::LogicOperation::LOGIC_OP_OR;
	_LogicOperation[(new std::string("LOGIC_OP_NOR"))->c_str()] = RenderingDevice::LogicOperation::LOGIC_OP_NOR;
	_LogicOperation[(new std::string("LOGIC_OP_EQUIVALENT"))->c_str()] = RenderingDevice::LogicOperation::LOGIC_OP_EQUIVALENT;
	_LogicOperation[(new std::string("LOGIC_OP_INVERT"))->c_str()] = RenderingDevice::LogicOperation::LOGIC_OP_INVERT;
	_LogicOperation[(new std::string("LOGIC_OP_OR_REVERSE"))->c_str()] = RenderingDevice::LogicOperation::LOGIC_OP_OR_REVERSE;
	_LogicOperation[(new std::string("LOGIC_OP_COPY_INVERTED"))->c_str()] = RenderingDevice::LogicOperation::LOGIC_OP_COPY_INVERTED;
	_LogicOperation[(new std::string("LOGIC_OP_OR_INVERTED"))->c_str()] = RenderingDevice::LogicOperation::LOGIC_OP_OR_INVERTED;
	_LogicOperation[(new std::string("LOGIC_OP_NAND"))->c_str()] = RenderingDevice::LogicOperation::LOGIC_OP_NAND;
	_LogicOperation[(new std::string("LOGIC_OP_SET"))->c_str()] = RenderingDevice::LogicOperation::LOGIC_OP_SET;
	_LogicOperation[(new std::string("LOGIC_OP_MAX"))->c_str()] = RenderingDevice::LogicOperation::LOGIC_OP_MAX;
	_module.add("LogicOperation", std::move(_LogicOperation));
	qjs::Value _BlendFactor = context->newObject();
	_BlendFactor[(new std::string("BLEND_FACTOR_ZERO"))->c_str()] = RenderingDevice::BlendFactor::BLEND_FACTOR_ZERO;
	_BlendFactor[(new std::string("BLEND_FACTOR_ONE"))->c_str()] = RenderingDevice::BlendFactor::BLEND_FACTOR_ONE;
	_BlendFactor[(new std::string("BLEND_FACTOR_SRC_COLOR"))->c_str()] = RenderingDevice::BlendFactor::BLEND_FACTOR_SRC_COLOR;
	_BlendFactor[(new std::string("BLEND_FACTOR_ONE_MINUS_SRC_COLOR"))->c_str()] = RenderingDevice::BlendFactor::BLEND_FACTOR_ONE_MINUS_SRC_COLOR;
	_BlendFactor[(new std::string("BLEND_FACTOR_DST_COLOR"))->c_str()] = RenderingDevice::BlendFactor::BLEND_FACTOR_DST_COLOR;
	_BlendFactor[(new std::string("BLEND_FACTOR_ONE_MINUS_DST_COLOR"))->c_str()] = RenderingDevice::BlendFactor::BLEND_FACTOR_ONE_MINUS_DST_COLOR;
	_BlendFactor[(new std::string("BLEND_FACTOR_SRC_ALPHA"))->c_str()] = RenderingDevice::BlendFactor::BLEND_FACTOR_SRC_ALPHA;
	_BlendFactor[(new std::string("BLEND_FACTOR_ONE_MINUS_SRC_ALPHA"))->c_str()] = RenderingDevice::BlendFactor::BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
	_BlendFactor[(new std::string("BLEND_FACTOR_DST_ALPHA"))->c_str()] = RenderingDevice::BlendFactor::BLEND_FACTOR_DST_ALPHA;
	_BlendFactor[(new std::string("BLEND_FACTOR_ONE_MINUS_DST_ALPHA"))->c_str()] = RenderingDevice::BlendFactor::BLEND_FACTOR_ONE_MINUS_DST_ALPHA;
	_BlendFactor[(new std::string("BLEND_FACTOR_CONSTANT_COLOR"))->c_str()] = RenderingDevice::BlendFactor::BLEND_FACTOR_CONSTANT_COLOR;
	_BlendFactor[(new std::string("BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR"))->c_str()] = RenderingDevice::BlendFactor::BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR;
	_BlendFactor[(new std::string("BLEND_FACTOR_CONSTANT_ALPHA"))->c_str()] = RenderingDevice::BlendFactor::BLEND_FACTOR_CONSTANT_ALPHA;
	_BlendFactor[(new std::string("BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA"))->c_str()] = RenderingDevice::BlendFactor::BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA;
	_BlendFactor[(new std::string("BLEND_FACTOR_SRC_ALPHA_SATURATE"))->c_str()] = RenderingDevice::BlendFactor::BLEND_FACTOR_SRC_ALPHA_SATURATE;
	_BlendFactor[(new std::string("BLEND_FACTOR_SRC1_COLOR"))->c_str()] = RenderingDevice::BlendFactor::BLEND_FACTOR_SRC1_COLOR;
	_BlendFactor[(new std::string("BLEND_FACTOR_ONE_MINUS_SRC1_COLOR"))->c_str()] = RenderingDevice::BlendFactor::BLEND_FACTOR_ONE_MINUS_SRC1_COLOR;
	_BlendFactor[(new std::string("BLEND_FACTOR_SRC1_ALPHA"))->c_str()] = RenderingDevice::BlendFactor::BLEND_FACTOR_SRC1_ALPHA;
	_BlendFactor[(new std::string("BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA"))->c_str()] = RenderingDevice::BlendFactor::BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA;
	_BlendFactor[(new std::string("BLEND_FACTOR_MAX"))->c_str()] = RenderingDevice::BlendFactor::BLEND_FACTOR_MAX;
	_module.add("BlendFactor", std::move(_BlendFactor));
	qjs::Value _BlendOperation = context->newObject();
	_BlendOperation[(new std::string("BLEND_OP_ADD"))->c_str()] = RenderingDevice::BlendOperation::BLEND_OP_ADD;
	_BlendOperation[(new std::string("BLEND_OP_SUBTRACT"))->c_str()] = RenderingDevice::BlendOperation::BLEND_OP_SUBTRACT;
	_BlendOperation[(new std::string("BLEND_OP_REVERSE_SUBTRACT"))->c_str()] = RenderingDevice::BlendOperation::BLEND_OP_REVERSE_SUBTRACT;
	_BlendOperation[(new std::string("BLEND_OP_MINIMUM"))->c_str()] = RenderingDevice::BlendOperation::BLEND_OP_MINIMUM;
	_BlendOperation[(new std::string("BLEND_OP_MAXIMUM"))->c_str()] = RenderingDevice::BlendOperation::BLEND_OP_MAXIMUM;
	_BlendOperation[(new std::string("BLEND_OP_MAX"))->c_str()] = RenderingDevice::BlendOperation::BLEND_OP_MAX;
	_module.add("BlendOperation", std::move(_BlendOperation));
	qjs::Value _PipelineDynamicStateFlags = context->newObject();
	_PipelineDynamicStateFlags[(new std::string("DYNAMIC_STATE_LINE_WIDTH"))->c_str()] = RenderingDevice::PipelineDynamicStateFlags::DYNAMIC_STATE_LINE_WIDTH;
	_PipelineDynamicStateFlags[(new std::string("DYNAMIC_STATE_DEPTH_BIAS"))->c_str()] = RenderingDevice::PipelineDynamicStateFlags::DYNAMIC_STATE_DEPTH_BIAS;
	_PipelineDynamicStateFlags[(new std::string("DYNAMIC_STATE_BLEND_CONSTANTS"))->c_str()] = RenderingDevice::PipelineDynamicStateFlags::DYNAMIC_STATE_BLEND_CONSTANTS;
	_PipelineDynamicStateFlags[(new std::string("DYNAMIC_STATE_DEPTH_BOUNDS"))->c_str()] = RenderingDevice::PipelineDynamicStateFlags::DYNAMIC_STATE_DEPTH_BOUNDS;
	_PipelineDynamicStateFlags[(new std::string("DYNAMIC_STATE_STENCIL_COMPARE_MASK"))->c_str()] = RenderingDevice::PipelineDynamicStateFlags::DYNAMIC_STATE_STENCIL_COMPARE_MASK;
	_PipelineDynamicStateFlags[(new std::string("DYNAMIC_STATE_STENCIL_WRITE_MASK"))->c_str()] = RenderingDevice::PipelineDynamicStateFlags::DYNAMIC_STATE_STENCIL_WRITE_MASK;
	_PipelineDynamicStateFlags[(new std::string("DYNAMIC_STATE_STENCIL_REFERENCE"))->c_str()] = RenderingDevice::PipelineDynamicStateFlags::DYNAMIC_STATE_STENCIL_REFERENCE;
	_module.add("PipelineDynamicStateFlags", std::move(_PipelineDynamicStateFlags));
	qjs::Value _InitialAction = context->newObject();
	_InitialAction[(new std::string("INITIAL_ACTION_LOAD"))->c_str()] = RenderingDevice::InitialAction::INITIAL_ACTION_LOAD;
	_InitialAction[(new std::string("INITIAL_ACTION_CLEAR"))->c_str()] = RenderingDevice::InitialAction::INITIAL_ACTION_CLEAR;
	_InitialAction[(new std::string("INITIAL_ACTION_DISCARD"))->c_str()] = RenderingDevice::InitialAction::INITIAL_ACTION_DISCARD;
	_InitialAction[(new std::string("INITIAL_ACTION_MAX"))->c_str()] = RenderingDevice::InitialAction::INITIAL_ACTION_MAX;
	_InitialAction[(new std::string("INITIAL_ACTION_CLEAR_REGION"))->c_str()] = RenderingDevice::InitialAction::INITIAL_ACTION_CLEAR_REGION;
	_InitialAction[(new std::string("INITIAL_ACTION_CLEAR_REGION_CONTINUE"))->c_str()] = RenderingDevice::InitialAction::INITIAL_ACTION_CLEAR_REGION_CONTINUE;
	_InitialAction[(new std::string("INITIAL_ACTION_KEEP"))->c_str()] = RenderingDevice::InitialAction::INITIAL_ACTION_KEEP;
	_InitialAction[(new std::string("INITIAL_ACTION_DROP"))->c_str()] = RenderingDevice::InitialAction::INITIAL_ACTION_DROP;
	_InitialAction[(new std::string("INITIAL_ACTION_CONTINUE"))->c_str()] = RenderingDevice::InitialAction::INITIAL_ACTION_CONTINUE;
	_module.add("InitialAction", std::move(_InitialAction));
	qjs::Value _FinalAction = context->newObject();
	_FinalAction[(new std::string("FINAL_ACTION_STORE"))->c_str()] = RenderingDevice::FinalAction::FINAL_ACTION_STORE;
	_FinalAction[(new std::string("FINAL_ACTION_DISCARD"))->c_str()] = RenderingDevice::FinalAction::FINAL_ACTION_DISCARD;
	_FinalAction[(new std::string("FINAL_ACTION_MAX"))->c_str()] = RenderingDevice::FinalAction::FINAL_ACTION_MAX;
	_FinalAction[(new std::string("FINAL_ACTION_READ"))->c_str()] = RenderingDevice::FinalAction::FINAL_ACTION_READ;
	_FinalAction[(new std::string("FINAL_ACTION_CONTINUE"))->c_str()] = RenderingDevice::FinalAction::FINAL_ACTION_CONTINUE;
	_module.add("FinalAction", std::move(_FinalAction));
	qjs::Value _ShaderStage = context->newObject();
	_ShaderStage[(new std::string("SHADER_STAGE_VERTEX"))->c_str()] = RenderingDevice::ShaderStage::SHADER_STAGE_VERTEX;
	_ShaderStage[(new std::string("SHADER_STAGE_FRAGMENT"))->c_str()] = RenderingDevice::ShaderStage::SHADER_STAGE_FRAGMENT;
	_ShaderStage[(new std::string("SHADER_STAGE_TESSELATION_CONTROL"))->c_str()] = RenderingDevice::ShaderStage::SHADER_STAGE_TESSELATION_CONTROL;
	_ShaderStage[(new std::string("SHADER_STAGE_TESSELATION_EVALUATION"))->c_str()] = RenderingDevice::ShaderStage::SHADER_STAGE_TESSELATION_EVALUATION;
	_ShaderStage[(new std::string("SHADER_STAGE_COMPUTE"))->c_str()] = RenderingDevice::ShaderStage::SHADER_STAGE_COMPUTE;
	_ShaderStage[(new std::string("SHADER_STAGE_MAX"))->c_str()] = RenderingDevice::ShaderStage::SHADER_STAGE_MAX;
	_ShaderStage[(new std::string("SHADER_STAGE_VERTEX_BIT"))->c_str()] = RenderingDevice::ShaderStage::SHADER_STAGE_VERTEX_BIT;
	_ShaderStage[(new std::string("SHADER_STAGE_FRAGMENT_BIT"))->c_str()] = RenderingDevice::ShaderStage::SHADER_STAGE_FRAGMENT_BIT;
	_ShaderStage[(new std::string("SHADER_STAGE_TESSELATION_CONTROL_BIT"))->c_str()] = RenderingDevice::ShaderStage::SHADER_STAGE_TESSELATION_CONTROL_BIT;
	_ShaderStage[(new std::string("SHADER_STAGE_TESSELATION_EVALUATION_BIT"))->c_str()] = RenderingDevice::ShaderStage::SHADER_STAGE_TESSELATION_EVALUATION_BIT;
	_ShaderStage[(new std::string("SHADER_STAGE_COMPUTE_BIT"))->c_str()] = RenderingDevice::ShaderStage::SHADER_STAGE_COMPUTE_BIT;
	_module.add("ShaderStage", std::move(_ShaderStage));
	qjs::Value _ShaderLanguage = context->newObject();
	_ShaderLanguage[(new std::string("SHADER_LANGUAGE_GLSL"))->c_str()] = RenderingDevice::ShaderLanguage::SHADER_LANGUAGE_GLSL;
	_ShaderLanguage[(new std::string("SHADER_LANGUAGE_HLSL"))->c_str()] = RenderingDevice::ShaderLanguage::SHADER_LANGUAGE_HLSL;
	_module.add("ShaderLanguage", std::move(_ShaderLanguage));
	qjs::Value _PipelineSpecializationConstantType = context->newObject();
	_PipelineSpecializationConstantType[(new std::string("PIPELINE_SPECIALIZATION_CONSTANT_TYPE_BOOL"))->c_str()] = RenderingDevice::PipelineSpecializationConstantType::PIPELINE_SPECIALIZATION_CONSTANT_TYPE_BOOL;
	_PipelineSpecializationConstantType[(new std::string("PIPELINE_SPECIALIZATION_CONSTANT_TYPE_INT"))->c_str()] = RenderingDevice::PipelineSpecializationConstantType::PIPELINE_SPECIALIZATION_CONSTANT_TYPE_INT;
	_PipelineSpecializationConstantType[(new std::string("PIPELINE_SPECIALIZATION_CONSTANT_TYPE_FLOAT"))->c_str()] = RenderingDevice::PipelineSpecializationConstantType::PIPELINE_SPECIALIZATION_CONSTANT_TYPE_FLOAT;
	_module.add("PipelineSpecializationConstantType", std::move(_PipelineSpecializationConstantType));
	qjs::Value _Limit = context->newObject();
	_Limit[(new std::string("LIMIT_MAX_BOUND_UNIFORM_SETS"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_BOUND_UNIFORM_SETS;
	_Limit[(new std::string("LIMIT_MAX_FRAMEBUFFER_COLOR_ATTACHMENTS"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_FRAMEBUFFER_COLOR_ATTACHMENTS;
	_Limit[(new std::string("LIMIT_MAX_TEXTURES_PER_UNIFORM_SET"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_TEXTURES_PER_UNIFORM_SET;
	_Limit[(new std::string("LIMIT_MAX_SAMPLERS_PER_UNIFORM_SET"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_SAMPLERS_PER_UNIFORM_SET;
	_Limit[(new std::string("LIMIT_MAX_STORAGE_BUFFERS_PER_UNIFORM_SET"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_STORAGE_BUFFERS_PER_UNIFORM_SET;
	_Limit[(new std::string("LIMIT_MAX_STORAGE_IMAGES_PER_UNIFORM_SET"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_STORAGE_IMAGES_PER_UNIFORM_SET;
	_Limit[(new std::string("LIMIT_MAX_UNIFORM_BUFFERS_PER_UNIFORM_SET"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_UNIFORM_BUFFERS_PER_UNIFORM_SET;
	_Limit[(new std::string("LIMIT_MAX_DRAW_INDEXED_INDEX"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_DRAW_INDEXED_INDEX;
	_Limit[(new std::string("LIMIT_MAX_FRAMEBUFFER_HEIGHT"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_FRAMEBUFFER_HEIGHT;
	_Limit[(new std::string("LIMIT_MAX_FRAMEBUFFER_WIDTH"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_FRAMEBUFFER_WIDTH;
	_Limit[(new std::string("LIMIT_MAX_TEXTURE_ARRAY_LAYERS"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_TEXTURE_ARRAY_LAYERS;
	_Limit[(new std::string("LIMIT_MAX_TEXTURE_SIZE_1D"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_TEXTURE_SIZE_1D;
	_Limit[(new std::string("LIMIT_MAX_TEXTURE_SIZE_2D"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_TEXTURE_SIZE_2D;
	_Limit[(new std::string("LIMIT_MAX_TEXTURE_SIZE_3D"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_TEXTURE_SIZE_3D;
	_Limit[(new std::string("LIMIT_MAX_TEXTURE_SIZE_CUBE"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_TEXTURE_SIZE_CUBE;
	_Limit[(new std::string("LIMIT_MAX_TEXTURES_PER_SHADER_STAGE"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_TEXTURES_PER_SHADER_STAGE;
	_Limit[(new std::string("LIMIT_MAX_SAMPLERS_PER_SHADER_STAGE"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_SAMPLERS_PER_SHADER_STAGE;
	_Limit[(new std::string("LIMIT_MAX_STORAGE_BUFFERS_PER_SHADER_STAGE"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_STORAGE_BUFFERS_PER_SHADER_STAGE;
	_Limit[(new std::string("LIMIT_MAX_STORAGE_IMAGES_PER_SHADER_STAGE"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_STORAGE_IMAGES_PER_SHADER_STAGE;
	_Limit[(new std::string("LIMIT_MAX_UNIFORM_BUFFERS_PER_SHADER_STAGE"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_UNIFORM_BUFFERS_PER_SHADER_STAGE;
	_Limit[(new std::string("LIMIT_MAX_PUSH_CONSTANT_SIZE"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_PUSH_CONSTANT_SIZE;
	_Limit[(new std::string("LIMIT_MAX_UNIFORM_BUFFER_SIZE"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_UNIFORM_BUFFER_SIZE;
	_Limit[(new std::string("LIMIT_MAX_VERTEX_INPUT_ATTRIBUTE_OFFSET"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_VERTEX_INPUT_ATTRIBUTE_OFFSET;
	_Limit[(new std::string("LIMIT_MAX_VERTEX_INPUT_ATTRIBUTES"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_VERTEX_INPUT_ATTRIBUTES;
	_Limit[(new std::string("LIMIT_MAX_VERTEX_INPUT_BINDINGS"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_VERTEX_INPUT_BINDINGS;
	_Limit[(new std::string("LIMIT_MAX_VERTEX_INPUT_BINDING_STRIDE"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_VERTEX_INPUT_BINDING_STRIDE;
	_Limit[(new std::string("LIMIT_MIN_UNIFORM_BUFFER_OFFSET_ALIGNMENT"))->c_str()] = RenderingDevice::Limit::LIMIT_MIN_UNIFORM_BUFFER_OFFSET_ALIGNMENT;
	_Limit[(new std::string("LIMIT_MAX_COMPUTE_SHARED_MEMORY_SIZE"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_COMPUTE_SHARED_MEMORY_SIZE;
	_Limit[(new std::string("LIMIT_MAX_COMPUTE_WORKGROUP_COUNT_X"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_COMPUTE_WORKGROUP_COUNT_X;
	_Limit[(new std::string("LIMIT_MAX_COMPUTE_WORKGROUP_COUNT_Y"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_COMPUTE_WORKGROUP_COUNT_Y;
	_Limit[(new std::string("LIMIT_MAX_COMPUTE_WORKGROUP_COUNT_Z"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_COMPUTE_WORKGROUP_COUNT_Z;
	_Limit[(new std::string("LIMIT_MAX_COMPUTE_WORKGROUP_INVOCATIONS"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_COMPUTE_WORKGROUP_INVOCATIONS;
	_Limit[(new std::string("LIMIT_MAX_COMPUTE_WORKGROUP_SIZE_X"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_COMPUTE_WORKGROUP_SIZE_X;
	_Limit[(new std::string("LIMIT_MAX_COMPUTE_WORKGROUP_SIZE_Y"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_COMPUTE_WORKGROUP_SIZE_Y;
	_Limit[(new std::string("LIMIT_MAX_COMPUTE_WORKGROUP_SIZE_Z"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_COMPUTE_WORKGROUP_SIZE_Z;
	_Limit[(new std::string("LIMIT_MAX_VIEWPORT_DIMENSIONS_X"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_VIEWPORT_DIMENSIONS_X;
	_Limit[(new std::string("LIMIT_MAX_VIEWPORT_DIMENSIONS_Y"))->c_str()] = RenderingDevice::Limit::LIMIT_MAX_VIEWPORT_DIMENSIONS_Y;
	_module.add("Limit", std::move(_Limit));
	qjs::Value _MemoryType = context->newObject();
	_MemoryType[(new std::string("MEMORY_TEXTURES"))->c_str()] = RenderingDevice::MemoryType::MEMORY_TEXTURES;
	_MemoryType[(new std::string("MEMORY_BUFFERS"))->c_str()] = RenderingDevice::MemoryType::MEMORY_BUFFERS;
	_MemoryType[(new std::string("MEMORY_TOTAL"))->c_str()] = RenderingDevice::MemoryType::MEMORY_TOTAL;
	_module.add("MemoryType", std::move(_MemoryType));
}