
import { VisualShaderNode } from "@godot/classes/visual_shader_node";

export declare class VisualShaderNodeTransformVecMult extends VisualShaderNode{
  public set_operator(_op: number): void;
  public get_operator(): number;
  public get operator(): number {
    get_operator();
  }
  public set operator(value: number): void {
    set_operator(value);
  }
  static Operator = {
    OP_AxB = 0,
    OP_BxA = 1,
    OP_3x3_AxB = 2,
    OP_3x3_BxA = 3,
    OP_MAX = 4,
  }
}