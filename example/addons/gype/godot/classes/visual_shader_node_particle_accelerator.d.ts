
import { VisualShaderNode } from "@godot/classes/visual_shader_node";

export declare class VisualShaderNodeParticleAccelerator extends VisualShaderNode{
  public set_mode(_mode: number): void;
  public get_mode(): number;
  public get mode(): number {
    get_mode();
  }
  public set mode(value): void {
    set_mode(value);
  }
  static Mode = {
    MODE_LINEAR = 0,
    MODE_RADIAL = 1,
    MODE_TANGENTIAL = 2,
    MODE_MAX = 3,
  }
}