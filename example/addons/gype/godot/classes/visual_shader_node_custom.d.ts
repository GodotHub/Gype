
import { VisualShaderNode } from "@godot/classes/visual_shader_node";


export declare class VisualShaderNodeCustom extends VisualShaderNode{
  public _get_name(): String;
  public _get_description(): String;
  public _get_category(): String;
  public _get_return_icon_type(): number;
  public _get_input_port_count(): number;
  public _get_input_port_type(_port: number): number;
  public _get_input_port_name(_port: number): String;
  public _get_input_port_default_value(_port: number): any;
  public _get_default_input_port(_type: number): number;
  public _get_output_port_count(): number;
  public _get_output_port_type(_port: number): number;
  public _get_output_port_name(_port: number): String;
  public _get_property_count(): number;
  public _get_property_name(_index: number): String;
  public _get_property_default_index(_index: number): number;
  public _get_property_options(_index: number): PackedStringArray;
  public _get_code(_input_vars: GDArray, _output_vars: GDArray, _mode: number, _type: number): String;
  public _get_func_code(_mode: number, _type: number): String;
  public _get_global_code(_mode: number): String;
  public _is_highend(): boolean;
  public _is_available(_mode: number, _type: number): boolean;
  public get_option_index(_option: number): number;
  public get initialized(): boolean;
  public set initialized(value): void;
  public get properties(): String;
  public set properties(value): void;
}