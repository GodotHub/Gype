
import { VisualShaderNodeFrame } from "@godot/classes/visual_shader_node_frame";
export declare class VisualShaderNodeComment extends VisualShaderNodeFrame{
  public set_description(_description: GDString | StringName | string): void;
  public get_description(): String;
  public get description(): String;
  public set description(value): void;
}