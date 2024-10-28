
import { XRInterface } from "@godot/classes/xr_interface";

export declare class MobileVRInterface extends XRInterface{
  public set_eye_height(_eye_height: number): void;
  public get_eye_height(): number;
  public set_iod(_iod: number): void;
  public get_iod(): number;
  public set_display_width(_display_width: number): void;
  public get_display_width(): number;
  public set_display_to_lens(_display_to_lens: number): void;
  public get_display_to_lens(): number;
  public set_offset_rect(_offset_rect: Rect2): void;
  public get_offset_rect(): Rect2;
  public set_oversample(_oversample: number): void;
  public get_oversample(): number;
  public set_k1(_k: number): void;
  public get_k1(): number;
  public set_k2(_k: number): void;
  public get_k2(): number;
  public get_vrs_min_radius(): number;
  public set_vrs_min_radius(_radius: number): void;
  public get_vrs_strength(): number;
  public set_vrs_strength(_strength: number): void;
  public get eye_height(): number {
    get_eye_height();
  }
  public set eye_height(value: number): void {
    set_eye_height(value);
  }
  public get iod(): number {
    get_iod();
  }
  public set iod(value: number): void {
    set_iod(value);
  }
  public get display_width(): number {
    get_display_width();
  }
  public set display_width(value: number): void {
    set_display_width(value);
  }
  public get display_to_lens(): number {
    get_display_to_lens();
  }
  public set display_to_lens(value: number): void {
    set_display_to_lens(value);
  }
  public get offset_rect(): Rect2 {
    get_offset_rect();
  }
  public set offset_rect(value: Rect2): void {
    set_offset_rect(value);
  }
  public get oversample(): number {
    get_oversample();
  }
  public set oversample(value: number): void {
    set_oversample(value);
  }
  public get k1(): number {
    get_k1();
  }
  public set k1(value: number): void {
    set_k1(value);
  }
  public get k2(): number {
    get_k2();
  }
  public set k2(value: number): void {
    set_k2(value);
  }
  public get vrs_min_radius(): number {
    get_vrs_min_radius();
  }
  public set vrs_min_radius(value: number): void {
    set_vrs_min_radius(value);
  }
  public get vrs_strength(): number {
    get_vrs_strength();
  }
  public set vrs_strength(value: number): void {
    set_vrs_strength(value);
  }
}