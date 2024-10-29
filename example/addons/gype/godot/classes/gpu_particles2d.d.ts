
import { Texture2D } from "@godot/classes/texture2d";
import { Material } from "@godot/classes/material";
import { Node2D } from "@godot/classes/node2d";
import { Node } from "@godot/classes/node";

export declare class GPUParticles2D extends Node2D{
  public set_emitting(_emitting: boolean): void;
  public set_amount(_amount: number): void;
  public set_lifetime(_secs: number): void;
  public set_one_shot(_secs: boolean): void;
  public set_pre_process_time(_secs: number): void;
  public set_explosiveness_ratio(_ratio: number): void;
  public set_randomness_ratio(_ratio: number): void;
  public set_visibility_rect(_visibility_rect: Rect2): void;
  public set_use_local_coordinates(_enable: boolean): void;
  public set_fixed_fps(_fps: number): void;
  public set_fractional_delta(_enable: boolean): void;
  public set_interpolate(_enable: boolean): void;
  public set_process_material(_material: Material): void;
  public set_speed_scale(_scale: number): void;
  public set_collision_base_size(_size: number): void;
  public set_interp_to_end(_interp: number): void;
  public is_emitting(): boolean;
  public get_amount(): number;
  public get_lifetime(): number;
  public get_one_shot(): boolean;
  public get_pre_process_time(): number;
  public get_explosiveness_ratio(): number;
  public get_randomness_ratio(): number;
  public get_visibility_rect(): Rect2;
  public get_use_local_coordinates(): boolean;
  public get_fixed_fps(): number;
  public get_fractional_delta(): boolean;
  public get_interpolate(): boolean;
  public get_process_material(): Material;
  public get_speed_scale(): number;
  public get_collision_base_size(): number;
  public get_interp_to_end(): number;
  public set_draw_order(_order: number): void;
  public get_draw_order(): number;
  public set_texture(_texture: Texture2D): void;
  public get_texture(): Texture2D;
  public capture_rect(): Rect2;
  public restart(): void;
  public set_sub_emitter(_path: NodePath): void;
  public get_sub_emitter(): NodePath;
  public emit_particle(_xform: Transform2D, _velocity: Vector2, _color: Color, _custom: Color, _flags: number): void;
  public set_trail_enabled(_enabled: boolean): void;
  public set_trail_lifetime(_secs: number): void;
  public is_trail_enabled(): boolean;
  public get_trail_lifetime(): number;
  public set_trail_sections(_sections: number): void;
  public get_trail_sections(): number;
  public set_trail_section_subdivisions(_subdivisions: number): void;
  public get_trail_section_subdivisions(): number;
  public convert_from_particles(_particles: Node): void;
  public set_amount_ratio(_ratio: number): void;
  public get_amount_ratio(): number;
  public get emitting(): boolean {
    is_emitting();
  }
  public set emitting(value): void {
    set_emitting(value);
  }
  public get amount(): number {
    get_amount();
  }
  public set amount(value): void {
    set_amount(value);
  }
  public get amount_ratio(): number {
    get_amount_ratio();
  }
  public set amount_ratio(value): void {
    set_amount_ratio(value);
  }
  public get sub_emitter(): NodePath {
    get_sub_emitter();
  }
  public set sub_emitter(value): void {
    set_sub_emitter(value);
  }
  public get process_material(): ParticleProcessMaterial {
    get_process_material();
  }
  public set process_material(value): void {
    set_process_material(value);
  }
  public get texture(): Texture2D {
    get_texture();
  }
  public set texture(value): void {
    set_texture(value);
  }
  public get lifetime(): number {
    get_lifetime();
  }
  public set lifetime(value): void {
    set_lifetime(value);
  }
  public get one_shot(): boolean {
    get_one_shot();
  }
  public set one_shot(value): void {
    set_one_shot(value);
  }
  public get preprocess(): number {
    get_pre_process_time();
  }
  public set preprocess(value): void {
    set_pre_process_time(value);
  }
  public get speed_scale(): number {
    get_speed_scale();
  }
  public set speed_scale(value): void {
    set_speed_scale(value);
  }
  public get explosiveness(): number {
    get_explosiveness_ratio();
  }
  public set explosiveness(value): void {
    set_explosiveness_ratio(value);
  }
  public get randomness(): number {
    get_randomness_ratio();
  }
  public set randomness(value): void {
    set_randomness_ratio(value);
  }
  public get fixed_fps(): number {
    get_fixed_fps();
  }
  public set fixed_fps(value): void {
    set_fixed_fps(value);
  }
  public get interpolate(): boolean {
    get_interpolate();
  }
  public set interpolate(value): void {
    set_interpolate(value);
  }
  public get fract_delta(): boolean {
    get_fractional_delta();
  }
  public set fract_delta(value): void {
    set_fractional_delta(value);
  }
  public get interp_to_end(): number {
    get_interp_to_end();
  }
  public set interp_to_end(value): void {
    set_interp_to_end(value);
  }
  public get collision_base_size(): number {
    get_collision_base_size();
  }
  public set collision_base_size(value): void {
    set_collision_base_size(value);
  }
  public get visibility_rect(): Rect2 {
    get_visibility_rect();
  }
  public set visibility_rect(value): void {
    set_visibility_rect(value);
  }
  public get local_coords(): boolean {
    get_use_local_coordinates();
  }
  public set local_coords(value): void {
    set_use_local_coordinates(value);
  }
  public get draw_order(): number {
    get_draw_order();
  }
  public set draw_order(value): void {
    set_draw_order(value);
  }
  public get trail_enabled(): boolean {
    is_trail_enabled();
  }
  public set trail_enabled(value): void {
    set_trail_enabled(value);
  }
  public get trail_lifetime(): number {
    get_trail_lifetime();
  }
  public set trail_lifetime(value): void {
    set_trail_lifetime(value);
  }
  public get trail_sections(): number {
    get_trail_sections();
  }
  public set trail_sections(value): void {
    set_trail_sections(value);
  }
  public get trail_section_subdivisions(): number {
    get_trail_section_subdivisions();
  }
  public set trail_section_subdivisions(value): void {
    set_trail_section_subdivisions(value);
  }
  static DrawOrder = {
    DRAW_ORDER_INDEX = 0,
    DRAW_ORDER_LIFETIME = 1,
    DRAW_ORDER_REVERSE_LIFETIME = 2,
  }
  static EmitFlags = {
    EMIT_FLAG_POSITION = 1,
    EMIT_FLAG_ROTATION_SCALE = 2,
    EMIT_FLAG_VELOCITY = 4,
    EMIT_FLAG_COLOR = 8,
    EMIT_FLAG_CUSTOM = 16,
  }
}