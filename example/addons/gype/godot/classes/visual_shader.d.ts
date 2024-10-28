
import { VisualShaderNode } from "@godot/classes/visual_shader_node";
import { Shader } from "@godot/classes/shader";

export declare class VisualShader extends Shader{
  public set_mode(_mode: number): void;
  public add_node(_type: number, _node: VisualShaderNode, _position: Vector2, _id: number): void;
  public get_node(_type: number, _id: number): VisualShaderNode;
  public set_node_position(_type: number, _id: number, _position: Vector2): void;
  public get_node_position(_type: number, _id: number): Vector2;
  public get_node_list(_type: number): PackedInt32Array;
  public get_valid_node_id(_type: number): number;
  public remove_node(_type: number, _id: number): void;
  public replace_node(_type: number, _id: number, _new_class: StringName): void;
  public is_node_connection(_type: number, _from_node: number, _from_port: number, _to_node: number, _to_port: number): boolean;
  public can_connect_nodes(_type: number, _from_node: number, _from_port: number, _to_node: number, _to_port: number): boolean;
  public connect_nodes(_type: number, _from_node: number, _from_port: number, _to_node: number, _to_port: number): number;
  public disconnect_nodes(_type: number, _from_node: number, _from_port: number, _to_node: number, _to_port: number): void;
  public connect_nodes_forced(_type: number, _from_node: number, _from_port: number, _to_node: number, _to_port: number): void;
  public get_node_connections(_type: number): Array;
  public set_graph_offset(_offset: Vector2): void;
  public get_graph_offset(): Vector2;
  public attach_node_to_frame(_type: number, _id: number, _frame: number): void;
  public detach_node_from_frame(_type: number, _id: number): void;
  public add_varying(_name: String, _mode: number, _type: number): void;
  public remove_varying(_name: String): void;
  public has_varying(_name: String): boolean;
  public get graph_offset(): Vector2 {
    get_graph_offset();
  }
  public set graph_offset(value: Vector2): void {
    set_graph_offset(value);
  }
  static Type = {
    TYPE_VERTEX = 0,
    TYPE_FRAGMENT = 1,
    TYPE_LIGHT = 2,
    TYPE_START = 3,
    TYPE_PROCESS = 4,
    TYPE_COLLIDE = 5,
    TYPE_START_CUSTOM = 6,
    TYPE_PROCESS_CUSTOM = 7,
    TYPE_SKY = 8,
    TYPE_FOG = 9,
    TYPE_MAX = 10,
  }
  static VaryingMode = {
    VARYING_MODE_VERTEX_TO_FRAG_LIGHT = 0,
    VARYING_MODE_FRAG_TO_LIGHT = 1,
    VARYING_MODE_MAX = 2,
  }
  static VaryingType = {
    VARYING_TYPE_FLOAT = 0,
    VARYING_TYPE_INT = 1,
    VARYING_TYPE_UINT = 2,
    VARYING_TYPE_VECTOR_2D = 3,
    VARYING_TYPE_VECTOR_3D = 4,
    VARYING_TYPE_VECTOR_4D = 5,
    VARYING_TYPE_BOOLEAN = 6,
    VARYING_TYPE_TRANSFORM = 7,
    VARYING_TYPE_MAX = 8,
  }
}