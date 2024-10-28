
import { VisualShaderNode } from "@godot/classes/visual_shader_node";

export declare class VisualShaderNodeUVFunc extends VisualShaderNode{
  public set_function(_func: number): void;
  public get_function(): number;
  public get function(): number {
    get_function();
  }
  public set function(value: number): void {
    set_function(value);
  }
  static Function = {
    FUNC_PANNING = 0,
    FUNC_SCALING = 1,
    FUNC_MAX = 2,
  }
}