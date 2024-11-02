
import { VisualShaderNode } from "@godot/classes/visual_shader_node";


export declare class VisualShaderNodeIntFunc extends VisualShaderNode{
  public set_function(_func: number): void;
  public get_function(): number;
  public get function(): number;
  public set function(value): void;
  static Function = {
    FUNC_ABS = 0,
    FUNC_NEGATE = 1,
    FUNC_SIGN = 2,
    FUNC_BITWISE_NOT = 3,
    FUNC_MAX = 4,
  }
}