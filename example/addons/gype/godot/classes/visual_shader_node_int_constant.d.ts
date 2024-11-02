
import { VisualShaderNodeConstant } from "@godot/classes/visual_shader_node_constant";


export declare class VisualShaderNodeIntConstant extends VisualShaderNodeConstant{
  public set_constant(_constant: number): void;
  public get_constant(): number;
  public get constant(): number;
  public set constant(value): void;
}