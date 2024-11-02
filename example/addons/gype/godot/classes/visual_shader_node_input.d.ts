
import { VisualShaderNode } from "@godot/classes/visual_shader_node";


export declare class VisualShaderNodeInput extends VisualShaderNode{
  public set_input_name(_name: GDString | StringName | string): void;
  public get_input_name(): String;
  public get_input_real_name(): String;
  public get input_name(): StringName;
  public set input_name(value): void;
  public get input_type_changed(): Signal;
}