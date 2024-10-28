
import { VisualShaderNode } from "@godot/classes/visual_shader_node";

export declare class VisualShaderNodeInput extends VisualShaderNode{
  public set_input_name(_name: String): void;
  public get_input_name(): String;
  public get_input_real_name(): String;
  public get input_name(): StringName {
    get_input_name();
  }
  public set input_name(value: StringName): void {
    set_input_name(value);
  }
}