
import { GraphElement } from "@godot/classes/graph_element";
import { HBoxContainer } from "@godot/classes/h_box_container";
import { Texture2D } from "@godot/classes/texture2d";


export declare class GraphNode extends GraphElement{
  public _draw_port(_slot_index: number, _position: Vector2i, _left: boolean, _color: Color): void;
  public set_title(_title: GDString | StringName | string): void;
  public get_title(): String;
  public get_titlebar_hbox(): HBoxContainer;
  public set_slot(_slot_index: number, _enable_left_port: boolean, _type_left: number, _color_left: Color, _enable_right_port: boolean, _type_right: number, _color_right: Color, _custom_icon_left: Texture2D, _custom_icon_right: Texture2D, _draw_stylebox: boolean): void;
  public clear_slot(_slot_index: number): void;
  public clear_all_slots(): void;
  public is_slot_enabled_left(_slot_index: number): boolean;
  public set_slot_enabled_left(_slot_index: number, _enable: boolean): void;
  public set_slot_type_left(_slot_index: number, _type: number): void;
  public get_slot_type_left(_slot_index: number): number;
  public set_slot_color_left(_slot_index: number, _color: Color): void;
  public get_slot_color_left(_slot_index: number): Color;
  public set_slot_custom_icon_left(_slot_index: number, _custom_icon: Texture2D): void;
  public get_slot_custom_icon_left(_slot_index: number): Texture2D;
  public is_slot_enabled_right(_slot_index: number): boolean;
  public set_slot_enabled_right(_slot_index: number, _enable: boolean): void;
  public set_slot_type_right(_slot_index: number, _type: number): void;
  public get_slot_type_right(_slot_index: number): number;
  public set_slot_color_right(_slot_index: number, _color: Color): void;
  public get_slot_color_right(_slot_index: number): Color;
  public set_slot_custom_icon_right(_slot_index: number, _custom_icon: Texture2D): void;
  public get_slot_custom_icon_right(_slot_index: number): Texture2D;
  public is_slot_draw_stylebox(_slot_index: number): boolean;
  public set_slot_draw_stylebox(_slot_index: number, _enable: boolean): void;
  public set_ignore_invalid_connection_type(_ignore: boolean): void;
  public is_ignoring_valid_connection_type(): boolean;
  public get_input_port_count(): number;
  public get_input_port_position(_port_idx: number): Vector2;
  public get_input_port_type(_port_idx: number): number;
  public get_input_port_color(_port_idx: number): Color;
  public get_input_port_slot(_port_idx: number): number;
  public get_output_port_count(): number;
  public get_output_port_position(_port_idx: number): Vector2;
  public get_output_port_type(_port_idx: number): number;
  public get_output_port_color(_port_idx: number): Color;
  public get_output_port_slot(_port_idx: number): number;
  public get title(): String;
  public set title(value): void;
  public get ignore_invalid_connection_type(): boolean;
  public set ignore_invalid_connection_type(value): void;
  public get slot_updated(): Signal;
}