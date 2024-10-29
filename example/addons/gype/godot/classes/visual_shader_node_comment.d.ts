
import { VisualShaderNodeFrame } from "@godot/classes/visual_shader_node_frame";

export declare class VisualShaderNodeComment extends VisualShaderNodeFrame{
  public set_description(_description: String): void;
  public get_description(): String;
  public get description(): String {
    get_description();
  }
  public set description(value): void {
    set_description(value);
  }
}