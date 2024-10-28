
import { RefCounted } from "@godot/classes/ref_counted";

export declare class RDPipelineRasterizationState extends RefCounted{
  public set_enable_depth_clamp(_p_member: boolean): void;
  public get_enable_depth_clamp(): boolean;
  public set_discard_primitives(_p_member: boolean): void;
  public get_discard_primitives(): boolean;
  public set_wireframe(_p_member: boolean): void;
  public get_wireframe(): boolean;
  public set_cull_mode(_p_member: number): void;
  public get_cull_mode(): number;
  public set_front_face(_p_member: number): void;
  public get_front_face(): number;
  public set_depth_bias_enabled(_p_member: boolean): void;
  public get_depth_bias_enabled(): boolean;
  public set_depth_bias_constant_factor(_p_member: number): void;
  public get_depth_bias_constant_factor(): number;
  public set_depth_bias_clamp(_p_member: number): void;
  public get_depth_bias_clamp(): number;
  public set_depth_bias_slope_factor(_p_member: number): void;
  public get_depth_bias_slope_factor(): number;
  public set_line_width(_p_member: number): void;
  public get_line_width(): number;
  public set_patch_control_points(_p_member: number): void;
  public get_patch_control_points(): number;
  public get enable_depth_clamp(): boolean {
    get_enable_depth_clamp();
  }
  public set enable_depth_clamp(value: boolean): void {
    set_enable_depth_clamp(value);
  }
  public get discard_primitives(): boolean {
    get_discard_primitives();
  }
  public set discard_primitives(value: boolean): void {
    set_discard_primitives(value);
  }
  public get wireframe(): boolean {
    get_wireframe();
  }
  public set wireframe(value: boolean): void {
    set_wireframe(value);
  }
  public get cull_mode(): number {
    get_cull_mode();
  }
  public set cull_mode(value: number): void {
    set_cull_mode(value);
  }
  public get front_face(): number {
    get_front_face();
  }
  public set front_face(value: number): void {
    set_front_face(value);
  }
  public get depth_bias_enabled(): boolean {
    get_depth_bias_enabled();
  }
  public set depth_bias_enabled(value: boolean): void {
    set_depth_bias_enabled(value);
  }
  public get depth_bias_constant_factor(): number {
    get_depth_bias_constant_factor();
  }
  public set depth_bias_constant_factor(value: number): void {
    set_depth_bias_constant_factor(value);
  }
  public get depth_bias_clamp(): number {
    get_depth_bias_clamp();
  }
  public set depth_bias_clamp(value: number): void {
    set_depth_bias_clamp(value);
  }
  public get depth_bias_slope_factor(): number {
    get_depth_bias_slope_factor();
  }
  public set depth_bias_slope_factor(value: number): void {
    set_depth_bias_slope_factor(value);
  }
  public get line_width(): number {
    get_line_width();
  }
  public set line_width(value: number): void {
    set_line_width(value);
  }
  public get patch_control_points(): number {
    get_patch_control_points();
  }
  public set patch_control_points(value: number): void {
    set_patch_control_points(value);
  }
}