
import { VisualShaderNode } from "@godot/classes/visual_shader_node";

export declare class VisualShaderNodeParameter extends VisualShaderNode{
  public set_parameter_name(_name: String): void;
  public get_parameter_name(): String;
  public set_qualifier(_qualifier: number): void;
  public get_qualifier(): number;
  public get parameter_name(): StringName {
    get_parameter_name();
  }
  public set parameter_name(value: StringName): void {
    set_parameter_name(value);
  }
  public get qualifier(): number {
    get_qualifier();
  }
  public set qualifier(value: number): void {
    set_qualifier(value);
  }
  static Qualifier = {
    QUAL_NONE = 0,
    QUAL_GLOBAL = 1,
    QUAL_INSTANCE = 2,
    QUAL_MAX = 3,
  }
}