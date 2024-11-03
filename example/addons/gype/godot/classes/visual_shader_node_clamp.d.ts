
import { VisualShaderNode } from "@godot/classes/visual_shader_node";
export declare class VisualShaderNodeClamp extends VisualShaderNode{
  public set_op_type(_op_type: number): void;
  public get_op_type(): number;
  public get op_type(): number;
  public set op_type(value): void;
  static OpType = {
    OP_TYPE_FLOAT = 0,
    OP_TYPE_INT = 1,
    OP_TYPE_UINT = 2,
    OP_TYPE_VECTOR_2D = 3,
    OP_TYPE_VECTOR_3D = 4,
    OP_TYPE_VECTOR_4D = 5,
    OP_TYPE_MAX = 6,
  }
}