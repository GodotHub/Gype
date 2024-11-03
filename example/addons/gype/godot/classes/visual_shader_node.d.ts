
import { Resource } from "@godot/classes/resource";
export declare class VisualShaderNode extends Resource{
  public get_default_input_port(_type: number): number;
  public set_output_port_for_preview(_port: number): void;
  public get_output_port_for_preview(): number;
  public set_input_port_default_value(_port: number, _value: any, _prev_value: any = null): void;
  public get_input_port_default_value(_port: number): any;
  public remove_input_port_default_value(_port: number): void;
  public clear_default_input_values(): void;
  public set_default_input_values(_values: GDArray): void;
  public get_default_input_values(): GDArray;
  public set_frame(_frame: number): void;
  public get_frame(): number;
  public get output_port_for_preview(): number;
  public set output_port_for_preview(value): void;
  public get default_input_values(): GDArray;
  public set default_input_values(value): void;
  public get expanded_output_ports(): GDArray;
  public set expanded_output_ports(value): void;
  public get linked_parent_graph_frame(): number;
  public set linked_parent_graph_frame(value): void;
  static PortType = {
    PORT_TYPE_SCALAR = 0,
    PORT_TYPE_SCALAR_INT = 1,
    PORT_TYPE_SCALAR_UINT = 2,
    PORT_TYPE_VECTOR_2D = 3,
    PORT_TYPE_VECTOR_3D = 4,
    PORT_TYPE_VECTOR_4D = 5,
    PORT_TYPE_BOOLEAN = 6,
    PORT_TYPE_TRANSFORM = 7,
    PORT_TYPE_SAMPLER = 8,
    PORT_TYPE_MAX = 9,
  }
}