#include <godot_cpp/classes/viewport.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/camera2d.hpp>
#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/viewport_texture.hpp>
#include <godot_cpp/classes/window.hpp>
#include <godot_cpp/classes/world2d.hpp>
#include <godot_cpp/classes/world3d.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Viewport() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<Viewport>("Viewport")
            .constructor<>()
            .base<Node>()
            .property<static_cast<bool(Viewport::*)()const>(&Viewport::is_3d_disabled),static_cast<void(Viewport::*)(bool)>(&Viewport::set_disable_3d)>("disable_3d")
            .property<static_cast<bool(Viewport::*)()>(&Viewport::is_using_xr),static_cast<void(Viewport::*)(bool)>(&Viewport::set_use_xr)>("use_xr")
            .property<static_cast<bool(Viewport::*)()const>(&Viewport::is_using_own_world_3d),static_cast<void(Viewport::*)(bool)>(&Viewport::set_use_own_world_3d)>("own_world_3d")
            .property<static_cast<Ref<World3D>(Viewport::*)()const>(&Viewport::get_world_3d),static_cast<void(Viewport::*)(const Ref<World3D> &)>(&Viewport::set_world_3d)>("world_3d")
            .property<static_cast<Ref<World2D>(Viewport::*)()const>(&Viewport::get_world_2d),static_cast<void(Viewport::*)(const Ref<World2D> &)>(&Viewport::set_world_2d)>("world_2d")
            .property<static_cast<bool(Viewport::*)()const>(&Viewport::has_transparent_background),static_cast<void(Viewport::*)(bool)>(&Viewport::set_transparent_background)>("transparent_bg")
            .property<static_cast<bool(Viewport::*)()const>(&Viewport::is_handling_input_locally),static_cast<void(Viewport::*)(bool)>(&Viewport::set_handle_input_locally)>("handle_input_locally")
            .property<static_cast<bool(Viewport::*)()const>(&Viewport::is_snap_2d_transforms_to_pixel_enabled),static_cast<void(Viewport::*)(bool)>(&Viewport::set_snap_2d_transforms_to_pixel)>("snap_2d_transforms_to_pixel")
            .property<static_cast<bool(Viewport::*)()const>(&Viewport::is_snap_2d_vertices_to_pixel_enabled),static_cast<void(Viewport::*)(bool)>(&Viewport::set_snap_2d_vertices_to_pixel)>("snap_2d_vertices_to_pixel")
            .property<static_cast<Viewport::MSAA(Viewport::*)()const>(&Viewport::get_msaa_2d),static_cast<void(Viewport::*)(Viewport::MSAA)>(&Viewport::set_msaa_2d)>("msaa_2d")
            .property<static_cast<Viewport::MSAA(Viewport::*)()const>(&Viewport::get_msaa_3d),static_cast<void(Viewport::*)(Viewport::MSAA)>(&Viewport::set_msaa_3d)>("msaa_3d")
            .property<static_cast<Viewport::ScreenSpaceAA(Viewport::*)()const>(&Viewport::get_screen_space_aa),static_cast<void(Viewport::*)(Viewport::ScreenSpaceAA)>(&Viewport::set_screen_space_aa)>("screen_space_aa")
            .property<static_cast<bool(Viewport::*)()const>(&Viewport::is_using_taa),static_cast<void(Viewport::*)(bool)>(&Viewport::set_use_taa)>("use_taa")
            .property<static_cast<bool(Viewport::*)()const>(&Viewport::is_using_debanding),static_cast<void(Viewport::*)(bool)>(&Viewport::set_use_debanding)>("use_debanding")
            .property<static_cast<bool(Viewport::*)()const>(&Viewport::is_using_occlusion_culling),static_cast<void(Viewport::*)(bool)>(&Viewport::set_use_occlusion_culling)>("use_occlusion_culling")
            .property<static_cast<double(Viewport::*)()const>(&Viewport::get_mesh_lod_threshold),static_cast<void(Viewport::*)(double)>(&Viewport::set_mesh_lod_threshold)>("mesh_lod_threshold")
            .property<static_cast<Viewport::DebugDraw(Viewport::*)()const>(&Viewport::get_debug_draw),static_cast<void(Viewport::*)(Viewport::DebugDraw)>(&Viewport::set_debug_draw)>("debug_draw")
            .property<static_cast<bool(Viewport::*)()const>(&Viewport::is_using_hdr_2d),static_cast<void(Viewport::*)(bool)>(&Viewport::set_use_hdr_2d)>("use_hdr_2d")
            .property<static_cast<Viewport::Scaling3DMode(Viewport::*)()const>(&Viewport::get_scaling_3d_mode),static_cast<void(Viewport::*)(Viewport::Scaling3DMode)>(&Viewport::set_scaling_3d_mode)>("scaling_3d_mode")
            .property<static_cast<double(Viewport::*)()const>(&Viewport::get_scaling_3d_scale),static_cast<void(Viewport::*)(double)>(&Viewport::set_scaling_3d_scale)>("scaling_3d_scale")
            .property<static_cast<double(Viewport::*)()const>(&Viewport::get_texture_mipmap_bias),static_cast<void(Viewport::*)(double)>(&Viewport::set_texture_mipmap_bias)>("texture_mipmap_bias")
            .property<static_cast<double(Viewport::*)()const>(&Viewport::get_fsr_sharpness),static_cast<void(Viewport::*)(double)>(&Viewport::set_fsr_sharpness)>("fsr_sharpness")
            .property<static_cast<Viewport::VRSMode(Viewport::*)()const>(&Viewport::get_vrs_mode),static_cast<void(Viewport::*)(Viewport::VRSMode)>(&Viewport::set_vrs_mode)>("vrs_mode")
            .property<static_cast<Viewport::VRSUpdateMode(Viewport::*)()const>(&Viewport::get_vrs_update_mode),static_cast<void(Viewport::*)(Viewport::VRSUpdateMode)>(&Viewport::set_vrs_update_mode)>("vrs_update_mode")
            .property<static_cast<Ref<Texture2D>(Viewport::*)()const>(&Viewport::get_vrs_texture),static_cast<void(Viewport::*)(const Ref<Texture2D> &)>(&Viewport::set_vrs_texture)>("vrs_texture")
            .property<static_cast<Viewport::DefaultCanvasItemTextureFilter(Viewport::*)()const>(&Viewport::get_default_canvas_item_texture_filter),static_cast<void(Viewport::*)(Viewport::DefaultCanvasItemTextureFilter)>(&Viewport::set_default_canvas_item_texture_filter)>("canvas_item_default_texture_filter")
            .property<static_cast<Viewport::DefaultCanvasItemTextureRepeat(Viewport::*)()const>(&Viewport::get_default_canvas_item_texture_repeat),static_cast<void(Viewport::*)(Viewport::DefaultCanvasItemTextureRepeat)>(&Viewport::set_default_canvas_item_texture_repeat)>("canvas_item_default_texture_repeat")
            .property<static_cast<bool(Viewport::*)()const>(&Viewport::is_audio_listener_2d),static_cast<void(Viewport::*)(bool)>(&Viewport::set_as_audio_listener_2d)>("audio_listener_enable_2d")
            .property<static_cast<bool(Viewport::*)()const>(&Viewport::is_audio_listener_3d),static_cast<void(Viewport::*)(bool)>(&Viewport::set_as_audio_listener_3d)>("audio_listener_enable_3d")
            .property<static_cast<bool(Viewport::*)()>(&Viewport::get_physics_object_picking),static_cast<void(Viewport::*)(bool)>(&Viewport::set_physics_object_picking)>("physics_object_picking")
            .property<static_cast<bool(Viewport::*)()>(&Viewport::get_physics_object_picking_sort),static_cast<void(Viewport::*)(bool)>(&Viewport::set_physics_object_picking_sort)>("physics_object_picking_sort")
            .property<static_cast<bool(Viewport::*)()>(&Viewport::get_physics_object_picking_first_only),static_cast<void(Viewport::*)(bool)>(&Viewport::set_physics_object_picking_first_only)>("physics_object_picking_first_only")
            .property<static_cast<bool(Viewport::*)()const>(&Viewport::is_input_disabled),static_cast<void(Viewport::*)(bool)>(&Viewport::set_disable_input)>("gui_disable_input")
            .property<static_cast<bool(Viewport::*)()const>(&Viewport::is_snap_controls_to_pixels_enabled),static_cast<void(Viewport::*)(bool)>(&Viewport::set_snap_controls_to_pixels)>("gui_snap_controls_to_pixels")
            .property<static_cast<bool(Viewport::*)()const>(&Viewport::is_embedding_subwindows),static_cast<void(Viewport::*)(bool)>(&Viewport::set_embedding_subwindows)>("gui_embed_subwindows")
            .property<static_cast<Viewport::SDFOversize(Viewport::*)()const>(&Viewport::get_sdf_oversize),static_cast<void(Viewport::*)(Viewport::SDFOversize)>(&Viewport::set_sdf_oversize)>("sdf_oversize")
            .property<static_cast<Viewport::SDFScale(Viewport::*)()const>(&Viewport::get_sdf_scale),static_cast<void(Viewport::*)(Viewport::SDFScale)>(&Viewport::set_sdf_scale)>("sdf_scale")
            .property<static_cast<int32_t(Viewport::*)()const>(&Viewport::get_positional_shadow_atlas_size),static_cast<void(Viewport::*)(int32_t)>(&Viewport::set_positional_shadow_atlas_size)>("positional_shadow_atlas_size")
            .property<static_cast<bool(Viewport::*)()const>(&Viewport::get_positional_shadow_atlas_16_bits),static_cast<void(Viewport::*)(bool)>(&Viewport::set_positional_shadow_atlas_16_bits)>("positional_shadow_atlas_16_bits")
            .property<static_cast<Viewport::PositionalShadowAtlasQuadrantSubdiv(Viewport::*)(int32_t)const>(&Viewport::get_positional_shadow_atlas_quadrant_subdiv),static_cast<void(Viewport::*)(int32_t,Viewport::PositionalShadowAtlasQuadrantSubdiv)>(&Viewport::set_positional_shadow_atlas_quadrant_subdiv)>("positional_shadow_atlas_quad_0")
            .property<static_cast<Viewport::PositionalShadowAtlasQuadrantSubdiv(Viewport::*)(int32_t)const>(&Viewport::get_positional_shadow_atlas_quadrant_subdiv),static_cast<void(Viewport::*)(int32_t,Viewport::PositionalShadowAtlasQuadrantSubdiv)>(&Viewport::set_positional_shadow_atlas_quadrant_subdiv)>("positional_shadow_atlas_quad_1")
            .property<static_cast<Viewport::PositionalShadowAtlasQuadrantSubdiv(Viewport::*)(int32_t)const>(&Viewport::get_positional_shadow_atlas_quadrant_subdiv),static_cast<void(Viewport::*)(int32_t,Viewport::PositionalShadowAtlasQuadrantSubdiv)>(&Viewport::set_positional_shadow_atlas_quadrant_subdiv)>("positional_shadow_atlas_quad_2")
            .property<static_cast<Viewport::PositionalShadowAtlasQuadrantSubdiv(Viewport::*)(int32_t)const>(&Viewport::get_positional_shadow_atlas_quadrant_subdiv),static_cast<void(Viewport::*)(int32_t,Viewport::PositionalShadowAtlasQuadrantSubdiv)>(&Viewport::set_positional_shadow_atlas_quadrant_subdiv)>("positional_shadow_atlas_quad_3")
            .property<static_cast<Transform2D(Viewport::*)()const>(&Viewport::get_canvas_transform),static_cast<void(Viewport::*)(const Transform2D &)>(&Viewport::set_canvas_transform)>("canvas_transform")
            .property<static_cast<Transform2D(Viewport::*)()const>(&Viewport::get_global_canvas_transform),static_cast<void(Viewport::*)(const Transform2D &)>(&Viewport::set_global_canvas_transform)>("global_canvas_transform")
            .property<static_cast<uint32_t(Viewport::*)()const>(&Viewport::get_canvas_cull_mask),static_cast<void(Viewport::*)(uint32_t)>(&Viewport::set_canvas_cull_mask)>("canvas_cull_mask")
            .fun<static_cast<Ref<World2D>(Viewport::*)()const>(&Viewport::find_world_2d)>("find_world_2d")
            .fun<static_cast<Transform2D(Viewport::*)()const>(&Viewport::get_final_transform)>("get_final_transform")
            .fun<static_cast<Transform2D(Viewport::*)()const>(&Viewport::get_screen_transform)>("get_screen_transform")
            .fun<static_cast<Rect2(Viewport::*)()const>(&Viewport::get_visible_rect)>("get_visible_rect")
            .fun<static_cast<int32_t(Viewport::*)(Viewport::RenderInfoType,Viewport::RenderInfo)>(&Viewport::get_render_info)>("get_render_info")
            .fun<static_cast<Ref<ViewportTexture>(Viewport::*)()const>(&Viewport::get_texture)>("get_texture")
            .fun<static_cast<RID(Viewport::*)()const>(&Viewport::get_viewport_rid)>("get_viewport_rid")
            .fun<static_cast<void(Viewport::*)(const String &)>(&Viewport::push_text_input)>("push_text_input")
            .fun<static_cast<void(Viewport::*)(const Ref<InputEvent> &,bool)>(&Viewport::push_input)>("push_input")
            .fun<static_cast<void(Viewport::*)(const Ref<InputEvent> &,bool)>(&Viewport::push_unhandled_input)>("push_unhandled_input")
            .fun<static_cast<Vector2(Viewport::*)()const>(&Viewport::get_mouse_position)>("get_mouse_position")
            .fun<static_cast<void(Viewport::*)(const Vector2 &)>(&Viewport::warp_mouse)>("warp_mouse")
            .fun<static_cast<void(Viewport::*)()>(&Viewport::update_mouse_cursor_state)>("update_mouse_cursor_state")
            .fun<static_cast<Variant(Viewport::*)()const>(&Viewport::gui_get_drag_data)>("gui_get_drag_data")
            .fun<static_cast<bool(Viewport::*)()const>(&Viewport::gui_is_dragging)>("gui_is_dragging")
            .fun<static_cast<bool(Viewport::*)()const>(&Viewport::gui_is_drag_successful)>("gui_is_drag_successful")
            .fun<static_cast<void(Viewport::*)()>(&Viewport::gui_release_focus)>("gui_release_focus")
            .fun<static_cast<Control *(Viewport::*)()const>(&Viewport::gui_get_focus_owner)>("gui_get_focus_owner")
            .fun<static_cast<Control *(Viewport::*)()const>(&Viewport::gui_get_hovered_control)>("gui_get_hovered_control")
            .fun<static_cast<void(Viewport::*)()>(&Viewport::set_input_as_handled)>("set_input_as_handled")
            .fun<static_cast<bool(Viewport::*)()const>(&Viewport::is_input_handled)>("is_input_handled")
            .fun<static_cast<TypedArray<Window>(Viewport::*)()const>(&Viewport::get_embedded_subwindows)>("get_embedded_subwindows")
            .fun<static_cast<void(Viewport::*)(uint32_t,bool)>(&Viewport::set_canvas_cull_mask_bit)>("set_canvas_cull_mask_bit")
            .fun<static_cast<bool(Viewport::*)(uint32_t)const>(&Viewport::get_canvas_cull_mask_bit)>("get_canvas_cull_mask_bit")
            .fun<static_cast<Camera2D *(Viewport::*)()const>(&Viewport::get_camera_2d)>("get_camera_2d")
            .fun<static_cast<Ref<World3D>(Viewport::*)()const>(&Viewport::find_world_3d)>("find_world_3d")
            .fun<static_cast<Camera3D *(Viewport::*)()const>(&Viewport::get_camera_3d)>("get_camera_3d")
