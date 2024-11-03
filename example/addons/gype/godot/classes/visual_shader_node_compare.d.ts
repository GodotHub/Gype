
import { VisualShaderNode } from "@godot/classes/visual_shader_node";
export declare class VisualShaderNodeCompare extends VisualShaderNode{
  public set_comparison_type(_type: number): void;
  public get_comparison_type(): number;
  public set_function(_func: number): void;
  public get_function(): number;
  public set_condition(_condition: number): void;
  public get_condition(): number;
  public get type(): number;
  public set type(value): void;
  public get function(): number;
  public set function(value): void;
  public get condition(): number;
  public set condition(value): void;
  static ComparisonType = {
    CTYPE_SCALAR = 0,
    CTYPE_SCALAR_INT = 1,
    CTYPE_SCALAR_UINT = 2,
    CTYPE_VECTOR_2D = 3,
    CTYPE_VECTOR_3D = 4,
    CTYPE_VECTOR_4D = 5,
    CTYPE_BOOLEAN = 6,
    CTYPE_TRANSFORM = 7,
    CTYPE_MAX = 8,
  }
  static Function = {
    FUNC_EQUAL = 0,
    FUNC_NOT_EQUAL = 1,
    FUNC_GREATER_THAN = 2,
    FUNC_GREATER_THAN_EQUAL = 3,
    FUNC_LESS_THAN = 4,
    FUNC_LESS_THAN_EQUAL = 5,
    FUNC_MAX = 6,
  }
  static Condition = {
    COND_ALL = 0,
    COND_ANY = 1,
    COND_MAX = 2,
  }
}