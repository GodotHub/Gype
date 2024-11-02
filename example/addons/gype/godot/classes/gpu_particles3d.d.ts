
import { Skin } from "@godot/classes/skin";
import { Material } from "@godot/classes/material";
import { Mesh } from "@godot/classes/mesh";
import { GeometryInstance3D } from "@godot/classes/geometry_instance3d";
import { Node } from "@godot/classes/node";


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
  public set_sub_emitter(_path: GDString | NodePath | string): void;
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
  public get emitting(): boolean;
  public set emitting(value): void;
  public get amount(): number;
  public set amount(value): void;
  public get amount_ratio(): number;
  public set amount_ratio(value): void;
  public get sub_emitter(): NodePath;
  public set sub_emitter(value): void;
  public get lifetime(): number;
  public set lifetime(value): void;
  public get interp_to_end(): number;
  public set interp_to_end(value): void;
  public get one_shot(): boolean;
  public set one_shot(value): void;
  public get preprocess(): number;
  public set preprocess(value): void;
  public get speed_scale(): number;
  public set speed_scale(value): void;
  public get explosiveness(): number;
  public set explosiveness(value): void;
  public get randomness(): number;
  public set randomness(value): void;
  public get fixed_fps(): number;
  public set fixed_fps(value): void;
  public get interpolate(): boolean;
  public set interpolate(value): void;
  public get fract_delta(): boolean;
  public set fract_delta(value): void;
  public get collision_base_size(): number;
  public set collision_base_size(value): void;
  public get visibility_aabb(): AABB;
  public set visibility_aabb(value): void;
  public get local_coords(): boolean;
  public set local_coords(value): void;
  public get draw_order(): number;
  public set draw_order(value): void;
  public get transform_align(): number;
  public set transform_align(value): void;
  public get trail_enabled(): boolean;
  public set trail_enabled(value): void;
  public get trail_lifetime(): number;
  public set trail_lifetime(value): void;
  public get process_material(): ParticleProcessMaterial;
  public set process_material(value): void;
  public get draw_passes(): number;
  public set draw_passes(value): void;
  public get draw_pass_1(): Mesh;
  public set draw_pass_1(value): void;
  public get draw_pass_2(): Mesh;
  public set draw_pass_2(value): void;
  public get draw_pass_3(): Mesh;
  public set draw_pass_3(value): void;
  public get draw_pass_4(): Mesh;
  public set draw_pass_4(value): void;
  public get draw_skin(): Skin;
  public set draw_skin(value): void;
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