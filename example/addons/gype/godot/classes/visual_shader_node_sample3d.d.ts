
import { VisualShaderNode } from "@godot/classes/visual_shader_node";
export declare class VisualShaderNodeSample3D extends VisualShaderNode{
  public set_source(_value: number): void;
  public get_source(): number;
  public get source(): number;
  public set source(value): void;
  static Source = {
    SOURCE_TEXTURE = 0,
    SOURCE_PORT = 1,
    SOURCE_MAX = 2,
  }
}