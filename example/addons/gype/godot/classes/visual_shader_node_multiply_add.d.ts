
import { VisualShaderNode } from "@godot/classes/visual_shader_node";


export declare class VisualShaderNodeMultiplyAdd extends VisualShaderNode{
  public set_op_type(_type: number): void;
  public get_op_type(): number;
  public get op_type(): number;
  public set op_type(value): void;
  static OpType = {
    OP_TYPE_SCALAR = 0,
    OP_TYPE_VECTOR_2D = 1,
    OP_TYPE_VECTOR_3D = 2,
    OP_TYPE_VECTOR_4D = 3,
    OP_TYPE_MAX = 4,
  }
}