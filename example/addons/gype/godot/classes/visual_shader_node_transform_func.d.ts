
import { VisualShaderNode } from "@godot/classes/visual_shader_node";
export declare class VisualShaderNodeTransformFunc extends VisualShaderNode{
  public set_function(_func: number): void;
  public get_function(): number;
  public get function(): number;
  public set function(value): void;
  static Function = {
    FUNC_INVERSE = 0,
    FUNC_TRANSPOSE = 1,
    FUNC_MAX = 2,
  }
}