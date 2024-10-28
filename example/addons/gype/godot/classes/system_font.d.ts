
import { Font } from "@godot/classes/font";

export declare class SystemFont extends Font{
  public set_antialiasing(_antialiasing: number): void;
  public get_antialiasing(): number;
  public set_disable_embedded_bitmaps(_disable_embedded_bitmaps: boolean): void;
  public get_disable_embedded_bitmaps(): boolean;
  public set_generate_mipmaps(_generate_mipmaps: boolean): void;
  public get_generate_mipmaps(): boolean;
  public set_allow_system_fallback(_allow_system_fallback: boolean): void;
  public is_allow_system_fallback(): boolean;
  public set_force_autohinter(_force_autohinter: boolean): void;
  public is_force_autohinter(): boolean;
  public set_hinting(_hinting: number): void;
  public get_hinting(): number;
  public set_subpixel_positioning(_subpixel_positioning: number): void;
  public get_subpixel_positioning(): number;
  public set_multichannel_signed_distance_field(_msdf: boolean): void;
  public is_multichannel_signed_distance_field(): boolean;
  public set_msdf_pixel_range(_msdf_pixel_range: number): void;
  public get_msdf_pixel_range(): number;
  public set_msdf_size(_msdf_size: number): void;
  public get_msdf_size(): number;
  public set_oversampling(_oversampling: number): void;
  public get_oversampling(): number;
  public get_font_names(): PackedStringArray;
  public set_font_names(_names: PackedStringArray): void;
  public get_font_italic(): boolean;
  public set_font_italic(_italic: boolean): void;
  public set_font_weight(_weight: number): void;
  public set_font_stretch(_stretch: number): void;
  public get font_names(): PackedStringArray {
    get_font_names();
  }
  public set font_names(value: PackedStringArray): void {
    set_font_names(value);
  }
  public get font_italic(): boolean {
    get_font_italic();
  }
  public set font_italic(value: boolean): void {
    set_font_italic(value);
  }
  public get font_weight(): number {
    get_font_weight();
  }
  public set font_weight(value: number): void {
    set_font_weight(value);
  }
  public get font_stretch(): number {
    get_font_stretch();
  }
  public set font_stretch(value: number): void {
    set_font_stretch(value);
  }
  public get antialiasing(): number {
    get_antialiasing();
  }
  public set antialiasing(value: number): void {
    set_antialiasing(value);
  }
  public get generate_mipmaps(): boolean {
    get_generate_mipmaps();
  }
  public set generate_mipmaps(value: boolean): void {
    set_generate_mipmaps(value);
  }
  public get disable_embedded_bitmaps(): boolean {
    get_disable_embedded_bitmaps();
  }
  public set disable_embedded_bitmaps(value: boolean): void {
    set_disable_embedded_bitmaps(value);
  }
  public get allow_system_fallback(): boolean {
    is_allow_system_fallback();
  }
  public set allow_system_fallback(value: boolean): void {
    set_allow_system_fallback(value);
  }
  public get force_autohinter(): boolean {
    is_force_autohinter();
  }
  public set force_autohinter(value: boolean): void {
    set_force_autohinter(value);
  }
  public get hinting(): number {
    get_hinting();
  }
  public set hinting(value: number): void {
    set_hinting(value);
  }
  public get subpixel_positioning(): number {
    get_subpixel_positioning();
  }
  public set subpixel_positioning(value: number): void {
    set_subpixel_positioning(value);
  }
  public get multichannel_signed_distance_field(): boolean {
    is_multichannel_signed_distance_field();
  }
  public set multichannel_signed_distance_field(value: boolean): void {
    set_multichannel_signed_distance_field(value);
  }
  public get msdf_pixel_range(): number {
    get_msdf_pixel_range();
  }
  public set msdf_pixel_range(value: number): void {
    set_msdf_pixel_range(value);
  }
  public get msdf_size(): number {
    get_msdf_size();
  }
  public set msdf_size(value: number): void {
    set_msdf_size(value);
  }
  public get oversampling(): number {
    get_oversampling();
  }
  public set oversampling(value: number): void {
    set_oversampling(value);
  }
}