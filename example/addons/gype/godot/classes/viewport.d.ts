
import { InputEvent } from "@godot/classes/input_event";
import { Camera2D } from "@godot/classes/camera2d";
import { ViewportTexture } from "@godot/classes/viewport_texture";
import { Window } from "@godot/classes/window";
import { Camera3D } from "@godot/classes/camera3d";
import { Texture2D } from "@godot/classes/texture2d";
import { World2D } from "@godot/classes/world2d";
import { World3D } from "@godot/classes/world3d";
import { Node } from "@godot/classes/node";
import { Control } from "@godot/classes/control";

export declare class Viewport extends Node{
  public set_world_2d(_world_2d: World2D): void;
  public get_world_2d(): World2D;
  public find_world_2d(): World2D;
  public set_canvas_transform(_xform: Transform2D): void;
  public get_canvas_transform(): Transform2D;
  public set_global_canvas_transform(_xform: Transform2D): void;
  public get_global_canvas_transform(): Transform2D;
  public get_final_transform(): Transform2D;
  public get_screen_transform(): Transform2D;
  public get_visible_rect(): Rect2;
  public set_transparent_background(_enable: boolean): void;
  public has_transparent_background(): boolean;
  public set_use_hdr_2d(_enable: boolean): void;
  public is_using_hdr_2d(): boolean;
  public set_msaa_2d(_msaa: number): void;
  public get_msaa_2d(): number;
  public set_msaa_3d(_msaa: number): void;
  public get_msaa_3d(): number;
  public set_screen_space_aa(_screen_space_aa: number): void;
  public get_screen_space_aa(): number;
  public set_use_taa(_enable: boolean): void;
  public is_using_taa(): boolean;
  public set_use_debanding(_enable: boolean): void;
  public is_using_debanding(): boolean;
  public set_use_occlusion_culling(_enable: boolean): void;
  public is_using_occlusion_culling(): boolean;
  public set_debug_draw(_debug_draw: number): void;
  public get_debug_draw(): number;
  public get_render_info(_type: number, _info: number): number;
  public get_texture(): ViewportTexture;
  public set_physics_object_picking(_enable: boolean): void;
  public get_physics_object_picking(): boolean;
  public set_physics_object_picking_sort(_enable: boolean): void;
  public get_physics_object_picking_sort(): boolean;
  public set_physics_object_picking_first_only(_enable: boolean): void;
  public get_physics_object_picking_first_only(): boolean;
  public get_viewport_rid(): RID;
  public push_text_input(_text: String | StringName | string): void;
  public push_input(_event: InputEvent, _in_local_coords: boolean): void;
  public push_unhandled_input(_event: InputEvent, _in_local_coords: boolean): void;
  public get_mouse_position(): Vector2;
  public warp_mouse(_position: Vector2): void;
  public update_mouse_cursor_state(): void;
  public gui_get_drag_data(): any;
  public gui_is_dragging(): boolean;
  public gui_is_drag_successful(): boolean;
  public gui_release_focus(): void;
  public gui_get_focus_owner(): Control;
  public gui_get_hovered_control(): Control;
  public set_disable_input(_disable: boolean): void;
  public is_input_disabled(): boolean;
  public set_positional_shadow_atlas_size(_size: number): void;
  public get_positional_shadow_atlas_size(): number;
  public set_positional_shadow_atlas_16_bits(_enable: boolean): void;
  public get_positional_shadow_atlas_16_bits(): boolean;
  public set_snap_controls_to_pixels(_enabled: boolean): void;
  public is_snap_controls_to_pixels_enabled(): boolean;
  public set_snap_2d_transforms_to_pixel(_enabled: boolean): void;
  public is_snap_2d_transforms_to_pixel_enabled(): boolean;
  public set_snap_2d_vertices_to_pixel(_enabled: boolean): void;
  public is_snap_2d_vertices_to_pixel_enabled(): boolean;
  public set_positional_shadow_atlas_quadrant_subdiv(_quadrant: number, _subdiv: number): void;
  public get_positional_shadow_atlas_quadrant_subdiv(_quadrant: number): number;
  public set_input_as_handled(): void;
  public is_input_handled(): boolean;
  public set_handle_input_locally(_enable: boolean): void;
  public is_handling_input_locally(): boolean;
  public set_default_canvas_item_texture_filter(_mode: number): void;
  public get_default_canvas_item_texture_filter(): number;
  public set_embedding_subwindows(_enable: boolean): void;
  public is_embedding_subwindows(): boolean;
  public get_embedded_subwindows(): GDArray;
  public set_canvas_cull_mask(_mask: number): void;
  public get_canvas_cull_mask(): number;
  public set_canvas_cull_mask_bit(_layer: number, _enable: boolean): void;
  public get_canvas_cull_mask_bit(_layer: number): boolean;
  public set_default_canvas_item_texture_repeat(_mode: number): void;
  public get_default_canvas_item_texture_repeat(): number;
  public set_sdf_oversize(_oversize: number): void;
  public get_sdf_oversize(): number;
  public set_sdf_scale(_scale: number): void;
  public get_sdf_scale(): number;
  public set_mesh_lod_threshold(_pixels: number): void;
  public get_mesh_lod_threshold(): number;
  public set_as_audio_listener_2d(_enable: boolean): void;
  public is_audio_listener_2d(): boolean;
  public get_camera_2d(): Camera2D;
  public set_world_3d(_world_3d: World3D): void;
  public get_world_3d(): World3D;
  public find_world_3d(): World3D;
  public set_use_own_world_3d(_enable: boolean): void;
  public is_using_own_world_3d(): boolean;
  public get_camera_3d(): Camera3D;
  public set_as_audio_listener_3d(_enable: boolean): void;
  public is_audio_listener_3d(): boolean;
  public set_disable_3d(_disable: boolean): void;
  public is_3d_disabled(): boolean;
  public set_use_xr(_use: boolean): void;
  public is_using_xr(): boolean;
  public set_scaling_3d_mode(_scaling_3d_mode: number): void;
  public get_scaling_3d_mode(): number;
  public set_scaling_3d_scale(_scale: number): void;
  public get_scaling_3d_scale(): number;
  public set_fsr_sharpness(_fsr_sharpness: number): void;
  public get_fsr_sharpness(): number;
  public set_texture_mipmap_bias(_texture_mipmap_bias: number): void;
  public get_texture_mipmap_bias(): number;
  public set_vrs_mode(_mode: number): void;
  public get_vrs_mode(): number;
  public set_vrs_update_mode(_mode: number): void;
  public get_vrs_update_mode(): number;
  public set_vrs_texture(_texture: Texture2D): void;
  public get_vrs_texture(): Texture2D;
  public get disable_3d(): boolean {
    is_3d_disabled();
  }
  public set disable_3d(value): void {
    set_disable_3d(value);
  }
  public get use_xr(): boolean {
    is_using_xr();
  }
  public set use_xr(value): void {
    set_use_xr(value);
  }
  public get own_world_3d(): boolean {
    is_using_own_world_3d();
  }
  public set own_world_3d(value): void {
    set_use_own_world_3d(value);
  }
  public get world_3d(): World3D {
    get_world_3d();
  }
  public set world_3d(value): void {
    set_world_3d(value);
  }
  public get world_2d(): World2D {
    get_world_2d();
  }
  public set world_2d(value): void {
    set_world_2d(value);
  }
  public get transparent_bg(): boolean {
    has_transparent_background();
  }
  public set transparent_bg(value): void {
    set_transparent_background(value);
  }
  public get handle_input_locally(): boolean {
    is_handling_input_locally();
  }
  public set handle_input_locally(value): void {
    set_handle_input_locally(value);
  }
  public get snap_2d_transforms_to_pixel(): boolean {
    is_snap_2d_transforms_to_pixel_enabled();
  }
  public set snap_2d_transforms_to_pixel(value): void {
    set_snap_2d_transforms_to_pixel(value);
  }
  public get snap_2d_vertices_to_pixel(): boolean {
    is_snap_2d_vertices_to_pixel_enabled();
  }
  public set snap_2d_vertices_to_pixel(value): void {
    set_snap_2d_vertices_to_pixel(value);
  }
  public get msaa_2d(): number {
    get_msaa_2d();
  }
  public set msaa_2d(value): void {
    set_msaa_2d(value);
  }
  public get msaa_3d(): number {
    get_msaa_3d();
  }
  public set msaa_3d(value): void {
    set_msaa_3d(value);
  }
  public get screen_space_aa(): number {
    get_screen_space_aa();
  }
  public set screen_space_aa(value): void {
    set_screen_space_aa(value);
  }
  public get use_taa(): boolean {
    is_using_taa();
  }
  public set use_taa(value): void {
    set_use_taa(value);
  }
  public get use_debanding(): boolean {
    is_using_debanding();
  }
  public set use_debanding(value): void {
    set_use_debanding(value);
  }
  public get use_occlusion_culling(): boolean {
    is_using_occlusion_culling();
  }
  public set use_occlusion_culling(value): void {
    set_use_occlusion_culling(value);
  }
  public get mesh_lod_threshold(): number {
    get_mesh_lod_threshold();
  }
  public set mesh_lod_threshold(value): void {
    set_mesh_lod_threshold(value);
  }
  public get debug_draw(): number {
    get_debug_draw();
  }
  public set debug_draw(value): void {
    set_debug_draw(value);
  }
  public get use_hdr_2d(): boolean {
    is_using_hdr_2d();
  }
  public set use_hdr_2d(value): void {
    set_use_hdr_2d(value);
  }
  public get scaling_3d_mode(): number {
    get_scaling_3d_mode();
  }
  public set scaling_3d_mode(value): void {
    set_scaling_3d_mode(value);
  }
  public get scaling_3d_scale(): number {
    get_scaling_3d_scale();
  }
  public set scaling_3d_scale(value): void {
    set_scaling_3d_scale(value);
  }
  public get texture_mipmap_bias(): number {
    get_texture_mipmap_bias();
  }
  public set texture_mipmap_bias(value): void {
    set_texture_mipmap_bias(value);
  }
  public get fsr_sharpness(): number {
    get_fsr_sharpness();
  }
  public set fsr_sharpness(value): void {
    set_fsr_sharpness(value);
  }
  public get vrs_mode(): number {
    get_vrs_mode();
  }
  public set vrs_mode(value): void {
    set_vrs_mode(value);
  }
  public get vrs_update_mode(): number {
    get_vrs_update_mode();
  }
  public set vrs_update_mode(value): void {
    set_vrs_update_mode(value);
  }
  public get vrs_texture(): Texture2D {
    get_vrs_texture();
  }
  public set vrs_texture(value): void {
    set_vrs_texture(value);
  }
  public get canvas_item_default_texture_filter(): number {
    get_default_canvas_item_texture_filter();
  }
  public set canvas_item_default_texture_filter(value): void {
    set_default_canvas_item_texture_filter(value);
  }
  public get canvas_item_default_texture_repeat(): number {
    get_default_canvas_item_texture_repeat();
  }
  public set canvas_item_default_texture_repeat(value): void {
    set_default_canvas_item_texture_repeat(value);
  }
  public get audio_listener_enable_2d(): boolean {
    is_audio_listener_2d();
  }
  public set audio_listener_enable_2d(value): void {
    set_as_audio_listener_2d(value);
  }
  public get audio_listener_enable_3d(): boolean {
    is_audio_listener_3d();
  }
  public set audio_listener_enable_3d(value): void {
    set_as_audio_listener_3d(value);
  }
  public get physics_object_picking(): boolean {
    get_physics_object_picking();
  }
  public set physics_object_picking(value): void {
    set_physics_object_picking(value);
  }
  public get physics_object_picking_sort(): boolean {
    get_physics_object_picking_sort();
  }
  public set physics_object_picking_sort(value): void {
    set_physics_object_picking_sort(value);
  }
  public get physics_object_picking_first_only(): boolean {
    get_physics_object_picking_first_only();
  }
  public set physics_object_picking_first_only(value): void {
    set_physics_object_picking_first_only(value);
  }
  public get gui_disable_input(): boolean {
    is_input_disabled();
  }
  public set gui_disable_input(value): void {
    set_disable_input(value);
  }
  public get gui_snap_controls_to_pixels(): boolean {
    is_snap_controls_to_pixels_enabled();
  }
  public set gui_snap_controls_to_pixels(value): void {
    set_snap_controls_to_pixels(value);
  }
  public get gui_embed_subwindows(): boolean {
    is_embedding_subwindows();
  }
  public set gui_embed_subwindows(value): void {
    set_embedding_subwindows(value);
  }
  public get sdf_oversize(): number {
    get_sdf_oversize();
  }
  public set sdf_oversize(value): void {
    set_sdf_oversize(value);
  }
  public get sdf_scale(): number {
    get_sdf_scale();
  }
  public set sdf_scale(value): void {
    set_sdf_scale(value);
  }
  public get positional_shadow_atlas_size(): number {
    get_positional_shadow_atlas_size();
  }
  public set positional_shadow_atlas_size(value): void {
    set_positional_shadow_atlas_size(value);
  }
  public get positional_shadow_atlas_16_bits(): boolean {
    get_positional_shadow_atlas_16_bits();
  }
  public set positional_shadow_atlas_16_bits(value): void {
    set_positional_shadow_atlas_16_bits(value);
  }
  public get positional_shadow_atlas_quad_0(): number {
    get_positional_shadow_atlas_quadrant_subdiv();
  }
  public set positional_shadow_atlas_quad_0(value): void {
    set_positional_shadow_atlas_quadrant_subdiv(value);
  }
  public get positional_shadow_atlas_quad_1(): number {
    get_positional_shadow_atlas_quadrant_subdiv();
  }
  public set positional_shadow_atlas_quad_1(value): void {
    set_positional_shadow_atlas_quadrant_subdiv(value);
  }
  public get positional_shadow_atlas_quad_2(): number {
    get_positional_shadow_atlas_quadrant_subdiv();
  }
  public set positional_shadow_atlas_quad_2(value): void {
    set_positional_shadow_atlas_quadrant_subdiv(value);
  }
  public get positional_shadow_atlas_quad_3(): number {
    get_positional_shadow_atlas_quadrant_subdiv();
  }
  public set positional_shadow_atlas_quad_3(value): void {
    set_positional_shadow_atlas_quadrant_subdiv(value);
  }
  public get canvas_transform(): Transform2D {
    get_canvas_transform();
  }
  public set canvas_transform(value): void {
    set_canvas_transform(value);
  }
  public get global_canvas_transform(): Transform2D {
    get_global_canvas_transform();
  }
  public set global_canvas_transform(value): void {
    set_global_canvas_transform(value);
  }
  public get canvas_cull_mask(): number {
    get_canvas_cull_mask();
  }
  public set canvas_cull_mask(value): void {
    set_canvas_cull_mask(value);
  }
  static PositionalShadowAtlasQuadrantSubdiv = {
    SHADOW_ATLAS_QUADRANT_SUBDIV_DISABLED = 0,
    SHADOW_ATLAS_QUADRANT_SUBDIV_1 = 1,
    SHADOW_ATLAS_QUADRANT_SUBDIV_4 = 2,
    SHADOW_ATLAS_QUADRANT_SUBDIV_16 = 3,
    SHADOW_ATLAS_QUADRANT_SUBDIV_64 = 4,
    SHADOW_ATLAS_QUADRANT_SUBDIV_256 = 5,
    SHADOW_ATLAS_QUADRANT_SUBDIV_1024 = 6,
    SHADOW_ATLAS_QUADRANT_SUBDIV_MAX = 7,
  }
  static Scaling3DMode = {
    SCALING_3D_MODE_BILINEAR = 0,
    SCALING_3D_MODE_FSR = 1,
    SCALING_3D_MODE_FSR2 = 2,
    SCALING_3D_MODE_MAX = 3,
  }
  static MSAA = {
    MSAA_DISABLED = 0,
    MSAA_2X = 1,
    MSAA_4X = 2,
    MSAA_8X = 3,
    MSAA_MAX = 4,
  }
  static ScreenSpaceAA = {
    SCREEN_SPACE_AA_DISABLED = 0,
    SCREEN_SPACE_AA_FXAA = 1,
    SCREEN_SPACE_AA_MAX = 2,
  }
  static RenderInfo = {
    RENDER_INFO_OBJECTS_IN_FRAME = 0,
    RENDER_INFO_PRIMITIVES_IN_FRAME = 1,
    RENDER_INFO_DRAW_CALLS_IN_FRAME = 2,
    RENDER_INFO_MAX = 3,
  }
  static RenderInfoType = {
    RENDER_INFO_TYPE_VISIBLE = 0,
    RENDER_INFO_TYPE_SHADOW = 1,
    RENDER_INFO_TYPE_CANVAS = 2,
    RENDER_INFO_TYPE_MAX = 3,
  }
  static DebugDraw = {
    DEBUG_DRAW_DISABLED = 0,
    DEBUG_DRAW_UNSHADED = 1,
    DEBUG_DRAW_LIGHTING = 2,
    DEBUG_DRAW_OVERDRAW = 3,
    DEBUG_DRAW_WIREFRAME = 4,
    DEBUG_DRAW_NORMAL_BUFFER = 5,
    DEBUG_DRAW_VOXEL_GI_ALBEDO = 6,
    DEBUG_DRAW_VOXEL_GI_LIGHTING = 7,
    DEBUG_DRAW_VOXEL_GI_EMISSION = 8,
    DEBUG_DRAW_SHADOW_ATLAS = 9,
    DEBUG_DRAW_DIRECTIONAL_SHADOW_ATLAS = 10,
    DEBUG_DRAW_SCENE_LUMINANCE = 11,
    DEBUG_DRAW_SSAO = 12,
    DEBUG_DRAW_SSIL = 13,
    DEBUG_DRAW_PSSM_SPLITS = 14,
    DEBUG_DRAW_DECAL_ATLAS = 15,
    DEBUG_DRAW_SDFGI = 16,
    DEBUG_DRAW_SDFGI_PROBES = 17,
    DEBUG_DRAW_GI_BUFFER = 18,
    DEBUG_DRAW_DISABLE_LOD = 19,
    DEBUG_DRAW_CLUSTER_OMNI_LIGHTS = 20,
    DEBUG_DRAW_CLUSTER_SPOT_LIGHTS = 21,
    DEBUG_DRAW_CLUSTER_DECALS = 22,
    DEBUG_DRAW_CLUSTER_REFLECTION_PROBES = 23,
    DEBUG_DRAW_OCCLUDERS = 24,
    DEBUG_DRAW_MOTION_VECTORS = 25,
    DEBUG_DRAW_INTERNAL_BUFFER = 26,
  }
  static DefaultCanvasItemTextureFilter = {
    DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_NEAREST = 0,
    DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_LINEAR = 1,
    DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_LINEAR_WITH_MIPMAPS = 2,
    DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_NEAREST_WITH_MIPMAPS = 3,
    DEFAULT_CANVAS_ITEM_TEXTURE_FILTER_MAX = 4,
  }
  static DefaultCanvasItemTextureRepeat = {
    DEFAULT_CANVAS_ITEM_TEXTURE_REPEAT_DISABLED = 0,
    DEFAULT_CANVAS_ITEM_TEXTURE_REPEAT_ENABLED = 1,
    DEFAULT_CANVAS_ITEM_TEXTURE_REPEAT_MIRROR = 2,
    DEFAULT_CANVAS_ITEM_TEXTURE_REPEAT_MAX = 3,
  }
  static SDFOversize = {
    SDF_OVERSIZE_100_PERCENT = 0,
    SDF_OVERSIZE_120_PERCENT = 1,
    SDF_OVERSIZE_150_PERCENT = 2,
    SDF_OVERSIZE_200_PERCENT = 3,
    SDF_OVERSIZE_MAX = 4,
  }
  static SDFScale = {
    SDF_SCALE_100_PERCENT = 0,
    SDF_SCALE_50_PERCENT = 1,
    SDF_SCALE_25_PERCENT = 2,
    SDF_SCALE_MAX = 3,
  }
  static VRSMode = {
    VRS_DISABLED = 0,
    VRS_TEXTURE = 1,
    VRS_XR = 2,
    VRS_MAX = 3,
  }
  static VRSUpdateMode = {
    VRS_UPDATE_DISABLED = 0,
    VRS_UPDATE_ONCE = 1,
    VRS_UPDATE_ALWAYS = 2,
    VRS_UPDATE_MAX = 3,
  }
  public const size_changed: string = "size_changed";
  public const gui_focus_changed: string = "gui_focus_changed";
}