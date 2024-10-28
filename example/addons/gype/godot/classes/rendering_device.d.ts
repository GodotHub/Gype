
import { RDShaderSource } from "@godot/classes/rd_shader_source";
import { RDSamplerState } from "@godot/classes/rd_sampler_state";
import { RDAttachmentFormat } from "@godot/classes/rd_attachment_format";
import { RDPipelineRasterizationState } from "@godot/classes/rd_pipeline_rasterization_state";
import { RDTextureFormat } from "@godot/classes/rd_texture_format";
import { RDPipelineColorBlendState } from "@godot/classes/rd_pipeline_color_blend_state";
import { Object } from "@godot/classes/object";
import { RDFramebufferPass } from "@godot/classes/rd_framebuffer_pass";
import { RDPipelineDepthStencilState } from "@godot/classes/rd_pipeline_depth_stencil_state";
import { RDShaderSPIRV } from "@godot/classes/rd_shader_spirv";
import { RDVertexAttribute } from "@godot/classes/rd_vertex_attribute";
import { RDPipelineMultisampleState } from "@godot/classes/rd_pipeline_multisample_state";
import { RDPipelineSpecializationConstant } from "@godot/classes/rd_pipeline_specialization_constant";
import { RDTextureView } from "@godot/classes/rd_texture_view";
import { RDUniform } from "@godot/classes/rd_uniform";

