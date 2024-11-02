
import { VisualShaderNode } from "@godot/classes/visual_shader_node";


export declare class VisualShaderNodeVarying extends VisualShaderNode{
  public set_varying_name(_name: GDString | StringName | string): void;
  public get_varying_name(): String;
  public set_varying_type(_type: number): void;
  public get_varying_type(): number;
  public get varying_name(): StringName;
  public set varying_name(value): void;
  public get varying_type(): number;
  public set varying_type(value): void;
}