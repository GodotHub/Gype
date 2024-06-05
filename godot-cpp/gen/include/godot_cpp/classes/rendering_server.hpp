/**************************************************************************/
/*  rendering_server.hpp                                                  */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

// THIS FILE IS GENERATED. EDITS WILL BE LOST.

#ifndef GODOT_CPP_RENDERING_SERVER_HPP
#define GODOT_CPP_RENDERING_SERVER_HPP

#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/core/object.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_color_array.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_int64_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/rendering_device.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector3i.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

struct Basis;
class Callable;
struct Plane;
struct Vector2;
struct Vector2i;
struct Vector3;

class RenderingServer : public Object {
	GDEXTENSION_CLASS(RenderingServer, Object)

public:

	enum TextureLayeredType {
		TEXTURE_LAYERED_2D_ARRAY = 0,
		TEXTURE_LAYERED_CUBEMAP = 1,
		TEXTURE_LAYERED_CUBEMAP_ARRAY = 2,
	};

	enum CubeMapLayer {
		CUBEMAP_LAYER_LEFT = 0,
		CUBEMAP_LAYER_RIGHT = 1,
		CUBEMAP_LAYER_BOTTOM = 2,
		CUBEMAP_LAYER_TOP = 3,
		CUBEMAP_LAYER_FRONT = 4,
		CUBEMAP_LAYER_BACK = 5,
	};

	enum ShaderMode {
		SHADER_SPATIAL = 0,
		SHADER_CANVAS_ITEM = 1,
		SHADER_PARTICLES = 2,
		SHADER_SKY = 3,
		SHADER_FOG = 4,
		SHADER_MAX = 5,
	};

	enum ArrayType {
		ARRAY_VERTEX = 0,
		ARRAY_NORMAL = 1,
		ARRAY_TANGENT = 2,
		ARRAY_COLOR = 3,
		ARRAY_TEX_UV = 4,
		ARRAY_TEX_UV2 = 5,
		ARRAY_CUSTOM0 = 6,
		ARRAY_CUSTOM1 = 7,
		ARRAY_CUSTOM2 = 8,
		ARRAY_CUSTOM3 = 9,
		ARRAY_BONES = 10,
		ARRAY_WEIGHTS = 11,
		ARRAY_INDEX = 12,
		ARRAY_MAX = 13,
	};

	enum ArrayCustomFormat {
		ARRAY_CUSTOM_RGBA8_UNORM = 0,
		ARRAY_CUSTOM_RGBA8_SNORM = 1,
		ARRAY_CUSTOM_RG_HALF = 2,
		ARRAY_CUSTOM_RGBA_HALF = 3,
		ARRAY_CUSTOM_R_FLOAT = 4,
		ARRAY_CUSTOM_RG_FLOAT = 5,
		ARRAY_CUSTOM_RGB_FLOAT = 6,
		ARRAY_CUSTOM_RGBA_FLOAT = 7,
		ARRAY_CUSTOM_MAX = 8,
	};

	enum ArrayFormat : uint64_t {
		ARRAY_FORMAT_VERTEX = 1,
		ARRAY_FORMAT_NORMAL = 2,
		ARRAY_FORMAT_TANGENT = 4,
		ARRAY_FORMAT_COLOR = 8,
		ARRAY_FORMAT_TEX_UV = 16,
		ARRAY_FORMAT_TEX_UV2 = 32,
		ARRAY_FORMAT_CUSTOM0 = 64,
		ARRAY_FORMAT_CUSTOM1 = 128,
		ARRAY_FORMAT_CUSTOM2 = 256,
		ARRAY_FORMAT_CUSTOM3 = 512,
		ARRAY_FORMAT_BONES = 1024,
		ARRAY_FORMAT_WEIGHTS = 2048,
		ARRAY_FORMAT_INDEX = 4096,
		ARRAY_FORMAT_BLEND_SHAPE_MASK = 7,
		ARRAY_FORMAT_CUSTOM_BASE = 13,
		ARRAY_FORMAT_CUSTOM_BITS = 3,
		ARRAY_FORMAT_CUSTOM0_SHIFT = 13,
		ARRAY_FORMAT_CUSTOM1_SHIFT = 16,
		ARRAY_FORMAT_CUSTOM2_SHIFT = 19,
		ARRAY_FORMAT_CUSTOM3_SHIFT = 22,
		ARRAY_FORMAT_CUSTOM_MASK = 7,
		ARRAY_COMPRESS_FLAGS_BASE = 25,
		ARRAY_FLAG_USE_2D_VERTICES = 33554432,
		ARRAY_FLAG_USE_DYNAMIC_UPDATE = 67108864,
		ARRAY_FLAG_USE_8_BONE_WEIGHTS = 134217728,
		ARRAY_FLAG_USES_EMPTY_VERTEX_ARRAY = 268435456,
		ARRAY_FLAG_COMPRESS_ATTRIBUTES = 536870912,
		ARRAY_FLAG_FORMAT_VERSION_BASE = 35,
		ARRAY_FLAG_FORMAT_VERSION_SHIFT = 35,
		ARRAY_FLAG_FORMAT_VERSION_1 = 0,
		ARRAY_FLAG_FORMAT_VERSION_2 = 34359738368,
		ARRAY_FLAG_FORMAT_CURRENT_VERSION = 34359738368,
		ARRAY_FLAG_FORMAT_VERSION_MASK = 255,
	};

	enum PrimitiveType {
		PRIMITIVE_POINTS = 0,
		PRIMITIVE_LINES = 1,
		PRIMITIVE_LINE_STRIP = 2,
		PRIMITIVE_TRIANGLES = 3,
		PRIMITIVE_TRIANGLE_STRIP = 4,
		PRIMITIVE_MAX = 5,
	};

	enum BlendShapeMode {
		BLEND_SHAPE_MODE_NORMALIZED = 0,
		BLEND_SHAPE_MODE_RELATIVE = 1,
	};

	enum MultimeshTransformFormat {
		MULTIMESH_TRANSFORM_2D = 0,
		MULTIMESH_TRANSFORM_3D = 1,
	};

	enum LightProjectorFilter {
		LIGHT_PROJECTOR_FILTER_NEAREST = 0,
		LIGHT_PROJECTOR_FILTER_LINEAR = 1,
		LIGHT_PROJECTOR_FILTER_NEAREST_MIPMAPS = 2,
		LIGHT_PROJECTOR_FILTER_LINEAR_MIPMAPS = 3,
		LIGHT_PROJECTOR_FILTER_NEAREST_MIPMAPS_ANISOTROPIC = 4,
		LIGHT_PROJECTOR_FILTER_LINEAR_MIPMAPS_ANISOTROPIC = 5,
	};

	enum LightType {
		LIGHT_DIRECTIONAL = 0,
		LIGHT_OMNI = 1,
		LIGHT_SPOT = 2,
	};

	enum LightParam {
		LIGHT_PARAM_ENERGY = 0,
		LIGHT_PARAM_INDIRECT_ENERGY = 1,
		LIGHT_PARAM_VOLUMETRIC_FOG_ENERGY = 2,
		LIGHT_PARAM_SPECULAR = 3,
		LIGHT_PARAM_RANGE = 4,
		LIGHT_PARAM_SIZE = 5,
		LIGHT_PARAM_ATTENUATION = 6,
		LIGHT_PARAM_SPOT_ANGLE = 7,
		LIGHT_PARAM_SPOT_ATTENUATION = 8,
		LIGHT_PARAM_SHADOW_MAX_DISTANCE = 9,
		LIGHT_PARAM_SHADOW_SPLIT_1_OFFSET = 10,
		LIGHT_PARAM_SHADOW_SPLIT_2_OFFSET = 11,
		LIGHT_PARAM_SHADOW_SPLIT_3_OFFSET = 12,
		LIGHT_PARAM_SHADOW_FADE_START = 13,
		LIGHT_PARAM_SHADOW_NORMAL_BIAS = 14,
		LIGHT_PARAM_SHADOW_BIAS = 15,
		LIGHT_PARAM_SHADOW_PANCAKE_SIZE = 16,
		LIGHT_PARAM_SHADOW_OPACITY = 17,
		LIGHT_PARAM_SHADOW_BLUR = 18,
		LIGHT_PARAM_TRANSMITTANCE_BIAS = 19,
		LIGHT_PARAM_INTENSITY = 20,
		LIGHT_PARAM_MAX = 21,
	};

	enum LightBakeMode {
		LIGHT_BAKE_DISABLED = 0,
		LIGHT_BAKE_STATIC = 1,
		LIGHT_BAKE_DYNAMIC = 2,
	};

	enum LightOmniShadowMode {
		LIGHT_OMNI_SHADOW_DUAL_PARABOLOID = 0,
		LIGHT_OMNI_SHADOW_CUBE = 1,
	};

	enum LightDirectionalShadowMode {
		LIGHT_DIRECTIONAL_SHADOW_ORTHOGONAL = 0,
		LIGHT_DIRECTIONAL_SHADOW_PARALLEL_2_SPLITS = 1,
		LIGHT_DIRECTIONAL_SHADOW_PARALLEL_4_SPLITS = 2,
	};

	enum LightDirectionalSkyMode {
		LIGHT_DIRECTIONAL_SKY_MODE_LIGHT_AND_SKY = 0,
		LIGHT_DIRECTIONAL_SKY_MODE_LIGHT_ONLY = 1,
		LIGHT_DIRECTIONAL_SKY_MODE_SKY_ONLY = 2,
	};

	enum ShadowQuality {
		SHADOW_QUALITY_HARD = 0,
		SHADOW_QUALITY_SOFT_VERY_LOW = 1,
		SHADOW_QUALITY_SOFT_LOW = 2,
		SHADOW_QUALITY_SOFT_MEDIUM = 3,
		SHADOW_QUALITY_SOFT_HIGH = 4,
		SHADOW_QUALITY_SOFT_ULTRA = 5,
		SHADOW_QUALITY_MAX = 6,
	};

	enum ReflectionProbeUpdateMode {
		REFLECTION_PROBE_UPDATE_ONCE = 0,
		REFLECTION_PROBE_UPDATE_ALWAYS = 1,
	};

	enum ReflectionProbeAmbientMode {
		REFLECTION_PROBE_AMBIENT_DISABLED = 0,
		REFLECTION_PROBE_AMBIENT_ENVIRONMENT = 1,
		REFLECTION_PROBE_AMBIENT_COLOR = 2,
	};