export declare class RenderingDevice extends Object{
  public texture_create(_format: RDTextureFormat, _view: RDTextureView, _data: typedarray::PackedByteArray): RID;
  public texture_create_shared(_view: RDTextureView, _with_texture: RID): RID;
  public texture_create_shared_from_slice(_view: RDTextureView, _with_texture: RID, _layer: number, _mipmap: number, _mipmaps: number, _slice_type: number): RID;
  public texture_create_from_extension(_type: number, _format: number, _samples: number, _usage_flags: number, _image: number, _width: number, _height: number, _depth: number, _layers: number): RID;
  public texture_update(_texture: RID, _layer: number, _data: PackedByteArray): number;
  public texture_get_data(_texture: RID, _layer: number): PackedByteArray;
  public texture_is_format_supported_for_usage(_format: number, _usage_flags: number): boolean;
  public texture_is_shared(_texture: RID): boolean;
  public texture_is_valid(_texture: RID): boolean;
  public texture_copy(_from_texture: RID, _to_texture: RID, _from_pos: Vector3, _to_pos: Vector3, _size: Vector3, _src_mipmap: number, _dst_mipmap: number, _src_layer: number, _dst_layer: number): number;
  public texture_clear(_texture: RID, _color: Color, _base_mipmap: number, _mipmap_count: number, _base_layer: number, _layer_count: number): number;
  public texture_resolve_multisample(_from_texture: RID, _to_texture: RID): number;
  public texture_get_format(_texture: RID): RDTextureFormat;
  public texture_get_native_handle(_texture: RID): number;
  public framebuffer_format_create(_attachments: typedarray::RDAttachmentFormat, _view_count: number): number;
  public framebuffer_format_create_multipass(_attachments: typedarray::RDAttachmentFormat, _passes: typedarray::RDFramebufferPass, _view_count: number): number;
  public framebuffer_format_create_empty(_samples: number): number;
  public framebuffer_format_get_texture_samples(_format: number, _render_pass: number): number;
  public framebuffer_create(_textures: typedarray::RID, _validate_with_format: number, _view_count: number): RID;
  public framebuffer_create_multipass(_textures: typedarray::RID, _passes: typedarray::RDFramebufferPass, _validate_with_format: number, _view_count: number): RID;
  public framebuffer_create_empty(_size: Vector2i, _samples: number, _validate_with_format: number): RID;
  public framebuffer_get_format(_framebuffer: RID): number;
  public framebuffer_is_valid(_framebuffer: RID): boolean;
  public sampler_create(_state: RDSamplerState): RID;
  public sampler_is_format_supported_for_filter(_format: number, _sampler_filter: number): boolean;
  public vertex_buffer_create(_size_bytes: number, _data: PackedByteArray, _use_as_storage: boolean): RID;
  public vertex_format_create(_vertex_descriptions: typedarray::RDVertexAttribute): number;
  public vertex_array_create(_vertex_count: number, _vertex_format: number, _src_buffers: typedarray::RID, _offsets: PackedInt64Array): RID;
  public index_buffer_create(_size_indices: number, _format: number, _data: PackedByteArray, _use_restart_indices: boolean): RID;
  public index_array_create(_index_buffer: RID, _index_offset: number, _index_count: number): RID;
  public shader_compile_spirv_from_source(_shader_source: RDShaderSource, _allow_cache: boolean): RDShaderSPIRV;
  public shader_compile_binary_from_spirv(_spirv_data: RDShaderSPIRV, _name: String): PackedByteArray;
  public shader_create_from_spirv(_spirv_data: RDShaderSPIRV, _name: String): RID;
  public shader_create_from_bytecode(_binary_data: PackedByteArray, _placeholder_rid: RID): RID;
  public shader_create_placeholder(): RID;
  public shader_get_vertex_input_attribute_mask(_shader: RID): number;
  public uniform_buffer_create(_size_bytes: number, _data: PackedByteArray): RID;
  public storage_buffer_create(_size_bytes: number, _data: PackedByteArray, _usage: number): RID;
  public texture_buffer_create(_size_bytes: number, _format: number, _data: PackedByteArray): RID;
  public uniform_set_create(_uniforms: typedarray::RDUniform, _shader: RID, _shader_set: number): RID;
  public uniform_set_is_valid(_uniform_set: RID): boolean;
  public buffer_copy(_src_buffer: RID, _dst_buffer: RID, _src_offset: number, _dst_offset: number, _size: number): number;
  public buffer_update(_buffer: RID, _offset: number, _size_bytes: number, _data: PackedByteArray): number;
  public buffer_clear(_buffer: RID, _offset: number, _size_bytes: number): number;
  public buffer_get_data(_buffer: RID, _offset_bytes: number, _size_bytes: number): PackedByteArray;
  public render_pipeline_create(_shader: RID, _framebuffer_format: number, _vertex_format: number, _primitive: number, _rasterization_state: RDPipelineRasterizationState, _multisample_state: RDPipelineMultisampleState, _stencil_state: RDPipelineDepthStencilState, _color_blend_state: RDPipelineColorBlendState, _dynamic_state_flags: number, _for_render_pass: number, _specialization_constants: typedarray::RDPipelineSpecializationConstant): RID;
  public render_pipeline_is_valid(_render_pipeline: RID): boolean;
  public compute_pipeline_create(_shader: RID, _specialization_constants: typedarray::RDPipelineSpecializationConstant): RID;
  public compute_pipeline_is_valid(_compute_pipeline: RID): boolean;
  public screen_get_width(_screen: number): number;
  public screen_get_height(_screen: number): number;
  public screen_get_framebuffer_format(_screen: number): number;
  public draw_list_begin_for_screen(_screen: number, _clear_color: Color): number;
  public draw_list_begin(_framebuffer: RID, _initial_color_action: number, _final_color_action: number, _initial_depth_action: number, _final_depth_action: number, _clear_color_values: PackedColorArray, _clear_depth: number, _clear_stencil: number, _region: Rect2): number;
  public draw_list_begin_split(_framebuffer: RID, _splits: number, _initial_color_action: number, _final_color_action: number, _initial_depth_action: number, _final_depth_action: number, _clear_color_values: PackedColorArray, _clear_depth: number, _clear_stencil: number, _region: Rect2, _storage_textures: typedarray::RID): PackedInt64Array;
  public draw_list_set_blend_constants(_draw_list: number, _color: Color): void;
  public draw_list_bind_render_pipeline(_draw_list: number, _render_pipeline: RID): void;
  public draw_list_bind_uniform_set(_draw_list: number, _uniform_set: RID, _set_index: number): void;
  public draw_list_bind_vertex_array(_draw_list: number, _vertex_array: RID): void;
  public draw_list_bind_index_array(_draw_list: number, _index_array: RID): void;
  public draw_list_set_push_constant(_draw_list: number, _buffer: PackedByteArray, _size_bytes: number): void;
  public draw_list_draw(_draw_list: number, _use_indices: boolean, _instances: number, _procedural_vertex_count: number): void;
  public draw_list_enable_scissor(_draw_list: number, _rect: Rect2): void;
  public draw_list_disable_scissor(_draw_list: number): void;
  public draw_list_switch_to_next_pass(): number;
  public draw_list_switch_to_next_pass_split(_splits: number): PackedInt64Array;
  public draw_list_end(): void;
  public compute_list_begin(): number;
  public compute_list_bind_compute_pipeline(_compute_list: number, _compute_pipeline: RID): void;
  public compute_list_set_push_constant(_compute_list: number, _buffer: PackedByteArray, _size_bytes: number): void;
  public compute_list_bind_uniform_set(_compute_list: number, _uniform_set: RID, _set_index: number): void;
  public compute_list_dispatch(_compute_list: number, _x_groups: number, _y_groups: number, _z_groups: number): void;
  public compute_list_dispatch_indirect(_compute_list: number, _buffer: RID, _offset: number): void;
  public compute_list_add_barrier(_compute_list: number): void;
  public compute_list_end(): void;
  public free_rid(_rid: RID): void;
  public capture_timestamp(_name: String): void;
  public get_captured_timestamps_count(): number;
  public get_captured_timestamps_frame(): number;
  public get_captured_timestamp_gpu_time(_index: number): number;
  public get_captured_timestamp_cpu_time(_index: number): number;
  public get_captured_timestamp_name(_index: number): String;
  public limit_get(_limit: number): number;
  public get_frame_delay(): number;
  public submit(): void;
  public sync(): void;
  public barrier(_from: number, _to: number): void;
  public full_barrier(): void;
  public create_local_device(): RenderingDevice;
  public set_resource_name(_id: RID, _name: String): void;
  public draw_command_begin_label(_name: String, _color: Color): void;
  public draw_command_insert_label(_name: String, _color: Color): void;
  public draw_command_end_label(): void;
  public get_device_vendor_name(): String;
  public get_device_name(): String;
  public get_device_pipeline_cache_uuid(): String;
  public get_memory_usage(_type: number): number;
  public get_driver_resource(_resource: number, _rid: RID, _index: number): number;
  static DeviceType = {
    DEVICE_TYPE_OTHER = 0,
    DEVICE_TYPE_INTEGRATED_GPU = 1,
    DEVICE_TYPE_DISCRETE_GPU = 2,
    DEVICE_TYPE_VIRTUAL_GPU = 3,
    DEVICE_TYPE_CPU = 4,
    DEVICE_TYPE_MAX = 5,
  }
  static DriverResource = {
    DRIVER_RESOURCE_LOGICAL_DEVICE = 0,
    DRIVER_RESOURCE_PHYSICAL_DEVICE = 1,
    DRIVER_RESOURCE_TOPMOST_OBJECT = 2,
    DRIVER_RESOURCE_COMMAND_QUEUE = 3,
    DRIVER_RESOURCE_QUEUE_FAMILY = 4,
    DRIVER_RESOURCE_TEXTURE = 5,
    DRIVER_RESOURCE_TEXTURE_VIEW = 6,
    DRIVER_RESOURCE_TEXTURE_DATA_FORMAT = 7,
    DRIVER_RESOURCE_SAMPLER = 8,
    DRIVER_RESOURCE_UNIFORM_SET = 9,
    DRIVER_RESOURCE_BUFFER = 10,
    DRIVER_RESOURCE_COMPUTE_PIPELINE = 11,
    DRIVER_RESOURCE_RENDER_PIPELINE = 12,
    DRIVER_RESOURCE_VULKAN_DEVICE = 0,
    DRIVER_RESOURCE_VULKAN_PHYSICAL_DEVICE = 1,
    DRIVER_RESOURCE_VULKAN_INSTANCE = 2,
    DRIVER_RESOURCE_VULKAN_QUEUE = 3,
    DRIVER_RESOURCE_VULKAN_QUEUE_FAMILY_INDEX = 4,
    DRIVER_RESOURCE_VULKAN_IMAGE = 5,
    DRIVER_RESOURCE_VULKAN_IMAGE_VIEW = 6,
    DRIVER_RESOURCE_VULKAN_IMAGE_NATIVE_TEXTURE_FORMAT = 7,
    DRIVER_RESOURCE_VULKAN_SAMPLER = 8,
    DRIVER_RESOURCE_VULKAN_DESCRIPTOR_SET = 9,
    DRIVER_RESOURCE_VULKAN_BUFFER = 10,
    DRIVER_RESOURCE_VULKAN_COMPUTE_PIPELINE = 11,
    DRIVER_RESOURCE_VULKAN_RENDER_PIPELINE = 12,
  }
  static DataFormat = {
    DATA_FORMAT_R4G4_UNORM_PACK8 = 0,
    DATA_FORMAT_R4G4B4A4_UNORM_PACK16 = 1,
    DATA_FORMAT_B4G4R4A4_UNORM_PACK16 = 2,
    DATA_FORMAT_R5G6B5_UNORM_PACK16 = 3,
    DATA_FORMAT_B5G6R5_UNORM_PACK16 = 4,
    DATA_FORMAT_R5G5B5A1_UNORM_PACK16 = 5,
    DATA_FORMAT_B5G5R5A1_UNORM_PACK16 = 6,
    DATA_FORMAT_A1R5G5B5_UNORM_PACK16 = 7,
    DATA_FORMAT_R8_UNORM = 8,
    DATA_FORMAT_R8_SNORM = 9,
    DATA_FORMAT_R8_USCALED = 10,
    DATA_FORMAT_R8_SSCALED = 11,
    DATA_FORMAT_R8_UINT = 12,
    DATA_FORMAT_R8_SINT = 13,
    DATA_FORMAT_R8_SRGB = 14,
    DATA_FORMAT_R8G8_UNORM = 15,
    DATA_FORMAT_R8G8_SNORM = 16,
    DATA_FORMAT_R8G8_USCALED = 17,
    DATA_FORMAT_R8G8_SSCALED = 18,
    DATA_FORMAT_R8G8_UINT = 19,
    DATA_FORMAT_R8G8_SINT = 20,
    DATA_FORMAT_R8G8_SRGB = 21,
    DATA_FORMAT_R8G8B8_UNORM = 22,
    DATA_FORMAT_R8G8B8_SNORM = 23,
    DATA_FORMAT_R8G8B8_USCALED = 24,
    DATA_FORMAT_R8G8B8_SSCALED = 25,
    DATA_FORMAT_R8G8B8_UINT = 26,
    DATA_FORMAT_R8G8B8_SINT = 27,
    DATA_FORMAT_R8G8B8_SRGB = 28,
    DATA_FORMAT_B8G8R8_UNORM = 29,
    DATA_FORMAT_B8G8R8_SNORM = 30,
    DATA_FORMAT_B8G8R8_USCALED = 31,
    DATA_FORMAT_B8G8R8_SSCALED = 32,
    DATA_FORMAT_B8G8R8_UINT = 33,
    DATA_FORMAT_B8G8R8_SINT = 34,
    DATA_FORMAT_B8G8R8_SRGB = 35,
    DATA_FORMAT_R8G8B8A8_UNORM = 36,
    DATA_FORMAT_R8G8B8A8_SNORM = 37,
    DATA_FORMAT_R8G8B8A8_USCALED = 38,
    DATA_FORMAT_R8G8B8A8_SSCALED = 39,
    DATA_FORMAT_R8G8B8A8_UINT = 40,
    DATA_FORMAT_R8G8B8A8_SINT = 41,
    DATA_FORMAT_R8G8B8A8_SRGB = 42,
    DATA_FORMAT_B8G8R8A8_UNORM = 43,
    DATA_FORMAT_B8G8R8A8_SNORM = 44,
    DATA_FORMAT_B8G8R8A8_USCALED = 45,
    DATA_FORMAT_B8G8R8A8_SSCALED = 46,
    DATA_FORMAT_B8G8R8A8_UINT = 47,
    DATA_FORMAT_B8G8R8A8_SINT = 48,
    DATA_FORMAT_B8G8R8A8_SRGB = 49,
    DATA_FORMAT_A8B8G8R8_UNORM_PACK32 = 50,
    DATA_FORMAT_A8B8G8R8_SNORM_PACK32 = 51,
    DATA_FORMAT_A8B8G8R8_USCALED_PACK32 = 52,
    DATA_FORMAT_A8B8G8R8_SSCALED_PACK32 = 53,
    DATA_FORMAT_A8B8G8R8_UINT_PACK32 = 54,
    DATA_FORMAT_A8B8G8R8_SINT_PACK32 = 55,
    DATA_FORMAT_A8B8G8R8_SRGB_PACK32 = 56,
    DATA_FORMAT_A2R10G10B10_UNORM_PACK32 = 57,
    DATA_FORMAT_A2R10G10B10_SNORM_PACK32 = 58,
    DATA_FORMAT_A2R10G10B10_USCALED_PACK32 = 59,
    DATA_FORMAT_A2R10G10B10_SSCALED_PACK32 = 60,
    DATA_FORMAT_A2R10G10B10_UINT_PACK32 = 61,
    DATA_FORMAT_A2R10G10B10_SINT_PACK32 = 62,
    DATA_FORMAT_A2B10G10R10_UNORM_PACK32 = 63,
    DATA_FORMAT_A2B10G10R10_SNORM_PACK32 = 64,
    DATA_FORMAT_A2B10G10R10_USCALED_PACK32 = 65,
    DATA_FORMAT_A2B10G10R10_SSCALED_PACK32 = 66,
    DATA_FORMAT_A2B10G10R10_UINT_PACK32 = 67,
    DATA_FORMAT_A2B10G10R10_SINT_PACK32 = 68,
    DATA_FORMAT_R16_UNORM = 69,
    DATA_FORMAT_R16_SNORM = 70,
    DATA_FORMAT_R16_USCALED = 71,
    DATA_FORMAT_R16_SSCALED = 72,
    DATA_FORMAT_R16_UINT = 73,
    DATA_FORMAT_R16_SINT = 74,
    DATA_FORMAT_R16_SFLOAT = 75,
    DATA_FORMAT_R16G16_UNORM = 76,
    DATA_FORMAT_R16G16_SNORM = 77,
    DATA_FORMAT_R16G16_USCALED = 78,
    DATA_FORMAT_R16G16_SSCALED = 79,
    DATA_FORMAT_R16G16_UINT = 80,
    DATA_FORMAT_R16G16_SINT = 81,
    DATA_FORMAT_R16G16_SFLOAT = 82,
    DATA_FORMAT_R16G16B16_UNORM = 83,
    DATA_FORMAT_R16G16B16_SNORM = 84,
    DATA_FORMAT_R16G16B16_USCALED = 85,
    DATA_FORMAT_R16G16B16_SSCALED = 86,
    DATA_FORMAT_R16G16B16_UINT = 87,
    DATA_FORMAT_R16G16B16_SINT = 88,
    DATA_FORMAT_R16G16B16_SFLOAT = 89,
    DATA_FORMAT_R16G16B16A16_UNORM = 90,
    DATA_FORMAT_R16G16B16A16_SNORM = 91,
    DATA_FORMAT_R16G16B16A16_USCALED = 92,
    DATA_FORMAT_R16G16B16A16_SSCALED = 93,
    DATA_FORMAT_R16G16B16A16_UINT = 94,
    DATA_FORMAT_R16G16B16A16_SINT = 95,
    DATA_FORMAT_R16G16B16A16_SFLOAT = 96,
    DATA_FORMAT_R32_UINT = 97,
    DATA_FORMAT_R32_SINT = 98,
    DATA_FORMAT_R32_SFLOAT = 99,
    DATA_FORMAT_R32G32_UINT = 100,
    DATA_FORMAT_R32G32_SINT = 101,
    DATA_FORMAT_R32G32_SFLOAT = 102,
    DATA_FORMAT_R32G32B32_UINT = 103,
    DATA_FORMAT_R32G32B32_SINT = 104,
    DATA_FORMAT_R32G32B32_SFLOAT = 105,
    DATA_FORMAT_R32G32B32A32_UINT = 106,
    DATA_FORMAT_R32G32B32A32_SINT = 107,
    DATA_FORMAT_R32G32B32A32_SFLOAT = 108,
    DATA_FORMAT_R64_UINT = 109,
    DATA_FORMAT_R64_SINT = 110,
    DATA_FORMAT_R64_SFLOAT = 111,
    DATA_FORMAT_R64G64_UINT = 112,
    DATA_FORMAT_R64G64_SINT = 113,
    DATA_FORMAT_R64G64_SFLOAT = 114,
    DATA_FORMAT_R64G64B64_UINT = 115,
    DATA_FORMAT_R64G64B64_SINT = 116,
    DATA_FORMAT_R64G64B64_SFLOAT = 117,
    DATA_FORMAT_R64G64B64A64_UINT = 118,
    DATA_FORMAT_R64G64B64A64_SINT = 119,
    DATA_FORMAT_R64G64B64A64_SFLOAT = 120,
    DATA_FORMAT_B10G11R11_UFLOAT_PACK32 = 121,
    DATA_FORMAT_E5B9G9R9_UFLOAT_PACK32 = 122,
    DATA_FORMAT_D16_UNORM = 123,
    DATA_FORMAT_X8_D24_UNORM_PACK32 = 124,
    DATA_FORMAT_D32_SFLOAT = 125,
    DATA_FORMAT_S8_UINT = 126,
    DATA_FORMAT_D16_UNORM_S8_UINT = 127,
    DATA_FORMAT_D24_UNORM_S8_UINT = 128,
    DATA_FORMAT_D32_SFLOAT_S8_UINT = 129,
    DATA_FORMAT_BC1_RGB_UNORM_BLOCK = 130,
    DATA_FORMAT_BC1_RGB_SRGB_BLOCK = 131,
    DATA_FORMAT_BC1_RGBA_UNORM_BLOCK = 132,
    DATA_FORMAT_BC1_RGBA_SRGB_BLOCK = 133,
    DATA_FORMAT_BC2_UNORM_BLOCK = 134,
    DATA_FORMAT_BC2_SRGB_BLOCK = 135,
    DATA_FORMAT_BC3_UNORM_BLOCK = 136,
    DATA_FORMAT_BC3_SRGB_BLOCK = 137,
    DATA_FORMAT_BC4_UNORM_BLOCK = 138,
    DATA_FORMAT_BC4_SNORM_BLOCK = 139,
    DATA_FORMAT_BC5_UNORM_BLOCK = 140,
    DATA_FORMAT_BC5_SNORM_BLOCK = 141,
    DATA_FORMAT_BC6H_UFLOAT_BLOCK = 142,
    DATA_FORMAT_BC6H_SFLOAT_BLOCK = 143,
    DATA_FORMAT_BC7_UNORM_BLOCK = 144,
    DATA_FORMAT_BC7_SRGB_BLOCK = 145,
    DATA_FORMAT_ETC2_R8G8B8_UNORM_BLOCK = 146,
    DATA_FORMAT_ETC2_R8G8B8_SRGB_BLOCK = 147,
    DATA_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK = 148,
    DATA_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK = 149,
    DATA_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK = 150,
    DATA_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK = 151,
    DATA_FORMAT_EAC_R11_UNORM_BLOCK = 152,
    DATA_FORMAT_EAC_R11_SNORM_BLOCK = 153,
    DATA_FORMAT_EAC_R11G11_UNORM_BLOCK = 154,
    DATA_FORMAT_EAC_R11G11_SNORM_BLOCK = 155,
    DATA_FORMAT_ASTC_4x4_UNORM_BLOCK = 156,
    DATA_FORMAT_ASTC_4x4_SRGB_BLOCK = 157,
    DATA_FORMAT_ASTC_5x4_UNORM_BLOCK = 158,
    DATA_FORMAT_ASTC_5x4_SRGB_BLOCK = 159,
    DATA_FORMAT_ASTC_5x5_UNORM_BLOCK = 160,
    DATA_FORMAT_ASTC_5x5_SRGB_BLOCK = 161,
    DATA_FORMAT_ASTC_6x5_UNORM_BLOCK = 162,
    DATA_FORMAT_ASTC_6x5_SRGB_BLOCK = 163,
    DATA_FORMAT_ASTC_6x6_UNORM_BLOCK = 164,
    DATA_FORMAT_ASTC_6x6_SRGB_BLOCK = 165,
    DATA_FORMAT_ASTC_8x5_UNORM_BLOCK = 166,
    DATA_FORMAT_ASTC_8x5_SRGB_BLOCK = 167,
    DATA_FORMAT_ASTC_8x6_UNORM_BLOCK = 168,
    DATA_FORMAT_ASTC_8x6_SRGB_BLOCK = 169,
    DATA_FORMAT_ASTC_8x8_UNORM_BLOCK = 170,
    DATA_FORMAT_ASTC_8x8_SRGB_BLOCK = 171,
    DATA_FORMAT_ASTC_10x5_UNORM_BLOCK = 172,
    DATA_FORMAT_ASTC_10x5_SRGB_BLOCK = 173,
    DATA_FORMAT_ASTC_10x6_UNORM_BLOCK = 174,
    DATA_FORMAT_ASTC_10x6_SRGB_BLOCK = 175,
    DATA_FORMAT_ASTC_10x8_UNORM_BLOCK = 176,
    DATA_FORMAT_ASTC_10x8_SRGB_BLOCK = 177,
    DATA_FORMAT_ASTC_10x10_UNORM_BLOCK = 178,
    DATA_FORMAT_ASTC_10x10_SRGB_BLOCK = 179,
    DATA_FORMAT_ASTC_12x10_UNORM_BLOCK = 180,
    DATA_FORMAT_ASTC_12x10_SRGB_BLOCK = 181,
    DATA_FORMAT_ASTC_12x12_UNORM_BLOCK = 182,
    DATA_FORMAT_ASTC_12x12_SRGB_BLOCK = 183,
    DATA_FORMAT_G8B8G8R8_422_UNORM = 184,
    DATA_FORMAT_B8G8R8G8_422_UNORM = 185,
    DATA_FORMAT_G8_B8_R8_3PLANE_420_UNORM = 186,
    DATA_FORMAT_G8_B8R8_2PLANE_420_UNORM = 187,
    DATA_FORMAT_G8_B8_R8_3PLANE_422_UNORM = 188,
    DATA_FORMAT_G8_B8R8_2PLANE_422_UNORM = 189,
    DATA_FORMAT_G8_B8_R8_3PLANE_444_UNORM = 190,
    DATA_FORMAT_R10X6_UNORM_PACK16 = 191,
    DATA_FORMAT_R10X6G10X6_UNORM_2PACK16 = 192,
    DATA_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16 = 193,
    DATA_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16 = 194,
    DATA_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16 = 195,
    DATA_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16 = 196,
    DATA_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16 = 197,
    DATA_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16 = 198,
    DATA_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16 = 199,
    DATA_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16 = 200,
    DATA_FORMAT_R12X4_UNORM_PACK16 = 201,
    DATA_FORMAT_R12X4G12X4_UNORM_2PACK16 = 202,
    DATA_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16 = 203,
    DATA_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16 = 204,
    DATA_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16 = 205,
    DATA_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16 = 206,
    DATA_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16 = 207,
    DATA_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16 = 208,
    DATA_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16 = 209,
    DATA_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16 = 210,
    DATA_FORMAT_G16B16G16R16_422_UNORM = 211,
    DATA_FORMAT_B16G16R16G16_422_UNORM = 212,
    DATA_FORMAT_G16_B16_R16_3PLANE_420_UNORM = 213,
    DATA_FORMAT_G16_B16R16_2PLANE_420_UNORM = 214,
    DATA_FORMAT_G16_B16_R16_3PLANE_422_UNORM = 215,
    DATA_FORMAT_G16_B16R16_2PLANE_422_UNORM = 216,
    DATA_FORMAT_G16_B16_R16_3PLANE_444_UNORM = 217,
    DATA_FORMAT_MAX = 218,
  }
  static BarrierMask = {
    BARRIER_MASK_VERTEX = 1,
    BARRIER_MASK_FRAGMENT = 8,
    BARRIER_MASK_COMPUTE = 2,
    BARRIER_MASK_TRANSFER = 4,
    BARRIER_MASK_RASTER = 9,
    BARRIER_MASK_ALL_BARRIERS = 32767,
    BARRIER_MASK_NO_BARRIER = 32768,
  }
  static TextureType = {
    TEXTURE_TYPE_1D = 0,
    TEXTURE_TYPE_2D = 1,
    TEXTURE_TYPE_3D = 2,
    TEXTURE_TYPE_CUBE = 3,
    TEXTURE_TYPE_1D_ARRAY = 4,
    TEXTURE_TYPE_2D_ARRAY = 5,
    TEXTURE_TYPE_CUBE_ARRAY = 6,
    TEXTURE_TYPE_MAX = 7,
  }
  static TextureSamples = {
    TEXTURE_SAMPLES_1 = 0,
    TEXTURE_SAMPLES_2 = 1,
    TEXTURE_SAMPLES_4 = 2,
    TEXTURE_SAMPLES_8 = 3,
    TEXTURE_SAMPLES_16 = 4,
    TEXTURE_SAMPLES_32 = 5,
    TEXTURE_SAMPLES_64 = 6,
    TEXTURE_SAMPLES_MAX = 7,
  }
  static TextureUsageBits = {
    TEXTURE_USAGE_SAMPLING_BIT = 1,
    TEXTURE_USAGE_COLOR_ATTACHMENT_BIT = 2,
    TEXTURE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT = 4,
    TEXTURE_USAGE_STORAGE_BIT = 8,
    TEXTURE_USAGE_STORAGE_ATOMIC_BIT = 16,
    TEXTURE_USAGE_CPU_READ_BIT = 32,
    TEXTURE_USAGE_CAN_UPDATE_BIT = 64,
    TEXTURE_USAGE_CAN_COPY_FROM_BIT = 128,
    TEXTURE_USAGE_CAN_COPY_TO_BIT = 256,
    TEXTURE_USAGE_INPUT_ATTACHMENT_BIT = 512,
  }
  static TextureSwizzle = {
    TEXTURE_SWIZZLE_IDENTITY = 0,
    TEXTURE_SWIZZLE_ZERO = 1,
    TEXTURE_SWIZZLE_ONE = 2,
    TEXTURE_SWIZZLE_R = 3,
    TEXTURE_SWIZZLE_G = 4,
    TEXTURE_SWIZZLE_B = 5,
    TEXTURE_SWIZZLE_A = 6,
    TEXTURE_SWIZZLE_MAX = 7,
  }
  static TextureSliceType = {
    TEXTURE_SLICE_2D = 0,
    TEXTURE_SLICE_CUBEMAP = 1,
    TEXTURE_SLICE_3D = 2,
  }
  static SamplerFilter = {
    SAMPLER_FILTER_NEAREST = 0,
    SAMPLER_FILTER_LINEAR = 1,
  }
  static SamplerRepeatMode = {
    SAMPLER_REPEAT_MODE_REPEAT = 0,
    SAMPLER_REPEAT_MODE_MIRRORED_REPEAT = 1,
    SAMPLER_REPEAT_MODE_CLAMP_TO_EDGE = 2,
    SAMPLER_REPEAT_MODE_CLAMP_TO_BORDER = 3,
    SAMPLER_REPEAT_MODE_MIRROR_CLAMP_TO_EDGE = 4,
    SAMPLER_REPEAT_MODE_MAX = 5,
  }
  static SamplerBorderColor = {
    SAMPLER_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK = 0,
    SAMPLER_BORDER_COLOR_INT_TRANSPARENT_BLACK = 1,
    SAMPLER_BORDER_COLOR_FLOAT_OPAQUE_BLACK = 2,
    SAMPLER_BORDER_COLOR_INT_OPAQUE_BLACK = 3,
    SAMPLER_BORDER_COLOR_FLOAT_OPAQUE_WHITE = 4,
    SAMPLER_BORDER_COLOR_INT_OPAQUE_WHITE = 5,
    SAMPLER_BORDER_COLOR_MAX = 6,
  }
  static VertexFrequency = {
    VERTEX_FREQUENCY_VERTEX = 0,
    VERTEX_FREQUENCY_INSTANCE = 1,
  }
  static IndexBufferFormat = {
    INDEX_BUFFER_FORMAT_UINT16 = 0,
    INDEX_BUFFER_FORMAT_UINT32 = 1,
  }
  static StorageBufferUsage = {
    STORAGE_BUFFER_USAGE_DISPATCH_INDIRECT = 1,
  }
  static UniformType = {
    UNIFORM_TYPE_SAMPLER = 0,
    UNIFORM_TYPE_SAMPLER_WITH_TEXTURE = 1,
    UNIFORM_TYPE_TEXTURE = 2,
    UNIFORM_TYPE_IMAGE = 3,
    UNIFORM_TYPE_TEXTURE_BUFFER = 4,
    UNIFORM_TYPE_SAMPLER_WITH_TEXTURE_BUFFER = 5,
    UNIFORM_TYPE_IMAGE_BUFFER = 6,
    UNIFORM_TYPE_UNIFORM_BUFFER = 7,
    UNIFORM_TYPE_STORAGE_BUFFER = 8,
    UNIFORM_TYPE_INPUT_ATTACHMENT = 9,
    UNIFORM_TYPE_MAX = 10,
  }
  static RenderPrimitive = {
    RENDER_PRIMITIVE_POINTS = 0,
    RENDER_PRIMITIVE_LINES = 1,
    RENDER_PRIMITIVE_LINES_WITH_ADJACENCY = 2,
    RENDER_PRIMITIVE_LINESTRIPS = 3,
    RENDER_PRIMITIVE_LINESTRIPS_WITH_ADJACENCY = 4,
    RENDER_PRIMITIVE_TRIANGLES = 5,
    RENDER_PRIMITIVE_TRIANGLES_WITH_ADJACENCY = 6,
    RENDER_PRIMITIVE_TRIANGLE_STRIPS = 7,
    RENDER_PRIMITIVE_TRIANGLE_STRIPS_WITH_AJACENCY = 8,
    RENDER_PRIMITIVE_TRIANGLE_STRIPS_WITH_RESTART_INDEX = 9,
    RENDER_PRIMITIVE_TESSELATION_PATCH = 10,
    RENDER_PRIMITIVE_MAX = 11,
  }
  static PolygonCullMode = {
    POLYGON_CULL_DISABLED = 0,
    POLYGON_CULL_FRONT = 1,
    POLYGON_CULL_BACK = 2,
  }
  static PolygonFrontFace = {
    POLYGON_FRONT_FACE_CLOCKWISE = 0,
    POLYGON_FRONT_FACE_COUNTER_CLOCKWISE = 1,
  }
  static StencilOperation = {
    STENCIL_OP_KEEP = 0,
    STENCIL_OP_ZERO = 1,
    STENCIL_OP_REPLACE = 2,
    STENCIL_OP_INCREMENT_AND_CLAMP = 3,
    STENCIL_OP_DECREMENT_AND_CLAMP = 4,
    STENCIL_OP_INVERT = 5,
    STENCIL_OP_INCREMENT_AND_WRAP = 6,
    STENCIL_OP_DECREMENT_AND_WRAP = 7,
    STENCIL_OP_MAX = 8,
  }
  static CompareOperator = {
    COMPARE_OP_NEVER = 0,
    COMPARE_OP_LESS = 1,
    COMPARE_OP_EQUAL = 2,
    COMPARE_OP_LESS_OR_EQUAL = 3,
    COMPARE_OP_GREATER = 4,
    COMPARE_OP_NOT_EQUAL = 5,
    COMPARE_OP_GREATER_OR_EQUAL = 6,
    COMPARE_OP_ALWAYS = 7,
    COMPARE_OP_MAX = 8,
  }
  static LogicOperation = {
    LOGIC_OP_CLEAR = 0,
    LOGIC_OP_AND = 1,
    LOGIC_OP_AND_REVERSE = 2,
    LOGIC_OP_COPY = 3,
    LOGIC_OP_AND_INVERTED = 4,
    LOGIC_OP_NO_OP = 5,
    LOGIC_OP_XOR = 6,
    LOGIC_OP_OR = 7,
    LOGIC_OP_NOR = 8,
    LOGIC_OP_EQUIVALENT = 9,
    LOGIC_OP_INVERT = 10,
    LOGIC_OP_OR_REVERSE = 11,
    LOGIC_OP_COPY_INVERTED = 12,
    LOGIC_OP_OR_INVERTED = 13,
    LOGIC_OP_NAND = 14,
    LOGIC_OP_SET = 15,
    LOGIC_OP_MAX = 16,
  }
  static BlendFactor = {
    BLEND_FACTOR_ZERO = 0,
    BLEND_FACTOR_ONE = 1,
    BLEND_FACTOR_SRC_COLOR = 2,
    BLEND_FACTOR_ONE_MINUS_SRC_COLOR = 3,
    BLEND_FACTOR_DST_COLOR = 4,
    BLEND_FACTOR_ONE_MINUS_DST_COLOR = 5,
    BLEND_FACTOR_SRC_ALPHA = 6,
    BLEND_FACTOR_ONE_MINUS_SRC_ALPHA = 7,
    BLEND_FACTOR_DST_ALPHA = 8,
    BLEND_FACTOR_ONE_MINUS_DST_ALPHA = 9,
    BLEND_FACTOR_CONSTANT_COLOR = 10,
    BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR = 11,
    BLEND_FACTOR_CONSTANT_ALPHA = 12,
    BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA = 13,
    BLEND_FACTOR_SRC_ALPHA_SATURATE = 14,
    BLEND_FACTOR_SRC1_COLOR = 15,
    BLEND_FACTOR_ONE_MINUS_SRC1_COLOR = 16,
    BLEND_FACTOR_SRC1_ALPHA = 17,
    BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA = 18,
    BLEND_FACTOR_MAX = 19,
  }
  static BlendOperation = {
    BLEND_OP_ADD = 0,
    BLEND_OP_SUBTRACT = 1,
    BLEND_OP_REVERSE_SUBTRACT = 2,
    BLEND_OP_MINIMUM = 3,
    BLEND_OP_MAXIMUM = 4,
    BLEND_OP_MAX = 5,
  }
  static PipelineDynamicStateFlags = {
    DYNAMIC_STATE_LINE_WIDTH = 1,
    DYNAMIC_STATE_DEPTH_BIAS = 2,
    DYNAMIC_STATE_BLEND_CONSTANTS = 4,
    DYNAMIC_STATE_DEPTH_BOUNDS = 8,
    DYNAMIC_STATE_STENCIL_COMPARE_MASK = 16,
    DYNAMIC_STATE_STENCIL_WRITE_MASK = 32,
    DYNAMIC_STATE_STENCIL_REFERENCE = 64,
  }
  static InitialAction = {
    INITIAL_ACTION_LOAD = 0,
    INITIAL_ACTION_CLEAR = 1,
    INITIAL_ACTION_DISCARD = 2,
    INITIAL_ACTION_MAX = 3,
    INITIAL_ACTION_CLEAR_REGION = 1,
    INITIAL_ACTION_CLEAR_REGION_CONTINUE = 1,
    INITIAL_ACTION_KEEP = 0,
    INITIAL_ACTION_DROP = 2,
    INITIAL_ACTION_CONTINUE = 0,
  }
  static FinalAction = {
    FINAL_ACTION_STORE = 0,
    FINAL_ACTION_DISCARD = 1,
    FINAL_ACTION_MAX = 2,
    FINAL_ACTION_READ = 0,
    FINAL_ACTION_CONTINUE = 0,
  }
  static ShaderStage = {
    SHADER_STAGE_VERTEX = 0,
    SHADER_STAGE_FRAGMENT = 1,
    SHADER_STAGE_TESSELATION_CONTROL = 2,
    SHADER_STAGE_TESSELATION_EVALUATION = 3,
    SHADER_STAGE_COMPUTE = 4,
    SHADER_STAGE_MAX = 5,
    SHADER_STAGE_VERTEX_BIT = 1,
    SHADER_STAGE_FRAGMENT_BIT = 2,
    SHADER_STAGE_TESSELATION_CONTROL_BIT = 4,
    SHADER_STAGE_TESSELATION_EVALUATION_BIT = 8,
    SHADER_STAGE_COMPUTE_BIT = 16,
  }
  static ShaderLanguage = {
    SHADER_LANGUAGE_GLSL = 0,
    SHADER_LANGUAGE_HLSL = 1,
  }
  static PipelineSpecializationConstantType = {
    PIPELINE_SPECIALIZATION_CONSTANT_TYPE_BOOL = 0,
    PIPELINE_SPECIALIZATION_CONSTANT_TYPE_INT = 1,
    PIPELINE_SPECIALIZATION_CONSTANT_TYPE_FLOAT = 2,
  }
  static Limit = {
    LIMIT_MAX_BOUND_UNIFORM_SETS = 0,
    LIMIT_MAX_FRAMEBUFFER_COLOR_ATTACHMENTS = 1,
    LIMIT_MAX_TEXTURES_PER_UNIFORM_SET = 2,
    LIMIT_MAX_SAMPLERS_PER_UNIFORM_SET = 3,
    LIMIT_MAX_STORAGE_BUFFERS_PER_UNIFORM_SET = 4,
    LIMIT_MAX_STORAGE_IMAGES_PER_UNIFORM_SET = 5,
    LIMIT_MAX_UNIFORM_BUFFERS_PER_UNIFORM_SET = 6,
    LIMIT_MAX_DRAW_INDEXED_INDEX = 7,
    LIMIT_MAX_FRAMEBUFFER_HEIGHT = 8,
    LIMIT_MAX_FRAMEBUFFER_WIDTH = 9,
    LIMIT_MAX_TEXTURE_ARRAY_LAYERS = 10,
    LIMIT_MAX_TEXTURE_SIZE_1D = 11,
    LIMIT_MAX_TEXTURE_SIZE_2D = 12,
    LIMIT_MAX_TEXTURE_SIZE_3D = 13,
    LIMIT_MAX_TEXTURE_SIZE_CUBE = 14,
    LIMIT_MAX_TEXTURES_PER_SHADER_STAGE = 15,
    LIMIT_MAX_SAMPLERS_PER_SHADER_STAGE = 16,
    LIMIT_MAX_STORAGE_BUFFERS_PER_SHADER_STAGE = 17,
    LIMIT_MAX_STORAGE_IMAGES_PER_SHADER_STAGE = 18,
    LIMIT_MAX_UNIFORM_BUFFERS_PER_SHADER_STAGE = 19,
    LIMIT_MAX_PUSH_CONSTANT_SIZE = 20,
    LIMIT_MAX_UNIFORM_BUFFER_SIZE = 21,
    LIMIT_MAX_VERTEX_INPUT_ATTRIBUTE_OFFSET = 22,
    LIMIT_MAX_VERTEX_INPUT_ATTRIBUTES = 23,
    LIMIT_MAX_VERTEX_INPUT_BINDINGS = 24,
    LIMIT_MAX_VERTEX_INPUT_BINDING_STRIDE = 25,
    LIMIT_MIN_UNIFORM_BUFFER_OFFSET_ALIGNMENT = 26,
    LIMIT_MAX_COMPUTE_SHARED_MEMORY_SIZE = 27,
    LIMIT_MAX_COMPUTE_WORKGROUP_COUNT_X = 28,
    LIMIT_MAX_COMPUTE_WORKGROUP_COUNT_Y = 29,
    LIMIT_MAX_COMPUTE_WORKGROUP_COUNT_Z = 30,
    LIMIT_MAX_COMPUTE_WORKGROUP_INVOCATIONS = 31,
    LIMIT_MAX_COMPUTE_WORKGROUP_SIZE_X = 32,
    LIMIT_MAX_COMPUTE_WORKGROUP_SIZE_Y = 33,
    LIMIT_MAX_COMPUTE_WORKGROUP_SIZE_Z = 34,
    LIMIT_MAX_VIEWPORT_DIMENSIONS_X = 35,
    LIMIT_MAX_VIEWPORT_DIMENSIONS_Y = 36,
  }
  static MemoryType = {
    MEMORY_TEXTURES = 0,
    MEMORY_BUFFERS = 1,
    MEMORY_TOTAL = 2,
  }
}