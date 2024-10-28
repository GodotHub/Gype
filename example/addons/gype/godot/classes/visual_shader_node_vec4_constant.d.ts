
import { VisualShaderNodeConstant } from "@godot/classes/visual_shader_node_constant";

export declare class VisualShaderNodeVec4Constant extends VisualShaderNodeConstant{
  public set_constant(_constant: Quaternion): void;
  public get_constant(): Quaternion;
  public get constant(): Quaternion {
    get_constant();
  }
  public set constant(value: Quaternion): void {
    set_constant(value);
  }
}