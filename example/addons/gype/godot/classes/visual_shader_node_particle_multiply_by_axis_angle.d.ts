
import { VisualShaderNode } from "@godot/classes/visual_shader_node";

export declare class VisualShaderNodeParticleMultiplyByAxisAngle extends VisualShaderNode{
  public set_degrees_mode(_enabled: boolean): void;
  public is_degrees_mode(): boolean;
  public get degrees_mode(): boolean {
    is_degrees_mode();
  }
  public set degrees_mode(value): void {
    set_degrees_mode(value);
  }
}