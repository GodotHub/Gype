
import { VisualShaderNode } from "@godot/classes/visual_shader_node";

export declare class VisualShaderNodeVarying extends VisualShaderNode{
  public set_varying_name(_name: String): void;
  public get_varying_name(): String;
  public set_varying_type(_type: number): void;
  public get_varying_type(): number;
  public get varying_name(): StringName {
    get_varying_name();
  }
  public set varying_name(value: StringName): void {
    set_varying_name(value);
  }
  public get varying_type(): number {
    get_varying_type();
  }
  public set varying_type(value: number): void {
    set_varying_type(value);
  }
}