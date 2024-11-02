
import { VisualShaderNodeVectorBase } from "@godot/classes/visual_shader_node_vector_base";


export declare class VisualShaderNodeVectorOp extends VisualShaderNodeVectorBase{
  public set_operator(_op: number): void;
  public get_operator(): number;
  public get operator(): number;
  public set operator(value): void;
  static Operator = {
    OP_ADD = 0,
    OP_SUB = 1,
    OP_MUL = 2,
    OP_DIV = 3,
    OP_MOD = 4,
    OP_POW = 5,
    OP_MAX = 6,
    OP_MIN = 7,
    OP_CROSS = 8,
    OP_ATAN2 = 9,
    OP_REFLECT = 10,
    OP_STEP = 11,
    OP_ENUM_SIZE = 12,
  }
}