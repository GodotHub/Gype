
import { VisualShaderNodeResizableBase } from "@godot/classes/visual_shader_node_resizable_base";

export declare class VisualShaderNodeGroupBase extends VisualShaderNodeResizableBase{
  public set_inputs(_inputs: String | StringName | string): void;
  public get_inputs(): String;
  public set_outputs(_outputs: String | StringName | string): void;
  public get_outputs(): String;
  public is_valid_port_name(_name: String | StringName | string): boolean;
  public add_input_port(_id: number, _type: number, _name: String | StringName | string): void;
  public remove_input_port(_id: number): void;
  public get_input_port_count(): number;
  public has_input_port(_id: number): boolean;
  public clear_input_ports(): void;
  public add_output_port(_id: number, _type: number, _name: String | StringName | string): void;
  public remove_output_port(_id: number): void;
  public get_output_port_count(): number;
  public has_output_port(_id: number): boolean;
  public clear_output_ports(): void;
  public set_input_port_name(_id: number, _name: String | StringName | string): void;
  public set_input_port_type(_id: number, _type: number): void;
  public set_output_port_name(_id: number, _name: String | StringName | string): void;
  public set_output_port_type(_id: number, _type: number): void;
  public get_free_input_port_id(): number;
  public get_free_output_port_id(): number;
}