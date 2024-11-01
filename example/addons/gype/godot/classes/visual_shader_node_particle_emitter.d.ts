
import { VisualShaderNode } from "@godot/classes/visual_shader_node";

export declare class VisualShaderNodeParticleEmitter extends VisualShaderNode{
  public set_mode_2d(_enabled: boolean): void;
  public is_mode_2d(): boolean;
  public get mode_2d(): boolean {
    is_mode_2d();
  }
  public set mode_2d(value): void {
    set_mode_2d(value);
  }
}