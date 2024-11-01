
import { VisualShaderNode } from "@godot/classes/visual_shader_node";

export declare class VisualShaderNodeResizableBase extends VisualShaderNode{
  public set_size(_size: Vector2): void;
  public get_size(): Vector2;
  public get size(): Vector2 {
    get_size();
  }
  public set size(value): void {
    set_size(value);
  }
}