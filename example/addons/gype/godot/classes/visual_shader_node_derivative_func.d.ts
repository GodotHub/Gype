
import { VisualShaderNode } from "@godot/classes/visual_shader_node";

export declare class VisualShaderNodeDerivativeFunc extends VisualShaderNode{
  public set_op_type(_type: number): void;
  public get_op_type(): number;
  public set_function(_func: number): void;
  public get_function(): number;
  public set_precision(_precision: number): void;
  public get_precision(): number;
  public get op_type(): number {
    get_op_type();
  }
  public set op_type(value): void {
    set_op_type(value);
  }
  public get function(): number {
    get_function();
  }
  public set function(value): void {
    set_function(value);
  }
  public get precision(): number {
    get_precision();
  }
  public set precision(value): void {
    set_precision(value);
  }
  static OpType = {
    OP_TYPE_SCALAR = 0,
    OP_TYPE_VECTOR_2D = 1,
    OP_TYPE_VECTOR_3D = 2,
    OP_TYPE_VECTOR_4D = 3,
    OP_TYPE_MAX = 4,
  }
  static Function = {
    FUNC_SUM = 0,
    FUNC_X = 1,
    FUNC_Y = 2,
    FUNC_MAX = 3,
  }
  static Precision = {
    PRECISION_NONE = 0,
    PRECISION_COARSE = 1,
    PRECISION_FINE = 2,
    PRECISION_MAX = 3,
  }
}