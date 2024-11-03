
import { VisualShaderNode } from "@godot/classes/visual_shader_node";
export declare class VisualShaderNodeColorFunc extends VisualShaderNode{
  public set_function(_func: number): void;
  public get_function(): number;
  public get function(): number;
  public set function(value): void;
  static Function = {
    FUNC_GRAYSCALE = 0,
    FUNC_HSV2RGB = 1,
    FUNC_RGB2HSV = 2,
    FUNC_SEPIA = 3,
    FUNC_MAX = 4,
  }
}