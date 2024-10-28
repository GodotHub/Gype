
import { VisualShaderNode } from "@godot/classes/visual_shader_node";

export declare class VisualShaderNodeBillboard extends VisualShaderNode{
  public set_billboard_type(_billboard_type: number): void;
  public get_billboard_type(): number;
  public set_keep_scale_enabled(_enabled: boolean): void;
  public is_keep_scale_enabled(): boolean;
  public get billboard_type(): number {
    get_billboard_type();
  }
  public set billboard_type(value: number): void {
    set_billboard_type(value);
  }
  public get keep_scale(): boolean {
    is_keep_scale_enabled();
  }
  public set keep_scale(value: boolean): void {
    set_keep_scale_enabled(value);
  }
  static BillboardType = {
    BILLBOARD_TYPE_DISABLED = 0,
    BILLBOARD_TYPE_ENABLED = 1,
    BILLBOARD_TYPE_FIXED_Y = 2,
    BILLBOARD_TYPE_PARTICLES = 3,
    BILLBOARD_TYPE_MAX = 4,
  }
}