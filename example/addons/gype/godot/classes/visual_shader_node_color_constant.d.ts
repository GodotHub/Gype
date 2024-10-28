
import { VisualShaderNodeConstant } from "@godot/classes/visual_shader_node_constant";

export declare class VisualShaderNodeColorConstant extends VisualShaderNodeConstant{
  public set_constant(_constant: Color): void;
  public get_constant(): Color;
  public get constant(): Color {
    get_constant();
  }
  public set constant(value: Color): void {
    set_constant(value);
  }
}