
import { VisualShaderNode } from "@godot/classes/visual_shader_node";

export declare class VisualShaderNodeUIntOp extends VisualShaderNode{
  public set_operator(_op: number): void;
  public get_operator(): number;
  public get operator(): number {
    get_operator();
  }
  public set operator(value): void {
    set_operator(value);
  }
  static Operator = {
    OP_ADD = 0,
    OP_SUB = 1,
    OP_MUL = 2,
    OP_DIV = 3,
    OP_MOD = 4,
    OP_MAX = 5,
    OP_MIN = 6,
    OP_BITWISE_AND = 7,
    OP_BITWISE_OR = 8,
    OP_BITWISE_XOR = 9,
    OP_BITWISE_LEFT_SHIFT = 10,
    OP_BITWISE_RIGHT_SHIFT = 11,
    OP_ENUM_SIZE = 12,
  }
}