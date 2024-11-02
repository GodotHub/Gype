
import { VisualShaderNode } from "@godot/classes/visual_shader_node";


export declare class VisualShaderNodeParameter extends VisualShaderNode{
  public set_parameter_name(_name: GDString | StringName | string): void;
  public get_parameter_name(): String;
  public set_qualifier(_qualifier: number): void;
  public get_qualifier(): number;
  public get parameter_name(): StringName;
  public set parameter_name(value): void;
  public get qualifier(): number;
  public set qualifier(value): void;
  static Qualifier = {
    QUAL_NONE = 0,
    QUAL_GLOBAL = 1,
    QUAL_INSTANCE = 2,
    QUAL_MAX = 3,
  }
}