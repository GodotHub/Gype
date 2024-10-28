
import { VisualShaderNode } from "@godot/classes/visual_shader_node";

export declare class VisualShaderNodeReroute extends VisualShaderNode{
  public get_port_type(): number;
  public get port_type(): number {
    get_port_type();
  }
  public set port_type(value: number): void {
    _set_port_type(value);
  }
}