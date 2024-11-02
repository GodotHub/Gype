
import { VisualShaderNodeConstant } from "@godot/classes/visual_shader_node_constant";


export declare class VisualShaderNodeBooleanConstant extends VisualShaderNodeConstant{
  public set_constant(_constant: boolean): void;
  public get_constant(): boolean;
  public get constant(): boolean;
  public set constant(value): void;
}