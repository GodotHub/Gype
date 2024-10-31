
import { GeometryInstance3D } from "@godot/classes/geometry_instance3d";
import { Skin } from "@godot/classes/skin";
import { Mesh } from "@godot/classes/mesh";
import { Node } from "@godot/classes/node";
import { Material } from "@godot/classes/material";

export declare class GPUParticles3D extends GeometryInstance3D{
  public set_emitting(_emitting: boolean): void;
  public set_amount(_amount: number): void;
  public set_lifetime(_secs: number): void;
  public set_one_shot(_enable: boolean): void;
  public set_pre_process_time(_secs: number): void;
  public set_explosiveness_ratio(_ratio: number): void;
  public set_randomness_ratio(_ratio: number): void;
  public set_visibility_aabb(_aabb: AABB): void;
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
  public get_visibility_aabb(): AABB;
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
  public set_draw_passes(_passes: number): void;
  public set_draw_pass_mesh(_pass: number, _mesh: Mesh): void;
  public get_draw_passes(): number;
  public get_draw_pass_mesh(_pass: number): Mesh;
  public set_skin(_skin: Skin): void;
  public get_skin(): Skin;
  public restart(): void;
  public capture_aabb(): AABB;
  public set_sub_emitter(_path: NodePath): void;
  public get_sub_emitter(): NodePath;
  public emit_particle(_xform: Transform3D, _velocity: Vector3, _color: Color, _custom: Color, _flags: number): void;
  public set_trail_enabled(_enabled: boolean): void;
  public set_trail_lifetime(_secs: number): void;
  public is_trail_enabled(): boolean;
  public get_trail_lifetime(): number;
  public set_transform_align(_align: number): void;
  public get_transform_align(): number;
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
  public get lifetime(): number {
    get_lifetime();
  }
  public set lifetime(value): void {
    set_lifetime(value);
  }
  public get interp_to_end(): number {
    get_interp_to_end();
  }
  public set interp_to_end(value): void {
    set_interp_to_end(value);
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
  public get collision_base_size(): number {
    get_collision_base_size();
  }
  public set collision_base_size(value): void {
    set_collision_base_size(value);
  }
  public get visibility_aabb(): AABB {
    get_visibility_aabb();
  }
  public set visibility_aabb(value): void {
    set_visibility_aabb(value);
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
  public get transform_align(): number {
    get_transform_align();
  }
  public set transform_align(value): void {
    set_transform_align(value);
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
  public get process_material(): ParticleProcessMaterial {
    get_process_material();
  }
  public set process_material(value): void {
    set_process_material(value);
  }
  public get draw_passes(): number {
    get_draw_passes();
  }
  public set draw_passes(value): void {
    set_draw_passes(value);
  }
  public get draw_pass_1(): Mesh {
    get_draw_pass_mesh();
  }
  public set draw_pass_1(value): void {
    set_draw_pass_mesh(value);
  }
  public get draw_pass_2(): Mesh {
    get_draw_pass_mesh();
  }
  public set draw_pass_2(value): void {
    set_draw_pass_mesh(value);
  }
  public get draw_pass_3(): Mesh {
    get_draw_pass_mesh();
  }
  public set draw_pass_3(value): void {
    set_draw_pass_mesh(value);
  }
  public get draw_pass_4(): Mesh {
    get_draw_pass_mesh();
  }
  public set draw_pass_4(value): void {
    set_draw_pass_mesh(value);
  }
  public get draw_skin(): Skin {
    get_skin();
  }
  public set draw_skin(value): void {
    set_skin(value);
  }
  static DrawOrder = {
    DRAW_ORDER_INDEX = 0,
    DRAW_ORDER_LIFETIME = 1,
    DRAW_ORDER_REVERSE_LIFETIME = 2,
    DRAW_ORDER_VIEW_DEPTH = 3,
  }
  static EmitFlags = {
    EMIT_FLAG_POSITION = 1,
    EMIT_FLAG_ROTATION_SCALE = 2,
    EMIT_FLAG_VELOCITY = 4,
    EMIT_FLAG_COLOR = 8,
    EMIT_FLAG_CUSTOM = 16,
  }
  static TransformAlign = {
    TRANSFORM_ALIGN_DISABLED = 0,
    TRANSFORM_ALIGN_Z_BILLBOARD = 1,
    TRANSFORM_ALIGN_Y_TO_VELOCITY = 2,
    TRANSFORM_ALIGN_Z_BILLBOARD_Y_TO_VELOCITY = 3,
  }
  public get finished(): Signal;
}