	enum DecalTexture {
		DECAL_TEXTURE_ALBEDO = 0,
		DECAL_TEXTURE_NORMAL = 1,
		DECAL_TEXTURE_ORM = 2,
		DECAL_TEXTURE_EMISSION = 3,
		DECAL_TEXTURE_MAX = 4,
	};

	enum DecalFilter {
		DECAL_FILTER_NEAREST = 0,
		DECAL_FILTER_LINEAR = 1,
		DECAL_FILTER_NEAREST_MIPMAPS = 2,
		DECAL_FILTER_LINEAR_MIPMAPS = 3,
		DECAL_FILTER_NEAREST_MIPMAPS_ANISOTROPIC = 4,
		DECAL_FILTER_LINEAR_MIPMAPS_ANISOTROPIC = 5,
	};

	enum VoxelGIQuality {
		VOXEL_GI_QUALITY_LOW = 0,
		VOXEL_GI_QUALITY_HIGH = 1,
	};

	enum ParticlesMode {
		PARTICLES_MODE_2D = 0,
		PARTICLES_MODE_3D = 1,
	};

	enum ParticlesTransformAlign {
		PARTICLES_TRANSFORM_ALIGN_DISABLED = 0,
		PARTICLES_TRANSFORM_ALIGN_Z_BILLBOARD = 1,
		PARTICLES_TRANSFORM_ALIGN_Y_TO_VELOCITY = 2,
		PARTICLES_TRANSFORM_ALIGN_Z_BILLBOARD_Y_TO_VELOCITY = 3,
	};

	enum ParticlesDrawOrder {
		PARTICLES_DRAW_ORDER_INDEX = 0,
		PARTICLES_DRAW_ORDER_LIFETIME = 1,
		PARTICLES_DRAW_ORDER_REVERSE_LIFETIME = 2,
		PARTICLES_DRAW_ORDER_VIEW_DEPTH = 3,
	};

	enum ParticlesCollisionType {
		PARTICLES_COLLISION_TYPE_SPHERE_ATTRACT = 0,
		PARTICLES_COLLISION_TYPE_BOX_ATTRACT = 1,
		PARTICLES_COLLISION_TYPE_VECTOR_FIELD_ATTRACT = 2,
		PARTICLES_COLLISION_TYPE_SPHERE_COLLIDE = 3,
		PARTICLES_COLLISION_TYPE_BOX_COLLIDE = 4,
		PARTICLES_COLLISION_TYPE_SDF_COLLIDE = 5,
		PARTICLES_COLLISION_TYPE_HEIGHTFIELD_COLLIDE = 6,
	};

	enum ParticlesCollisionHeightfieldResolution {
		PARTICLES_COLLISION_HEIGHTFIELD_RESOLUTION_256 = 0,
		PARTICLES_COLLISION_HEIGHTFIELD_RESOLUTION_512 = 1,
		PARTICLES_COLLISION_HEIGHTFIELD_RESOLUTION_1024 = 2,
		PARTICLES_COLLISION_HEIGHTFIELD_RESOLUTION_2048 = 3,
		PARTICLES_COLLISION_HEIGHTFIELD_RESOLUTION_4096 = 4,
		PARTICLES_COLLISION_HEIGHTFIELD_RESOLUTION_8192 = 5,
		PARTICLES_COLLISION_HEIGHTFIELD_RESOLUTION_MAX = 6,
	};

	enum FogVolumeShape {
		FOG_VOLUME_SHAPE_ELLIPSOID = 0,
		FOG_VOLUME_SHAPE_CONE = 1,
		FOG_VOLUME_SHAPE_CYLINDER = 2,
		FOG_VOLUME_SHAPE_BOX = 3,
		FOG_VOLUME_SHAPE_WORLD = 4,
		FOG_VOLUME_SHAPE_MAX = 5,
	};

	enum ViewportScaling3DMode {
		VIEWPORT_SCALING_3D_MODE_BILINEAR = 0,
		VIEWPORT_SCALING_3D_MODE_FSR = 1,
		VIEWPORT_SCALING_3D_MODE_FSR2 = 2,
		VIEWPORT_SCALING_3D_MODE_MAX = 3,
	};

	enum ViewportUpdateMode {
		VIEWPORT_UPDATE_DISABLED = 0,
		VIEWPORT_UPDATE_ONCE = 1,
		VIEWPORT_UPDATE_WHEN_VISIBLE = 2,
		VIEWPORT_UPDATE_WHEN_PARENT_VISIBLE = 3,
		VIEWPORT_UPDATE_ALWAYS = 4,
	};

	enum ViewportClearMode {
		VIEWPORT_CLEAR_ALWAYS = 0,
		VIEWPORT_CLEAR_NEVER = 1,
		VIEWPORT_CLEAR_ONLY_NEXT_FRAME = 2,
	};

	enum ViewportEnvironmentMode {
		VIEWPORT_ENVIRONMENT_DISABLED = 0,
		VIEWPORT_ENVIRONMENT_ENABLED = 1,
		VIEWPORT_ENVIRONMENT_INHERIT = 2,
		VIEWPORT_ENVIRONMENT_MAX = 3,
	};

	enum ViewportSDFOversize {
		VIEWPORT_SDF_OVERSIZE_100_PERCENT = 0,
		VIEWPORT_SDF_OVERSIZE_120_PERCENT = 1,
		VIEWPORT_SDF_OVERSIZE_150_PERCENT = 2,
		VIEWPORT_SDF_OVERSIZE_200_PERCENT = 3,
		VIEWPORT_SDF_OVERSIZE_MAX = 4,
	};

	enum ViewportSDFScale {
		VIEWPORT_SDF_SCALE_100_PERCENT = 0,
		VIEWPORT_SDF_SCALE_50_PERCENT = 1,
		VIEWPORT_SDF_SCALE_25_PERCENT = 2,
		VIEWPORT_SDF_SCALE_MAX = 3,
	};

	enum ViewportMSAA {
		VIEWPORT_MSAA_DISABLED = 0,
		VIEWPORT_MSAA_2X = 1,
		VIEWPORT_MSAA_4X = 2,
		VIEWPORT_MSAA_8X = 3,
		VIEWPORT_MSAA_MAX = 4,
	};

	enum ViewportScreenSpaceAA {
		VIEWPORT_SCREEN_SPACE_AA_DISABLED = 0,
		VIEWPORT_SCREEN_SPACE_AA_FXAA = 1,
		VIEWPORT_SCREEN_SPACE_AA_MAX = 2,
	};

	enum ViewportOcclusionCullingBuildQuality {
		VIEWPORT_OCCLUSION_BUILD_QUALITY_LOW = 0,
		VIEWPORT_OCCLUSION_BUILD_QUALITY_MEDIUM = 1,
		VIEWPORT_OCCLUSION_BUILD_QUALITY_HIGH = 2,
	};

	enum ViewportRenderInfo {
		VIEWPORT_RENDER_INFO_OBJECTS_IN_FRAME = 0,
		VIEWPORT_RENDER_INFO_PRIMITIVES_IN_FRAME = 1,
		VIEWPORT_RENDER_INFO_DRAW_CALLS_IN_FRAME = 2,
		VIEWPORT_RENDER_INFO_MAX = 3,
	};

	enum ViewportRenderInfoType {
		VIEWPORT_RENDER_INFO_TYPE_VISIBLE = 0,
		VIEWPORT_RENDER_INFO_TYPE_SHADOW = 1,
		VIEWPORT_RENDER_INFO_TYPE_MAX = 2,
	};

	enum ViewportDebugDraw {
		VIEWPORT_DEBUG_DRAW_DISABLED = 0,
		VIEWPORT_DEBUG_DRAW_UNSHADED = 1,
		VIEWPORT_DEBUG_DRAW_LIGHTING = 2,
		VIEWPORT_DEBUG_DRAW_OVERDRAW = 3,
		VIEWPORT_DEBUG_DRAW_WIREFRAME = 4,
		VIEWPORT_DEBUG_DRAW_NORMAL_BUFFER = 5,
		VIEWPORT_DEBUG_DRAW_VOXEL_GI_ALBEDO = 6,
		VIEWPORT_DEBUG_DRAW_VOXEL_GI_LIGHTING = 7,
		VIEWPORT_DEBUG_DRAW_VOXEL_GI_EMISSION = 8,
		VIEWPORT_DEBUG_DRAW_SHADOW_ATLAS = 9,
		VIEWPORT_DEBUG_DRAW_DIRECTIONAL_SHADOW_ATLAS = 10,
		VIEWPORT_DEBUG_DRAW_SCENE_LUMINANCE = 11,
		VIEWPORT_DEBUG_DRAW_SSAO = 12,
		VIEWPORT_DEBUG_DRAW_SSIL = 13,
		VIEWPORT_DEBUG_DRAW_PSSM_SPLITS = 14,
		VIEWPORT_DEBUG_DRAW_DECAL_ATLAS = 15,
		VIEWPORT_DEBUG_DRAW_SDFGI = 16,
		VIEWPORT_DEBUG_DRAW_SDFGI_PROBES = 17,
		VIEWPORT_DEBUG_DRAW_GI_BUFFER = 18,
		VIEWPORT_DEBUG_DRAW_DISABLE_LOD = 19,
		VIEWPORT_DEBUG_DRAW_CLUSTER_OMNI_LIGHTS = 20,
		VIEWPORT_DEBUG_DRAW_CLUSTER_SPOT_LIGHTS = 21,
		VIEWPORT_DEBUG_DRAW_CLUSTER_DECALS = 22,
		VIEWPORT_DEBUG_DRAW_CLUSTER_REFLECTION_PROBES = 23,
		VIEWPORT_DEBUG_DRAW_OCCLUDERS = 24,
		VIEWPORT_DEBUG_DRAW_MOTION_VECTORS = 25,
		VIEWPORT_DEBUG_DRAW_INTERNAL_BUFFER = 26,
	};

	enum ViewportVRSMode {
		VIEWPORT_VRS_DISABLED = 0,
		VIEWPORT_VRS_TEXTURE = 1,
		VIEWPORT_VRS_XR = 2,
		VIEWPORT_VRS_MAX = 3,
	};

	enum SkyMode {
		SKY_MODE_AUTOMATIC = 0,
		SKY_MODE_QUALITY = 1,
		SKY_MODE_INCREMENTAL = 2,
		SKY_MODE_REALTIME = 3,
	};

