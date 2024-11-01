
import { VisualShaderNode } from "@godot/classes/visual_shader_node";

export declare class VisualShaderNodeIs extends VisualShaderNode{
  public set_function(_func: number): void;
  public get_function(): number;
  public get function(): number {
    get_function();
  }
  public set function(value): void {
    set_function(value);
  }
  static Function = {
    FUNC_IS_INF = 0,
    FUNC_IS_NAN = 1,
    FUNC_MAX = 2,
  }
}