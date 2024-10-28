
import { VisualShaderNodeConstant } from "@godot/classes/visual_shader_node_constant";

export declare class VisualShaderNodeVec2Constant extends VisualShaderNodeConstant{
  public set_constant(_constant: Vector2): void;
  public get_constant(): Vector2;
  public get constant(): Vector2 {
    get_constant();
  }
  public set constant(value: Vector2): void {
    set_constant(value);
  }
}