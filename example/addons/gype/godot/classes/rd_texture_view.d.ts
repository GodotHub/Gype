
import { RefCounted } from "@godot/classes/ref_counted";

export declare class RDTextureView extends RefCounted{
  public set_format_override(_p_member: number): void;
  public get_format_override(): number;
  public set_swizzle_r(_p_member: number): void;
  public get_swizzle_r(): number;
  public set_swizzle_g(_p_member: number): void;
  public get_swizzle_g(): number;
  public set_swizzle_b(_p_member: number): void;
  public get_swizzle_b(): number;
  public set_swizzle_a(_p_member: number): void;
  public get_swizzle_a(): number;
  public get format_override(): number {
    get_format_override();
  }
  public set format_override(value): void {
    set_format_override(value);
  }
  public get swizzle_r(): number {
    get_swizzle_r();
  }
  public set swizzle_r(value): void {
    set_swizzle_r(value);
  }
  public get swizzle_g(): number {
    get_swizzle_g();
  }
  public set swizzle_g(value): void {
    set_swizzle_g(value);
  }
  public get swizzle_b(): number {
    get_swizzle_b();
  }
  public set swizzle_b(value): void {
    set_swizzle_b(value);
  }
  public get swizzle_a(): number {
    get_swizzle_a();
  }
  public set swizzle_a(value): void {
    set_swizzle_a(value);
  }
}