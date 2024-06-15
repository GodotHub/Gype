#include <godot_cpp/classes/rendering_device.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/variant/vector3.hpp>
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
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_color_array.hpp>
#include <godot_cpp/variant/packed_int64_array.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RenderingDevice() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RenderingDevice>("RenderingDevice")
            .constructor<>()
            .base<Object>()
            .static_fun<&RenderingDevice::INVALID_ID>("INVALID_ID")
            .static_fun<&RenderingDevice::INVALID_FORMAT_ID>("INVALID_FORMAT_ID")
            .fun<static_cast<RID(RenderingDevice::*)(const Ref<RDTextureFormat> &,const Ref<RDTextureView> &,const TypedArray<PackedByteArray> &)>(&RenderingDevice::texture_create)>("texture_create")
            .fun<static_cast<RID(RenderingDevice::*)(const Ref<RDTextureView> &,const RID &)>(&RenderingDevice::texture_create_shared)>("texture_create_shared")
            .fun<static_cast<RID(RenderingDevice::*)(const Ref<RDTextureView> &,const RID &,uint32_t,uint32_t,uint32_t,RenderingDevice::TextureSliceType)>(&RenderingDevice::texture_create_shared_from_slice)>("texture_create_shared_from_slice")
            .fun<static_cast<RID(RenderingDevice::*)(RenderingDevice::TextureType,RenderingDevice::DataFormat,RenderingDevice::TextureSamples,BitField<RenderingDevice::TextureUsageBits>,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(&RenderingDevice::texture_create_from_extension)>("texture_create_from_extension")
            .fun<static_cast<Error(RenderingDevice::*)(const RID &,uint32_t,const PackedByteArray &)>(&RenderingDevice::texture_update)>("texture_update")
            .fun<static_cast<PackedByteArray(RenderingDevice::*)(const RID &,uint32_t)>(&RenderingDevice::texture_get_data)>("texture_get_data")
            .fun<static_cast<bool(RenderingDevice::*)(RenderingDevice::DataFormat,BitField<RenderingDevice::TextureUsageBits>)const>(&RenderingDevice::texture_is_format_supported_for_usage)>("texture_is_format_supported_for_usage")
            .fun<static_cast<bool(RenderingDevice::*)(const RID &)>(&RenderingDevice::texture_is_shared)>("texture_is_shared")
            .fun<static_cast<bool(RenderingDevice::*)(const RID &)>(&RenderingDevice::texture_is_valid)>("texture_is_valid")
            .fun<static_cast<Error(RenderingDevice::*)(const RID &,const RID &,const Vector3 &,const Vector3 &,const Vector3 &,uint32_t,uint32_t,uint32_t,uint32_t)>(&RenderingDevice::texture_copy)>("texture_copy")
            .fun<static_cast<Error(RenderingDevice::*)(const RID &,const Color &,uint32_t,uint32_t,uint32_t,uint32_t)>(&RenderingDevice::texture_clear)>("texture_clear")
            .fun<static_cast<Error(RenderingDevice::*)(const RID &,const RID &)>(&RenderingDevice::texture_resolve_multisample)>("texture_resolve_multisample")
            .fun<static_cast<Ref<RDTextureFormat>(RenderingDevice::*)(const RID &)>(&RenderingDevice::texture_get_format)>("texture_get_format")
            .fun<static_cast<uint64_t(RenderingDevice::*)(const RID &)>(&RenderingDevice::texture_get_native_handle)>("texture_get_native_handle")
            .fun<static_cast<int64_t(RenderingDevice::*)(const TypedArray<RDAttachmentFormat> &,uint32_t)>(&RenderingDevice::framebuffer_format_create)>("framebuffer_format_create")
            .fun<static_cast<int64_t(RenderingDevice::*)(const TypedArray<RDAttachmentFormat> &,const TypedArray<RDFramebufferPass> &,uint32_t)>(&RenderingDevice::framebuffer_format_create_multipass)>("framebuffer_format_create_multipass")
            .fun<static_cast<int64_t(RenderingDevice::*)(RenderingDevice::TextureSamples)>(&RenderingDevice::framebuffer_format_create_empty)>("framebuffer_format_create_empty")
            .fun<static_cast<RenderingDevice::TextureSamples(RenderingDevice::*)(int64_t,uint32_t)>(&RenderingDevice::framebuffer_format_get_texture_samples)>("framebuffer_format_get_texture_samples")
            .fun<static_cast<RID(RenderingDevice::*)(const TypedArray<RID> &,int64_t,uint32_t)>(&RenderingDevice::framebuffer_create)>("framebuffer_create")
            .fun<static_cast<RID(RenderingDevice::*)(const TypedArray<RID> &,const TypedArray<RDFramebufferPass> &,int64_t,uint32_t)>(&RenderingDevice::framebuffer_create_multipass)>("framebuffer_create_multipass")
            .fun<static_cast<RID(RenderingDevice::*)(const Vector2i &,RenderingDevice::TextureSamples,int64_t)>(&RenderingDevice::framebuffer_create_empty)>("framebuffer_create_empty")
            .fun<static_cast<int64_t(RenderingDevice::*)(const RID &)>(&RenderingDevice::framebuffer_get_format)>("framebuffer_get_format")
            .fun<static_cast<bool(RenderingDevice::*)(const RID &)const>(&RenderingDevice::framebuffer_is_valid)>("framebuffer_is_valid")
            .fun<static_cast<RID(RenderingDevice::*)(const Ref<RDSamplerState> &)>(&RenderingDevice::sampler_create)>("sampler_create")
            .fun<static_cast<bool(RenderingDevice::*)(RenderingDevice::DataFormat,RenderingDevice::SamplerFilter)const>(&RenderingDevice::sampler_is_format_supported_for_filter)>("sampler_is_format_supported_for_filter")
            .fun<static_cast<RID(RenderingDevice::*)(uint32_t,const PackedByteArray &,bool)>(&RenderingDevice::vertex_buffer_create)>("vertex_buffer_create")
            .fun<static_cast<int64_t(RenderingDevice::*)(const TypedArray<RDVertexAttribute> &)>(&RenderingDevice::vertex_format_create)>("vertex_format_create")
            .fun<static_cast<RID(RenderingDevice::*)(uint32_t,int64_t,const TypedArray<RID> &,const PackedInt64Array &)>(&RenderingDevice::vertex_array_create)>("vertex_array_create")
            .fun<static_cast<RID(RenderingDevice::*)(uint32_t,RenderingDevice::IndexBufferFormat,const PackedByteArray &,bool)>(&RenderingDevice::index_buffer_create)>("index_buffer_create")
            .fun<static_cast<RID(RenderingDevice::*)(const RID &,uint32_t,uint32_t)>(&RenderingDevice::index_array_create)>("index_array_create")
            .fun<static_cast<Ref<RDShaderSPIRV>(RenderingDevice::*)(const Ref<RDShaderSource> &,bool)>(&RenderingDevice::shader_compile_spirv_from_source)>("shader_compile_spirv_from_source")
            .fun<static_cast<PackedByteArray(RenderingDevice::*)(const Ref<RDShaderSPIRV> &,const String &)>(&RenderingDevice::shader_compile_binary_from_spirv)>("shader_compile_binary_from_spirv")
            .fun<static_cast<RID(RenderingDevice::*)(const Ref<RDShaderSPIRV> &,const String &)>(&RenderingDevice::shader_create_from_spirv)>("shader_create_from_spirv")
            .fun<static_cast<RID(RenderingDevice::*)(const PackedByteArray &,const RID &)>(&RenderingDevice::shader_create_from_bytecode)>("shader_create_from_bytecode")
            .fun<static_cast<RID(RenderingDevice::*)()>(&RenderingDevice::shader_create_placeholder)>("shader_create_placeholder")
            .fun<static_cast<uint64_t(RenderingDevice::*)(const RID &)>(&RenderingDevice::shader_get_vertex_input_attribute_mask)>("shader_get_vertex_input_attribute_mask")
            .fun<static_cast<RID(RenderingDevice::*)(uint32_t,const PackedByteArray &)>(&RenderingDevice::uniform_buffer_create)>("uniform_buffer_create")
            .fun<static_cast<RID(RenderingDevice::*)(uint32_t,const PackedByteArray &,BitField<RenderingDevice::StorageBufferUsage>)>(&RenderingDevice::storage_buffer_create)>("storage_buffer_create")
            .fun<static_cast<RID(RenderingDevice::*)(uint32_t,RenderingDevice::DataFormat,const PackedByteArray &)>(&RenderingDevice::texture_buffer_create)>("texture_buffer_create")
            .fun<static_cast<RID(RenderingDevice::*)(const TypedArray<RDUniform> &,const RID &,uint32_t)>(&RenderingDevice::uniform_set_create)>("uniform_set_create")
            .fun<static_cast<bool(RenderingDevice::*)(const RID &)>(&RenderingDevice::uniform_set_is_valid)>("uniform_set_is_valid")
            .fun<static_cast<Error(RenderingDevice::*)(const RID &,const RID &,uint32_t,uint32_t,uint32_t)>(&RenderingDevice::buffer_copy)>("buffer_copy")
            .fun<static_cast<Error(RenderingDevice::*)(const RID &,uint32_t,uint32_t,const PackedByteArray &)>(&RenderingDevice::buffer_update)>("buffer_update")
            .fun<static_cast<Error(RenderingDevice::*)(const RID &,uint32_t,uint32_t)>(&RenderingDevice::buffer_clear)>("buffer_clear")
            .fun<static_cast<PackedByteArray(RenderingDevice::*)(const RID &,uint32_t,uint32_t)>(&RenderingDevice::buffer_get_data)>("buffer_get_data")
            .fun<static_cast<RID(RenderingDevice::*)(const RID &,int64_t,int64_t,RenderingDevice::RenderPrimitive,const Ref<RDPipelineRasterizationState> &,const Ref<RDPipelineMultisampleState> &,const Ref<RDPipelineDepthStencilState> &,const Ref<RDPipelineColorBlendState> &,BitField<RenderingDevice::PipelineDynamicStateFlags>,uint32_t,const TypedArray<RDPipelineSpecializationConstant> &)>(&RenderingDevice::render_pipeline_create)>("render_pipeline_create")
            .fun<static_cast<bool(RenderingDevice::*)(const RID &)>(&RenderingDevice::render_pipeline_is_valid)>("render_pipeline_is_valid")
            .fun<static_cast<RID(RenderingDevice::*)(const RID &,const TypedArray<RDPipelineSpecializationConstant> &)>(&RenderingDevice::compute_pipeline_create)>("compute_pipeline_create")
            .fun<static_cast<bool(RenderingDevice::*)(const RID &)>(&RenderingDevice::compute_pipeline_is_valid)>("compute_pipeline_is_valid")
            .fun<static_cast<int32_t(RenderingDevice::*)(int32_t)const>(&RenderingDevice::screen_get_width)>("screen_get_width")
            .fun<static_cast<int32_t(RenderingDevice::*)(int32_t)const>(&RenderingDevice::screen_get_height)>("screen_get_height")
            .fun<static_cast<int64_t(RenderingDevice::*)(int32_t)const>(&RenderingDevice::screen_get_framebuffer_format)>("screen_get_framebuffer_format")
            .fun<static_cast<int64_t(RenderingDevice::*)(int32_t,const Color &)>(&RenderingDevice::draw_list_begin_for_screen)>("draw_list_begin_for_screen")
            .fun<static_cast<int64_t(RenderingDevice::*)(const RID &,RenderingDevice::InitialAction,RenderingDevice::FinalAction,RenderingDevice::InitialAction,RenderingDevice::FinalAction,const PackedColorArray &,double,uint32_t,const Rect2 &)>(&RenderingDevice::draw_list_begin)>("draw_list_begin")
            .fun<static_cast<PackedInt64Array(RenderingDevice::*)(const RID &,uint32_t,RenderingDevice::InitialAction,RenderingDevice::FinalAction,RenderingDevice::InitialAction,RenderingDevice::FinalAction,const PackedColorArray &,double,uint32_t,const Rect2 &,const TypedArray<RID> &)>(&RenderingDevice::draw_list_begin_split)>("draw_list_begin_split")
            .fun<static_cast<void(RenderingDevice::*)(int64_t,const Color &)>(&RenderingDevice::draw_list_set_blend_constants)>("draw_list_set_blend_constants")
            .fun<static_cast<void(RenderingDevice::*)(int64_t,const RID &)>(&RenderingDevice::draw_list_bind_render_pipeline)>("draw_list_bind_render_pipeline")
            .fun<static_cast<void(RenderingDevice::*)(int64_t,const RID &,uint32_t)>(&RenderingDevice::draw_list_bind_uniform_set)>("draw_list_bind_uniform_set")
            .fun<static_cast<void(RenderingDevice::*)(int64_t,const RID &)>(&RenderingDevice::draw_list_bind_vertex_array)>("draw_list_bind_vertex_array")
            .fun<static_cast<void(RenderingDevice::*)(int64_t,const RID &)>(&RenderingDevice::draw_list_bind_index_array)>("draw_list_bind_index_array")
            .fun<static_cast<void(RenderingDevice::*)(int64_t,const PackedByteArray &,uint32_t)>(&RenderingDevice::draw_list_set_push_constant)>("draw_list_set_push_constant")
            .fun<static_cast<void(RenderingDevice::*)(int64_t,bool,uint32_t,uint32_t)>(&RenderingDevice::draw_list_draw)>("draw_list_draw")
            .fun<static_cast<void(RenderingDevice::*)(int64_t,const Rect2 &)>(&RenderingDevice::draw_list_enable_scissor)>("draw_list_enable_scissor")
            .fun<static_cast<void(RenderingDevice::*)(int64_t)>(&RenderingDevice::draw_list_disable_scissor)>("draw_list_disable_scissor")
            .fun<static_cast<int64_t(RenderingDevice::*)()>(&RenderingDevice::draw_list_switch_to_next_pass)>("draw_list_switch_to_next_pass")
            .fun<static_cast<PackedInt64Array(RenderingDevice::*)(uint32_t)>(&RenderingDevice::draw_list_switch_to_next_pass_split)>("draw_list_switch_to_next_pass_split")
            .fun<static_cast<void(RenderingDevice::*)()>(&RenderingDevice::draw_list_end)>("draw_list_end")
            .fun<static_cast<int64_t(RenderingDevice::*)()>(&RenderingDevice::compute_list_begin)>("compute_list_begin")
            .fun<static_cast<void(RenderingDevice::*)(int64_t,const RID &)>(&RenderingDevice::compute_list_bind_compute_pipeline)>("compute_list_bind_compute_pipeline")
            .fun<static_cast<void(RenderingDevice::*)(int64_t,const PackedByteArray &,uint32_t)>(&RenderingDevice::compute_list_set_push_constant)>("compute_list_set_push_constant")
            .fun<static_cast<void(RenderingDevice::*)(int64_t,const RID &,uint32_t)>(&RenderingDevice::compute_list_bind_uniform_set)>("compute_list_bind_uniform_set")
            .fun<static_cast<void(RenderingDevice::*)(int64_t,uint32_t,uint32_t,uint32_t)>(&RenderingDevice::compute_list_dispatch)>("compute_list_dispatch")
            .fun<static_cast<void(RenderingDevice::*)(int64_t,const RID &,uint32_t)>(&RenderingDevice::compute_list_dispatch_indirect)>("compute_list_dispatch_indirect")
            .fun<static_cast<void(RenderingDevice::*)(int64_t)>(&RenderingDevice::compute_list_add_barrier)>("compute_list_add_barrier")
            .fun<static_cast<void(RenderingDevice::*)()>(&RenderingDevice::compute_list_end)>("compute_list_end")
            .fun<static_cast<void(RenderingDevice::*)(const RID &)>(&RenderingDevice::free_rid)>("free_rid")
            .fun<static_cast<void(RenderingDevice::*)(const String &)>(&RenderingDevice::capture_timestamp)>("capture_timestamp")
            .fun<static_cast<uint32_t(RenderingDevice::*)()const>(&RenderingDevice::get_captured_timestamps_count)>("get_captured_timestamps_count")
            .fun<static_cast<uint64_t(RenderingDevice::*)()const>(&RenderingDevice::get_captured_timestamps_frame)>("get_captured_timestamps_frame")
            .fun<static_cast<uint64_t(RenderingDevice::*)(uint32_t)const>(&RenderingDevice::get_captured_timestamp_gpu_time)>("get_captured_timestamp_gpu_time")
            .fun<static_cast<uint64_t(RenderingDevice::*)(uint32_t)const>(&RenderingDevice::get_captured_timestamp_cpu_time)>("get_captured_timestamp_cpu_time")
            .fun<static_cast<String(RenderingDevice::*)(uint32_t)const>(&RenderingDevice::get_captured_timestamp_name)>("get_captured_timestamp_name")
            .fun<static_cast<uint64_t(RenderingDevice::*)(RenderingDevice::Limit)const>(&RenderingDevice::limit_get)>("limit_get")
            .fun<static_cast<uint32_t(RenderingDevice::*)()const>(&RenderingDevice::get_frame_delay)>("get_frame_delay")
            .fun<static_cast<void(RenderingDevice::*)()>(&RenderingDevice::submit)>("submit")
            .fun<static_cast<void(RenderingDevice::*)()>(&RenderingDevice::sync)>("sync")
            .fun<static_cast<void(RenderingDevice::*)(BitField<RenderingDevice::BarrierMask>,BitField<RenderingDevice::BarrierMask>)>(&RenderingDevice::barrier)>("barrier")
            .fun<static_cast<void(RenderingDevice::*)()>(&RenderingDevice::full_barrier)>("full_barrier")
            .fun<static_cast<RenderingDevice *(RenderingDevice::*)()>(&RenderingDevice::create_local_device)>("create_local_device")
            .fun<static_cast<void(RenderingDevice::*)(const RID &,const String &)>(&RenderingDevice::set_resource_name)>("set_resource_name")
            .fun<static_cast<void(RenderingDevice::*)(const String &,const Color &)>(&RenderingDevice::draw_command_begin_label)>("draw_command_begin_label")
            .fun<static_cast<void(RenderingDevice::*)(const String &,const Color &)>(&RenderingDevice::draw_command_insert_label)>("draw_command_insert_label")
            .fun<static_cast<void(RenderingDevice::*)()>(&RenderingDevice::draw_command_end_label)>("draw_command_end_label")
            .fun<static_cast<String(RenderingDevice::*)()const>(&RenderingDevice::get_device_vendor_name)>("get_device_vendor_name")
            .fun<static_cast<String(RenderingDevice::*)()const>(&RenderingDevice::get_device_name)>("get_device_name")
            .fun<static_cast<String(RenderingDevice::*)()const>(&RenderingDevice::get_device_pipeline_cache_uuid)>("get_device_pipeline_cache_uuid")
            .fun<static_cast<uint64_t(RenderingDevice::*)(RenderingDevice::MemoryType)const>(&RenderingDevice::get_memory_usage)>("get_memory_usage")
            .fun<static_cast<uint64_t(RenderingDevice::*)(RenderingDevice::DriverResource,const RID &,uint64_t)>(&RenderingDevice::get_driver_resource)>("get_driver_resource")
;    qjs::Value _DeviceType = context->newObject();
    _DeviceType["DEVICE_TYPE_OTHER"] = RenderingDevice::DeviceType::DEVICE_TYPE_OTHER;
    _DeviceType["DEVICE_TYPE_INTEGRATED_GPU"] = RenderingDevice::DeviceType::DEVICE_TYPE_INTEGRATED_GPU;
    _DeviceType["DEVICE_TYPE_DISCRETE_GPU"] = RenderingDevice::DeviceType::DEVICE_TYPE_DISCRETE_GPU;
    _DeviceType["DEVICE_TYPE_VIRTUAL_GPU"] = RenderingDevice::DeviceType::DEVICE_TYPE_VIRTUAL_GPU;
    _DeviceType["DEVICE_TYPE_CPU"] = RenderingDevice::DeviceType::DEVICE_TYPE_CPU;
    _DeviceType["DEVICE_TYPE_MAX"] = RenderingDevice::DeviceType::DEVICE_TYPE_MAX;
    _module.add("DeviceType", std::move(_DeviceType));
    qjs::Value _DriverResource = context->newObject();
    _DriverResource["DRIVER_RESOURCE_LOGICAL_DEVICE"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_LOGICAL_DEVICE;
    _DriverResource["DRIVER_RESOURCE_PHYSICAL_DEVICE"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_PHYSICAL_DEVICE;
    _DriverResource["DRIVER_RESOURCE_TOPMOST_OBJECT"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_TOPMOST_OBJECT;
    _DriverResource["DRIVER_RESOURCE_COMMAND_QUEUE"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_COMMAND_QUEUE;
    _DriverResource["DRIVER_RESOURCE_QUEUE_FAMILY"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_QUEUE_FAMILY;
    _DriverResource["DRIVER_RESOURCE_TEXTURE"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_TEXTURE;
    _DriverResource["DRIVER_RESOURCE_TEXTURE_VIEW"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_TEXTURE_VIEW;
    _DriverResource["DRIVER_RESOURCE_TEXTURE_DATA_FORMAT"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_TEXTURE_DATA_FORMAT;
    _DriverResource["DRIVER_RESOURCE_SAMPLER"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_SAMPLER;
    _DriverResource["DRIVER_RESOURCE_UNIFORM_SET"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_UNIFORM_SET;
    _DriverResource["DRIVER_RESOURCE_BUFFER"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_BUFFER;
    _DriverResource["DRIVER_RESOURCE_COMPUTE_PIPELINE"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_COMPUTE_PIPELINE;
    _DriverResource["DRIVER_RESOURCE_RENDER_PIPELINE"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_RENDER_PIPELINE;
    _DriverResource["DRIVER_RESOURCE_VULKAN_DEVICE"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_DEVICE;
    _DriverResource["DRIVER_RESOURCE_VULKAN_PHYSICAL_DEVICE"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_PHYSICAL_DEVICE;
    _DriverResource["DRIVER_RESOURCE_VULKAN_INSTANCE"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_INSTANCE;
    _DriverResource["DRIVER_RESOURCE_VULKAN_QUEUE"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_QUEUE;
    _DriverResource["DRIVER_RESOURCE_VULKAN_QUEUE_FAMILY_INDEX"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_QUEUE_FAMILY_INDEX;
    _DriverResource["DRIVER_RESOURCE_VULKAN_IMAGE"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_IMAGE;
    _DriverResource["DRIVER_RESOURCE_VULKAN_IMAGE_VIEW"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_IMAGE_VIEW;
    _DriverResource["DRIVER_RESOURCE_VULKAN_IMAGE_NATIVE_TEXTURE_FORMAT"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_IMAGE_NATIVE_TEXTURE_FORMAT;
    _DriverResource["DRIVER_RESOURCE_VULKAN_SAMPLER"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_SAMPLER;
    _DriverResource["DRIVER_RESOURCE_VULKAN_DESCRIPTOR_SET"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_DESCRIPTOR_SET;
    _DriverResource["DRIVER_RESOURCE_VULKAN_BUFFER"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_BUFFER;
    _DriverResource["DRIVER_RESOURCE_VULKAN_COMPUTE_PIPELINE"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_COMPUTE_PIPELINE;
    _DriverResource["DRIVER_RESOURCE_VULKAN_RENDER_PIPELINE"] = RenderingDevice::DriverResource::DRIVER_RESOURCE_VULKAN_RENDER_PIPELINE;
    _module.add("DriverResource", std::move(_DriverResource));
    qjs::Value _DataFormat = context->newObject();
    _DataFormat["DATA_FORMAT_R4G4_UNORM_PACK8"] = RenderingDevice::DataFormat::DATA_FORMAT_R4G4_UNORM_PACK8;
    _DataFormat["DATA_FORMAT_R4G4B4A4_UNORM_PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_R4G4B4A4_UNORM_PACK16;
    _DataFormat["DATA_FORMAT_B4G4R4A4_UNORM_PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_B4G4R4A4_UNORM_PACK16;
    _DataFormat["DATA_FORMAT_R5G6B5_UNORM_PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_R5G6B5_UNORM_PACK16;
    _DataFormat["DATA_FORMAT_B5G6R5_UNORM_PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_B5G6R5_UNORM_PACK16;
    _DataFormat["DATA_FORMAT_R5G5B5A1_UNORM_PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_R5G5B5A1_UNORM_PACK16;
    _DataFormat["DATA_FORMAT_B5G5R5A1_UNORM_PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_B5G5R5A1_UNORM_PACK16;
    _DataFormat["DATA_FORMAT_A1R5G5B5_UNORM_PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_A1R5G5B5_UNORM_PACK16;
    _DataFormat["DATA_FORMAT_R8_UNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_R8_UNORM;
    _DataFormat["DATA_FORMAT_R8_SNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_R8_SNORM;
    _DataFormat["DATA_FORMAT_R8_USCALED"] = RenderingDevice::DataFormat::DATA_FORMAT_R8_USCALED;
    _DataFormat["DATA_FORMAT_R8_SSCALED"] = RenderingDevice::DataFormat::DATA_FORMAT_R8_SSCALED;
    _DataFormat["DATA_FORMAT_R8_UINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R8_UINT;
    _DataFormat["DATA_FORMAT_R8_SINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R8_SINT;
    _DataFormat["DATA_FORMAT_R8_SRGB"] = RenderingDevice::DataFormat::DATA_FORMAT_R8_SRGB;
    _DataFormat["DATA_FORMAT_R8G8_UNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8_UNORM;
    _DataFormat["DATA_FORMAT_R8G8_SNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8_SNORM;
    _DataFormat["DATA_FORMAT_R8G8_USCALED"] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8_USCALED;
    _DataFormat["DATA_FORMAT_R8G8_SSCALED"] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8_SSCALED;
    _DataFormat["DATA_FORMAT_R8G8_UINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8_UINT;
    _DataFormat["DATA_FORMAT_R8G8_SINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8_SINT;
    _DataFormat["DATA_FORMAT_R8G8_SRGB"] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8_SRGB;
    _DataFormat["DATA_FORMAT_R8G8B8_UNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8_UNORM;
    _DataFormat["DATA_FORMAT_R8G8B8_SNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8_SNORM;
    _DataFormat["DATA_FORMAT_R8G8B8_USCALED"] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8_USCALED;
    _DataFormat["DATA_FORMAT_R8G8B8_SSCALED"] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8_SSCALED;
    _DataFormat["DATA_FORMAT_R8G8B8_UINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8_UINT;
    _DataFormat["DATA_FORMAT_R8G8B8_SINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8_SINT;
    _DataFormat["DATA_FORMAT_R8G8B8_SRGB"] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8_SRGB;
    _DataFormat["DATA_FORMAT_B8G8R8_UNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8_UNORM;
    _DataFormat["DATA_FORMAT_B8G8R8_SNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8_SNORM;
    _DataFormat["DATA_FORMAT_B8G8R8_USCALED"] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8_USCALED;
    _DataFormat["DATA_FORMAT_B8G8R8_SSCALED"] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8_SSCALED;
    _DataFormat["DATA_FORMAT_B8G8R8_UINT"] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8_UINT;
    _DataFormat["DATA_FORMAT_B8G8R8_SINT"] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8_SINT;
    _DataFormat["DATA_FORMAT_B8G8R8_SRGB"] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8_SRGB;
    _DataFormat["DATA_FORMAT_R8G8B8A8_UNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8A8_UNORM;
    _DataFormat["DATA_FORMAT_R8G8B8A8_SNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8A8_SNORM;
    _DataFormat["DATA_FORMAT_R8G8B8A8_USCALED"] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8A8_USCALED;
    _DataFormat["DATA_FORMAT_R8G8B8A8_SSCALED"] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8A8_SSCALED;
    _DataFormat["DATA_FORMAT_R8G8B8A8_UINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8A8_UINT;
    _DataFormat["DATA_FORMAT_R8G8B8A8_SINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8A8_SINT;
    _DataFormat["DATA_FORMAT_R8G8B8A8_SRGB"] = RenderingDevice::DataFormat::DATA_FORMAT_R8G8B8A8_SRGB;
    _DataFormat["DATA_FORMAT_B8G8R8A8_UNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8A8_UNORM;
    _DataFormat["DATA_FORMAT_B8G8R8A8_SNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8A8_SNORM;
    _DataFormat["DATA_FORMAT_B8G8R8A8_USCALED"] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8A8_USCALED;
    _DataFormat["DATA_FORMAT_B8G8R8A8_SSCALED"] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8A8_SSCALED;
    _DataFormat["DATA_FORMAT_B8G8R8A8_UINT"] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8A8_UINT;
    _DataFormat["DATA_FORMAT_B8G8R8A8_SINT"] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8A8_SINT;
    _DataFormat["DATA_FORMAT_B8G8R8A8_SRGB"] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8A8_SRGB;
    _DataFormat["DATA_FORMAT_A8B8G8R8_UNORM_PACK32"] = RenderingDevice::DataFormat::DATA_FORMAT_A8B8G8R8_UNORM_PACK32;
    _DataFormat["DATA_FORMAT_A8B8G8R8_SNORM_PACK32"] = RenderingDevice::DataFormat::DATA_FORMAT_A8B8G8R8_SNORM_PACK32;
    _DataFormat["DATA_FORMAT_A8B8G8R8_USCALED_PACK32"] = RenderingDevice::DataFormat::DATA_FORMAT_A8B8G8R8_USCALED_PACK32;
    _DataFormat["DATA_FORMAT_A8B8G8R8_SSCALED_PACK32"] = RenderingDevice::DataFormat::DATA_FORMAT_A8B8G8R8_SSCALED_PACK32;
    _DataFormat["DATA_FORMAT_A8B8G8R8_UINT_PACK32"] = RenderingDevice::DataFormat::DATA_FORMAT_A8B8G8R8_UINT_PACK32;
    _DataFormat["DATA_FORMAT_A8B8G8R8_SINT_PACK32"] = RenderingDevice::DataFormat::DATA_FORMAT_A8B8G8R8_SINT_PACK32;
    _DataFormat["DATA_FORMAT_A8B8G8R8_SRGB_PACK32"] = RenderingDevice::DataFormat::DATA_FORMAT_A8B8G8R8_SRGB_PACK32;
    _DataFormat["DATA_FORMAT_A2R10G10B10_UNORM_PACK32"] = RenderingDevice::DataFormat::DATA_FORMAT_A2R10G10B10_UNORM_PACK32;
    _DataFormat["DATA_FORMAT_A2R10G10B10_SNORM_PACK32"] = RenderingDevice::DataFormat::DATA_FORMAT_A2R10G10B10_SNORM_PACK32;
    _DataFormat["DATA_FORMAT_A2R10G10B10_USCALED_PACK32"] = RenderingDevice::DataFormat::DATA_FORMAT_A2R10G10B10_USCALED_PACK32;
    _DataFormat["DATA_FORMAT_A2R10G10B10_SSCALED_PACK32"] = RenderingDevice::DataFormat::DATA_FORMAT_A2R10G10B10_SSCALED_PACK32;
    _DataFormat["DATA_FORMAT_A2R10G10B10_UINT_PACK32"] = RenderingDevice::DataFormat::DATA_FORMAT_A2R10G10B10_UINT_PACK32;
    _DataFormat["DATA_FORMAT_A2R10G10B10_SINT_PACK32"] = RenderingDevice::DataFormat::DATA_FORMAT_A2R10G10B10_SINT_PACK32;
    _DataFormat["DATA_FORMAT_A2B10G10R10_UNORM_PACK32"] = RenderingDevice::DataFormat::DATA_FORMAT_A2B10G10R10_UNORM_PACK32;
    _DataFormat["DATA_FORMAT_A2B10G10R10_SNORM_PACK32"] = RenderingDevice::DataFormat::DATA_FORMAT_A2B10G10R10_SNORM_PACK32;
    _DataFormat["DATA_FORMAT_A2B10G10R10_USCALED_PACK32"] = RenderingDevice::DataFormat::DATA_FORMAT_A2B10G10R10_USCALED_PACK32;
    _DataFormat["DATA_FORMAT_A2B10G10R10_SSCALED_PACK32"] = RenderingDevice::DataFormat::DATA_FORMAT_A2B10G10R10_SSCALED_PACK32;
    _DataFormat["DATA_FORMAT_A2B10G10R10_UINT_PACK32"] = RenderingDevice::DataFormat::DATA_FORMAT_A2B10G10R10_UINT_PACK32;
    _DataFormat["DATA_FORMAT_A2B10G10R10_SINT_PACK32"] = RenderingDevice::DataFormat::DATA_FORMAT_A2B10G10R10_SINT_PACK32;
    _DataFormat["DATA_FORMAT_R16_UNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_R16_UNORM;
    _DataFormat["DATA_FORMAT_R16_SNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_R16_SNORM;
    _DataFormat["DATA_FORMAT_R16_USCALED"] = RenderingDevice::DataFormat::DATA_FORMAT_R16_USCALED;
    _DataFormat["DATA_FORMAT_R16_SSCALED"] = RenderingDevice::DataFormat::DATA_FORMAT_R16_SSCALED;
    _DataFormat["DATA_FORMAT_R16_UINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R16_UINT;
    _DataFormat["DATA_FORMAT_R16_SINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R16_SINT;
    _DataFormat["DATA_FORMAT_R16_SFLOAT"] = RenderingDevice::DataFormat::DATA_FORMAT_R16_SFLOAT;
    _DataFormat["DATA_FORMAT_R16G16_UNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16_UNORM;
    _DataFormat["DATA_FORMAT_R16G16_SNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16_SNORM;
    _DataFormat["DATA_FORMAT_R16G16_USCALED"] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16_USCALED;
    _DataFormat["DATA_FORMAT_R16G16_SSCALED"] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16_SSCALED;
    _DataFormat["DATA_FORMAT_R16G16_UINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16_UINT;
    _DataFormat["DATA_FORMAT_R16G16_SINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16_SINT;
    _DataFormat["DATA_FORMAT_R16G16_SFLOAT"] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16_SFLOAT;
    _DataFormat["DATA_FORMAT_R16G16B16_UNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16_UNORM;
    _DataFormat["DATA_FORMAT_R16G16B16_SNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16_SNORM;
    _DataFormat["DATA_FORMAT_R16G16B16_USCALED"] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16_USCALED;
    _DataFormat["DATA_FORMAT_R16G16B16_SSCALED"] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16_SSCALED;
    _DataFormat["DATA_FORMAT_R16G16B16_UINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16_UINT;
    _DataFormat["DATA_FORMAT_R16G16B16_SINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16_SINT;
    _DataFormat["DATA_FORMAT_R16G16B16_SFLOAT"] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16_SFLOAT;
    _DataFormat["DATA_FORMAT_R16G16B16A16_UNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16A16_UNORM;
    _DataFormat["DATA_FORMAT_R16G16B16A16_SNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16A16_SNORM;
    _DataFormat["DATA_FORMAT_R16G16B16A16_USCALED"] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16A16_USCALED;
    _DataFormat["DATA_FORMAT_R16G16B16A16_SSCALED"] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16A16_SSCALED;
    _DataFormat["DATA_FORMAT_R16G16B16A16_UINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16A16_UINT;
    _DataFormat["DATA_FORMAT_R16G16B16A16_SINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16A16_SINT;
    _DataFormat["DATA_FORMAT_R16G16B16A16_SFLOAT"] = RenderingDevice::DataFormat::DATA_FORMAT_R16G16B16A16_SFLOAT;
    _DataFormat["DATA_FORMAT_R32_UINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R32_UINT;
    _DataFormat["DATA_FORMAT_R32_SINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R32_SINT;
    _DataFormat["DATA_FORMAT_R32_SFLOAT"] = RenderingDevice::DataFormat::DATA_FORMAT_R32_SFLOAT;
    _DataFormat["DATA_FORMAT_R32G32_UINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R32G32_UINT;
    _DataFormat["DATA_FORMAT_R32G32_SINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R32G32_SINT;
    _DataFormat["DATA_FORMAT_R32G32_SFLOAT"] = RenderingDevice::DataFormat::DATA_FORMAT_R32G32_SFLOAT;
    _DataFormat["DATA_FORMAT_R32G32B32_UINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R32G32B32_UINT;
    _DataFormat["DATA_FORMAT_R32G32B32_SINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R32G32B32_SINT;
    _DataFormat["DATA_FORMAT_R32G32B32_SFLOAT"] = RenderingDevice::DataFormat::DATA_FORMAT_R32G32B32_SFLOAT;
    _DataFormat["DATA_FORMAT_R32G32B32A32_UINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R32G32B32A32_UINT;
    _DataFormat["DATA_FORMAT_R32G32B32A32_SINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R32G32B32A32_SINT;
    _DataFormat["DATA_FORMAT_R32G32B32A32_SFLOAT"] = RenderingDevice::DataFormat::DATA_FORMAT_R32G32B32A32_SFLOAT;
    _DataFormat["DATA_FORMAT_R64_UINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R64_UINT;
    _DataFormat["DATA_FORMAT_R64_SINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R64_SINT;
    _DataFormat["DATA_FORMAT_R64_SFLOAT"] = RenderingDevice::DataFormat::DATA_FORMAT_R64_SFLOAT;
    _DataFormat["DATA_FORMAT_R64G64_UINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R64G64_UINT;
    _DataFormat["DATA_FORMAT_R64G64_SINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R64G64_SINT;
    _DataFormat["DATA_FORMAT_R64G64_SFLOAT"] = RenderingDevice::DataFormat::DATA_FORMAT_R64G64_SFLOAT;
    _DataFormat["DATA_FORMAT_R64G64B64_UINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R64G64B64_UINT;
    _DataFormat["DATA_FORMAT_R64G64B64_SINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R64G64B64_SINT;
    _DataFormat["DATA_FORMAT_R64G64B64_SFLOAT"] = RenderingDevice::DataFormat::DATA_FORMAT_R64G64B64_SFLOAT;
    _DataFormat["DATA_FORMAT_R64G64B64A64_UINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R64G64B64A64_UINT;
    _DataFormat["DATA_FORMAT_R64G64B64A64_SINT"] = RenderingDevice::DataFormat::DATA_FORMAT_R64G64B64A64_SINT;
    _DataFormat["DATA_FORMAT_R64G64B64A64_SFLOAT"] = RenderingDevice::DataFormat::DATA_FORMAT_R64G64B64A64_SFLOAT;
    _DataFormat["DATA_FORMAT_B10G11R11_UFLOAT_PACK32"] = RenderingDevice::DataFormat::DATA_FORMAT_B10G11R11_UFLOAT_PACK32;
    _DataFormat["DATA_FORMAT_E5B9G9R9_UFLOAT_PACK32"] = RenderingDevice::DataFormat::DATA_FORMAT_E5B9G9R9_UFLOAT_PACK32;
    _DataFormat["DATA_FORMAT_D16_UNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_D16_UNORM;
    _DataFormat["DATA_FORMAT_X8_D24_UNORM_PACK32"] = RenderingDevice::DataFormat::DATA_FORMAT_X8_D24_UNORM_PACK32;
    _DataFormat["DATA_FORMAT_D32_SFLOAT"] = RenderingDevice::DataFormat::DATA_FORMAT_D32_SFLOAT;
    _DataFormat["DATA_FORMAT_S8_UINT"] = RenderingDevice::DataFormat::DATA_FORMAT_S8_UINT;
    _DataFormat["DATA_FORMAT_D16_UNORM_S8_UINT"] = RenderingDevice::DataFormat::DATA_FORMAT_D16_UNORM_S8_UINT;
    _DataFormat["DATA_FORMAT_D24_UNORM_S8_UINT"] = RenderingDevice::DataFormat::DATA_FORMAT_D24_UNORM_S8_UINT;
    _DataFormat["DATA_FORMAT_D32_SFLOAT_S8_UINT"] = RenderingDevice::DataFormat::DATA_FORMAT_D32_SFLOAT_S8_UINT;
    _DataFormat["DATA_FORMAT_BC1_RGB_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_BC1_RGB_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_BC1_RGB_SRGB_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_BC1_RGB_SRGB_BLOCK;
    _DataFormat["DATA_FORMAT_BC1_RGBA_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_BC1_RGBA_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_BC1_RGBA_SRGB_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_BC1_RGBA_SRGB_BLOCK;
    _DataFormat["DATA_FORMAT_BC2_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_BC2_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_BC2_SRGB_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_BC2_SRGB_BLOCK;
    _DataFormat["DATA_FORMAT_BC3_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_BC3_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_BC3_SRGB_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_BC3_SRGB_BLOCK;
    _DataFormat["DATA_FORMAT_BC4_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_BC4_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_BC4_SNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_BC4_SNORM_BLOCK;
    _DataFormat["DATA_FORMAT_BC5_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_BC5_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_BC5_SNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_BC5_SNORM_BLOCK;
    _DataFormat["DATA_FORMAT_BC6H_UFLOAT_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_BC6H_UFLOAT_BLOCK;
    _DataFormat["DATA_FORMAT_BC6H_SFLOAT_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_BC6H_SFLOAT_BLOCK;
    _DataFormat["DATA_FORMAT_BC7_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_BC7_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_BC7_SRGB_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_BC7_SRGB_BLOCK;
    _DataFormat["DATA_FORMAT_ETC2_R8G8B8_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ETC2_R8G8B8_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_ETC2_R8G8B8_SRGB_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ETC2_R8G8B8_SRGB_BLOCK;
    _DataFormat["DATA_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK;
    _DataFormat["DATA_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK;
    _DataFormat["DATA_FORMAT_EAC_R11_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_EAC_R11_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_EAC_R11_SNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_EAC_R11_SNORM_BLOCK;
    _DataFormat["DATA_FORMAT_EAC_R11G11_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_EAC_R11G11_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_EAC_R11G11_SNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_EAC_R11G11_SNORM_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_4x4_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_4x4_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_4x4_SRGB_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_4x4_SRGB_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_5x4_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_5x4_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_5x4_SRGB_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_5x4_SRGB_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_5x5_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_5x5_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_5x5_SRGB_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_5x5_SRGB_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_6x5_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_6x5_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_6x5_SRGB_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_6x5_SRGB_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_6x6_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_6x6_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_6x6_SRGB_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_6x6_SRGB_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_8x5_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_8x5_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_8x5_SRGB_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_8x5_SRGB_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_8x6_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_8x6_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_8x6_SRGB_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_8x6_SRGB_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_8x8_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_8x8_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_8x8_SRGB_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_8x8_SRGB_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_10x5_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_10x5_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_10x5_SRGB_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_10x5_SRGB_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_10x6_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_10x6_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_10x6_SRGB_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_10x6_SRGB_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_10x8_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_10x8_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_10x8_SRGB_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_10x8_SRGB_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_10x10_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_10x10_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_10x10_SRGB_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_10x10_SRGB_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_12x10_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_12x10_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_12x10_SRGB_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_12x10_SRGB_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_12x12_UNORM_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_12x12_UNORM_BLOCK;
    _DataFormat["DATA_FORMAT_ASTC_12x12_SRGB_BLOCK"] = RenderingDevice::DataFormat::DATA_FORMAT_ASTC_12x12_SRGB_BLOCK;
    _DataFormat["DATA_FORMAT_G8B8G8R8_422_UNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_G8B8G8R8_422_UNORM;
    _DataFormat["DATA_FORMAT_B8G8R8G8_422_UNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_B8G8R8G8_422_UNORM;
    _DataFormat["DATA_FORMAT_G8_B8_R8_3PLANE_420_UNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_G8_B8_R8_3PLANE_420_UNORM;
    _DataFormat["DATA_FORMAT_G8_B8R8_2PLANE_420_UNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_G8_B8R8_2PLANE_420_UNORM;
    _DataFormat["DATA_FORMAT_G8_B8_R8_3PLANE_422_UNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_G8_B8_R8_3PLANE_422_UNORM;
    _DataFormat["DATA_FORMAT_G8_B8R8_2PLANE_422_UNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_G8_B8R8_2PLANE_422_UNORM;
    _DataFormat["DATA_FORMAT_G8_B8_R8_3PLANE_444_UNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_G8_B8_R8_3PLANE_444_UNORM;
    _DataFormat["DATA_FORMAT_R10X6_UNORM_PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_R10X6_UNORM_PACK16;
    _DataFormat["DATA_FORMAT_R10X6G10X6_UNORM_2PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_R10X6G10X6_UNORM_2PACK16;
    _DataFormat["DATA_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16;
    _DataFormat["DATA_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16;
    _DataFormat["DATA_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16;
    _DataFormat["DATA_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16;
    _DataFormat["DATA_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16;
    _DataFormat["DATA_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16;
    _DataFormat["DATA_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16;
    _DataFormat["DATA_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16;
    _DataFormat["DATA_FORMAT_R12X4_UNORM_PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_R12X4_UNORM_PACK16;
    _DataFormat["DATA_FORMAT_R12X4G12X4_UNORM_2PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_R12X4G12X4_UNORM_2PACK16;
    _DataFormat["DATA_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16;
    _DataFormat["DATA_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16;
    _DataFormat["DATA_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16;
    _DataFormat["DATA_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16;
    _DataFormat["DATA_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16;
    _DataFormat["DATA_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16;
    _DataFormat["DATA_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16;
    _DataFormat["DATA_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16"] = RenderingDevice::DataFormat::DATA_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16;
    _DataFormat["DATA_FORMAT_G16B16G16R16_422_UNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_G16B16G16R16_422_UNORM;
    _DataFormat["DATA_FORMAT_B16G16R16G16_422_UNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_B16G16R16G16_422_UNORM;
    _DataFormat["DATA_FORMAT_G16_B16_R16_3PLANE_420_UNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_G16_B16_R16_3PLANE_420_UNORM;
    _DataFormat["DATA_FORMAT_G16_B16R16_2PLANE_420_UNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_G16_B16R16_2PLANE_420_UNORM;
    _DataFormat["DATA_FORMAT_G16_B16_R16_3PLANE_422_UNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_G16_B16_R16_3PLANE_422_UNORM;
    _DataFormat["DATA_FORMAT_G16_B16R16_2PLANE_422_UNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_G16_B16R16_2PLANE_422_UNORM;
    _DataFormat["DATA_FORMAT_G16_B16_R16_3PLANE_444_UNORM"] = RenderingDevice::DataFormat::DATA_FORMAT_G16_B16_R16_3PLANE_444_UNORM;
    _DataFormat["DATA_FORMAT_MAX"] = RenderingDevice::DataFormat::DATA_FORMAT_MAX;
    _module.add("DataFormat", std::move(_DataFormat));
    qjs::Value _BarrierMask = context->newObject();
    _BarrierMask["BARRIER_MASK_VERTEX"] = RenderingDevice::BarrierMask::BARRIER_MASK_VERTEX;
    _BarrierMask["BARRIER_MASK_FRAGMENT"] = RenderingDevice::BarrierMask::BARRIER_MASK_FRAGMENT;
    _BarrierMask["BARRIER_MASK_COMPUTE"] = RenderingDevice::BarrierMask::BARRIER_MASK_COMPUTE;
    _BarrierMask["BARRIER_MASK_TRANSFER"] = RenderingDevice::BarrierMask::BARRIER_MASK_TRANSFER;
    _BarrierMask["BARRIER_MASK_RASTER"] = RenderingDevice::BarrierMask::BARRIER_MASK_RASTER;
    _BarrierMask["BARRIER_MASK_ALL_BARRIERS"] = RenderingDevice::BarrierMask::BARRIER_MASK_ALL_BARRIERS;
    _BarrierMask["BARRIER_MASK_NO_BARRIER"] = RenderingDevice::BarrierMask::BARRIER_MASK_NO_BARRIER;
    _module.add("BarrierMask", std::move(_BarrierMask));
    qjs::Value _TextureType = context->newObject();
    _TextureType["TEXTURE_TYPE_1D"] = RenderingDevice::TextureType::TEXTURE_TYPE_1D;
    _TextureType["TEXTURE_TYPE_2D"] = RenderingDevice::TextureType::TEXTURE_TYPE_2D;
    _TextureType["TEXTURE_TYPE_3D"] = RenderingDevice::TextureType::TEXTURE_TYPE_3D;
    _TextureType["TEXTURE_TYPE_CUBE"] = RenderingDevice::TextureType::TEXTURE_TYPE_CUBE;
    _TextureType["TEXTURE_TYPE_1D_ARRAY"] = RenderingDevice::TextureType::TEXTURE_TYPE_1D_ARRAY;
    _TextureType["TEXTURE_TYPE_2D_ARRAY"] = RenderingDevice::TextureType::TEXTURE_TYPE_2D_ARRAY;
    _TextureType["TEXTURE_TYPE_CUBE_ARRAY"] = RenderingDevice::TextureType::TEXTURE_TYPE_CUBE_ARRAY;
    _TextureType["TEXTURE_TYPE_MAX"] = RenderingDevice::TextureType::TEXTURE_TYPE_MAX;
    _module.add("TextureType", std::move(_TextureType));
    qjs::Value _TextureSamples = context->newObject();
    _TextureSamples["TEXTURE_SAMPLES_1"] = RenderingDevice::TextureSamples::TEXTURE_SAMPLES_1;
    _TextureSamples["TEXTURE_SAMPLES_2"] = RenderingDevice::TextureSamples::TEXTURE_SAMPLES_2;
    _TextureSamples["TEXTURE_SAMPLES_4"] = RenderingDevice::TextureSamples::TEXTURE_SAMPLES_4;
    _TextureSamples["TEXTURE_SAMPLES_8"] = RenderingDevice::TextureSamples::TEXTURE_SAMPLES_8;
    _TextureSamples["TEXTURE_SAMPLES_16"] = RenderingDevice::TextureSamples::TEXTURE_SAMPLES_16;
    _TextureSamples["TEXTURE_SAMPLES_32"] = RenderingDevice::TextureSamples::TEXTURE_SAMPLES_32;
    _TextureSamples["TEXTURE_SAMPLES_64"] = RenderingDevice::TextureSamples::TEXTURE_SAMPLES_64;
    _TextureSamples["TEXTURE_SAMPLES_MAX"] = RenderingDevice::TextureSamples::TEXTURE_SAMPLES_MAX;
    _module.add("TextureSamples", std::move(_TextureSamples));
    qjs::Value _TextureUsageBits = context->newObject();
    _TextureUsageBits["TEXTURE_USAGE_SAMPLING_BIT"] = RenderingDevice::TextureUsageBits::TEXTURE_USAGE_SAMPLING_BIT;
    _TextureUsageBits["TEXTURE_USAGE_COLOR_ATTACHMENT_BIT"] = RenderingDevice::TextureUsageBits::TEXTURE_USAGE_COLOR_ATTACHMENT_BIT;
    _TextureUsageBits["TEXTURE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT"] = RenderingDevice::TextureUsageBits::TEXTURE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;
    _TextureUsageBits["TEXTURE_USAGE_STORAGE_BIT"] = RenderingDevice::TextureUsageBits::TEXTURE_USAGE_STORAGE_BIT;
    _TextureUsageBits["TEXTURE_USAGE_STORAGE_ATOMIC_BIT"] = RenderingDevice::TextureUsageBits::TEXTURE_USAGE_STORAGE_ATOMIC_BIT;
    _TextureUsageBits["TEXTURE_USAGE_CPU_READ_BIT"] = RenderingDevice::TextureUsageBits::TEXTURE_USAGE_CPU_READ_BIT;
    _TextureUsageBits["TEXTURE_USAGE_CAN_UPDATE_BIT"] = RenderingDevice::TextureUsageBits::TEXTURE_USAGE_CAN_UPDATE_BIT;
    _TextureUsageBits["TEXTURE_USAGE_CAN_COPY_FROM_BIT"] = RenderingDevice::TextureUsageBits::TEXTURE_USAGE_CAN_COPY_FROM_BIT;
    _TextureUsageBits["TEXTURE_USAGE_CAN_COPY_TO_BIT"] = RenderingDevice::TextureUsageBits::TEXTURE_USAGE_CAN_COPY_TO_BIT;
    _TextureUsageBits["TEXTURE_USAGE_INPUT_ATTACHMENT_BIT"] = RenderingDevice::TextureUsageBits::TEXTURE_USAGE_INPUT_ATTACHMENT_BIT;
    _module.add("TextureUsageBits", std::move(_TextureUsageBits));
    qjs::Value _TextureSwizzle = context->newObject();
    _TextureSwizzle["TEXTURE_SWIZZLE_IDENTITY"] = RenderingDevice::TextureSwizzle::TEXTURE_SWIZZLE_IDENTITY;
    _TextureSwizzle["TEXTURE_SWIZZLE_ZERO"] = RenderingDevice::TextureSwizzle::TEXTURE_SWIZZLE_ZERO;
    _TextureSwizzle["TEXTURE_SWIZZLE_ONE"] = RenderingDevice::TextureSwizzle::TEXTURE_SWIZZLE_ONE;
    _TextureSwizzle["TEXTURE_SWIZZLE_R"] = RenderingDevice::TextureSwizzle::TEXTURE_SWIZZLE_R;
    _TextureSwizzle["TEXTURE_SWIZZLE_G"] = RenderingDevice::TextureSwizzle::TEXTURE_SWIZZLE_G;
    _TextureSwizzle["TEXTURE_SWIZZLE_B"] = RenderingDevice::TextureSwizzle::TEXTURE_SWIZZLE_B;
    _TextureSwizzle["TEXTURE_SWIZZLE_A"] = RenderingDevice::TextureSwizzle::TEXTURE_SWIZZLE_A;
    _TextureSwizzle["TEXTURE_SWIZZLE_MAX"] = RenderingDevice::TextureSwizzle::TEXTURE_SWIZZLE_MAX;
    _module.add("TextureSwizzle", std::move(_TextureSwizzle));
    qjs::Value _TextureSliceType = context->newObject();
    _TextureSliceType["TEXTURE_SLICE_2D"] = RenderingDevice::TextureSliceType::TEXTURE_SLICE_2D;
    _TextureSliceType["TEXTURE_SLICE_CUBEMAP"] = RenderingDevice::TextureSliceType::TEXTURE_SLICE_CUBEMAP;
    _TextureSliceType["TEXTURE_SLICE_3D"] = RenderingDevice::TextureSliceType::TEXTURE_SLICE_3D;
    _module.add("TextureSliceType", std::move(_TextureSliceType));
    qjs::Value _SamplerFilter = context->newObject();
    _SamplerFilter["SAMPLER_FILTER_NEAREST"] = RenderingDevice::SamplerFilter::SAMPLER_FILTER_NEAREST;
    _SamplerFilter["SAMPLER_FILTER_LINEAR"] = RenderingDevice::SamplerFilter::SAMPLER_FILTER_LINEAR;
    _module.add("SamplerFilter", std::move(_SamplerFilter));
    qjs::Value _SamplerRepeatMode = context->newObject();
    _SamplerRepeatMode["SAMPLER_REPEAT_MODE_REPEAT"] = RenderingDevice::SamplerRepeatMode::SAMPLER_REPEAT_MODE_REPEAT;
    _SamplerRepeatMode["SAMPLER_REPEAT_MODE_MIRRORED_REPEAT"] = RenderingDevice::SamplerRepeatMode::SAMPLER_REPEAT_MODE_MIRRORED_REPEAT;
    _SamplerRepeatMode["SAMPLER_REPEAT_MODE_CLAMP_TO_EDGE"] = RenderingDevice::SamplerRepeatMode::SAMPLER_REPEAT_MODE_CLAMP_TO_EDGE;
    _SamplerRepeatMode["SAMPLER_REPEAT_MODE_CLAMP_TO_BORDER"] = RenderingDevice::SamplerRepeatMode::SAMPLER_REPEAT_MODE_CLAMP_TO_BORDER;
    _SamplerRepeatMode["SAMPLER_REPEAT_MODE_MIRROR_CLAMP_TO_EDGE"] = RenderingDevice::SamplerRepeatMode::SAMPLER_REPEAT_MODE_MIRROR_CLAMP_TO_EDGE;
    _SamplerRepeatMode["SAMPLER_REPEAT_MODE_MAX"] = RenderingDevice::SamplerRepeatMode::SAMPLER_REPEAT_MODE_MAX;
    _module.add("SamplerRepeatMode", std::move(_SamplerRepeatMode));
    qjs::Value _SamplerBorderColor = context->newObject();
    _SamplerBorderColor["SAMPLER_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK"] = RenderingDevice::SamplerBorderColor::SAMPLER_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK;
    _SamplerBorderColor["SAMPLER_BORDER_COLOR_INT_TRANSPARENT_BLACK"] = RenderingDevice::SamplerBorderColor::SAMPLER_BORDER_COLOR_INT_TRANSPARENT_BLACK;
    _SamplerBorderColor["SAMPLER_BORDER_COLOR_FLOAT_OPAQUE_BLACK"] = RenderingDevice::SamplerBorderColor::SAMPLER_BORDER_COLOR_FLOAT_OPAQUE_BLACK;
    _SamplerBorderColor["SAMPLER_BORDER_COLOR_INT_OPAQUE_BLACK"] = RenderingDevice::SamplerBorderColor::SAMPLER_BORDER_COLOR_INT_OPAQUE_BLACK;
    _SamplerBorderColor["SAMPLER_BORDER_COLOR_FLOAT_OPAQUE_WHITE"] = RenderingDevice::SamplerBorderColor::SAMPLER_BORDER_COLOR_FLOAT_OPAQUE_WHITE;
    _SamplerBorderColor["SAMPLER_BORDER_COLOR_INT_OPAQUE_WHITE"] = RenderingDevice::SamplerBorderColor::SAMPLER_BORDER_COLOR_INT_OPAQUE_WHITE;
    _SamplerBorderColor["SAMPLER_BORDER_COLOR_MAX"] = RenderingDevice::SamplerBorderColor::SAMPLER_BORDER_COLOR_MAX;
    _module.add("SamplerBorderColor", std::move(_SamplerBorderColor));
    qjs::Value _VertexFrequency = context->newObject();
    _VertexFrequency["VERTEX_FREQUENCY_VERTEX"] = RenderingDevice::VertexFrequency::VERTEX_FREQUENCY_VERTEX;
    _VertexFrequency["VERTEX_FREQUENCY_INSTANCE"] = RenderingDevice::VertexFrequency::VERTEX_FREQUENCY_INSTANCE;
    _module.add("VertexFrequency", std::move(_VertexFrequency));
    qjs::Value _IndexBufferFormat = context->newObject();
    _IndexBufferFormat["INDEX_BUFFER_FORMAT_UINT16"] = RenderingDevice::IndexBufferFormat::INDEX_BUFFER_FORMAT_UINT16;
    _IndexBufferFormat["INDEX_BUFFER_FORMAT_UINT32"] = RenderingDevice::IndexBufferFormat::INDEX_BUFFER_FORMAT_UINT32;
    _module.add("IndexBufferFormat", std::move(_IndexBufferFormat));
    qjs::Value _StorageBufferUsage = context->newObject();
    _StorageBufferUsage["STORAGE_BUFFER_USAGE_DISPATCH_INDIRECT"] = RenderingDevice::StorageBufferUsage::STORAGE_BUFFER_USAGE_DISPATCH_INDIRECT;
    _module.add("StorageBufferUsage", std::move(_StorageBufferUsage));
    qjs::Value _UniformType = context->newObject();
    _UniformType["UNIFORM_TYPE_SAMPLER"] = RenderingDevice::UniformType::UNIFORM_TYPE_SAMPLER;
    _UniformType["UNIFORM_TYPE_SAMPLER_WITH_TEXTURE"] = RenderingDevice::UniformType::UNIFORM_TYPE_SAMPLER_WITH_TEXTURE;
    _UniformType["UNIFORM_TYPE_TEXTURE"] = RenderingDevice::UniformType::UNIFORM_TYPE_TEXTURE;
    _UniformType["UNIFORM_TYPE_IMAGE"] = RenderingDevice::UniformType::UNIFORM_TYPE_IMAGE;
    _UniformType["UNIFORM_TYPE_TEXTURE_BUFFER"] = RenderingDevice::UniformType::UNIFORM_TYPE_TEXTURE_BUFFER;
    _UniformType["UNIFORM_TYPE_SAMPLER_WITH_TEXTURE_BUFFER"] = RenderingDevice::UniformType::UNIFORM_TYPE_SAMPLER_WITH_TEXTURE_BUFFER;
    _UniformType["UNIFORM_TYPE_IMAGE_BUFFER"] = RenderingDevice::UniformType::UNIFORM_TYPE_IMAGE_BUFFER;
    _UniformType["UNIFORM_TYPE_UNIFORM_BUFFER"] = RenderingDevice::UniformType::UNIFORM_TYPE_UNIFORM_BUFFER;
    _UniformType["UNIFORM_TYPE_STORAGE_BUFFER"] = RenderingDevice::UniformType::UNIFORM_TYPE_STORAGE_BUFFER;
    _UniformType["UNIFORM_TYPE_INPUT_ATTACHMENT"] = RenderingDevice::UniformType::UNIFORM_TYPE_INPUT_ATTACHMENT;
    _UniformType["UNIFORM_TYPE_MAX"] = RenderingDevice::UniformType::UNIFORM_TYPE_MAX;
    _module.add("UniformType", std::move(_UniformType));
    qjs::Value _RenderPrimitive = context->newObject();
    _RenderPrimitive["RENDER_PRIMITIVE_POINTS"] = RenderingDevice::RenderPrimitive::RENDER_PRIMITIVE_POINTS;
    _RenderPrimitive["RENDER_PRIMITIVE_LINES"] = RenderingDevice::RenderPrimitive::RENDER_PRIMITIVE_LINES;
    _RenderPrimitive["RENDER_PRIMITIVE_LINES_WITH_ADJACENCY"] = RenderingDevice::RenderPrimitive::RENDER_PRIMITIVE_LINES_WITH_ADJACENCY;
    _RenderPrimitive["RENDER_PRIMITIVE_LINESTRIPS"] = RenderingDevice::RenderPrimitive::RENDER_PRIMITIVE_LINESTRIPS;
    _RenderPrimitive["RENDER_PRIMITIVE_LINESTRIPS_WITH_ADJACENCY"] = RenderingDevice::RenderPrimitive::RENDER_PRIMITIVE_LINESTRIPS_WITH_ADJACENCY;
    _RenderPrimitive["RENDER_PRIMITIVE_TRIANGLES"] = RenderingDevice::RenderPrimitive::RENDER_PRIMITIVE_TRIANGLES;
    _RenderPrimitive["RENDER_PRIMITIVE_TRIANGLES_WITH_ADJACENCY"] = RenderingDevice::RenderPrimitive::RENDER_PRIMITIVE_TRIANGLES_WITH_ADJACENCY;
    _RenderPrimitive["RENDER_PRIMITIVE_TRIANGLE_STRIPS"] = RenderingDevice::RenderPrimitive::RENDER_PRIMITIVE_TRIANGLE_STRIPS;
    _RenderPrimitive["RENDER_PRIMITIVE_TRIANGLE_STRIPS_WITH_AJACENCY"] = RenderingDevice::RenderPrimitive::RENDER_PRIMITIVE_TRIANGLE_STRIPS_WITH_AJACENCY;
    _RenderPrimitive["RENDER_PRIMITIVE_TRIANGLE_STRIPS_WITH_RESTART_INDEX"] = RenderingDevice::RenderPrimitive::RENDER_PRIMITIVE_TRIANGLE_STRIPS_WITH_RESTART_INDEX;
    _RenderPrimitive["RENDER_PRIMITIVE_TESSELATION_PATCH"] = RenderingDevice::RenderPrimitive::RENDER_PRIMITIVE_TESSELATION_PATCH;
    _RenderPrimitive["RENDER_PRIMITIVE_MAX"] = RenderingDevice::RenderPrimitive::RENDER_PRIMITIVE_MAX;
    _module.add("RenderPrimitive", std::move(_RenderPrimitive));
    qjs::Value _PolygonCullMode = context->newObject();
    _PolygonCullMode["POLYGON_CULL_DISABLED"] = RenderingDevice::PolygonCullMode::POLYGON_CULL_DISABLED;
    _PolygonCullMode["POLYGON_CULL_FRONT"] = RenderingDevice::PolygonCullMode::POLYGON_CULL_FRONT;
    _PolygonCullMode["POLYGON_CULL_BACK"] = RenderingDevice::PolygonCullMode::POLYGON_CULL_BACK;
    _module.add("PolygonCullMode", std::move(_PolygonCullMode));
    qjs::Value _PolygonFrontFace = context->newObject();
    _PolygonFrontFace["POLYGON_FRONT_FACE_CLOCKWISE"] = RenderingDevice::PolygonFrontFace::POLYGON_FRONT_FACE_CLOCKWISE;
    _PolygonFrontFace["POLYGON_FRONT_FACE_COUNTER_CLOCKWISE"] = RenderingDevice::PolygonFrontFace::POLYGON_FRONT_FACE_COUNTER_CLOCKWISE;
    _module.add("PolygonFrontFace", std::move(_PolygonFrontFace));
    qjs::Value _StencilOperation = context->newObject();
    _StencilOperation["STENCIL_OP_KEEP"] = RenderingDevice::StencilOperation::STENCIL_OP_KEEP;
    _StencilOperation["STENCIL_OP_ZERO"] = RenderingDevice::StencilOperation::STENCIL_OP_ZERO;
    _StencilOperation["STENCIL_OP_REPLACE"] = RenderingDevice::StencilOperation::STENCIL_OP_REPLACE;
    _StencilOperation["STENCIL_OP_INCREMENT_AND_CLAMP"] = RenderingDevice::StencilOperation::STENCIL_OP_INCREMENT_AND_CLAMP;
    _StencilOperation["STENCIL_OP_DECREMENT_AND_CLAMP"] = RenderingDevice::StencilOperation::STENCIL_OP_DECREMENT_AND_CLAMP;
    _StencilOperation["STENCIL_OP_INVERT"] = RenderingDevice::StencilOperation::STENCIL_OP_INVERT;
    _StencilOperation["STENCIL_OP_INCREMENT_AND_WRAP"] = RenderingDevice::StencilOperation::STENCIL_OP_INCREMENT_AND_WRAP;
    _StencilOperation["STENCIL_OP_DECREMENT_AND_WRAP"] = RenderingDevice::StencilOperation::STENCIL_OP_DECREMENT_AND_WRAP;
    _StencilOperation["STENCIL_OP_MAX"] = RenderingDevice::StencilOperation::STENCIL_OP_MAX;
    _module.add("StencilOperation", std::move(_StencilOperation));
    qjs::Value _CompareOperator = context->newObject();
    _CompareOperator["COMPARE_OP_NEVER"] = RenderingDevice::CompareOperator::COMPARE_OP_NEVER;
    _CompareOperator["COMPARE_OP_LESS"] = RenderingDevice::CompareOperator::COMPARE_OP_LESS;
    _CompareOperator["COMPARE_OP_EQUAL"] = RenderingDevice::CompareOperator::COMPARE_OP_EQUAL;
    _CompareOperator["COMPARE_OP_LESS_OR_EQUAL"] = RenderingDevice::CompareOperator::COMPARE_OP_LESS_OR_EQUAL;
    _CompareOperator["COMPARE_OP_GREATER"] = RenderingDevice::CompareOperator::COMPARE_OP_GREATER;
    _CompareOperator["COMPARE_OP_NOT_EQUAL"] = RenderingDevice::CompareOperator::COMPARE_OP_NOT_EQUAL;
    _CompareOperator["COMPARE_OP_GREATER_OR_EQUAL"] = RenderingDevice::CompareOperator::COMPARE_OP_GREATER_OR_EQUAL;
    _CompareOperator["COMPARE_OP_ALWAYS"] = RenderingDevice::CompareOperator::COMPARE_OP_ALWAYS;
    _CompareOperator["COMPARE_OP_MAX"] = RenderingDevice::CompareOperator::COMPARE_OP_MAX;
    _module.add("CompareOperator", std::move(_CompareOperator));
    qjs::Value _LogicOperation = context->newObject();
    _LogicOperation["LOGIC_OP_CLEAR"] = RenderingDevice::LogicOperation::LOGIC_OP_CLEAR;
    _LogicOperation["LOGIC_OP_AND"] = RenderingDevice::LogicOperation::LOGIC_OP_AND;
    _LogicOperation["LOGIC_OP_AND_REVERSE"] = RenderingDevice::LogicOperation::LOGIC_OP_AND_REVERSE;
    _LogicOperation["LOGIC_OP_COPY"] = RenderingDevice::LogicOperation::LOGIC_OP_COPY;
    _LogicOperation["LOGIC_OP_AND_INVERTED"] = RenderingDevice::LogicOperation::LOGIC_OP_AND_INVERTED;
    _LogicOperation["LOGIC_OP_NO_OP"] = RenderingDevice::LogicOperation::LOGIC_OP_NO_OP;
    _LogicOperation["LOGIC_OP_XOR"] = RenderingDevice::LogicOperation::LOGIC_OP_XOR;
    _LogicOperation["LOGIC_OP_OR"] = RenderingDevice::LogicOperation::LOGIC_OP_OR;
    _LogicOperation["LOGIC_OP_NOR"] = RenderingDevice::LogicOperation::LOGIC_OP_NOR;
    _LogicOperation["LOGIC_OP_EQUIVALENT"] = RenderingDevice::LogicOperation::LOGIC_OP_EQUIVALENT;
    _LogicOperation["LOGIC_OP_INVERT"] = RenderingDevice::LogicOperation::LOGIC_OP_INVERT;
    _LogicOperation["LOGIC_OP_OR_REVERSE"] = RenderingDevice::LogicOperation::LOGIC_OP_OR_REVERSE;
    _LogicOperation["LOGIC_OP_COPY_INVERTED"] = RenderingDevice::LogicOperation::LOGIC_OP_COPY_INVERTED;
    _LogicOperation["LOGIC_OP_OR_INVERTED"] = RenderingDevice::LogicOperation::LOGIC_OP_OR_INVERTED;
    _LogicOperation["LOGIC_OP_NAND"] = RenderingDevice::LogicOperation::LOGIC_OP_NAND;
    _LogicOperation["LOGIC_OP_SET"] = RenderingDevice::LogicOperation::LOGIC_OP_SET;
    _LogicOperation["LOGIC_OP_MAX"] = RenderingDevice::LogicOperation::LOGIC_OP_MAX;
    _module.add("LogicOperation", std::move(_LogicOperation));
    qjs::Value _BlendFactor = context->newObject();
    _BlendFactor["BLEND_FACTOR_ZERO"] = RenderingDevice::BlendFactor::BLEND_FACTOR_ZERO;
    _BlendFactor["BLEND_FACTOR_ONE"] = RenderingDevice::BlendFactor::BLEND_FACTOR_ONE;
    _BlendFactor["BLEND_FACTOR_SRC_COLOR"] = RenderingDevice::BlendFactor::BLEND_FACTOR_SRC_COLOR;
    _BlendFactor["BLEND_FACTOR_ONE_MINUS_SRC_COLOR"] = RenderingDevice::BlendFactor::BLEND_FACTOR_ONE_MINUS_SRC_COLOR;
    _BlendFactor["BLEND_FACTOR_DST_COLOR"] = RenderingDevice::BlendFactor::BLEND_FACTOR_DST_COLOR;
    _BlendFactor["BLEND_FACTOR_ONE_MINUS_DST_COLOR"] = RenderingDevice::BlendFactor::BLEND_FACTOR_ONE_MINUS_DST_COLOR;
    _BlendFactor["BLEND_FACTOR_SRC_ALPHA"] = RenderingDevice::BlendFactor::BLEND_FACTOR_SRC_ALPHA;
    _BlendFactor["BLEND_FACTOR_ONE_MINUS_SRC_ALPHA"] = RenderingDevice::BlendFactor::BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
    _BlendFactor["BLEND_FACTOR_DST_ALPHA"] = RenderingDevice::BlendFactor::BLEND_FACTOR_DST_ALPHA;
    _BlendFactor["BLEND_FACTOR_ONE_MINUS_DST_ALPHA"] = RenderingDevice::BlendFactor::BLEND_FACTOR_ONE_MINUS_DST_ALPHA;
    _BlendFactor["BLEND_FACTOR_CONSTANT_COLOR"] = RenderingDevice::BlendFactor::BLEND_FACTOR_CONSTANT_COLOR;
    _BlendFactor["BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR"] = RenderingDevice::BlendFactor::BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR;
    _BlendFactor["BLEND_FACTOR_CONSTANT_ALPHA"] = RenderingDevice::BlendFactor::BLEND_FACTOR_CONSTANT_ALPHA;
    _BlendFactor["BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA"] = RenderingDevice::BlendFactor::BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA;
    _BlendFactor["BLEND_FACTOR_SRC_ALPHA_SATURATE"] = RenderingDevice::BlendFactor::BLEND_FACTOR_SRC_ALPHA_SATURATE;
    _BlendFactor["BLEND_FACTOR_SRC1_COLOR"] = RenderingDevice::BlendFactor::BLEND_FACTOR_SRC1_COLOR;
    _BlendFactor["BLEND_FACTOR_ONE_MINUS_SRC1_COLOR"] = RenderingDevice::BlendFactor::BLEND_FACTOR_ONE_MINUS_SRC1_COLOR;
    _BlendFactor["BLEND_FACTOR_SRC1_ALPHA"] = RenderingDevice::BlendFactor::BLEND_FACTOR_SRC1_ALPHA;
    _BlendFactor["BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA"] = RenderingDevice::BlendFactor::BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA;
    _BlendFactor["BLEND_FACTOR_MAX"] = RenderingDevice::BlendFactor::BLEND_FACTOR_MAX;
    _module.add("BlendFactor", std::move(_BlendFactor));
    qjs::Value _BlendOperation = context->newObject();
    _BlendOperation["BLEND_OP_ADD"] = RenderingDevice::BlendOperation::BLEND_OP_ADD;
    _BlendOperation["BLEND_OP_SUBTRACT"] = RenderingDevice::BlendOperation::BLEND_OP_SUBTRACT;
    _BlendOperation["BLEND_OP_REVERSE_SUBTRACT"] = RenderingDevice::BlendOperation::BLEND_OP_REVERSE_SUBTRACT;
    _BlendOperation["BLEND_OP_MINIMUM"] = RenderingDevice::BlendOperation::BLEND_OP_MINIMUM;
    _BlendOperation["BLEND_OP_MAXIMUM"] = RenderingDevice::BlendOperation::BLEND_OP_MAXIMUM;
    _BlendOperation["BLEND_OP_MAX"] = RenderingDevice::BlendOperation::BLEND_OP_MAX;
    _module.add("BlendOperation", std::move(_BlendOperation));
    qjs::Value _PipelineDynamicStateFlags = context->newObject();
    _PipelineDynamicStateFlags["DYNAMIC_STATE_LINE_WIDTH"] = RenderingDevice::PipelineDynamicStateFlags::DYNAMIC_STATE_LINE_WIDTH;
    _PipelineDynamicStateFlags["DYNAMIC_STATE_DEPTH_BIAS"] = RenderingDevice::PipelineDynamicStateFlags::DYNAMIC_STATE_DEPTH_BIAS;
    _PipelineDynamicStateFlags["DYNAMIC_STATE_BLEND_CONSTANTS"] = RenderingDevice::PipelineDynamicStateFlags::DYNAMIC_STATE_BLEND_CONSTANTS;
    _PipelineDynamicStateFlags["DYNAMIC_STATE_DEPTH_BOUNDS"] = RenderingDevice::PipelineDynamicStateFlags::DYNAMIC_STATE_DEPTH_BOUNDS;
    _PipelineDynamicStateFlags["DYNAMIC_STATE_STENCIL_COMPARE_MASK"] = RenderingDevice::PipelineDynamicStateFlags::DYNAMIC_STATE_STENCIL_COMPARE_MASK;
    _PipelineDynamicStateFlags["DYNAMIC_STATE_STENCIL_WRITE_MASK"] = RenderingDevice::PipelineDynamicStateFlags::DYNAMIC_STATE_STENCIL_WRITE_MASK;
    _PipelineDynamicStateFlags["DYNAMIC_STATE_STENCIL_REFERENCE"] = RenderingDevice::PipelineDynamicStateFlags::DYNAMIC_STATE_STENCIL_REFERENCE;
    _module.add("PipelineDynamicStateFlags", std::move(_PipelineDynamicStateFlags));
    qjs::Value _InitialAction = context->newObject();
    _InitialAction["INITIAL_ACTION_LOAD"] = RenderingDevice::InitialAction::INITIAL_ACTION_LOAD;
    _InitialAction["INITIAL_ACTION_CLEAR"] = RenderingDevice::InitialAction::INITIAL_ACTION_CLEAR;
    _InitialAction["INITIAL_ACTION_DISCARD"] = RenderingDevice::InitialAction::INITIAL_ACTION_DISCARD;
    _InitialAction["INITIAL_ACTION_MAX"] = RenderingDevice::InitialAction::INITIAL_ACTION_MAX;
    _InitialAction["INITIAL_ACTION_CLEAR_REGION"] = RenderingDevice::InitialAction::INITIAL_ACTION_CLEAR_REGION;
    _InitialAction["INITIAL_ACTION_CLEAR_REGION_CONTINUE"] = RenderingDevice::InitialAction::INITIAL_ACTION_CLEAR_REGION_CONTINUE;
    _InitialAction["INITIAL_ACTION_KEEP"] = RenderingDevice::InitialAction::INITIAL_ACTION_KEEP;
    _InitialAction["INITIAL_ACTION_DROP"] = RenderingDevice::InitialAction::INITIAL_ACTION_DROP;
    _InitialAction["INITIAL_ACTION_CONTINUE"] = RenderingDevice::InitialAction::INITIAL_ACTION_CONTINUE;
    _module.add("InitialAction", std::move(_InitialAction));
    qjs::Value _FinalAction = context->newObject();
    _FinalAction["FINAL_ACTION_STORE"] = RenderingDevice::FinalAction::FINAL_ACTION_STORE;
    _FinalAction["FINAL_ACTION_DISCARD"] = RenderingDevice::FinalAction::FINAL_ACTION_DISCARD;
    _FinalAction["FINAL_ACTION_MAX"] = RenderingDevice::FinalAction::FINAL_ACTION_MAX;
    _FinalAction["FINAL_ACTION_READ"] = RenderingDevice::FinalAction::FINAL_ACTION_READ;
    _FinalAction["FINAL_ACTION_CONTINUE"] = RenderingDevice::FinalAction::FINAL_ACTION_CONTINUE;
    _module.add("FinalAction", std::move(_FinalAction));
    qjs::Value _ShaderStage = context->newObject();
    _ShaderStage["SHADER_STAGE_VERTEX"] = RenderingDevice::ShaderStage::SHADER_STAGE_VERTEX;
    _ShaderStage["SHADER_STAGE_FRAGMENT"] = RenderingDevice::ShaderStage::SHADER_STAGE_FRAGMENT;
    _ShaderStage["SHADER_STAGE_TESSELATION_CONTROL"] = RenderingDevice::ShaderStage::SHADER_STAGE_TESSELATION_CONTROL;
    _ShaderStage["SHADER_STAGE_TESSELATION_EVALUATION"] = RenderingDevice::ShaderStage::SHADER_STAGE_TESSELATION_EVALUATION;
    _ShaderStage["SHADER_STAGE_COMPUTE"] = RenderingDevice::ShaderStage::SHADER_STAGE_COMPUTE;
    _ShaderStage["SHADER_STAGE_MAX"] = RenderingDevice::ShaderStage::SHADER_STAGE_MAX;
    _ShaderStage["SHADER_STAGE_VERTEX_BIT"] = RenderingDevice::ShaderStage::SHADER_STAGE_VERTEX_BIT;
    _ShaderStage["SHADER_STAGE_FRAGMENT_BIT"] = RenderingDevice::ShaderStage::SHADER_STAGE_FRAGMENT_BIT;
    _ShaderStage["SHADER_STAGE_TESSELATION_CONTROL_BIT"] = RenderingDevice::ShaderStage::SHADER_STAGE_TESSELATION_CONTROL_BIT;
    _ShaderStage["SHADER_STAGE_TESSELATION_EVALUATION_BIT"] = RenderingDevice::ShaderStage::SHADER_STAGE_TESSELATION_EVALUATION_BIT;
    _ShaderStage["SHADER_STAGE_COMPUTE_BIT"] = RenderingDevice::ShaderStage::SHADER_STAGE_COMPUTE_BIT;
    _module.add("ShaderStage", std::move(_ShaderStage));
    qjs::Value _ShaderLanguage = context->newObject();
    _ShaderLanguage["SHADER_LANGUAGE_GLSL"] = RenderingDevice::ShaderLanguage::SHADER_LANGUAGE_GLSL;
    _ShaderLanguage["SHADER_LANGUAGE_HLSL"] = RenderingDevice::ShaderLanguage::SHADER_LANGUAGE_HLSL;
    _module.add("ShaderLanguage", std::move(_ShaderLanguage));
    qjs::Value _PipelineSpecializationConstantType = context->newObject();
    _PipelineSpecializationConstantType["PIPELINE_SPECIALIZATION_CONSTANT_TYPE_BOOL"] = RenderingDevice::PipelineSpecializationConstantType::PIPELINE_SPECIALIZATION_CONSTANT_TYPE_BOOL;
    _PipelineSpecializationConstantType["PIPELINE_SPECIALIZATION_CONSTANT_TYPE_INT"] = RenderingDevice::PipelineSpecializationConstantType::PIPELINE_SPECIALIZATION_CONSTANT_TYPE_INT;
    _PipelineSpecializationConstantType["PIPELINE_SPECIALIZATION_CONSTANT_TYPE_FLOAT"] = RenderingDevice::PipelineSpecializationConstantType::PIPELINE_SPECIALIZATION_CONSTANT_TYPE_FLOAT;
    _module.add("PipelineSpecializationConstantType", std::move(_PipelineSpecializationConstantType));
    qjs::Value _Limit = context->newObject();
    _Limit["LIMIT_MAX_BOUND_UNIFORM_SETS"] = RenderingDevice::Limit::LIMIT_MAX_BOUND_UNIFORM_SETS;
    _Limit["LIMIT_MAX_FRAMEBUFFER_COLOR_ATTACHMENTS"] = RenderingDevice::Limit::LIMIT_MAX_FRAMEBUFFER_COLOR_ATTACHMENTS;
    _Limit["LIMIT_MAX_TEXTURES_PER_UNIFORM_SET"] = RenderingDevice::Limit::LIMIT_MAX_TEXTURES_PER_UNIFORM_SET;
    _Limit["LIMIT_MAX_SAMPLERS_PER_UNIFORM_SET"] = RenderingDevice::Limit::LIMIT_MAX_SAMPLERS_PER_UNIFORM_SET;
    _Limit["LIMIT_MAX_STORAGE_BUFFERS_PER_UNIFORM_SET"] = RenderingDevice::Limit::LIMIT_MAX_STORAGE_BUFFERS_PER_UNIFORM_SET;
    _Limit["LIMIT_MAX_STORAGE_IMAGES_PER_UNIFORM_SET"] = RenderingDevice::Limit::LIMIT_MAX_STORAGE_IMAGES_PER_UNIFORM_SET;
    _Limit["LIMIT_MAX_UNIFORM_BUFFERS_PER_UNIFORM_SET"] = RenderingDevice::Limit::LIMIT_MAX_UNIFORM_BUFFERS_PER_UNIFORM_SET;
    _Limit["LIMIT_MAX_DRAW_INDEXED_INDEX"] = RenderingDevice::Limit::LIMIT_MAX_DRAW_INDEXED_INDEX;
    _Limit["LIMIT_MAX_FRAMEBUFFER_HEIGHT"] = RenderingDevice::Limit::LIMIT_MAX_FRAMEBUFFER_HEIGHT;
    _Limit["LIMIT_MAX_FRAMEBUFFER_WIDTH"] = RenderingDevice::Limit::LIMIT_MAX_FRAMEBUFFER_WIDTH;
    _Limit["LIMIT_MAX_TEXTURE_ARRAY_LAYERS"] = RenderingDevice::Limit::LIMIT_MAX_TEXTURE_ARRAY_LAYERS;
    _Limit["LIMIT_MAX_TEXTURE_SIZE_1D"] = RenderingDevice::Limit::LIMIT_MAX_TEXTURE_SIZE_1D;
    _Limit["LIMIT_MAX_TEXTURE_SIZE_2D"] = RenderingDevice::Limit::LIMIT_MAX_TEXTURE_SIZE_2D;
    _Limit["LIMIT_MAX_TEXTURE_SIZE_3D"] = RenderingDevice::Limit::LIMIT_MAX_TEXTURE_SIZE_3D;
    _Limit["LIMIT_MAX_TEXTURE_SIZE_CUBE"] = RenderingDevice::Limit::LIMIT_MAX_TEXTURE_SIZE_CUBE;
    _Limit["LIMIT_MAX_TEXTURES_PER_SHADER_STAGE"] = RenderingDevice::Limit::LIMIT_MAX_TEXTURES_PER_SHADER_STAGE;
    _Limit["LIMIT_MAX_SAMPLERS_PER_SHADER_STAGE"] = RenderingDevice::Limit::LIMIT_MAX_SAMPLERS_PER_SHADER_STAGE;
    _Limit["LIMIT_MAX_STORAGE_BUFFERS_PER_SHADER_STAGE"] = RenderingDevice::Limit::LIMIT_MAX_STORAGE_BUFFERS_PER_SHADER_STAGE;
    _Limit["LIMIT_MAX_STORAGE_IMAGES_PER_SHADER_STAGE"] = RenderingDevice::Limit::LIMIT_MAX_STORAGE_IMAGES_PER_SHADER_STAGE;
    _Limit["LIMIT_MAX_UNIFORM_BUFFERS_PER_SHADER_STAGE"] = RenderingDevice::Limit::LIMIT_MAX_UNIFORM_BUFFERS_PER_SHADER_STAGE;
    _Limit["LIMIT_MAX_PUSH_CONSTANT_SIZE"] = RenderingDevice::Limit::LIMIT_MAX_PUSH_CONSTANT_SIZE;
    _Limit["LIMIT_MAX_UNIFORM_BUFFER_SIZE"] = RenderingDevice::Limit::LIMIT_MAX_UNIFORM_BUFFER_SIZE;
    _Limit["LIMIT_MAX_VERTEX_INPUT_ATTRIBUTE_OFFSET"] = RenderingDevice::Limit::LIMIT_MAX_VERTEX_INPUT_ATTRIBUTE_OFFSET;
    _Limit["LIMIT_MAX_VERTEX_INPUT_ATTRIBUTES"] = RenderingDevice::Limit::LIMIT_MAX_VERTEX_INPUT_ATTRIBUTES;
    _Limit["LIMIT_MAX_VERTEX_INPUT_BINDINGS"] = RenderingDevice::Limit::LIMIT_MAX_VERTEX_INPUT_BINDINGS;
    _Limit["LIMIT_MAX_VERTEX_INPUT_BINDING_STRIDE"] = RenderingDevice::Limit::LIMIT_MAX_VERTEX_INPUT_BINDING_STRIDE;
    _Limit["LIMIT_MIN_UNIFORM_BUFFER_OFFSET_ALIGNMENT"] = RenderingDevice::Limit::LIMIT_MIN_UNIFORM_BUFFER_OFFSET_ALIGNMENT;
    _Limit["LIMIT_MAX_COMPUTE_SHARED_MEMORY_SIZE"] = RenderingDevice::Limit::LIMIT_MAX_COMPUTE_SHARED_MEMORY_SIZE;
    _Limit["LIMIT_MAX_COMPUTE_WORKGROUP_COUNT_X"] = RenderingDevice::Limit::LIMIT_MAX_COMPUTE_WORKGROUP_COUNT_X;
    _Limit["LIMIT_MAX_COMPUTE_WORKGROUP_COUNT_Y"] = RenderingDevice::Limit::LIMIT_MAX_COMPUTE_WORKGROUP_COUNT_Y;
    _Limit["LIMIT_MAX_COMPUTE_WORKGROUP_COUNT_Z"] = RenderingDevice::Limit::LIMIT_MAX_COMPUTE_WORKGROUP_COUNT_Z;
    _Limit["LIMIT_MAX_COMPUTE_WORKGROUP_INVOCATIONS"] = RenderingDevice::Limit::LIMIT_MAX_COMPUTE_WORKGROUP_INVOCATIONS;
    _Limit["LIMIT_MAX_COMPUTE_WORKGROUP_SIZE_X"] = RenderingDevice::Limit::LIMIT_MAX_COMPUTE_WORKGROUP_SIZE_X;
    _Limit["LIMIT_MAX_COMPUTE_WORKGROUP_SIZE_Y"] = RenderingDevice::Limit::LIMIT_MAX_COMPUTE_WORKGROUP_SIZE_Y;
    _Limit["LIMIT_MAX_COMPUTE_WORKGROUP_SIZE_Z"] = RenderingDevice::Limit::LIMIT_MAX_COMPUTE_WORKGROUP_SIZE_Z;
    _Limit["LIMIT_MAX_VIEWPORT_DIMENSIONS_X"] = RenderingDevice::Limit::LIMIT_MAX_VIEWPORT_DIMENSIONS_X;
    _Limit["LIMIT_MAX_VIEWPORT_DIMENSIONS_Y"] = RenderingDevice::Limit::LIMIT_MAX_VIEWPORT_DIMENSIONS_Y;
    _module.add("Limit", std::move(_Limit));
    qjs::Value _MemoryType = context->newObject();
    _MemoryType["MEMORY_TEXTURES"] = RenderingDevice::MemoryType::MEMORY_TEXTURES;
    _MemoryType["MEMORY_BUFFERS"] = RenderingDevice::MemoryType::MEMORY_BUFFERS;
    _MemoryType["MEMORY_TOTAL"] = RenderingDevice::MemoryType::MEMORY_TOTAL;
    _module.add("MemoryType", std::move(_MemoryType));
}