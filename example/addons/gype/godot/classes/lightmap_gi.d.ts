
import { CameraAttributes } from "@godot/classes/camera_attributes";
import { VisualInstance3D } from "@godot/classes/visual_instance3d";
import { Sky } from "@godot/classes/sky";
import { LightmapGIData } from "@godot/classes/lightmap_gi_data";

export declare class LightmapGI extends VisualInstance3D{
  public set_light_data(_data: LightmapGIData): void;
  public get_light_data(): LightmapGIData;
  public set_bake_quality(_bake_quality: number): void;
  public get_bake_quality(): number;
  public set_bounces(_bounces: number): void;
  public get_bounces(): number;
  public set_bounce_indirect_energy(_bounce_indirect_energy: number): void;
  public get_bounce_indirect_energy(): number;
  public set_generate_probes(_subdivision: number): void;
  public get_generate_probes(): number;
  public set_bias(_bias: number): void;
  public get_bias(): number;
  public set_environment_mode(_mode: number): void;
  public get_environment_mode(): number;
  public set_environment_custom_sky(_sky: Sky): void;
  public get_environment_custom_sky(): Sky;
  public set_environment_custom_color(_color: Color): void;
  public get_environment_custom_color(): Color;
  public set_environment_custom_energy(_energy: number): void;
  public get_environment_custom_energy(): number;
  public set_texel_scale(_texel_scale: number): void;
  public get_texel_scale(): number;
  public set_max_texture_size(_max_texture_size: number): void;
  public get_max_texture_size(): number;
  public set_use_denoiser(_use_denoiser: boolean): void;
  public is_using_denoiser(): boolean;
  public set_denoiser_strength(_denoiser_strength: number): void;
  public get_denoiser_strength(): number;
  public set_denoiser_range(_denoiser_range: number): void;
  public get_denoiser_range(): number;
  public set_interior(_enable: boolean): void;
  public is_interior(): boolean;
  public set_directional(_directional: boolean): void;
  public is_directional(): boolean;
  public set_use_texture_for_bounces(_use_texture_for_bounces: boolean): void;
  public is_using_texture_for_bounces(): boolean;
  public set_camera_attributes(_camera_attributes: CameraAttributes): void;
  public get_camera_attributes(): CameraAttributes;
  public get quality(): number {
    get_bake_quality();
  }
  public set quality(value): void {
    set_bake_quality(value);
  }
  public get bounces(): number {
    get_bounces();
  }
  public set bounces(value): void {
    set_bounces(value);
  }
  public get bounce_indirect_energy(): number {
    get_bounce_indirect_energy();
  }
  public set bounce_indirect_energy(value): void {
    set_bounce_indirect_energy(value);
  }
  public get directional(): boolean {
    is_directional();
  }
  public set directional(value): void {
    set_directional(value);
  }
  public get use_texture_for_bounces(): boolean {
    is_using_texture_for_bounces();
  }
  public set use_texture_for_bounces(value): void {
    set_use_texture_for_bounces(value);
  }
  public get interior(): boolean {
    is_interior();
  }
  public set interior(value): void {
    set_interior(value);
  }
  public get use_denoiser(): boolean {
    is_using_denoiser();
  }
  public set use_denoiser(value): void {
    set_use_denoiser(value);
  }
  public get denoiser_strength(): number {
    get_denoiser_strength();
  }
  public set denoiser_strength(value): void {
    set_denoiser_strength(value);
  }
  public get denoiser_range(): number {
    get_denoiser_range();
  }
  public set denoiser_range(value): void {
    set_denoiser_range(value);
  }
  public get bias(): number {
    get_bias();
  }
  public set bias(value): void {
    set_bias(value);
  }
  public get texel_scale(): number {
    get_texel_scale();
  }
  public set texel_scale(value): void {
    set_texel_scale(value);
  }
  public get max_texture_size(): number {
    get_max_texture_size();
  }
  public set max_texture_size(value): void {
    set_max_texture_size(value);
  }
  public get environment_mode(): number {
    get_environment_mode();
  }
  public set environment_mode(value): void {
    set_environment_mode(value);
  }
  public get environment_custom_sky(): Sky {
    get_environment_custom_sky();
  }
  public set environment_custom_sky(value): void {
    set_environment_custom_sky(value);
  }
  public get environment_custom_color(): Color {
    get_environment_custom_color();
  }
  public set environment_custom_color(value): void {
    set_environment_custom_color(value);
  }
  public get environment_custom_energy(): number {
    get_environment_custom_energy();
  }
  public set environment_custom_energy(value): void {
    set_environment_custom_energy(value);
  }
  public get camera_attributes(): CameraAttributesPractical {
    get_camera_attributes();
  }
  public set camera_attributes(value): void {
    set_camera_attributes(value);
  }
  public get generate_probes_subdiv(): number {
    get_generate_probes();
  }
  public set generate_probes_subdiv(value): void {
    set_generate_probes(value);
  }
  public get light_data(): LightmapGIData {
    get_light_data();
  }
  public set light_data(value): void {
    set_light_data(value);
  }
  static BakeQuality = {
    BAKE_QUALITY_LOW = 0,
    BAKE_QUALITY_MEDIUM = 1,
    BAKE_QUALITY_HIGH = 2,
    BAKE_QUALITY_ULTRA = 3,
  }
  static GenerateProbes = {
    GENERATE_PROBES_DISABLED = 0,
    GENERATE_PROBES_SUBDIV_4 = 1,
    GENERATE_PROBES_SUBDIV_8 = 2,
    GENERATE_PROBES_SUBDIV_16 = 3,
    GENERATE_PROBES_SUBDIV_32 = 4,
  }
  static BakeError = {
    BAKE_ERROR_OK = 0,
    BAKE_ERROR_NO_SCENE_ROOT = 1,
    BAKE_ERROR_FOREIGN_DATA = 2,
    BAKE_ERROR_NO_LIGHTMAPPER = 3,
    BAKE_ERROR_NO_SAVE_PATH = 4,
    BAKE_ERROR_NO_MESHES = 5,
    BAKE_ERROR_MESHES_INVALID = 6,
    BAKE_ERROR_CANT_CREATE_IMAGE = 7,
    BAKE_ERROR_USER_ABORTED = 8,
    BAKE_ERROR_TEXTURE_SIZE_TOO_SMALL = 9,
    BAKE_ERROR_LIGHTMAP_TOO_SMALL = 10,
    BAKE_ERROR_ATLAS_TOO_SMALL = 11,
  }
  static EnvironmentMode = {
    ENVIRONMENT_MODE_DISABLED = 0,
    ENVIRONMENT_MODE_SCENE = 1,
    ENVIRONMENT_MODE_CUSTOM_SKY = 2,
    ENVIRONMENT_MODE_CUSTOM_COLOR = 3,
  }
}