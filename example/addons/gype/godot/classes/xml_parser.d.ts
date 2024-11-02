
import { RefCounted } from "@godot/classes/ref_counted";


export declare class XMLParser extends RefCounted{
  public read(): number;
  public get_node_type(): number;
  public get_node_name(): String;
  public get_node_data(): String;
  public get_node_offset(): number;
  public get_attribute_count(): number;
  public get_attribute_name(_idx: number): String;
  public get_attribute_value(_idx: number): String;
  public has_attribute(_name: GDString | StringName | string): boolean;
  public get_named_attribute_value(_name: GDString | StringName | string): String;
  public get_named_attribute_value_safe(_name: GDString | StringName | string): String;
  public is_empty(): boolean;
  public get_current_line(): number;
  public skip_section(): void;
  public seek(_position: number): number;
  public open(_file: GDString | StringName | string): number;
  public open_buffer(_buffer: PackedByteArray): number;
  static NodeType = {
    NODE_NONE = 0,
    NODE_ELEMENT = 1,
    NODE_ELEMENT_END = 2,
    NODE_TEXT = 3,
    NODE_COMMENT = 4,
    NODE_CDATA = 5,
    NODE_UNKNOWN = 6,
  }
}