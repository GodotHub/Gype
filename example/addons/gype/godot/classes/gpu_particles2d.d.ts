
import { Texture2D } from "@godot/classes/texture2d";
import { Node2D } from "@godot/classes/node2d";
import { Node } from "@godot/classes/node";
import { Material } from "@godot/classes/material";
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
  public set_sub_emitter(_path: GDString | NodePath | string): void;
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
  public get emitting(): boolean;
  public set emitting(value): void;
  public get amount(): number;
  public set amount(value): void;
  public get amount_ratio(): number;
  public set amount_ratio(value): void;
  public get sub_emitter(): NodePath;
  public set sub_emitter(value): void;
  public get process_material(): ParticleProcessMaterial;
  public set process_material(value): void;
  public get texture(): Texture2D;
  public set texture(value): void;
  public get lifetime(): number;
  public set lifetime(value): void;
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
  public get interp_to_end(): number;
  public set interp_to_end(value): void;
  public get collision_base_size(): number;
  public set collision_base_size(value): void;
  public get visibility_rect(): Rect2;
  public set visibility_rect(value): void;
  public get local_coords(): boolean;
  public set local_coords(value): void;
  public get draw_order(): number;
  public set draw_order(value): void;
  public get trail_enabled(): boolean;
  public set trail_enabled(value): void;
  public get trail_lifetime(): number;
  public set trail_lifetime(value): void;
  public get trail_sections(): number;
  public set trail_sections(value): void;
  public get trail_section_subdivisions(): number;
  public set trail_section_subdivisions(value): void;
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
  public get finished(): Signal;
}