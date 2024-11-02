
import { PackedScene } from "@godot/classes/packed_scene";
import { RefCounted } from "@godot/classes/ref_counted";


export declare class SceneState extends RefCounted{
  public get_node_count(): number;
  public get_node_type(_idx: number): StringName;
  public get_node_name(_idx: number): StringName;
  public get_node_path(_idx: number, _for_parent: boolean): NodePath;
  public get_node_owner_path(_idx: number): NodePath;
  public is_node_instance_placeholder(_idx: number): boolean;
  public get_node_instance_placeholder(_idx: number): String;
  public get_node_instance(_idx: number): PackedScene;
  public get_node_groups(_idx: number): PackedStringArray;
  public get_node_index(_idx: number): number;
  public get_node_property_count(_idx: number): number;
  public get_node_property_name(_idx: number, _prop_idx: number): StringName;
  public get_node_property_value(_idx: number, _prop_idx: number): any;
  public get_connection_count(): number;
  public get_connection_source(_idx: number): NodePath;
  public get_connection_signal(_idx: number): StringName;
  public get_connection_target(_idx: number): NodePath;
  public get_connection_method(_idx: number): StringName;
  public get_connection_flags(_idx: number): number;
  public get_connection_binds(_idx: number): GDArray;
  public get_connection_unbinds(_idx: number): number;
  static GenEditState = {
    GEN_EDIT_STATE_DISABLED = 0,
    GEN_EDIT_STATE_INSTANCE = 1,
    GEN_EDIT_STATE_MAIN = 2,
    GEN_EDIT_STATE_MAIN_INHERITED = 3,
  }
}