
import { Object } from "@godot/classes/object";

export declare class XRVRS extends Object{
  public get_vrs_min_radius(): number;
  public set_vrs_min_radius(_radius: number): void;
  public get_vrs_strength(): number;
  public set_vrs_strength(_strength: number): void;
  public make_vrs_texture(_target_size: Vector2, _eye_foci: PackedVector2Array): RID;
  public get vrs_min_radius(): number {
    get_vrs_min_radius();
  }
  public set vrs_min_radius(value): void {
    set_vrs_min_radius(value);
  }
  public get vrs_strength(): number {
    get_vrs_strength();
  }
  public set vrs_strength(value): void {
    set_vrs_strength(value);
  }
}