	enum EnvironmentBG {
		ENV_BG_CLEAR_COLOR = 0,
		ENV_BG_COLOR = 1,
		ENV_BG_SKY = 2,
		ENV_BG_CANVAS = 3,
		ENV_BG_KEEP = 4,
		ENV_BG_CAMERA_FEED = 5,
		ENV_BG_MAX = 6,
	};

	enum EnvironmentAmbientSource {
		ENV_AMBIENT_SOURCE_BG = 0,
		ENV_AMBIENT_SOURCE_DISABLED = 1,
		ENV_AMBIENT_SOURCE_COLOR = 2,
		ENV_AMBIENT_SOURCE_SKY = 3,
	};

	enum EnvironmentReflectionSource {
		ENV_REFLECTION_SOURCE_BG = 0,
		ENV_REFLECTION_SOURCE_DISABLED = 1,
		ENV_REFLECTION_SOURCE_SKY = 2,
	};

	enum EnvironmentGlowBlendMode {
		ENV_GLOW_BLEND_MODE_ADDITIVE = 0,
		ENV_GLOW_BLEND_MODE_SCREEN = 1,
		ENV_GLOW_BLEND_MODE_SOFTLIGHT = 2,
		ENV_GLOW_BLEND_MODE_REPLACE = 3,
		ENV_GLOW_BLEND_MODE_MIX = 4,
	};

	enum EnvironmentToneMapper {
		ENV_TONE_MAPPER_LINEAR = 0,
		ENV_TONE_MAPPER_REINHARD = 1,
		ENV_TONE_MAPPER_FILMIC = 2,
		ENV_TONE_MAPPER_ACES = 3,
	};

	enum EnvironmentSSRRoughnessQuality {
		ENV_SSR_ROUGHNESS_QUALITY_DISABLED = 0,
		ENV_SSR_ROUGHNESS_QUALITY_LOW = 1,
		ENV_SSR_ROUGHNESS_QUALITY_MEDIUM = 2,
		ENV_SSR_ROUGHNESS_QUALITY_HIGH = 3,
	};

	enum EnvironmentSSAOQuality {
		ENV_SSAO_QUALITY_VERY_LOW = 0,
		ENV_SSAO_QUALITY_LOW = 1,
		ENV_SSAO_QUALITY_MEDIUM = 2,
		ENV_SSAO_QUALITY_HIGH = 3,
		ENV_SSAO_QUALITY_ULTRA = 4,
	};

	enum EnvironmentSSILQuality {
		ENV_SSIL_QUALITY_VERY_LOW = 0,
		ENV_SSIL_QUALITY_LOW = 1,
		ENV_SSIL_QUALITY_MEDIUM = 2,
		ENV_SSIL_QUALITY_HIGH = 3,
		ENV_SSIL_QUALITY_ULTRA = 4,
	};

	enum EnvironmentSDFGIYScale {
		ENV_SDFGI_Y_SCALE_50_PERCENT = 0,
		ENV_SDFGI_Y_SCALE_75_PERCENT = 1,
		ENV_SDFGI_Y_SCALE_100_PERCENT = 2,
	};

	enum EnvironmentSDFGIRayCount {
		ENV_SDFGI_RAY_COUNT_4 = 0,
		ENV_SDFGI_RAY_COUNT_8 = 1,
		ENV_SDFGI_RAY_COUNT_16 = 2,
		ENV_SDFGI_RAY_COUNT_32 = 3,
		ENV_SDFGI_RAY_COUNT_64 = 4,
		ENV_SDFGI_RAY_COUNT_96 = 5,
		ENV_SDFGI_RAY_COUNT_128 = 6,
		ENV_SDFGI_RAY_COUNT_MAX = 7,
	};

	enum EnvironmentSDFGIFramesToConverge {
		ENV_SDFGI_CONVERGE_IN_5_FRAMES = 0,
		ENV_SDFGI_CONVERGE_IN_10_FRAMES = 1,
		ENV_SDFGI_CONVERGE_IN_15_FRAMES = 2,
		ENV_SDFGI_CONVERGE_IN_20_FRAMES = 3,
		ENV_SDFGI_CONVERGE_IN_25_FRAMES = 4,
		ENV_SDFGI_CONVERGE_IN_30_FRAMES = 5,
		ENV_SDFGI_CONVERGE_MAX = 6,
	};

	enum EnvironmentSDFGIFramesToUpdateLight {
		ENV_SDFGI_UPDATE_LIGHT_IN_1_FRAME = 0,
		ENV_SDFGI_UPDATE_LIGHT_IN_2_FRAMES = 1,
		ENV_SDFGI_UPDATE_LIGHT_IN_4_FRAMES = 2,
		ENV_SDFGI_UPDATE_LIGHT_IN_8_FRAMES = 3,
		ENV_SDFGI_UPDATE_LIGHT_IN_16_FRAMES = 4,
		ENV_SDFGI_UPDATE_LIGHT_MAX = 5,
	};

	enum SubSurfaceScatteringQuality {
		SUB_SURFACE_SCATTERING_QUALITY_DISABLED = 0,
		SUB_SURFACE_SCATTERING_QUALITY_LOW = 1,
		SUB_SURFACE_SCATTERING_QUALITY_MEDIUM = 2,
		SUB_SURFACE_SCATTERING_QUALITY_HIGH = 3,
	};

	enum DOFBokehShape {
		DOF_BOKEH_BOX = 0,
		DOF_BOKEH_HEXAGON = 1,
		DOF_BOKEH_CIRCLE = 2,
	};

	enum DOFBlurQuality {
		DOF_BLUR_QUALITY_VERY_LOW = 0,
		DOF_BLUR_QUALITY_LOW = 1,
		DOF_BLUR_QUALITY_MEDIUM = 2,
		DOF_BLUR_QUALITY_HIGH = 3,
	};

	enum InstanceType {
		INSTANCE_NONE = 0,
		INSTANCE_MESH = 1,
		INSTANCE_MULTIMESH = 2,
		INSTANCE_PARTICLES = 3,
		INSTANCE_PARTICLES_COLLISION = 4,
		INSTANCE_LIGHT = 5,
		INSTANCE_REFLECTION_PROBE = 6,
		INSTANCE_DECAL = 7,
		INSTANCE_VOXEL_GI = 8,
		INSTANCE_LIGHTMAP = 9,
		INSTANCE_OCCLUDER = 10,
		INSTANCE_VISIBLITY_NOTIFIER = 11,
		INSTANCE_FOG_VOLUME = 12,
		INSTANCE_MAX = 13,
		INSTANCE_GEOMETRY_MASK = 14,
	};

	enum InstanceFlags {
		INSTANCE_FLAG_USE_BAKED_LIGHT = 0,
		INSTANCE_FLAG_USE_DYNAMIC_GI = 1,
		INSTANCE_FLAG_DRAW_NEXT_FRAME_IF_VISIBLE = 2,
		INSTANCE_FLAG_IGNORE_OCCLUSION_CULLING = 3,
		INSTANCE_FLAG_MAX = 4,
	};

	enum ShadowCastingSetting {
		SHADOW_CASTING_SETTING_OFF = 0,
		SHADOW_CASTING_SETTING_ON = 1,
		SHADOW_CASTING_SETTING_DOUBLE_SIDED = 2,
		SHADOW_CASTING_SETTING_SHADOWS_ONLY = 3,
	};

	enum VisibilityRangeFadeMode {
		VISIBILITY_RANGE_FADE_DISABLED = 0,
		VISIBILITY_RANGE_FADE_SELF = 1,
		VISIBILITY_RANGE_FADE_DEPENDENCIES = 2,
	};

	enum BakeChannels {
		BAKE_CHANNEL_ALBEDO_ALPHA = 0,
		BAKE_CHANNEL_NORMAL = 1,
		BAKE_CHANNEL_ORM = 2,
		BAKE_CHANNEL_EMISSION = 3,
	};

	enum CanvasTextureChannel {
		CANVAS_TEXTURE_CHANNEL_DIFFUSE = 0,
		CANVAS_TEXTURE_CHANNEL_NORMAL = 1,
		CANVAS_TEXTURE_CHANNEL_SPECULAR = 2,
	};

	enum NinePatchAxisMode {
		NINE_PATCH_STRETCH = 0,
		NINE_PATCH_TILE = 1,
		NINE_PATCH_TILE_FIT = 2,
	};

	enum CanvasItemTextureFilter {
		CANVAS_ITEM_TEXTURE_FILTER_DEFAULT = 0,
		CANVAS_ITEM_TEXTURE_FILTER_NEAREST = 1,
		CANVAS_ITEM_TEXTURE_FILTER_LINEAR = 2,
		CANVAS_ITEM_TEXTURE_FILTER_NEAREST_WITH_MIPMAPS = 3,
		CANVAS_ITEM_TEXTURE_FILTER_LINEAR_WITH_MIPMAPS = 4,
		CANVAS_ITEM_TEXTURE_FILTER_NEAREST_WITH_MIPMAPS_ANISOTROPIC = 5,
		CANVAS_ITEM_TEXTURE_FILTER_LINEAR_WITH_MIPMAPS_ANISOTROPIC = 6,
		CANVAS_ITEM_TEXTURE_FILTER_MAX = 7,
	};

	enum CanvasItemTextureRepeat {
		CANVAS_ITEM_TEXTURE_REPEAT_DEFAULT = 0,
		CANVAS_ITEM_TEXTURE_REPEAT_DISABLED = 1,
		CANVAS_ITEM_TEXTURE_REPEAT_ENABLED = 2,
		CANVAS_ITEM_TEXTURE_REPEAT_MIRROR = 3,
		CANVAS_ITEM_TEXTURE_REPEAT_MAX = 4,
	};

	enum CanvasGroupMode {
		CANVAS_GROUP_MODE_DISABLED = 0,
		CANVAS_GROUP_MODE_CLIP_ONLY = 1,
		CANVAS_GROUP_MODE_CLIP_AND_DRAW = 2,
		CANVAS_GROUP_MODE_TRANSPARENT = 3,
	};

	enum CanvasLightMode {
		CANVAS_LIGHT_MODE_POINT = 0,
		CANVAS_LIGHT_MODE_DIRECTIONAL = 1,
	};

	enum CanvasLightBlendMode {
		CANVAS_LIGHT_BLEND_MODE_ADD = 0,
		CANVAS_LIGHT_BLEND_MODE_SUB = 1,
		CANVAS_LIGHT_BLEND_MODE_MIX = 2,
	};

	enum CanvasLightShadowFilter {
		CANVAS_LIGHT_FILTER_NONE = 0,
		CANVAS_LIGHT_FILTER_PCF5 = 1,
		CANVAS_LIGHT_FILTER_PCF13 = 2,
		CANVAS_LIGHT_FILTER_MAX = 3,
	};

