
import { RefCounted } from "@godot/classes/ref_counted";

export declare class RDPipelineColorBlendStateAttachment extends RefCounted{
  public set_as_mix(): void;
  public set_enable_blend(_p_member: boolean): void;
  public get_enable_blend(): boolean;
  public set_src_color_blend_factor(_p_member: number): void;
  public get_src_color_blend_factor(): number;
  public set_dst_color_blend_factor(_p_member: number): void;
  public get_dst_color_blend_factor(): number;
  public set_color_blend_op(_p_member: number): void;
  public get_color_blend_op(): number;
  public set_src_alpha_blend_factor(_p_member: number): void;
  public get_src_alpha_blend_factor(): number;
  public set_dst_alpha_blend_factor(_p_member: number): void;
  public get_dst_alpha_blend_factor(): number;
  public set_alpha_blend_op(_p_member: number): void;
  public get_alpha_blend_op(): number;
  public set_write_r(_p_member: boolean): void;
  public get_write_r(): boolean;
  public set_write_g(_p_member: boolean): void;
  public get_write_g(): boolean;
  public set_write_b(_p_member: boolean): void;
  public get_write_b(): boolean;
  public set_write_a(_p_member: boolean): void;
  public get_write_a(): boolean;
  public get enable_blend(): boolean {
    get_enable_blend();
  }
  public set enable_blend(value): void {
    set_enable_blend(value);
  }
  public get src_color_blend_factor(): number {
    get_src_color_blend_factor();
  }
  public set src_color_blend_factor(value): void {
    set_src_color_blend_factor(value);
  }
  public get dst_color_blend_factor(): number {
    get_dst_color_blend_factor();
  }
  public set dst_color_blend_factor(value): void {
    set_dst_color_blend_factor(value);
  }
  public get color_blend_op(): number {
    get_color_blend_op();
  }
  public set color_blend_op(value): void {
    set_color_blend_op(value);
  }
  public get src_alpha_blend_factor(): number {
    get_src_alpha_blend_factor();
  }
  public set src_alpha_blend_factor(value): void {
    set_src_alpha_blend_factor(value);
  }
  public get dst_alpha_blend_factor(): number {
    get_dst_alpha_blend_factor();
  }
  public set dst_alpha_blend_factor(value): void {
    set_dst_alpha_blend_factor(value);
  }
  public get alpha_blend_op(): number {
    get_alpha_blend_op();
  }
  public set alpha_blend_op(value): void {
    set_alpha_blend_op(value);
  }
  public get write_r(): boolean {
    get_write_r();
  }
  public set write_r(value): void {
    set_write_r(value);
  }
  public get write_g(): boolean {
    get_write_g();
  }
  public set write_g(value): void {
    set_write_g(value);
  }
  public get write_b(): boolean {
    get_write_b();
  }
  public set write_b(value): void {
    set_write_b(value);
  }
  public get write_a(): boolean {
    get_write_a();
  }
  public set write_a(value): void {
    set_write_a(value);
  }
}