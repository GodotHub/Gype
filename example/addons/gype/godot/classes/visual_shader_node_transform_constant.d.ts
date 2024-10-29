
import { VisualShaderNodeConstant } from "@godot/classes/visual_shader_node_constant";

export declare class VisualShaderNodeTransformConstant extends VisualShaderNodeConstant{
  public set_constant(_constant: Transform3D): void;
  public get_constant(): Transform3D;
  public get constant(): Transform3D {
    get_constant();
  }
  public set constant(value): void {
    set_constant(value);
  }
}