
import { VisualShaderNodeConstant } from "@godot/classes/visual_shader_node_constant";

export declare class VisualShaderNodeVec3Constant extends VisualShaderNodeConstant{
  public set_constant(_constant: Vector3): void;
  public get_constant(): Vector3;
  public get constant(): Vector3 {
    get_constant();
  }
  public set constant(value: Vector3): void {
    set_constant(value);
  }
}