	enum CanvasOccluderPolygonCullMode {
		CANVAS_OCCLUDER_POLYGON_CULL_DISABLED = 0,
		CANVAS_OCCLUDER_POLYGON_CULL_CLOCKWISE = 1,
		CANVAS_OCCLUDER_POLYGON_CULL_COUNTER_CLOCKWISE = 2,
	};

	enum GlobalShaderParameterType {
		GLOBAL_VAR_TYPE_BOOL = 0,
		GLOBAL_VAR_TYPE_BVEC2 = 1,
		GLOBAL_VAR_TYPE_BVEC3 = 2,
		GLOBAL_VAR_TYPE_BVEC4 = 3,
		GLOBAL_VAR_TYPE_INT = 4,
		GLOBAL_VAR_TYPE_IVEC2 = 5,
		GLOBAL_VAR_TYPE_IVEC3 = 6,
		GLOBAL_VAR_TYPE_IVEC4 = 7,
		GLOBAL_VAR_TYPE_RECT2I = 8,
		GLOBAL_VAR_TYPE_UINT = 9,
		GLOBAL_VAR_TYPE_UVEC2 = 10,
		GLOBAL_VAR_TYPE_UVEC3 = 11,
		GLOBAL_VAR_TYPE_UVEC4 = 12,
		GLOBAL_VAR_TYPE_FLOAT = 13,
		GLOBAL_VAR_TYPE_VEC2 = 14,
		GLOBAL_VAR_TYPE_VEC3 = 15,
		GLOBAL_VAR_TYPE_VEC4 = 16,
		GLOBAL_VAR_TYPE_COLOR = 17,
		GLOBAL_VAR_TYPE_RECT2 = 18,
		GLOBAL_VAR_TYPE_MAT2 = 19,
		GLOBAL_VAR_TYPE_MAT3 = 20,
		GLOBAL_VAR_TYPE_MAT4 = 21,
		GLOBAL_VAR_TYPE_TRANSFORM_2D = 22,
		GLOBAL_VAR_TYPE_TRANSFORM = 23,
		GLOBAL_VAR_TYPE_SAMPLER2D = 24,
		GLOBAL_VAR_TYPE_SAMPLER2DARRAY = 25,
		GLOBAL_VAR_TYPE_SAMPLER3D = 26,
		GLOBAL_VAR_TYPE_SAMPLERCUBE = 27,
		GLOBAL_VAR_TYPE_MAX = 28,
	};

	enum RenderingInfo {
		RENDERING_INFO_TOTAL_OBJECTS_IN_FRAME = 0,
		RENDERING_INFO_TOTAL_PRIMITIVES_IN_FRAME = 1,
		RENDERING_INFO_TOTAL_DRAW_CALLS_IN_FRAME = 2,
		RENDERING_INFO_TEXTURE_MEM_USED = 3,
		RENDERING_INFO_BUFFER_MEM_USED = 4,
		RENDERING_INFO_VIDEO_MEM_USED = 5,
	};

	enum Features {
		FEATURE_SHADERS = 0,
		FEATURE_MULTITHREADED = 1,
	};

	static const int NO_INDEX_ARRAY = -1;
	static const int ARRAY_WEIGHTS_SIZE = 4;
	static const int CANVAS_ITEM_Z_MIN = -4096;
	static const int CANVAS_ITEM_Z_MAX = 4096;
	static const int MAX_GLOW_LEVELS = 7;
	static const int MAX_CURSORS = 8;
	static const int MAX_2D_DIRECTIONAL_LIGHTS = 8;
	static const int MATERIAL_RENDER_PRIORITY_MIN = -128;
	static const int MATERIAL_RENDER_PRIORITY_MAX = 127;
	static const int ARRAY_CUSTOM_COUNT = 4;
	static const int PARTICLES_EMIT_FLAG_POSITION = 1;
	static const int PARTICLES_EMIT_FLAG_ROTATION_SCALE = 2;
	static const int PARTICLES_EMIT_FLAG_VELOCITY = 4;
	static const int PARTICLES_EMIT_FLAG_COLOR = 8;
	static const int PARTICLES_EMIT_FLAG_CUSTOM = 16;

	static RenderingServer *get_singleton();

