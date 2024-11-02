
import { Resource } from "@godot/classes/resource";


export declare class Curve3D extends Resource{
  public get_point_count(): number;
  public set_point_count(_count: number): void;
  public add_point(_position: Vector3, _in: Vector3, _out: Vector3, _index: number): void;
  public set_point_position(_idx: number, _position: Vector3): void;
  public get_point_position(_idx: number): Vector3;
  public set_point_tilt(_idx: number, _tilt: number): void;
  public get_point_tilt(_idx: number): number;
  public set_point_in(_idx: number, _position: Vector3): void;
  public get_point_in(_idx: number): Vector3;
  public set_point_out(_idx: number, _position: Vector3): void;
  public get_point_out(_idx: number): Vector3;
  public remove_point(_idx: number): void;
  public clear_points(): void;
  public sample(_idx: number, _t: number): Vector3;
  public samplef(_fofs: number): Vector3;
  public set_bake_interval(_distance: number): void;
  public get_bake_interval(): number;
  public set_up_vector_enabled(_enable: boolean): void;
  public is_up_vector_enabled(): boolean;
  public get_baked_length(): number;
  public sample_baked(_offset: number, _cubic: boolean): Vector3;
  public sample_baked_with_rotation(_offset: number, _cubic: boolean, _apply_tilt: boolean): Transform3D;
  public sample_baked_up_vector(_offset: number, _apply_tilt: boolean): Vector3;
  public get_baked_points(): PackedVector3Array;
  public get_baked_tilts(): PackedFloat32Array;
  public get_baked_up_vectors(): PackedVector3Array;
  public get_closest_point(_to_point: Vector3): Vector3;
  public get_closest_offset(_to_point: Vector3): number;
  public tessellate(_max_stages: number, _tolerance_degrees: number): PackedVector3Array;
  public tessellate_even_length(_max_stages: number, _tolerance_length: number): PackedVector3Array;
  public get bake_interval(): number;
  public set bake_interval(value): void;
  public get point_count(): number;
  public set point_count(value): void;
  public get up_vector_enabled(): boolean;
  public set up_vector_enabled(value): void;
}