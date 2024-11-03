
import { VisualShaderNodeConstant } from "@godot/classes/visual_shader_node_constant";
export declare class VisualShaderNodeColorConstant extends VisualShaderNodeConstant{
  public set_constant(_constant: Color): void;
  public get_constant(): Color;
  public get constant(): Color;
  public set constant(value): void;
}