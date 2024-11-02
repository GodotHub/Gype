
import { Resource } from "@godot/classes/resource";


export declare class AnimationNode extends Resource{
  public _get_child_nodes(): Dictionary;
  public _get_parameter_list(): GDArray;
  public _get_child_by_name(_name: GDString | StringName | string): AnimationNode;
  public _get_parameter_default_value(_parameter: GDString | StringName | string): any;
  public _is_parameter_read_only(_parameter: GDString | StringName | string): boolean;
  public _process(_time: number, _seek: boolean, _is_external_seeking: boolean, _test_only: boolean): number;
  public _get_caption(): String;
  public _has_filter(): boolean;
  public add_input(_name: GDString | StringName | string): boolean;
  public remove_input(_index: number): void;
  public set_input_name(_input: number, _name: GDString | StringName | string): boolean;
  public get_input_name(_input: number): String;
  public get_input_count(): number;
  public find_input(_name: GDString | StringName | string): number;
  public set_filter_path(_path: GDString | NodePath | string, _enable: boolean): void;
  public is_path_filtered(_path: GDString | NodePath | string): boolean;
  public set_filter_enabled(_enable: boolean): void;
  public is_filter_enabled(): boolean;
  public blend_animation(_animation: GDString | StringName | string, _time: number, _delta: number, _seeked: boolean, _is_external_seeking: boolean, _blend: number, _looped_flag: number): void;
  public blend_node(_name: GDString | StringName | string, _node: AnimationNode, _time: number, _seek: boolean, _is_external_seeking: boolean, _blend: number, _filter: number, _sync: boolean, _test_only: boolean): number;
  public blend_input(_input_index: number, _time: number, _seek: boolean, _is_external_seeking: boolean, _blend: number, _filter: number, _sync: boolean, _test_only: boolean): number;
  public set_parameter(_name: GDString | StringName | string, _value: any): void;
  public get_parameter(_name: GDString | StringName | string): any;
  public get filter_enabled(): boolean;
  public set filter_enabled(value): void;
  public get filters(): GDArray;
  public set filters(value): void;
  static FilterAction = {
    FILTER_IGNORE = 0,
    FILTER_PASS = 1,
    FILTER_STOP = 2,
    FILTER_BLEND = 3,
  }
  public get tree_changed(): Signal;
  public get animation_node_renamed(): Signal;
  public get animation_node_removed(): Signal;
}