	RID texture_2d_create(const Ref<Image> &image);
	RID texture_2d_layered_create(const TypedArray<Image> &layers, RenderingServer::TextureLayeredType layered_type);
	RID texture_3d_create(Image::Format format, int32_t width, int32_t height, int32_t depth, bool mipmaps, const TypedArray<Image> &data);
	RID texture_proxy_create(const RID &base);
	void texture_2d_update(const RID &texture, const Ref<Image> &image, int32_t layer);
	void texture_3d_update(const RID &texture, const TypedArray<Image> &data);
	void texture_proxy_update(const RID &texture, const RID &proxy_to);
	RID texture_2d_placeholder_create();
	RID texture_2d_layered_placeholder_create(RenderingServer::TextureLayeredType layered_type);
	RID texture_3d_placeholder_create();
	Ref<Image> texture_2d_get(const RID &texture) const;
	Ref<Image> texture_2d_layer_get(const RID &texture, int32_t layer) const;
	TypedArray<Image> texture_3d_get(const RID &texture) const;
	void texture_replace(const RID &texture, const RID &by_texture);
	void texture_set_size_override(const RID &texture, int32_t width, int32_t height);
	void texture_set_path(const RID &texture, const String &path);
	String texture_get_path(const RID &texture) const;
	Image::Format texture_get_format(const RID &texture) const;
	void texture_set_force_redraw_if_visible(const RID &texture, bool enable);
	RID texture_rd_create(const RID &rd_texture, RenderingServer::TextureLayeredType layer_type = (RenderingServer::TextureLayeredType)0);
	RID texture_get_rd_texture(const RID &texture, bool srgb = false) const;
	uint64_t texture_get_native_handle(const RID &texture, bool srgb = false) const;
	RID shader_create();
	void shader_set_code(const RID &shader, const String &code);
	void shader_set_path_hint(const RID &shader, const String &path);
	String shader_get_code(const RID &shader) const;
	TypedArray<Dictionary> get_shader_parameter_list(const RID &shader) const;
	Variant shader_get_parameter_default(const RID &shader, const StringName &name) const;
	void shader_set_default_texture_parameter(const RID &shader, const StringName &name, const RID &texture, int32_t index = 0);
	RID shader_get_default_texture_parameter(const RID &shader, const StringName &name, int32_t index = 0) const;
	RID material_create();
	void material_set_shader(const RID &shader_material, const RID &shader);
	void material_set_param(const RID &material, const StringName &parameter, const Variant &value);
	Variant material_get_param(const RID &material, const StringName &parameter) const;
	void material_set_render_priority(const RID &material, int32_t priority);
	void material_set_next_pass(const RID &material, const RID &next_material);
	RID mesh_create_from_surfaces(const TypedArray<Dictionary> &surfaces, int32_t blend_shape_count = 0);
	RID mesh_create();
	uint32_t mesh_surface_get_format_offset(BitField<RenderingServer::ArrayFormat> format, int32_t vertex_count, int32_t array_index) const;
	uint32_t mesh_surface_get_format_vertex_stride(BitField<RenderingServer::ArrayFormat> format, int32_t vertex_count) const;
	uint32_t mesh_surface_get_format_normal_tangent_stride(BitField<RenderingServer::ArrayFormat> format, int32_t vertex_count) const;
	uint32_t mesh_surface_get_format_attribute_stride(BitField<RenderingServer::ArrayFormat> format, int32_t vertex_count) const;
	uint32_t mesh_surface_get_format_skin_stride(BitField<RenderingServer::ArrayFormat> format, int32_t vertex_count) const;
	void mesh_add_surface(const RID &mesh, const Dictionary &surface);
	void mesh_add_surface_from_arrays(const RID &mesh, RenderingServer::PrimitiveType primitive, const Array &arrays, const Array &blend_shapes = Array(), const Dictionary &lods = Dictionary(), BitField<RenderingServer::ArrayFormat> compress_format = (BitField<RenderingServer::ArrayFormat>)0);
	int32_t mesh_get_blend_shape_count(const RID &mesh) const;
	void mesh_set_blend_shape_mode(const RID &mesh, RenderingServer::BlendShapeMode mode);
	RenderingServer::BlendShapeMode mesh_get_blend_shape_mode(const RID &mesh) const;
	void mesh_surface_set_material(const RID &mesh, int32_t surface, const RID &material);
	RID mesh_surface_get_material(const RID &mesh, int32_t surface) const;
	Dictionary mesh_get_surface(const RID &mesh, int32_t surface);
	Array mesh_surface_get_arrays(const RID &mesh, int32_t surface) const;
	TypedArray<Array> mesh_surface_get_blend_shape_arrays(const RID &mesh, int32_t surface) const;
	int32_t mesh_get_surface_count(const RID &mesh) const;
	void mesh_set_custom_aabb(const RID &mesh, const AABB &aabb);
	AABB mesh_get_custom_aabb(const RID &mesh) const;
	void mesh_clear(const RID &mesh);
	void mesh_surface_update_vertex_region(const RID &mesh, int32_t surface, int32_t offset, const PackedByteArray &data);
	void mesh_surface_update_attribute_region(const RID &mesh, int32_t surface, int32_t offset, const PackedByteArray &data);
	void mesh_surface_update_skin_region(const RID &mesh, int32_t surface, int32_t offset, const PackedByteArray &data);
	void mesh_set_shadow_mesh(const RID &mesh, const RID &shadow_mesh);
	RID multimesh_create();
	void multimesh_allocate_data(const RID &multimesh, int32_t instances, RenderingServer::MultimeshTransformFormat transform_format, bool color_format = false, bool custom_data_format = false);
	int32_t multimesh_get_instance_count(const RID &multimesh) const;
	void multimesh_set_mesh(const RID &multimesh, const RID &mesh);
	void multimesh_instance_set_transform(const RID &multimesh, int32_t index, const Transform3D &transform);
	void multimesh_instance_set_transform_2d(const RID &multimesh, int32_t index, const Transform2D &transform);
	void multimesh_instance_set_color(const RID &multimesh, int32_t index, const Color &color);
	void multimesh_instance_set_custom_data(const RID &multimesh, int32_t index, const Color &custom_data);
	RID multimesh_get_mesh(const RID &multimesh) const;
	AABB multimesh_get_aabb(const RID &multimesh) const;
	Transform3D multimesh_instance_get_transform(const RID &multimesh, int32_t index) const;
	Transform2D multimesh_instance_get_transform_2d(const RID &multimesh, int32_t index) const;
	Color multimesh_instance_get_color(const RID &multimesh, int32_t index) const;
	Color multimesh_instance_get_custom_data(const RID &multimesh, int32_t index) const;
	void multimesh_set_visible_instances(const RID &multimesh, int32_t visible);
	int32_t multimesh_get_visible_instances(const RID &multimesh) const;
	void multimesh_set_buffer(const RID &multimesh, const PackedFloat32Array &buffer);
	PackedFloat32Array multimesh_get_buffer(const RID &multimesh) const;
	RID skeleton_create();
	void skeleton_allocate_data(const RID &skeleton, int32_t bones, bool is_2d_skeleton = false);
	int32_t skeleton_get_bone_count(const RID &skeleton) const;
	void skeleton_bone_set_transform(const RID &skeleton, int32_t bone, const Transform3D &transform);
	Transform3D skeleton_bone_get_transform(const RID &skeleton, int32_t bone) const;
	void skeleton_bone_set_transform_2d(const RID &skeleton, int32_t bone, const Transform2D &transform);
	Transform2D skeleton_bone_get_transform_2d(const RID &skeleton, int32_t bone) const;
	void skeleton_set_base_transform_2d(const RID &skeleton, const Transform2D &base_transform);
	RID directional_light_create();
	RID omni_light_create();
	RID spot_light_create();
	void light_set_color(const RID &light, const Color &color);
	void light_set_param(const RID &light, RenderingServer::LightParam param, double value);
	void light_set_shadow(const RID &light, bool enabled);
	void light_set_projector(const RID &light, const RID &texture);
	void light_set_negative(const RID &light, bool enable);
	void light_set_cull_mask(const RID &light, uint32_t mask);
	void light_set_distance_fade(const RID &decal, bool enabled, double begin, double shadow, double length);
	void light_set_reverse_cull_face_mode(const RID &light, bool enabled);
	void light_set_bake_mode(const RID &light, RenderingServer::LightBakeMode bake_mode);
	void light_set_max_sdfgi_cascade(const RID &light, uint32_t cascade);
	void light_omni_set_shadow_mode(const RID &light, RenderingServer::LightOmniShadowMode mode);
	void light_directional_set_shadow_mode(const RID &light, RenderingServer::LightDirectionalShadowMode mode);
	void light_directional_set_blend_splits(const RID &light, bool enable);
	void light_directional_set_sky_mode(const RID &light, RenderingServer::LightDirectionalSkyMode mode);
	void light_projectors_set_filter(RenderingServer::LightProjectorFilter filter);
	void positional_soft_shadow_filter_set_quality(RenderingServer::ShadowQuality quality);
	void directional_soft_shadow_filter_set_quality(RenderingServer::ShadowQuality quality);
	void directional_shadow_atlas_set_size(int32_t size, bool is_16bits);
	RID reflection_probe_create();
	void reflection_probe_set_update_mode(const RID &probe, RenderingServer::ReflectionProbeUpdateMode mode);
	void reflection_probe_set_intensity(const RID &probe, double intensity);
	void reflection_probe_set_ambient_mode(const RID &probe, RenderingServer::ReflectionProbeAmbientMode mode);
	void reflection_probe_set_ambient_color(const RID &probe, const Color &color);
	void reflection_probe_set_ambient_energy(const RID &probe, double energy);
	void reflection_probe_set_max_distance(const RID &probe, double distance);
	void reflection_probe_set_size(const RID &probe, const Vector3 &size);
	void reflection_probe_set_origin_offset(const RID &probe, const Vector3 &offset);
	void reflection_probe_set_as_interior(const RID &probe, bool enable);
	void reflection_probe_set_enable_box_projection(const RID &probe, bool enable);
	void reflection_probe_set_enable_shadows(const RID &probe, bool enable);
	void reflection_probe_set_cull_mask(const RID &probe, uint32_t layers);
	void reflection_probe_set_resolution(const RID &probe, int32_t resolution);
	void reflection_probe_set_mesh_lod_threshold(const RID &probe, double pixels);
	RID decal_create();
	void decal_set_size(const RID &decal, const Vector3 &size);
	void decal_set_texture(const RID &decal, RenderingServer::DecalTexture type, const RID &texture);
	void decal_set_emission_energy(const RID &decal, double energy);
	void decal_set_albedo_mix(const RID &decal, double albedo_mix);
	void decal_set_modulate(const RID &decal, const Color &color);
	void decal_set_cull_mask(const RID &decal, uint32_t mask);
	void decal_set_distance_fade(const RID &decal, bool enabled, double begin, double length);
	void decal_set_fade(const RID &decal, double above, double below);
	void decal_set_normal_fade(const RID &decal, double fade);
	void decals_set_filter(RenderingServer::DecalFilter filter);
	void gi_set_use_half_resolution(bool half_resolution);
	RID voxel_gi_create();
	void voxel_gi_allocate_data(const RID &voxel_gi, const Transform3D &to_cell_xform, const AABB &aabb, const Vector3i &octree_size, const PackedByteArray &octree_cells, const PackedByteArray &data_cells, const PackedByteArray &distance_field, const PackedInt32Array &level_counts);
	Vector3i voxel_gi_get_octree_size(const RID &voxel_gi) const;
	PackedByteArray voxel_gi_get_octree_cells(const RID &voxel_gi) const;
	PackedByteArray voxel_gi_get_data_cells(const RID &voxel_gi) const;
	PackedByteArray voxel_gi_get_distance_field(const RID &voxel_gi) const;
	PackedInt32Array voxel_gi_get_level_counts(const RID &voxel_gi) const;
	Transform3D voxel_gi_get_to_cell_xform(const RID &voxel_gi) const;
	void voxel_gi_set_dynamic_range(const RID &voxel_gi, double range);
	void voxel_gi_set_propagation(const RID &voxel_gi, double amount);
	void voxel_gi_set_energy(const RID &voxel_gi, double energy);
	void voxel_gi_set_baked_exposure_normalization(const RID &voxel_gi, double baked_exposure);
	void voxel_gi_set_bias(const RID &voxel_gi, double bias);
	void voxel_gi_set_normal_bias(const RID &voxel_gi, double bias);
	void voxel_gi_set_interior(const RID &voxel_gi, bool enable);
	void voxel_gi_set_use_two_bounces(const RID &voxel_gi, bool enable);
	void voxel_gi_set_quality(RenderingServer::VoxelGIQuality quality);
	RID lightmap_create();
	void lightmap_set_textures(const RID &lightmap, const RID &light, bool uses_sh);
	void lightmap_set_probe_bounds(const RID &lightmap, const AABB &bounds);
	void lightmap_set_probe_interior(const RID &lightmap, bool interior);
	void lightmap_set_probe_capture_data(const RID &lightmap, const PackedVector3Array &points, const PackedColorArray &point_sh, const PackedInt32Array &tetrahedra, const PackedInt32Array &bsp_tree);
	PackedVector3Array lightmap_get_probe_capture_points(const RID &lightmap) const;
	PackedColorArray lightmap_get_probe_capture_sh(const RID &lightmap) const;
	PackedInt32Array lightmap_get_probe_capture_tetrahedra(const RID &lightmap) const;
	PackedInt32Array lightmap_get_probe_capture_bsp_tree(const RID &lightmap) const;
	void lightmap_set_baked_exposure_normalization(const RID &lightmap, double baked_exposure);
	void lightmap_set_probe_capture_update_speed(double speed);
	RID particles_create();
	void particles_set_mode(const RID &particles, RenderingServer::ParticlesMode mode);
	void particles_set_emitting(const RID &particles, bool emitting);
	bool particles_get_emitting(const RID &particles);
	void particles_set_amount(const RID &particles, int32_t amount);
	void particles_set_amount_ratio(const RID &particles, double ratio);
	void particles_set_lifetime(const RID &particles, double lifetime);
	void particles_set_one_shot(const RID &particles, bool one_shot);
	void particles_set_pre_process_time(const RID &particles, double time);
	void particles_set_explosiveness_ratio(const RID &particles, double ratio);
	void particles_set_randomness_ratio(const RID &particles, double ratio);
	void particles_set_interp_to_end(const RID &particles, double factor);
	void particles_set_emitter_velocity(const RID &particles, const Vector3 &velocity);
	void particles_set_custom_aabb(const RID &particles, const AABB &aabb);
	void particles_set_speed_scale(const RID &particles, double scale);
	void particles_set_use_local_coordinates(const RID &particles, bool enable);
	void particles_set_process_material(const RID &particles, const RID &material);
	void particles_set_fixed_fps(const RID &particles, int32_t fps);
	void particles_set_interpolate(const RID &particles, bool enable);
	void particles_set_fractional_delta(const RID &particles, bool enable);
	void particles_set_collision_base_size(const RID &particles, double size);
	void particles_set_transform_align(const RID &particles, RenderingServer::ParticlesTransformAlign align);
	void particles_set_trails(const RID &particles, bool enable, double length_sec);
	void particles_set_trail_bind_poses(const RID &particles, const TypedArray<Transform3D> &bind_poses);
	bool particles_is_inactive(const RID &particles);
	void particles_request_process(const RID &particles);
	void particles_restart(const RID &particles);
	void particles_set_subemitter(const RID &particles, const RID &subemitter_particles);
	void particles_emit(const RID &particles, const Transform3D &transform, const Vector3 &velocity, const Color &color, const Color &custom, uint32_t emit_flags);
	void particles_set_draw_order(const RID &particles, RenderingServer::ParticlesDrawOrder order);
	void particles_set_draw_passes(const RID &particles, int32_t count);
	void particles_set_draw_pass_mesh(const RID &particles, int32_t pass, const RID &mesh);
	AABB particles_get_current_aabb(const RID &particles);
	void particles_set_emission_transform(const RID &particles, const Transform3D &transform);
	RID particles_collision_create();
	void particles_collision_set_collision_type(const RID &particles_collision, RenderingServer::ParticlesCollisionType type);
	void particles_collision_set_cull_mask(const RID &particles_collision, uint32_t mask);
	void particles_collision_set_sphere_radius(const RID &particles_collision, double radius);
	void particles_collision_set_box_extents(const RID &particles_collision, const Vector3 &extents);
	void particles_collision_set_attractor_strength(const RID &particles_collision, double strength);
	void particles_collision_set_attractor_directionality(const RID &particles_collision, double amount);
	void particles_collision_set_attractor_attenuation(const RID &particles_collision, double curve);
	void particles_collision_set_field_texture(const RID &particles_collision, const RID &texture);
	void particles_collision_height_field_update(const RID &particles_collision);
	void particles_collision_set_height_field_resolution(const RID &particles_collision, RenderingServer::ParticlesCollisionHeightfieldResolution resolution);
	RID fog_volume_create();
	void fog_volume_set_shape(const RID &fog_volume, RenderingServer::FogVolumeShape shape);
	void fog_volume_set_size(const RID &fog_volume, const Vector3 &size);
	void fog_volume_set_material(const RID &fog_volume, const RID &material);
	RID visibility_notifier_create();
	void visibility_notifier_set_aabb(const RID &notifier, const AABB &aabb);
	void visibility_notifier_set_callbacks(const RID &notifier, const Callable &enter_callable, const Callable &exit_callable);
	RID occluder_create();
	void occluder_set_mesh(const RID &occluder, const PackedVector3Array &vertices, const PackedInt32Array &indices);
	RID camera_create();
	void camera_set_perspective(const RID &camera, double fovy_degrees, double z_near, double z_far);
	void camera_set_orthogonal(const RID &camera, double size, double z_near, double z_far);
	void camera_set_frustum(const RID &camera, double size, const Vector2 &offset, double z_near, double z_far);
	void camera_set_transform(const RID &camera, const Transform3D &transform);
	void camera_set_cull_mask(const RID &camera, uint32_t layers);
	void camera_set_environment(const RID &camera, const RID &env);
	void camera_set_camera_attributes(const RID &camera, const RID &effects);
	void camera_set_use_vertical_aspect(const RID &camera, bool enable);
	RID viewport_create();
	void viewport_set_use_xr(const RID &viewport, bool use_xr);
	void viewport_set_size(const RID &viewport, int32_t width, int32_t height);
	void viewport_set_active(const RID &viewport, bool active);
	void viewport_set_parent_viewport(const RID &viewport, const RID &parent_viewport);
	void viewport_attach_to_screen(const RID &viewport, const Rect2 &rect = Rect2(0, 0, 0, 0), int32_t screen = 0);
	void viewport_set_render_direct_to_screen(const RID &viewport, bool enabled);
	void viewport_set_canvas_cull_mask(const RID &viewport, uint32_t canvas_cull_mask);
	void viewport_set_scaling_3d_mode(const RID &viewport, RenderingServer::ViewportScaling3DMode scaling_3d_mode);
	void viewport_set_scaling_3d_scale(const RID &viewport, double scale);
	void viewport_set_fsr_sharpness(const RID &viewport, double sharpness);
	void viewport_set_texture_mipmap_bias(const RID &viewport, double mipmap_bias);
	void viewport_set_update_mode(const RID &viewport, RenderingServer::ViewportUpdateMode update_mode);
	void viewport_set_clear_mode(const RID &viewport, RenderingServer::ViewportClearMode clear_mode);
	RID viewport_get_render_target(const RID &viewport) const;
	RID viewport_get_texture(const RID &viewport) const;
	void viewport_set_disable_3d(const RID &viewport, bool disable);
	void viewport_set_disable_2d(const RID &viewport, bool disable);
	void viewport_set_environment_mode(const RID &viewport, RenderingServer::ViewportEnvironmentMode mode);
	void viewport_attach_camera(const RID &viewport, const RID &camera);
	void viewport_set_scenario(const RID &viewport, const RID &scenario);
	void viewport_attach_canvas(const RID &viewport, const RID &canvas);
	void viewport_remove_canvas(const RID &viewport, const RID &canvas);
	void viewport_set_snap_2d_transforms_to_pixel(const RID &viewport, bool enabled);
	void viewport_set_snap_2d_vertices_to_pixel(const RID &viewport, bool enabled);
	void viewport_set_default_canvas_item_texture_filter(const RID &viewport, RenderingServer::CanvasItemTextureFilter filter);
	void viewport_set_default_canvas_item_texture_repeat(const RID &viewport, RenderingServer::CanvasItemTextureRepeat repeat);
	void viewport_set_canvas_transform(const RID &viewport, const RID &canvas, const Transform2D &offset);
	void viewport_set_canvas_stacking(const RID &viewport, const RID &canvas, int32_t layer, int32_t sublayer);
	void viewport_set_transparent_background(const RID &viewport, bool enabled);
	void viewport_set_global_canvas_transform(const RID &viewport, const Transform2D &transform);
	void viewport_set_sdf_oversize_and_scale(const RID &viewport, RenderingServer::ViewportSDFOversize oversize, RenderingServer::ViewportSDFScale scale);
	void viewport_set_positional_shadow_atlas_size(const RID &viewport, int32_t size, bool use_16_bits = false);
	void viewport_set_positional_shadow_atlas_quadrant_subdivision(const RID &viewport, int32_t quadrant, int32_t subdivision);
	void viewport_set_msaa_3d(const RID &viewport, RenderingServer::ViewportMSAA msaa);
	void viewport_set_msaa_2d(const RID &viewport, RenderingServer::ViewportMSAA msaa);
	void viewport_set_use_hdr_2d(const RID &viewport, bool enabled);
	void viewport_set_screen_space_aa(const RID &viewport, RenderingServer::ViewportScreenSpaceAA mode);
	void viewport_set_use_taa(const RID &viewport, bool enable);
	void viewport_set_use_debanding(const RID &viewport, bool enable);
	void viewport_set_use_occlusion_culling(const RID &viewport, bool enable);
	void viewport_set_occlusion_rays_per_thread(int32_t rays_per_thread);
	void viewport_set_occlusion_culling_build_quality(RenderingServer::ViewportOcclusionCullingBuildQuality quality);
	int32_t viewport_get_render_info(const RID &viewport, RenderingServer::ViewportRenderInfoType type, RenderingServer::ViewportRenderInfo info);
	void viewport_set_debug_draw(const RID &viewport, RenderingServer::ViewportDebugDraw draw);
	void viewport_set_measure_render_time(const RID &viewport, bool enable);
	double viewport_get_measured_render_time_cpu(const RID &viewport) const;
	double viewport_get_measured_render_time_gpu(const RID &viewport) const;
	void viewport_set_vrs_mode(const RID &viewport, RenderingServer::ViewportVRSMode mode);
	void viewport_set_vrs_texture(const RID &viewport, const RID &texture);
	RID sky_create();
	void sky_set_radiance_size(const RID &sky, int32_t radiance_size);
	void sky_set_mode(const RID &sky, RenderingServer::SkyMode mode);
	void sky_set_material(const RID &sky, const RID &material);
	Ref<Image> sky_bake_panorama(const RID &sky, double energy, bool bake_irradiance, const Vector2i &size);
	RID environment_create();
	void environment_set_background(const RID &env, RenderingServer::EnvironmentBG bg);
	void environment_set_sky(const RID &env, const RID &sky);
	void environment_set_sky_custom_fov(const RID &env, double scale);
	void environment_set_sky_orientation(const RID &env, const Basis &orientation);
	void environment_set_bg_color(const RID &env, const Color &color);
	void environment_set_bg_energy(const RID &env, double multiplier, double exposure_value);
	void environment_set_canvas_max_layer(const RID &env, int32_t max_layer);
	void environment_set_ambient_light(const RID &env, const Color &color, RenderingServer::EnvironmentAmbientSource ambient = (RenderingServer::EnvironmentAmbientSource)0, double energy = 1.0, double sky_contibution = 0.0, RenderingServer::EnvironmentReflectionSource reflection_source = (RenderingServer::EnvironmentReflectionSource)0);
	void environment_set_glow(const RID &env, bool enable, const PackedFloat32Array &levels, double intensity, double strength, double mix, double bloom_threshold, RenderingServer::EnvironmentGlowBlendMode blend_mode, double hdr_bleed_threshold, double hdr_bleed_scale, double hdr_luminance_cap, double glow_map_strength, const RID &glow_map);
	void environment_set_tonemap(const RID &env, RenderingServer::EnvironmentToneMapper tone_mapper, double exposure, double white);
	void environment_set_adjustment(const RID &env, bool enable, double brightness, double contrast, double saturation, bool use_1d_color_correction, const RID &color_correction);
	void environment_set_ssr(const RID &env, bool enable, int32_t max_steps, double fade_in, double fade_out, double depth_tolerance);
	void environment_set_ssao(const RID &env, bool enable, double radius, double intensity, double power, double detail, double horizon, double sharpness, double light_affect, double ao_channel_affect);
	void environment_set_fog(const RID &env, bool enable, const Color &light_color, double light_energy, double sun_scatter, double density, double height, double height_density, double aerial_perspective, double sky_affect);
	void environment_set_sdfgi(const RID &env, bool enable, int32_t cascades, double min_cell_size, RenderingServer::EnvironmentSDFGIYScale y_scale, bool use_occlusion, double bounce_feedback, bool read_sky, double energy, double normal_bias, double probe_bias);
	void environment_set_volumetric_fog(const RID &env, bool enable, double density, const Color &albedo, const Color &emission, double emission_energy, double anisotropy, double length, double p_detail_spread, double gi_inject, bool temporal_reprojection, double temporal_reprojection_amount, double ambient_inject, double sky_affect);
	void environment_glow_set_use_bicubic_upscale(bool enable);
	void environment_set_ssr_roughness_quality(RenderingServer::EnvironmentSSRRoughnessQuality quality);
	void environment_set_ssao_quality(RenderingServer::EnvironmentSSAOQuality quality, bool half_size, double adaptive_target, int32_t blur_passes, double fadeout_from, double fadeout_to);
	void environment_set_ssil_quality(RenderingServer::EnvironmentSSILQuality quality, bool half_size, double adaptive_target, int32_t blur_passes, double fadeout_from, double fadeout_to);
	void environment_set_sdfgi_ray_count(RenderingServer::EnvironmentSDFGIRayCount ray_count);
	void environment_set_sdfgi_frames_to_converge(RenderingServer::EnvironmentSDFGIFramesToConverge frames);
	void environment_set_sdfgi_frames_to_update_light(RenderingServer::EnvironmentSDFGIFramesToUpdateLight frames);
	void environment_set_volumetric_fog_volume_size(int32_t size, int32_t depth);
	void environment_set_volumetric_fog_filter_active(bool active);
	Ref<Image> environment_bake_panorama(const RID &environment, bool bake_irradiance, const Vector2i &size);
	void screen_space_roughness_limiter_set_active(bool enable, double amount, double limit);
	void sub_surface_scattering_set_quality(RenderingServer::SubSurfaceScatteringQuality quality);
	void sub_surface_scattering_set_scale(double scale, double depth_scale);
	RID camera_attributes_create();
	void camera_attributes_set_dof_blur_quality(RenderingServer::DOFBlurQuality quality, bool use_jitter);
	void camera_attributes_set_dof_blur_bokeh_shape(RenderingServer::DOFBokehShape shape);
	void camera_attributes_set_dof_blur(const RID &camera_attributes, bool far_enable, double far_distance, double far_transition, bool near_enable, double near_distance, double near_transition, double amount);
	void camera_attributes_set_exposure(const RID &camera_attributes, double multiplier, double normalization);
	void camera_attributes_set_auto_exposure(const RID &camera_attributes, bool enable, double min_sensitivity, double max_sensitivity, double speed, double scale);
	RID scenario_create();
	void scenario_set_environment(const RID &scenario, const RID &environment);
	void scenario_set_fallback_environment(const RID &scenario, const RID &environment);
	void scenario_set_camera_attributes(const RID &scenario, const RID &effects);
	RID instance_create2(const RID &base, const RID &scenario);
	RID instance_create();
	void instance_set_base(const RID &instance, const RID &base);
	void instance_set_scenario(const RID &instance, const RID &scenario);
	void instance_set_layer_mask(const RID &instance, uint32_t mask);
	void instance_set_pivot_data(const RID &instance, double sorting_offset, bool use_aabb_center);
	void instance_set_transform(const RID &instance, const Transform3D &transform);
	void instance_attach_object_instance_id(const RID &instance, uint64_t id);
	void instance_set_blend_shape_weight(const RID &instance, int32_t shape, double weight);
	void instance_set_surface_override_material(const RID &instance, int32_t surface, const RID &material);
	void instance_set_visible(const RID &instance, bool visible);
	void instance_geometry_set_transparency(const RID &instance, double transparency);
	void instance_set_custom_aabb(const RID &instance, const AABB &aabb);
	void instance_attach_skeleton(const RID &instance, const RID &skeleton);
	void instance_set_extra_visibility_margin(const RID &instance, double margin);
	void instance_set_visibility_parent(const RID &instance, const RID &parent);
	void instance_set_ignore_culling(const RID &instance, bool enabled);
	void instance_geometry_set_flag(const RID &instance, RenderingServer::InstanceFlags flag, bool enabled);
	void instance_geometry_set_cast_shadows_setting(const RID &instance, RenderingServer::ShadowCastingSetting shadow_casting_setting);
	void instance_geometry_set_material_override(const RID &instance, const RID &material);
	void instance_geometry_set_material_overlay(const RID &instance, const RID &material);
	void instance_geometry_set_visibility_range(const RID &instance, double min, double max, double min_margin, double max_margin, RenderingServer::VisibilityRangeFadeMode fade_mode);
	void instance_geometry_set_lightmap(const RID &instance, const RID &lightmap, const Rect2 &lightmap_uv_scale, int32_t lightmap_slice);
	void instance_geometry_set_lod_bias(const RID &instance, double lod_bias);
	void instance_geometry_set_shader_parameter(const RID &instance, const StringName &parameter, const Variant &value);
	Variant instance_geometry_get_shader_parameter(const RID &instance, const StringName &parameter) const;
	Variant instance_geometry_get_shader_parameter_default_value(const RID &instance, const StringName &parameter) const;
	TypedArray<Dictionary> instance_geometry_get_shader_parameter_list(const RID &instance) const;
	PackedInt64Array instances_cull_aabb(const AABB &aabb, const RID &scenario = RID()) const;
	PackedInt64Array instances_cull_ray(const Vector3 &from, const Vector3 &to, const RID &scenario = RID()) const;
	PackedInt64Array instances_cull_convex(const TypedArray<Plane> &convex, const RID &scenario = RID()) const;
	TypedArray<Image> bake_render_uv2(const RID &base, const TypedArray<RID> &material_overrides, const Vector2i &image_size);
	RID canvas_create();
	void canvas_set_item_mirroring(const RID &canvas, const RID &item, const Vector2 &mirroring);
	void canvas_set_modulate(const RID &canvas, const Color &color);
	void canvas_set_disable_scale(bool disable);
	RID canvas_texture_create();
	void canvas_texture_set_channel(const RID &canvas_texture, RenderingServer::CanvasTextureChannel channel, const RID &texture);
	void canvas_texture_set_shading_parameters(const RID &canvas_texture, const Color &base_color, double shininess);
	void canvas_texture_set_texture_filter(const RID &canvas_texture, RenderingServer::CanvasItemTextureFilter filter);
	void canvas_texture_set_texture_repeat(const RID &canvas_texture, RenderingServer::CanvasItemTextureRepeat repeat);
	RID canvas_item_create();
	void canvas_item_set_parent(const RID &item, const RID &parent);
	void canvas_item_set_default_texture_filter(const RID &item, RenderingServer::CanvasItemTextureFilter filter);
	void canvas_item_set_default_texture_repeat(const RID &item, RenderingServer::CanvasItemTextureRepeat repeat);
	void canvas_item_set_visible(const RID &item, bool visible);
	void canvas_item_set_light_mask(const RID &item, int32_t mask);
	void canvas_item_set_visibility_layer(const RID &item, uint32_t visibility_layer);
	void canvas_item_set_transform(const RID &item, const Transform2D &transform);
	void canvas_item_set_clip(const RID &item, bool clip);
	void canvas_item_set_distance_field_mode(const RID &item, bool enabled);
	void canvas_item_set_custom_rect(const RID &item, bool use_custom_rect, const Rect2 &rect = Rect2(0, 0, 0, 0));
	void canvas_item_set_modulate(const RID &item, const Color &color);
	void canvas_item_set_self_modulate(const RID &item, const Color &color);
	void canvas_item_set_draw_behind_parent(const RID &item, bool enabled);
	void canvas_item_add_line(const RID &item, const Vector2 &from, const Vector2 &to, const Color &color, double width = -1.0, bool antialiased = false);
	void canvas_item_add_polyline(const RID &item, const PackedVector2Array &points, const PackedColorArray &colors, double width = -1.0, bool antialiased = false);
	void canvas_item_add_multiline(const RID &item, const PackedVector2Array &points, const PackedColorArray &colors, double width = -1.0);
	void canvas_item_add_rect(const RID &item, const Rect2 &rect, const Color &color);
	void canvas_item_add_circle(const RID &item, const Vector2 &pos, double radius, const Color &color);
	void canvas_item_add_texture_rect(const RID &item, const Rect2 &rect, const RID &texture, bool tile = false, const Color &modulate = Color(1, 1, 1, 1), bool transpose = false);
	void canvas_item_add_msdf_texture_rect_region(const RID &item, const Rect2 &rect, const RID &texture, const Rect2 &src_rect, const Color &modulate = Color(1, 1, 1, 1), int32_t outline_size = 0, double px_range = 1.0, double scale = 1.0);
	void canvas_item_add_lcd_texture_rect_region(const RID &item, const Rect2 &rect, const RID &texture, const Rect2 &src_rect, const Color &modulate);
	void canvas_item_add_texture_rect_region(const RID &item, const Rect2 &rect, const RID &texture, const Rect2 &src_rect, const Color &modulate = Color(1, 1, 1, 1), bool transpose = false, bool clip_uv = true);
	void canvas_item_add_nine_patch(const RID &item, const Rect2 &rect, const Rect2 &source, const RID &texture, const Vector2 &topleft, const Vector2 &bottomright, RenderingServer::NinePatchAxisMode x_axis_mode = (RenderingServer::NinePatchAxisMode)0, RenderingServer::NinePatchAxisMode y_axis_mode = (RenderingServer::NinePatchAxisMode)0, bool draw_center = true, const Color &modulate = Color(1, 1, 1, 1));
	void canvas_item_add_primitive(const RID &item, const PackedVector2Array &points, const PackedColorArray &colors, const PackedVector2Array &uvs, const RID &texture);
	void canvas_item_add_polygon(const RID &item, const PackedVector2Array &points, const PackedColorArray &colors, const PackedVector2Array &uvs = PackedVector2Array(), const RID &texture = RID());
	void canvas_item_add_triangle_array(const RID &item, const PackedInt32Array &indices, const PackedVector2Array &points, const PackedColorArray &colors, const PackedVector2Array &uvs = PackedVector2Array(), const PackedInt32Array &bones = PackedInt32Array(), const PackedFloat32Array &weights = PackedFloat32Array(), const RID &texture = RID(), int32_t count = -1);
	void canvas_item_add_mesh(const RID &item, const RID &mesh, const Transform2D &transform = Transform2D(), const Color &modulate = Color(1, 1, 1, 1), const RID &texture = RID());
	void canvas_item_add_multimesh(const RID &item, const RID &mesh, const RID &texture = RID());
	void canvas_item_add_particles(const RID &item, const RID &particles, const RID &texture);
	void canvas_item_add_set_transform(const RID &item, const Transform2D &transform);
	void canvas_item_add_clip_ignore(const RID &item, bool ignore);
	void canvas_item_add_animation_slice(const RID &item, double animation_length, double slice_begin, double slice_end, double offset = 0.0);
	void canvas_item_set_sort_children_by_y(const RID &item, bool enabled);
	void canvas_item_set_z_index(const RID &item, int32_t z_index);
	void canvas_item_set_z_as_relative_to_parent(const RID &item, bool enabled);
	void canvas_item_set_copy_to_backbuffer(const RID &item, bool enabled, const Rect2 &rect);
	void canvas_item_clear(const RID &item);
	void canvas_item_set_draw_index(const RID &item, int32_t index);
	void canvas_item_set_material(const RID &item, const RID &material);
	void canvas_item_set_use_parent_material(const RID &item, bool enabled);
	void canvas_item_set_visibility_notifier(const RID &item, bool enable, const Rect2 &area, const Callable &enter_callable, const Callable &exit_callable);
	void canvas_item_set_canvas_group_mode(const RID &item, RenderingServer::CanvasGroupMode mode, double clear_margin = 5.0, bool fit_empty = false, double fit_margin = 0.0, bool blur_mipmaps = false);
	Rect2 debug_canvas_item_get_rect(const RID &item);
	RID canvas_light_create();
	void canvas_light_attach_to_canvas(const RID &light, const RID &canvas);
	void canvas_light_set_enabled(const RID &light, bool enabled);
	void canvas_light_set_texture_scale(const RID &light, double scale);
	void canvas_light_set_transform(const RID &light, const Transform2D &transform);
	void canvas_light_set_texture(const RID &light, const RID &texture);
	void canvas_light_set_texture_offset(const RID &light, const Vector2 &offset);
	void canvas_light_set_color(const RID &light, const Color &color);
	void canvas_light_set_height(const RID &light, double height);
	void canvas_light_set_energy(const RID &light, double energy);
	void canvas_light_set_z_range(const RID &light, int32_t min_z, int32_t max_z);
	void canvas_light_set_layer_range(const RID &light, int32_t min_layer, int32_t max_layer);
	void canvas_light_set_item_cull_mask(const RID &light, int32_t mask);
	void canvas_light_set_item_shadow_cull_mask(const RID &light, int32_t mask);
	void canvas_light_set_mode(const RID &light, RenderingServer::CanvasLightMode mode);
	void canvas_light_set_shadow_enabled(const RID &light, bool enabled);
	void canvas_light_set_shadow_filter(const RID &light, RenderingServer::CanvasLightShadowFilter filter);
	void canvas_light_set_shadow_color(const RID &light, const Color &color);
	void canvas_light_set_shadow_smooth(const RID &light, double smooth);
	void canvas_light_set_blend_mode(const RID &light, RenderingServer::CanvasLightBlendMode mode);
	RID canvas_light_occluder_create();
	void canvas_light_occluder_attach_to_canvas(const RID &occluder, const RID &canvas);
	void canvas_light_occluder_set_enabled(const RID &occluder, bool enabled);
	void canvas_light_occluder_set_polygon(const RID &occluder, const RID &polygon);
	void canvas_light_occluder_set_as_sdf_collision(const RID &occluder, bool enable);
	void canvas_light_occluder_set_transform(const RID &occluder, const Transform2D &transform);
	void canvas_light_occluder_set_light_mask(const RID &occluder, int32_t mask);
	RID canvas_occluder_polygon_create();
	void canvas_occluder_polygon_set_shape(const RID &occluder_polygon, const PackedVector2Array &shape, bool closed);
	void canvas_occluder_polygon_set_cull_mode(const RID &occluder_polygon, RenderingServer::CanvasOccluderPolygonCullMode mode);
	void canvas_set_shadow_texture_size(int32_t size);
	void global_shader_parameter_add(const StringName &name, RenderingServer::GlobalShaderParameterType type, const Variant &default_value);
	void global_shader_parameter_remove(const StringName &name);
	TypedArray<StringName> global_shader_parameter_get_list() const;
	void global_shader_parameter_set(const StringName &name, const Variant &value);
	void global_shader_parameter_set_override(const StringName &name, const Variant &value);
	Variant global_shader_parameter_get(const StringName &name) const;
	RenderingServer::GlobalShaderParameterType global_shader_parameter_get_type(const StringName &name) const;
	void free_rid(const RID &rid);
	void request_frame_drawn_callback(const Callable &callable);
	bool has_changed() const;
	uint64_t get_rendering_info(RenderingServer::RenderingInfo info);
	String get_video_adapter_name() const;
	String get_video_adapter_vendor() const;
	RenderingDevice::DeviceType get_video_adapter_type() const;
	String get_video_adapter_api_version() const;
	RID make_sphere_mesh(int32_t latitudes, int32_t longitudes, double radius);
	RID get_test_cube();
	RID get_test_texture();
	RID get_white_texture();
	void set_boot_image(const Ref<Image> &image, const Color &color, bool scale, bool use_filter = true);
	Color get_default_clear_color();
	void set_default_clear_color(const Color &color);
	bool has_feature(RenderingServer::Features feature) const;
	bool has_os_feature(const String &feature) const;
	void set_debug_generate_wireframes(bool generate);
	bool is_render_loop_enabled() const;
	void set_render_loop_enabled(bool enabled);
	double get_frame_setup_time_cpu() const;
	void force_sync();
	void force_draw(bool swap_buffers = true, double frame_step = 0.0);
	RenderingDevice *get_rendering_device() const;
	RenderingDevice *create_local_rendering_device() const;
	void call_on_render_thread(const Callable &callable);
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Object::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(RenderingServer::TextureLayeredType);
VARIANT_ENUM_CAST(RenderingServer::CubeMapLayer);
VARIANT_ENUM_CAST(RenderingServer::ShaderMode);
VARIANT_ENUM_CAST(RenderingServer::ArrayType);
VARIANT_ENUM_CAST(RenderingServer::ArrayCustomFormat);
VARIANT_BITFIELD_CAST(RenderingServer::ArrayFormat);
VARIANT_ENUM_CAST(RenderingServer::PrimitiveType);
VARIANT_ENUM_CAST(RenderingServer::BlendShapeMode);
VARIANT_ENUM_CAST(RenderingServer::MultimeshTransformFormat);
VARIANT_ENUM_CAST(RenderingServer::LightProjectorFilter);
VARIANT_ENUM_CAST(RenderingServer::LightType);
VARIANT_ENUM_CAST(RenderingServer::LightParam);
VARIANT_ENUM_CAST(RenderingServer::LightBakeMode);
VARIANT_ENUM_CAST(RenderingServer::LightOmniShadowMode);
VARIANT_ENUM_CAST(RenderingServer::LightDirectionalShadowMode);
VARIANT_ENUM_CAST(RenderingServer::LightDirectionalSkyMode);
VARIANT_ENUM_CAST(RenderingServer::ShadowQuality);
VARIANT_ENUM_CAST(RenderingServer::ReflectionProbeUpdateMode);
VARIANT_ENUM_CAST(RenderingServer::ReflectionProbeAmbientMode);
VARIANT_ENUM_CAST(RenderingServer::DecalTexture);
VARIANT_ENUM_CAST(RenderingServer::DecalFilter);
VARIANT_ENUM_CAST(RenderingServer::VoxelGIQuality);
VARIANT_ENUM_CAST(RenderingServer::ParticlesMode);
VARIANT_ENUM_CAST(RenderingServer::ParticlesTransformAlign);
VARIANT_ENUM_CAST(RenderingServer::ParticlesDrawOrder);
VARIANT_ENUM_CAST(RenderingServer::ParticlesCollisionType);
VARIANT_ENUM_CAST(RenderingServer::ParticlesCollisionHeightfieldResolution);
VARIANT_ENUM_CAST(RenderingServer::FogVolumeShape);
VARIANT_ENUM_CAST(RenderingServer::ViewportScaling3DMode);
VARIANT_ENUM_CAST(RenderingServer::ViewportUpdateMode);
VARIANT_ENUM_CAST(RenderingServer::ViewportClearMode);
VARIANT_ENUM_CAST(RenderingServer::ViewportEnvironmentMode);
VARIANT_ENUM_CAST(RenderingServer::ViewportSDFOversize);
VARIANT_ENUM_CAST(RenderingServer::ViewportSDFScale);
VARIANT_ENUM_CAST(RenderingServer::ViewportMSAA);
VARIANT_ENUM_CAST(RenderingServer::ViewportScreenSpaceAA);
VARIANT_ENUM_CAST(RenderingServer::ViewportOcclusionCullingBuildQuality);
VARIANT_ENUM_CAST(RenderingServer::ViewportRenderInfo);
VARIANT_ENUM_CAST(RenderingServer::ViewportRenderInfoType);
VARIANT_ENUM_CAST(RenderingServer::ViewportDebugDraw);
VARIANT_ENUM_CAST(RenderingServer::ViewportVRSMode);
VARIANT_ENUM_CAST(RenderingServer::SkyMode);
VARIANT_ENUM_CAST(RenderingServer::EnvironmentBG);
VARIANT_ENUM_CAST(RenderingServer::EnvironmentAmbientSource);
VARIANT_ENUM_CAST(RenderingServer::EnvironmentReflectionSource);
VARIANT_ENUM_CAST(RenderingServer::EnvironmentGlowBlendMode);
VARIANT_ENUM_CAST(RenderingServer::EnvironmentToneMapper);
VARIANT_ENUM_CAST(RenderingServer::EnvironmentSSRRoughnessQuality);
VARIANT_ENUM_CAST(RenderingServer::EnvironmentSSAOQuality);
VARIANT_ENUM_CAST(RenderingServer::EnvironmentSSILQuality);
VARIANT_ENUM_CAST(RenderingServer::EnvironmentSDFGIYScale);
VARIANT_ENUM_CAST(RenderingServer::EnvironmentSDFGIRayCount);
VARIANT_ENUM_CAST(RenderingServer::EnvironmentSDFGIFramesToConverge);
VARIANT_ENUM_CAST(RenderingServer::EnvironmentSDFGIFramesToUpdateLight);
VARIANT_ENUM_CAST(RenderingServer::SubSurfaceScatteringQuality);
VARIANT_ENUM_CAST(RenderingServer::DOFBokehShape);
VARIANT_ENUM_CAST(RenderingServer::DOFBlurQuality);
VARIANT_ENUM_CAST(RenderingServer::InstanceType);
VARIANT_ENUM_CAST(RenderingServer::InstanceFlags);
VARIANT_ENUM_CAST(RenderingServer::ShadowCastingSetting);
VARIANT_ENUM_CAST(RenderingServer::VisibilityRangeFadeMode);
VARIANT_ENUM_CAST(RenderingServer::BakeChannels);
VARIANT_ENUM_CAST(RenderingServer::CanvasTextureChannel);
VARIANT_ENUM_CAST(RenderingServer::NinePatchAxisMode);
VARIANT_ENUM_CAST(RenderingServer::CanvasItemTextureFilter);
VARIANT_ENUM_CAST(RenderingServer::CanvasItemTextureRepeat);
VARIANT_ENUM_CAST(RenderingServer::CanvasGroupMode);
VARIANT_ENUM_CAST(RenderingServer::CanvasLightMode);
VARIANT_ENUM_CAST(RenderingServer::CanvasLightBlendMode);
VARIANT_ENUM_CAST(RenderingServer::CanvasLightShadowFilter);
VARIANT_ENUM_CAST(RenderingServer::CanvasOccluderPolygonCullMode);
VARIANT_ENUM_CAST(RenderingServer::GlobalShaderParameterType);
VARIANT_ENUM_CAST(RenderingServer::RenderingInfo);
VARIANT_ENUM_CAST(RenderingServer::Features);

#endif // ! GODOT_CPP_RENDERING_SERVER_HPP