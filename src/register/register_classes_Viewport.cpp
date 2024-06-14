
#include <godot_cpp/classes/camera2d.hpp>
#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/viewport.hpp>
#include <godot_cpp/classes/viewport_texture.hpp>
#include <godot_cpp/classes/window.hpp>
#include <godot_cpp/classes/world2d.hpp>
#include <godot_cpp/classes/world3d.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Viewport() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<Viewport>("Viewport")
			.constructor<>()
			.base<Node>()
			.property<static_cast<bool (Viewport::*)() const>(&Viewport::is_3d_disabled), static_cast<void (Viewport::*)(bool)>(&Viewport::set_disable_3d)>((new std::string("disable_3d"))->c_str())
			.property<static_cast<bool (Viewport::*)()>(&Viewport::is_using_xr), static_cast<void (Viewport::*)(bool)>(&Viewport::set_use_xr)>((new std::string("use_xr"))->c_str())
			.property<static_cast<bool (Viewport::*)() const>(&Viewport::is_using_own_world_3d), static_cast<void (Viewport::*)(bool)>(&Viewport::set_use_own_world_3d)>((new std::string("own_world_3d"))->c_str())
			.property<static_cast<Ref<World3D> (Viewport::*)() const>(&Viewport::get_world_3d), static_cast<void (Viewport::*)(const Ref<World3D> &)>(&Viewport::set_world_3d)>((new std::string("world_3d"))->c_str())
			.property<static_cast<Ref<World2D> (Viewport::*)() const>(&Viewport::get_world_2d), static_cast<void (Viewport::*)(const Ref<World2D> &)>(&Viewport::set_world_2d)>((new std::string("world_2d"))->c_str())
			.property<static_cast<bool (Viewport::*)() const>(&Viewport::has_transparent_background), static_cast<void (Viewport::*)(bool)>(&Viewport::set_transparent_background)>((new std::string("transparent_bg"))->c_str())
			.property<static_cast<bool (Viewport::*)() const>(&Viewport::is_handling_input_locally), static_cast<void (Viewport::*)(bool)>(&Viewport::set_handle_input_locally)>((new std::string("handle_input_locally"))->c_str())
			.property<static_cast<bool (Viewport::*)() const>(&Viewport::is_snap_2d_transforms_to_pixel_enabled), static_cast<void (Viewport::*)(bool)>(&Viewport::set_snap_2d_transforms_to_pixel)>((new std::string("snap_2d_transforms_to_pixel"))->c_str())
			.property<static_cast<bool (Viewport::*)() const>(&Viewport::is_snap_2d_vertices_to_pixel_enabled), static_cast<void (Viewport::*)(bool)>(&Viewport::set_snap_2d_vertices_to_pixel)>((new std::string("snap_2d_vertices_to_pixel"))->c_str())
			.property<static_cast<Viewport::MSAA (Viewport::*)() const>(&Viewport::get_msaa_2d), static_cast<void (Viewport::*)(Viewport::MSAA)>(&Viewport::set_msaa_2d)>((new std::string("msaa_2d"))->c_str())
			.property<static_cast<Viewport::MSAA (Viewport::*)() const>(&Viewport::get_msaa_3d), static_cast<void (Viewport::*)(Viewport::MSAA)>(&Viewport::set_msaa_3d)>((new std::string("msaa_3d"))->c_str())
			.property<static_cast<Viewport::ScreenSpaceAA (Viewport::*)() const>(&Viewport::get_screen_space_aa), static_cast<void (Viewport::*)(Viewport::ScreenSpaceAA)>(&Viewport::set_screen_space_aa)>((new std::string("screen_space_aa"))->c_str())
			.property<static_cast<bool (Viewport::*)() const>(&Viewport::is_using_taa), static_cast<void (Viewport::*)(bool)>(&Viewport::set_use_taa)>((new std::string("use_taa"))->c_str())
			.property<static_cast<bool (Viewport::*)() const>(&Viewport::is_using_debanding), static_cast<void (Viewport::*)(bool)>(&Viewport::set_use_debanding)>((new std::string("use_debanding"))->c_str())
			.property<static_cast<bool (Viewport::*)() const>(&Viewport::is_using_occlusion_culling), static_cast<void (Viewport::*)(bool)>(&Viewport::set_use_occlusion_culling)>((new std::string("use_occlusion_culling"))->c_str())
			.property<static_cast<double (Viewport::*)() const>(&Viewport::get_mesh_lod_threshold), static_cast<void (Viewport::*)(double)>(&Viewport::set_mesh_lod_threshold)>((new std::string("mesh_lod_threshold"))->c_str())
			.property<static_cast<Viewport::DebugDraw (Viewport::*)() const>(&Viewport::get_debug_draw), static_cast<void (Viewport::*)(Viewport::DebugDraw)>(&Viewport::set_debug_draw)>((new std::string("debug_draw"))->c_str())
			.property<static_cast<bool (Viewport::*)() const>(&Viewport::is_using_hdr_2d), static_cast<void (Viewport::*)(bool)>(&Viewport::set_use_hdr_2d)>((new std::string("use_hdr_2d"))->c_str())
			.property<static_cast<Viewport::Scaling3DMode (Viewport::*)() const>(&Viewport::get_scaling_3d_mode), static_cast<void (Viewport::*)(Viewport::Scaling3DMode)>(&Viewport::set_scaling_3d_mode)>((new std::string("scaling_3d_mode"))->c_str())
			.property<static_cast<double (Viewport::*)() const>(&Viewport::get_scaling_3d_scale), static_cast<void (Viewport::*)(double)>(&Viewport::set_scaling_3d_scale)>((new std::string("scaling_3d_scale"))->c_str())
			.property<static_cast<double (Viewport::*)() const>(&Viewport::get_texture_mipmap_bias), static_cast<void (Viewport::*)(double)>(&Viewport::set_texture_mipmap_bias)>((new std::string("texture_mipmap_bias"))->c_str())
			.property<static_cast<double (Viewport::*)() const>(&Viewport::get_fsr_sharpness), static_cast<void (Viewport::*)(double)>(&Viewport::set_fsr_sharpness)>((new std::string("fsr_sharpness"))->c_str())
			.property<static_cast<Viewport::VRSMode (Viewport::*)() const>(&Viewport::get_vrs_mode), static_cast<void (Viewport::*)(Viewport::VRSMode)>(&Viewport::set_vrs_mode)>((new std::string("vrs_mode"))->c_str())
			.property<static_cast<Viewport::VRSUpdateMode (Viewport::*)() const>(&Viewport::get_vrs_update_mode), static_cast<void (Viewport::*)(Viewport::VRSUpdateMode)>(&Viewport::set_vrs_update_mode)>((new std::string("vrs_update_mode"))->c_str())
			.property<static_cast<Ref<Texture2D> (Viewport::*)() const>(&Viewport::get_vrs_texture), static_cast<void (Viewport::*)(const Ref<Texture2D> &)>(&Viewport::set_vrs_texture)>((new std::string("vrs_texture"))->c_str())
			.property<static_cast<Viewport::DefaultCanvasItemTextureFilter (Viewport::*)() const>(&Viewport::get_default_canvas_item_texture_filter), static_cast<void (Viewport::*)(Viewport::DefaultCanvasItemTextureFilter)>(&Viewport::set_default_canvas_item_texture_filter)>((new std::string("canvas_item_default_texture_filter"))->c_str())
			.property<static_cast<Viewport::DefaultCanvasItemTextureRepeat (Viewport::*)() const>(&Viewport::get_default_canvas_item_texture_repeat), static_cast<void (Viewport::*)(Viewport::DefaultCanvasItemTextureRepeat)>(&Viewport::set_default_canvas_item_texture_repeat)>((new std::string("canvas_item_default_texture_repeat"))->c_str())
			.property<static_cast<bool (Viewport::*)() const>(&Viewport::is_audio_listener_2d), static_cast<void (Viewport::*)(bool)>(&Viewport::set_as_audio_listener_2d)>((new std::string("audio_listener_enable_2d"))->c_str())
			.property<static_cast<bool (Viewport::*)() const>(&Viewport::is_audio_listener_3d), static_cast<void (Viewport::*)(bool)>(&Viewport::set_as_audio_listener_3d)>((new std::string("audio_listener_enable_3d"))->c_str())
			.property<static_cast<bool (Viewport::*)()>(&Viewport::get_physics_object_picking), static_cast<void (Viewport::*)(bool)>(&Viewport::set_physics_object_picking)>((new std::string("physics_object_picking"))->c_str())
			.property<static_cast<bool (Viewport::*)()>(&Viewport::get_physics_object_picking_sort), static_cast<void (Viewport::*)(bool)>(&Viewport::set_physics_object_picking_sort)>((new std::string("physics_object_picking_sort"))->c_str())
			.property<static_cast<bool (Viewport::*)()>(&Viewport::get_physics_object_picking_first_only), static_cast<void (Viewport::*)(bool)>(&Viewport::set_physics_object_picking_first_only)>((new std::string("physics_object_picking_first_only"))->c_str())
			.property<static_cast<bool (Viewport::*)() const>(&Viewport::is_input_disabled), static_cast<void (Viewport::*)(bool)>(&Viewport::set_disable_input)>((new std::string("gui_disable_input"))->c_str())
			.property<static_cast<bool (Viewport::*)() const>(&Viewport::is_snap_controls_to_pixels_enabled), static_cast<void (Viewport::*)(bool)>(&Viewport::set_snap_controls_to_pixels)>((new std::string("gui_snap_controls_to_pixels"))->c_str())
			.property<static_cast<bool (Viewport::*)() const>(&Viewport::is_embedding_subwindows), static_cast<void (Viewport::*)(bool)>(&Viewport::set_embedding_subwindows)>((new std::string("gui_embed_subwindows"))->c_str())
			.property<static_cast<Viewport::SDFOversize (Viewport::*)() const>(&Viewport::get_sdf_oversize), static_cast<void (Viewport::*)(Viewport::SDFOversize)>(&Viewport::set_sdf_oversize)>((new std::string("sdf_oversize"))->c_str())
			.property<static_cast<Viewport::SDFScale (Viewport::*)() const>(&Viewport::get_sdf_scale), static_cast<void (Viewport::*)(Viewport::SDFScale)>(&Viewport::set_sdf_scale)>((new std::string("sdf_scale"))->c_str())
			.property<static_cast<int32_t (Viewport::*)() const>(&Viewport::get_positional_shadow_atlas_size), static_cast<void (Viewport::*)(int32_t)>(&Viewport::set_positional_shadow_atlas_size)>((new std::string("positional_shadow_atlas_size"))->c_str())
			.property<static_cast<bool (Viewport::*)() const>(&Viewport::get_positional_shadow_atlas_16_bits), static_cast<void (Viewport::*)(bool)>(&Viewport::set_positional_shadow_atlas_16_bits)>((new std::string("positional_shadow_atlas_16_bits"))->c_str())
			.property<static_cast<Viewport::PositionalShadowAtlasQuadrantSubdiv (Viewport::*)(int32_t) const>(&Viewport::get_positional_shadow_atlas_quadrant_subdiv), static_cast<void (Viewport::*)(int32_t, Viewport::PositionalShadowAtlasQuadrantSubdiv)>(&Viewport::set_positional_shadow_atlas_quadrant_subdiv)>((new std::string("positional_shadow_atlas_quad_0"))->c_str())
			.property<static_cast<Viewport::PositionalShadowAtlasQuadrantSubdiv (Viewport::*)(int32_t) const>(&Viewport::get_positional_shadow_atlas_quadrant_subdiv), static_cast<void (Viewport::*)(int32_t, Viewport::PositionalShadowAtlasQuadrantSubdiv)>(&Viewport::set_positional_shadow_atlas_quadrant_subdiv)>((new std::string("positional_shadow_atlas_quad_1"))->c_str())
			.property<static_cast<Viewport::PositionalShadowAtlasQuadrantSubdiv (Viewport::*)(int32_t) const>(&Viewport::get_positional_shadow_atlas_quadrant_subdiv), static_cast<void (Viewport::*)(int32_t, Viewport::PositionalShadowAtlasQuadrantSubdiv)>(&Viewport::set_positional_shadow_atlas_quadrant_subdiv)>((new std::string("positional_shadow_atlas_quad_2"))->c_str())
			.property<static_cast<Viewport::PositionalShadowAtlasQuadrantSubdiv (Viewport::*)(int32_t) const>(&Viewport::get_positional_shadow_atlas_quadrant_subdiv), static_cast<void (Viewport::*)(int32_t, Viewport::PositionalShadowAtlasQuadrantSubdiv)>(&Viewport::set_positional_shadow_atlas_quadrant_subdiv)>((new std::string("positional_shadow_atlas_quad_3"))->c_str())
			.property<static_cast<Transform2D (Viewport::*)() const>(&Viewport::get_canvas_transform), static_cast<void (Viewport::*)(const Transform2D &)>(&Viewport::set_canvas_transform)>((new std::string("canvas_transform"))->c_str())
			.property<static_cast<Transform2D (Viewport::*)() const>(&Viewport::get_global_canvas_transform), static_cast<void (Viewport::*)(const Transform2D &)>(&Viewport::set_global_canvas_transform)>((new std::string("global_canvas_transform"))->c_str())
			.property<static_cast<uint32_t (Viewport::*)() const>(&Viewport::get_canvas_cull_mask), static_cast<void (Viewport::*)(uint32_t)>(&Viewport::set_canvas_cull_mask)>((new std::string("canvas_cull_mask"))->c_str())
			.fun<static_cast<Ref<World2D> (Viewport::*)() const>(&Viewport::find_world_2d)>((new std::string("find_world_2d"))->c_str())
			.fun<static_cast<Transform2D (Viewport::*)() const>(&Viewport::get_final_transform)>((new std::string("get_final_transform"))->c_str())
			.fun<static_cast<Transform2D (Viewport::*)() const>(&Viewport::get_screen_transform)>((new std::string("get_screen_transform"))->c_str())
			.fun<static_cast<Rect2 (Viewport::*)() const>(&Viewport::get_visible_rect)>((new std::string("get_visible_rect"))->c_str())
			.fun<static_cast<int32_t (Viewport::*)(Viewport::RenderInfoType, Viewport::RenderInfo)>(&Viewport::get_render_info)>((new std::string("get_render_info"))->c_str())
			.fun<static_cast<Ref<ViewportTexture> (Viewport::*)() const>(&Viewport::get_texture)>((new std::string("get_texture"))->c_str())
			.fun<static_cast<RID (Viewport::*)() const>(&Viewport::get_viewport_rid)>((new std::string("get_viewport_rid"))->c_str())
			.fun<static_cast<void (Viewport::*)(const String &)>(&Viewport::push_text_input)>((new std::string("push_text_input"))->c_str())
			.fun<static_cast<void (Viewport::*)(const Ref<InputEvent> &, bool)>(&Viewport::push_input)>((new std::string("push_input"))->c_str())
			.fun<static_cast<void (Viewport::*)(const Ref<InputEvent> &, bool)>(&Viewport::push_unhandled_input)>((new std::string("push_unhandled_input"))->c_str())
			.fun<static_cast<Vector2 (Viewport::*)() const>(&Viewport::get_mouse_position)>((new std::string("get_mouse_position"))->c_str())
			.fun<static_cast<void (Viewport::*)(const Vector2 &)>(&Viewport::warp_mouse)>((new std::string("warp_mouse"))->c_str())
			.fun<static_cast<void (Viewport::*)()>(&Viewport::update_mouse_cursor_state)>((new std::string("update_mouse_cursor_state"))->c_str())
			.fun<static_cast<Variant (Viewport::*)() const>(&Viewport::gui_get_drag_data)>((new std::string("gui_get_drag_data"))->c_str())
			.fun<static_cast<bool (Viewport::*)() const>(&Viewport::gui_is_dragging)>((new std::string("gui_is_dragging"))->c_str())
			.fun<static_cast<bool (Viewport::*)() const>(&Viewport::gui_is_drag_successful)>((new std::string("gui_is_drag_successful"))->c_str())
			.fun<static_cast<void (Viewport::*)()>(&Viewport::gui_release_focus)>((new std::string("gui_release_focus"))->c_str())
			.fun<static_cast<Control *(Viewport::*)() const>(&Viewport::gui_get_focus_owner)>((new std::string("gui_get_focus_owner"))->c_str())
			.fun<static_cast<Control *(Viewport::*)() const>(&Viewport::gui_get_hovered_control)>((new std::string("gui_get_hovered_control"))->c_str())
			.fun<static_cast<void (Viewport::*)()>(&Viewport::set_input_as_handled)>((new std::string("set_input_as_handled"))->c_str())
			.fun<static_cast<bool (Viewport::*)() const>(&Viewport::is_input_handled)>((new std::string("is_input_handled"))->c_str())
			.fun<static_cast<TypedArray<Window> (Viewport::*)() const>(&Viewport::get_embedded_subwindows)>((new std::string("get_embedded_subwindows"))->c_str())
			.fun<static_cast<void (Viewport::*)(uint32_t, bool)>(&Viewport::set_canvas_cull_mask_bit)>((new std::string("set_canvas_cull_mask_bit"))->c_str())
			.fun<static_cast<bool (Viewport::*)(uint32_t) const>(&Viewport::get_canvas_cull_mask_bit)>((new std::string("get_canvas_cull_mask_bit"))->c_str())
			.fun<static_cast<Camera2D *(Viewport::*)() const>(&Viewport::get_camera_2d)>((new std::string("get_camera_2d"))->c_str())
			.fun<static_cast<Ref<World3D> (Viewport::*)() const>(&Viewport::find_world_3d)>((new std::string("find_world_3d"))->c_str())
			.fun<static_cast<Camera3D *(Viewport::*)() const>(&Viewport::get_camera_3d)>((new std::string("get_camera_3d"))->c_str());
	qjs::Value _PositionalShadowAtlasQuadrantSubdiv = context->newObject();
	_PositionalShadowAtlasQuadrantSubdiv[(new std::string("SHADOW_ATLAS_QUADRANT_SUBDIV_DISABLED"))->c_str()] = Viewport::PositionalShadowAtlasQuadrantSubdiv::SHADOW_ATLAS_QUADRANT_SUBDIV_DISABLED;
	_PositionalShadowAtlasQuadrantSubdiv[(new std::string("SHADOW_ATLAS_QUADRANT_SUBDIV_1"))->c_str()] = Viewport::PositionalShadowAtlasQuadrantSubdiv::SHADOW_ATLAS_QUADRANT_SUBDIV_1;
	_PositionalShadowAtlasQuadrantSubdiv[(new std::string("SHADOW_ATLAS_QUADRANT_SUBDIV_4"))->c_str()] = Viewport::PositionalShadowAtlasQuadrantSubdiv::SHADOW_ATLAS_QUADRANT_SUBDIV_4;
	_PositionalShadowAtlasQuadrantSubdiv[(new std::string("SHADOW_ATLAS_QUADRANT_SUBDIV_16"))->c_str()] = Viewport::PositionalShadowAtlasQuadrantSubdiv::SHADOW_ATLAS_QUADRANT_SUBDIV_16;
	_PositionalShadowAtlasQuadrantSubdiv[(new std::string("SHADOW_ATLAS_QUADRANT_SUBDIV_64"))->c_str()] = Viewport::PositionalShadowAtlasQuadrantSubdiv::SHADOW_ATLAS_QUADRANT_SUBDIV_64;
	_PositionalShadowAtlasQuadrantSubdiv[(new std::string("SHADOW_ATLAS_QUADRANT_SUBDIV_256"))->c_str()] = Viewport::PositionalShadowAtlasQuadrantSubdiv::SHADOW_ATLAS_QUADRANT_SUBDIV_256;
	_PositionalShadowAtlasQuadrantSubdiv[(new std::string("SHADOW_ATLAS_QUADRANT_SUBDIV_1024"))->c_str()] = Viewport::PositionalShadowAtlasQuadrantSubdiv::SHADOW_ATLAS_QUADRANT_SUBDIV_1024;
	_PositionalShadowAtlasQuadrantSubdiv[(new std::string("SHADOW_ATLAS_QUADRANT_SUBDIV_MAX"))->c_str()] = Viewport::PositionalShadowAtlasQuadrantSubdiv::SHADOW_ATLAS_QUADRANT_SUBDIV_MAX;
	_module.add("PositionalShadowAtlasQuadrantSubdiv", std::move(_PositionalShadowAtlasQuadrantSubdiv));
	qjs::Value _Scaling3DMode = context->newObject();
	_Scaling3DMode[(new std::string("SCALING_3D_MODE_BILINEAR"))->c_str()] = Viewport::Scaling3DMode::SCALING_3D_MODE_BILINEAR;
	_Scaling3DMode[(new std::string("SCALING_3D_MODE_FSR"))->c_str()] = Viewport::Scaling3DMode::SCALING_3D_MODE_FSR;
	_Scaling3DMode[(new std::string("SCALING_3D_MODE_FSR2"))->c_str()] = Viewport::Scaling3DMode::SCALING_3D_MODE_FSR2;
	_Scaling3DMode[(new std::string("SCALING_3D_MODE_MAX"))->c_str()] = Viewport::Scaling3DMode::SCALING_3D_MODE_MAX;
	_module.add("Scaling3DMode", std::move(_Scaling3DMode));
	qjs::Value _MSAA = context->newObject();
	_MSAA[(new std::string("MSAA_DISABLED"))->c_str()] = Viewport::MSAA::MSAA_DISABLED;
	_MSAA[(new std::string("MSAA_2X"))->c_str()] = Viewport::MSAA::MSAA_2X;
	_MSAA[(new std::string("MSAA_4X"))->c_str()] = Viewport::MSAA::MSAA_4X;
	_MSAA[(new std::string("MSAA_8X"))->c_str()] = Viewport::MSAA::MSAA_8X;
	_MSAA[(new std::string("MSAA_MAX"))->c_str()] = Viewport::MSAA::MSAA_MAX;
	_module.add("MSAA", std::move(_MSAA));
	qjs::Value _ScreenSpaceAA = context->newObject();
	_ScreenSpaceAA[(new std::string("SCREEN_SPACE_AA_DISABLED"))->c_str()] = Viewport::ScreenSpaceAA::SCREEN_SPACE_AA_DISABLED;
	_ScreenSpaceAA[(new std::string("SCREEN_SPACE_AA_FXAA"))->c_str()] = Viewport::ScreenSpaceAA::SCREEN_SPACE_AA_FXAA;
	_ScreenSpaceAA[(new std::string("SCREEN_SPACE_AA_MAX"))->c_str()] = Viewport::ScreenSpaceAA::SCREEN_SPACE_AA_MAX;
	_module.add("ScreenSpaceAA", std::move(_ScreenSpaceAA));
	qjs::Value _RenderInfo = context->newObject();
	_RenderInfo[(new std::string("RENDER_INFO_OBJECTS_IN_FRAME"))->c_str()] = Viewport::RenderInfo::RENDER_INFO_OBJECTS_IN_FRAME;
	_RenderInfo[(new std::string("RENDER_INFO_PRIMITIVES_IN_FRAME"))->c_str()] = Viewport::RenderInfo::RENDER_INFO_PRIMITIVES_IN_FRAME;
	_RenderInfo[(new std::string("RENDER_INFO_DRAW_CALLS_IN_FRAME"))->c_str()] = Viewport::RenderInfo::RENDER_INFO_DRAW_CALLS_IN_FRAME;
	_RenderInfo[(new std::string("RENDER_INFO_MAX"))->c_str()] = Viewport::RenderInfo::RENDER_INFO_MAX;
	_module.add("RenderInfo", std::move(_RenderInfo));
	qjs::Value _RenderInfoType = context->newObject();
	_RenderInfoType[(new std::string("RENDER_INFO_TYPE_VISIBLE"))->c_str()] = Viewport::RenderInfoType::RENDER_INFO_TYPE_VISIBLE;
	_RenderInfoType[(new std::string("RENDER_INFO_TYPE_SHADOW"))->c_str()] = Viewport::RenderInfoType::RENDER_INFO_TYPE_SHADOW;
	_RenderInfoType[(new std::string("RENDER_INFO_TYPE_CANVAS"))->c_str()] = Viewport::RenderInfoType::RENDER_INFO_TYPE_CANVAS;
	_RenderInfoType[(new std::string("RENDER_INFO_TYPE_MAX"))->c_str()] = Viewport::RenderInfoType::RENDER_INFO_TYPE_MAX;
	_module.add("RenderInfoType", std::move(_RenderInfoType));
	qjs::Value _DebugDraw = context->newObject();
	_DebugDraw[(new std::string("DEBUG_DRAW_DISABLED"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_DISABLED;
	_DebugDraw[(new std::string("DEBUG_DRAW_UNSHADED"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_UNSHADED;
	_DebugDraw[(new std::string("DEBUG_DRAW_LIGHTING"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_LIGHTING;
	_DebugDraw[(new std::string("DEBUG_DRAW_OVERDRAW"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_OVERDRAW;
	_DebugDraw[(new std::string("DEBUG_DRAW_WIREFRAME"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_WIREFRAME;
	_DebugDraw[(new std::string("DEBUG_DRAW_NORMAL_BUFFER"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_NORMAL_BUFFER;
	_DebugDraw[(new std::string("DEBUG_DRAW_VOXEL_GI_ALBEDO"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_VOXEL_GI_ALBEDO;
	_DebugDraw[(new std::string("DEBUG_DRAW_VOXEL_GI_LIGHTING"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_VOXEL_GI_LIGHTING;
	_DebugDraw[(new std::string("DEBUG_DRAW_VOXEL_GI_EMISSION"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_VOXEL_GI_EMISSION;
	_DebugDraw[(new std::string("DEBUG_DRAW_SHADOW_ATLAS"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_SHADOW_ATLAS;
	_DebugDraw[(new std::string("DEBUG_DRAW_DIRECTIONAL_SHADOW_ATLAS"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_DIRECTIONAL_SHADOW_ATLAS;
	_DebugDraw[(new std::string("DEBUG_DRAW_SCENE_LUMINANCE"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_SCENE_LUMINANCE;
	_DebugDraw[(new std::string("DEBUG_DRAW_SSAO"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_SSAO;
	_DebugDraw[(new std::string("DEBUG_DRAW_SSIL"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_SSIL;
	_DebugDraw[(new std::string("DEBUG_DRAW_PSSM_SPLITS"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_PSSM_SPLITS;
	_DebugDraw[(new std::string("DEBUG_DRAW_DECAL_ATLAS"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_DECAL_ATLAS;
	_DebugDraw[(new std::string("DEBUG_DRAW_SDFGI"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_SDFGI;
	_DebugDraw[(new std::string("DEBUG_DRAW_SDFGI_PROBES"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_SDFGI_PROBES;
	_DebugDraw[(new std::string("DEBUG_DRAW_GI_BUFFER"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_GI_BUFFER;
	_DebugDraw[(new std::string("DEBUG_DRAW_DISABLE_LOD"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_DISABLE_LOD;
	_DebugDraw[(new std::string("DEBUG_DRAW_CLUSTER_OMNI_LIGHTS"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_CLUSTER_OMNI_LIGHTS;
	_DebugDraw[(new std::string("DEBUG_DRAW_CLUSTER_SPOT_LIGHTS"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_CLUSTER_SPOT_LIGHTS;
	_DebugDraw[(new std::string("DEBUG_DRAW_CLUSTER_DECALS"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_CLUSTER_DECALS;
	_DebugDraw[(new std::string("DEBUG_DRAW_CLUSTER_REFLECTION_PROBES"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_CLUSTER_REFLECTION_PROBES;
	_DebugDraw[(new std::string("DEBUG_DRAW_OCCLUDERS"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_OCCLUDERS;
	_DebugDraw[(new std::string("DEBUG_DRAW_MOTION_VECTORS"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_MOTION_VECTORS;
	_DebugDraw[(new std::string("DEBUG_DRAW_INTERNAL_BUFFER"))->c_str()] = Viewport::DebugDraw::DEBUG_DRAW_INTERNAL_BUFFER;
	_module.add("DebugDraw", std::move(_DebugDraw));
	qjs::Value _DefaultCanvasItemTextureFilter = context->newObject();
	_DefaultCanvasItemTextureFilter[(new std::string("DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_NEAREST"))->c_str()] = Viewport::DefaultCanvasItemTextureFilter::DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_NEAREST;
	_DefaultCanvasItemTextureFilter[(new std::string("DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_LINEAR"))->c_str()] = Viewport::DefaultCanvasItemTextureFilter::DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_LINEAR;
	_DefaultCanvasItemTextureFilter[(new std::string("DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_LINEAR_WITH_MIPMAPS"))->c_str()] = Viewport::DefaultCanvasItemTextureFilter::DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_LINEAR_WITH_MIPMAPS;
	_DefaultCanvasItemTextureFilter[(new std::string("DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_NEAREST_WITH_MIPMAPS"))->c_str()] = Viewport::DefaultCanvasItemTextureFilter::DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_NEAREST_WITH_MIPMAPS;
	_DefaultCanvasItemTextureFilter[(new std::string("DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_MAX"))->c_str()] = Viewport::DefaultCanvasItemTextureFilter::DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_MAX;
	_module.add("DefaultCanvasItemTextureFilter", std::move(_DefaultCanvasItemTextureFilter));
	qjs::Value _DefaultCanvasItemTextureRepeat = context->newObject();
	_DefaultCanvasItemTextureRepeat[(new std::string("DEFAULT_CANVAS_ITEM_TEXTURE_REPEAT_DISABLED"))->c_str()] = Viewport::DefaultCanvasItemTextureRepeat::DEFAULT_CANVAS_ITEM_TEXTURE_REPEAT_DISABLED;
	_DefaultCanvasItemTextureRepeat[(new std::string("DEFAULT_CANVAS_ITEM_TEXTURE_REPEAT_ENABLED"))->c_str()] = Viewport::DefaultCanvasItemTextureRepeat::DEFAULT_CANVAS_ITEM_TEXTURE_REPEAT_ENABLED;
	_DefaultCanvasItemTextureRepeat[(new std::string("DEFAULT_CANVAS_ITEM_TEXTURE_REPEAT_MIRROR"))->c_str()] = Viewport::DefaultCanvasItemTextureRepeat::DEFAULT_CANVAS_ITEM_TEXTURE_REPEAT_MIRROR;
	_DefaultCanvasItemTextureRepeat[(new std::string("DEFAULT_CANVAS_ITEM_TEXTURE_REPEAT_MAX"))->c_str()] = Viewport::DefaultCanvasItemTextureRepeat::DEFAULT_CANVAS_ITEM_TEXTURE_REPEAT_MAX;
	_module.add("DefaultCanvasItemTextureRepeat", std::move(_DefaultCanvasItemTextureRepeat));
	qjs::Value _SDFOversize = context->newObject();
	_SDFOversize[(new std::string("SDF_OVERSIZE_100_PERCENT"))->c_str()] = Viewport::SDFOversize::SDF_OVERSIZE_100_PERCENT;
	_SDFOversize[(new std::string("SDF_OVERSIZE_120_PERCENT"))->c_str()] = Viewport::SDFOversize::SDF_OVERSIZE_120_PERCENT;
	_SDFOversize[(new std::string("SDF_OVERSIZE_150_PERCENT"))->c_str()] = Viewport::SDFOversize::SDF_OVERSIZE_150_PERCENT;
	_SDFOversize[(new std::string("SDF_OVERSIZE_200_PERCENT"))->c_str()] = Viewport::SDFOversize::SDF_OVERSIZE_200_PERCENT;
	_SDFOversize[(new std::string("SDF_OVERSIZE_MAX"))->c_str()] = Viewport::SDFOversize::SDF_OVERSIZE_MAX;
	_module.add("SDFOversize", std::move(_SDFOversize));
	qjs::Value _SDFScale = context->newObject();
	_SDFScale[(new std::string("SDF_SCALE_100_PERCENT"))->c_str()] = Viewport::SDFScale::SDF_SCALE_100_PERCENT;
	_SDFScale[(new std::string("SDF_SCALE_50_PERCENT"))->c_str()] = Viewport::SDFScale::SDF_SCALE_50_PERCENT;
	_SDFScale[(new std::string("SDF_SCALE_25_PERCENT"))->c_str()] = Viewport::SDFScale::SDF_SCALE_25_PERCENT;
	_SDFScale[(new std::string("SDF_SCALE_MAX"))->c_str()] = Viewport::SDFScale::SDF_SCALE_MAX;
	_module.add("SDFScale", std::move(_SDFScale));
	qjs::Value _VRSMode = context->newObject();
	_VRSMode[(new std::string("VRS_DISABLED"))->c_str()] = Viewport::VRSMode::VRS_DISABLED;
	_VRSMode[(new std::string("VRS_TEXTURE"))->c_str()] = Viewport::VRSMode::VRS_TEXTURE;
	_VRSMode[(new std::string("VRS_XR"))->c_str()] = Viewport::VRSMode::VRS_XR;
	_VRSMode[(new std::string("VRS_MAX"))->c_str()] = Viewport::VRSMode::VRS_MAX;
	_module.add("VRSMode", std::move(_VRSMode));
	qjs::Value _VRSUpdateMode = context->newObject();
	_VRSUpdateMode[(new std::string("VRS_UPDATE_DISABLED"))->c_str()] = Viewport::VRSUpdateMode::VRS_UPDATE_DISABLED;
	_VRSUpdateMode[(new std::string("VRS_UPDATE_ONCE"))->c_str()] = Viewport::VRSUpdateMode::VRS_UPDATE_ONCE;
	_VRSUpdateMode[(new std::string("VRS_UPDATE_ALWAYS"))->c_str()] = Viewport::VRSUpdateMode::VRS_UPDATE_ALWAYS;
	_VRSUpdateMode[(new std::string("VRS_UPDATE_MAX"))->c_str()] = Viewport::VRSUpdateMode::VRS_UPDATE_MAX;
	_module.add("VRSUpdateMode", std::move(_VRSUpdateMode));
}