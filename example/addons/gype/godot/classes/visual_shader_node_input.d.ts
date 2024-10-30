
import { VisualShaderNode } from "@godot/classes/visual_shader_node";

export declare class VisualShaderNodeInput extends VisualShaderNode{
  public set_input_name(_name: String | StringName | string): void;
  public get_input_name(): String;
  public get_input_real_name(): String;
  public get input_name(): StringName {
    get_input_name();
  }
  public set input_name(value): void {
    set_input_name(value);
  }
  public const input_type_changed: string = "input_type_changed";
}