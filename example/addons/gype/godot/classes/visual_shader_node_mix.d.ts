
import { VisualShaderNode } from "@godot/classes/visual_shader_node";

export declare class VisualShaderNodeMix extends VisualShaderNode{
  public set_op_type(_op_type: number): void;
  public get_op_type(): number;
  public get op_type(): number {
    get_op_type();
  }
  public set op_type(value): void {
    set_op_type(value);
  }
  static OpType = {
    OP_TYPE_SCALAR = 0,
    OP_TYPE_VECTOR_2D = 1,
    OP_TYPE_VECTOR_2D_SCALAR = 2,
    OP_TYPE_VECTOR_3D = 3,
    OP_TYPE_VECTOR_3D_SCALAR = 4,
    OP_TYPE_VECTOR_4D = 5,
    OP_TYPE_VECTOR_4D_SCALAR = 6,
    OP_TYPE_MAX = 7,
  }
}