;    qjs::Value _PositionalShadowAtlasQuadrantSubdiv = context->newObject();
    _PositionalShadowAtlasQuadrantSubdiv["SHADOW_ATLAS_QUADRANT_SUBDIV_DISABLED"] = Viewport::PositionalShadowAtlasQuadrantSubdiv::SHADOW_ATLAS_QUADRANT_SUBDIV_DISABLED;
    _PositionalShadowAtlasQuadrantSubdiv["SHADOW_ATLAS_QUADRANT_SUBDIV_1"] = Viewport::PositionalShadowAtlasQuadrantSubdiv::SHADOW_ATLAS_QUADRANT_SUBDIV_1;
    _PositionalShadowAtlasQuadrantSubdiv["SHADOW_ATLAS_QUADRANT_SUBDIV_4"] = Viewport::PositionalShadowAtlasQuadrantSubdiv::SHADOW_ATLAS_QUADRANT_SUBDIV_4;
    _PositionalShadowAtlasQuadrantSubdiv["SHADOW_ATLAS_QUADRANT_SUBDIV_16"] = Viewport::PositionalShadowAtlasQuadrantSubdiv::SHADOW_ATLAS_QUADRANT_SUBDIV_16;
    _PositionalShadowAtlasQuadrantSubdiv["SHADOW_ATLAS_QUADRANT_SUBDIV_64"] = Viewport::PositionalShadowAtlasQuadrantSubdiv::SHADOW_ATLAS_QUADRANT_SUBDIV_64;
    _PositionalShadowAtlasQuadrantSubdiv["SHADOW_ATLAS_QUADRANT_SUBDIV_256"] = Viewport::PositionalShadowAtlasQuadrantSubdiv::SHADOW_ATLAS_QUADRANT_SUBDIV_256;
    _PositionalShadowAtlasQuadrantSubdiv["SHADOW_ATLAS_QUADRANT_SUBDIV_1024"] = Viewport::PositionalShadowAtlasQuadrantSubdiv::SHADOW_ATLAS_QUADRANT_SUBDIV_1024;
    _PositionalShadowAtlasQuadrantSubdiv["SHADOW_ATLAS_QUADRANT_SUBDIV_MAX"] = Viewport::PositionalShadowAtlasQuadrantSubdiv::SHADOW_ATLAS_QUADRANT_SUBDIV_MAX;
    _module.add("PositionalShadowAtlasQuadrantSubdiv", std::move(_PositionalShadowAtlasQuadrantSubdiv));
    qjs::Value _Scaling3DMode = context->newObject();
    _Scaling3DMode["SCALING_3D_MODE_BILINEAR"] = Viewport::Scaling3DMode::SCALING_3D_MODE_BILINEAR;
    _Scaling3DMode["SCALING_3D_MODE_FSR"] = Viewport::Scaling3DMode::SCALING_3D_MODE_FSR;
    _Scaling3DMode["SCALING_3D_MODE_FSR2"] = Viewport::Scaling3DMode::SCALING_3D_MODE_FSR2;
    _Scaling3DMode["SCALING_3D_MODE_MAX"] = Viewport::Scaling3DMode::SCALING_3D_MODE_MAX;
    _module.add("Scaling3DMode", std::move(_Scaling3DMode));
    qjs::Value _MSAA = context->newObject();
    _MSAA["MSAA_DISABLED"] = Viewport::MSAA::MSAA_DISABLED;
    _MSAA["MSAA_2X"] = Viewport::MSAA::MSAA_2X;
    _MSAA["MSAA_4X"] = Viewport::MSAA::MSAA_4X;
    _MSAA["MSAA_8X"] = Viewport::MSAA::MSAA_8X;
    _MSAA["MSAA_MAX"] = Viewport::MSAA::MSAA_MAX;
    _module.add("MSAA", std::move(_MSAA));
    qjs::Value _ScreenSpaceAA = context->newObject();
    _ScreenSpaceAA["SCREEN_SPACE_AA_DISABLED"] = Viewport::ScreenSpaceAA::SCREEN_SPACE_AA_DISABLED;
    _ScreenSpaceAA["SCREEN_SPACE_AA_FXAA"] = Viewport::ScreenSpaceAA::SCREEN_SPACE_AA_FXAA;
    _ScreenSpaceAA["SCREEN_SPACE_AA_MAX"] = Viewport::ScreenSpaceAA::SCREEN_SPACE_AA_MAX;
    _module.add("ScreenSpaceAA", std::move(_ScreenSpaceAA));
    qjs::Value _RenderInfo = context->newObject();
    _RenderInfo["RENDER_INFO_OBJECTS_IN_FRAME"] = Viewport::RenderInfo::RENDER_INFO_OBJECTS_IN_FRAME;
    _RenderInfo["RENDER_INFO_PRIMITIVES_IN_FRAME"] = Viewport::RenderInfo::RENDER_INFO_PRIMITIVES_IN_FRAME;
    _RenderInfo["RENDER_INFO_DRAW_CALLS_IN_FRAME"] = Viewport::RenderInfo::RENDER_INFO_DRAW_CALLS_IN_FRAME;
    _RenderInfo["RENDER_INFO_MAX"] = Viewport::RenderInfo::RENDER_INFO_MAX;
    _module.add("RenderInfo", std::move(_RenderInfo));
    qjs::Value _RenderInfoType = context->newObject();
    _RenderInfoType["RENDER_INFO_TYPE_VISIBLE"] = Viewport::RenderInfoType::RENDER_INFO_TYPE_VISIBLE;
    _RenderInfoType["RENDER_INFO_TYPE_SHADOW"] = Viewport::RenderInfoType::RENDER_INFO_TYPE_SHADOW;
    _RenderInfoType["RENDER_INFO_TYPE_CANVAS"] = Viewport::RenderInfoType::RENDER_INFO_TYPE_CANVAS;
    _RenderInfoType["RENDER_INFO_TYPE_MAX"] = Viewport::RenderInfoType::RENDER_INFO_TYPE_MAX;
    _module.add("RenderInfoType", std::move(_RenderInfoType));
    qjs::Value _DebugDraw = context->newObject();
    _DebugDraw["DEBUG_DRAW_DISABLED"] = Viewport::DebugDraw::DEBUG_DRAW_DISABLED;
    _DebugDraw["DEBUG_DRAW_UNSHADED"] = Viewport::DebugDraw::DEBUG_DRAW_UNSHADED;
    _DebugDraw["DEBUG_DRAW_LIGHTING"] = Viewport::DebugDraw::DEBUG_DRAW_LIGHTING;
    _DebugDraw["DEBUG_DRAW_OVERDRAW"] = Viewport::DebugDraw::DEBUG_DRAW_OVERDRAW;
    _DebugDraw["DEBUG_DRAW_WIREFRAME"] = Viewport::DebugDraw::DEBUG_DRAW_WIREFRAME;
    _DebugDraw["DEBUG_DRAW_NORMAL_BUFFER"] = Viewport::DebugDraw::DEBUG_DRAW_NORMAL_BUFFER;
    _DebugDraw["DEBUG_DRAW_VOXEL_GI_ALBEDO"] = Viewport::DebugDraw::DEBUG_DRAW_VOXEL_GI_ALBEDO;
    _DebugDraw["DEBUG_DRAW_VOXEL_GI_LIGHTING"] = Viewport::DebugDraw::DEBUG_DRAW_VOXEL_GI_LIGHTING;
    _DebugDraw["DEBUG_DRAW_VOXEL_GI_EMISSION"] = Viewport::DebugDraw::DEBUG_DRAW_VOXEL_GI_EMISSION;
    _DebugDraw["DEBUG_DRAW_SHADOW_ATLAS"] = Viewport::DebugDraw::DEBUG_DRAW_SHADOW_ATLAS;
    _DebugDraw["DEBUG_DRAW_DIRECTIONAL_SHADOW_ATLAS"] = Viewport::DebugDraw::DEBUG_DRAW_DIRECTIONAL_SHADOW_ATLAS;
    _DebugDraw["DEBUG_DRAW_SCENE_LUMINANCE"] = Viewport::DebugDraw::DEBUG_DRAW_SCENE_LUMINANCE;
    _DebugDraw["DEBUG_DRAW_SSAO"] = Viewport::DebugDraw::DEBUG_DRAW_SSAO;
    _DebugDraw["DEBUG_DRAW_SSIL"] = Viewport::DebugDraw::DEBUG_DRAW_SSIL;
    _DebugDraw["DEBUG_DRAW_PSSM_SPLITS"] = Viewport::DebugDraw::DEBUG_DRAW_PSSM_SPLITS;
    _DebugDraw["DEBUG_DRAW_DECAL_ATLAS"] = Viewport::DebugDraw::DEBUG_DRAW_DECAL_ATLAS;
    _DebugDraw["DEBUG_DRAW_SDFGI"] = Viewport::DebugDraw::DEBUG_DRAW_SDFGI;
    _DebugDraw["DEBUG_DRAW_SDFGI_PROBES"] = Viewport::DebugDraw::DEBUG_DRAW_SDFGI_PROBES;
    _DebugDraw["DEBUG_DRAW_GI_BUFFER"] = Viewport::DebugDraw::DEBUG_DRAW_GI_BUFFER;
    _DebugDraw["DEBUG_DRAW_DISABLE_LOD"] = Viewport::DebugDraw::DEBUG_DRAW_DISABLE_LOD;
    _DebugDraw["DEBUG_DRAW_CLUSTER_OMNI_LIGHTS"] = Viewport::DebugDraw::DEBUG_DRAW_CLUSTER_OMNI_LIGHTS;
    _DebugDraw["DEBUG_DRAW_CLUSTER_SPOT_LIGHTS"] = Viewport::DebugDraw::DEBUG_DRAW_CLUSTER_SPOT_LIGHTS;
    _DebugDraw["DEBUG_DRAW_CLUSTER_DECALS"] = Viewport::DebugDraw::DEBUG_DRAW_CLUSTER_DECALS;
    _DebugDraw["DEBUG_DRAW_CLUSTER_REFLECTION_PROBES"] = Viewport::DebugDraw::DEBUG_DRAW_CLUSTER_REFLECTION_PROBES;
    _DebugDraw["DEBUG_DRAW_OCCLUDERS"] = Viewport::DebugDraw::DEBUG_DRAW_OCCLUDERS;
    _DebugDraw["DEBUG_DRAW_MOTION_VECTORS"] = Viewport::DebugDraw::DEBUG_DRAW_MOTION_VECTORS;
    _DebugDraw["DEBUG_DRAW_INTERNAL_BUFFER"] = Viewport::DebugDraw::DEBUG_DRAW_INTERNAL_BUFFER;
    _module.add("DebugDraw", std::move(_DebugDraw));
    qjs::Value _DefaultCanvasItemTextureFilter = context->newObject();
    _DefaultCanvasItemTextureFilter["DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_NEAREST"] = Viewport::DefaultCanvasItemTextureFilter::DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_NEAREST;
    _DefaultCanvasItemTextureFilter["DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_LINEAR"] = Viewport::DefaultCanvasItemTextureFilter::DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_LINEAR;
    _DefaultCanvasItemTextureFilter["DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_LINEAR_WITH_MIPMAPS"] = Viewport::DefaultCanvasItemTextureFilter::DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_LINEAR_WITH_MIPMAPS;
    _DefaultCanvasItemTextureFilter["DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_NEAREST_WITH_MIPMAPS"] = Viewport::DefaultCanvasItemTextureFilter::DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_NEAREST_WITH_MIPMAPS;
    _DefaultCanvasItemTextureFilter["DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_MAX"] = Viewport::DefaultCanvasItemTextureFilter::DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_MAX;
    _module.add("DefaultCanvasItemTextureFilter", std::move(_DefaultCanvasItemTextureFilter));
    qjs::Value _DefaultCanvasItemTextureRepeat = context->newObject();
    _DefaultCanvasItemTextureRepeat["DEFAULT_CANVAS_ITEM_TEXTURE_REPEAT_DISABLED"] = Viewport::DefaultCanvasItemTextureRepeat::DEFAULT_CANVAS_ITEM_TEXTURE_REPEAT_DISABLED;
    _DefaultCanvasItemTextureRepeat["DEFAULT_CANVAS_ITEM_TEXTURE_REPEAT_ENABLED"] = Viewport::DefaultCanvasItemTextureRepeat::DEFAULT_CANVAS_ITEM_TEXTURE_REPEAT_ENABLED;
    _DefaultCanvasItemTextureRepeat["DEFAULT_CANVAS_ITEM_TEXTURE_REPEAT_MIRROR"] = Viewport::DefaultCanvasItemTextureRepeat::DEFAULT_CANVAS_ITEM_TEXTURE_REPEAT_MIRROR;
    _DefaultCanvasItemTextureRepeat["DEFAULT_CANVAS_ITEM_TEXTURE_REPEAT_MAX"] = Viewport::DefaultCanvasItemTextureRepeat::DEFAULT_CANVAS_ITEM_TEXTURE_REPEAT_MAX;
    _module.add("DefaultCanvasItemTextureRepeat", std::move(_DefaultCanvasItemTextureRepeat));
    qjs::Value _SDFOversize = context->newObject();
    _SDFOversize["SDF_OVERSIZE_100_PERCENT"] = Viewport::SDFOversize::SDF_OVERSIZE_100_PERCENT;
    _SDFOversize["SDF_OVERSIZE_120_PERCENT"] = Viewport::SDFOversize::SDF_OVERSIZE_120_PERCENT;
    _SDFOversize["SDF_OVERSIZE_150_PERCENT"] = Viewport::SDFOversize::SDF_OVERSIZE_150_PERCENT;
    _SDFOversize["SDF_OVERSIZE_200_PERCENT"] = Viewport::SDFOversize::SDF_OVERSIZE_200_PERCENT;
    _SDFOversize["SDF_OVERSIZE_MAX"] = Viewport::SDFOversize::SDF_OVERSIZE_MAX;
    _module.add("SDFOversize", std::move(_SDFOversize));
    qjs::Value _SDFScale = context->newObject();
    _SDFScale["SDF_SCALE_100_PERCENT"] = Viewport::SDFScale::SDF_SCALE_100_PERCENT;
    _SDFScale["SDF_SCALE_50_PERCENT"] = Viewport::SDFScale::SDF_SCALE_50_PERCENT;
    _SDFScale["SDF_SCALE_25_PERCENT"] = Viewport::SDFScale::SDF_SCALE_25_PERCENT;
    _SDFScale["SDF_SCALE_MAX"] = Viewport::SDFScale::SDF_SCALE_MAX;
    _module.add("SDFScale", std::move(_SDFScale));
    qjs::Value _VRSMode = context->newObject();
    _VRSMode["VRS_DISABLED"] = Viewport::VRSMode::VRS_DISABLED;
    _VRSMode["VRS_TEXTURE"] = Viewport::VRSMode::VRS_TEXTURE;
    _VRSMode["VRS_XR"] = Viewport::VRSMode::VRS_XR;
    _VRSMode["VRS_MAX"] = Viewport::VRSMode::VRS_MAX;
    _module.add("VRSMode", std::move(_VRSMode));
    qjs::Value _VRSUpdateMode = context->newObject();
    _VRSUpdateMode["VRS_UPDATE_DISABLED"] = Viewport::VRSUpdateMode::VRS_UPDATE_DISABLED;
    _VRSUpdateMode["VRS_UPDATE_ONCE"] = Viewport::VRSUpdateMode::VRS_UPDATE_ONCE;
    _VRSUpdateMode["VRS_UPDATE_ALWAYS"] = Viewport::VRSUpdateMode::VRS_UPDATE_ALWAYS;
    _VRSUpdateMode["VRS_UPDATE_MAX"] = Viewport::VRSUpdateMode::VRS_UPDATE_MAX;
    _module.add("VRSUpdateMode", std::move(_VRSUpdateMode));
}