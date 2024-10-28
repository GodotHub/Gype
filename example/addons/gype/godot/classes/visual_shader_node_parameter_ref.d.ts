
import { VisualShaderNode } from "@godot/classes/visual_shader_node";

export declare class VisualShaderNodeParameterRef extends VisualShaderNode{
  public set_parameter_name(_name: String): void;
  public get_parameter_name(): String;
  public get parameter_name(): StringName {
    get_parameter_name();
  }
  public set parameter_name(value: StringName): void {
    set_parameter_name(value);
  }
  public get param_type(): number {
    _get_parameter_type();
  }
  public set param_type(value: number): void {
    _set_parameter_type(value);
  }
}