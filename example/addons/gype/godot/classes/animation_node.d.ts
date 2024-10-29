
import { Resource } from "@godot/classes/resource";

export declare class AnimationNode extends Resource{
  public _get_child_nodes(): Dictionary;
  public _get_parameter_list(): GDArray;
  public _get_child_by_name(_name: StringName): AnimationNode;
  public _get_parameter_default_value(_parameter: StringName): any;
  public _is_parameter_read_only(_parameter: StringName): boolean;
  public _process(_time: number, _seek: boolean, _is_external_seeking: boolean, _test_only: boolean): number;
  public _get_caption(): String;
  public _has_filter(): boolean;
  public add_input(_name: String): boolean;
  public remove_input(_index: number): void;
  public set_input_name(_input: number, _name: String): boolean;
  public get_input_name(_input: number): String;
  public get_input_count(): number;
  public find_input(_name: String): number;
  public set_filter_path(_path: NodePath, _enable: boolean): void;
  public is_path_filtered(_path: NodePath): boolean;
  public set_filter_enabled(_enable: boolean): void;
  public is_filter_enabled(): boolean;
  public blend_animation(_animation: StringName, _time: number, _delta: number, _seeked: boolean, _is_external_seeking: boolean, _blend: number, _looped_flag: number): void;
  public blend_node(_name: StringName, _node: AnimationNode, _time: number, _seek: boolean, _is_external_seeking: boolean, _blend: number, _filter: number, _sync: boolean, _test_only: boolean): number;
  public blend_input(_input_index: number, _time: number, _seek: boolean, _is_external_seeking: boolean, _blend: number, _filter: number, _sync: boolean, _test_only: boolean): number;
  public set_parameter(_name: StringName, _value: any): void;
  public get_parameter(_name: StringName): any;
  public get filter_enabled(): boolean {
    is_filter_enabled();
  }
  public set filter_enabled(value): void {
    set_filter_enabled(value);
  }
  public get filters(): GDArray {
    _get_filters();
  }
  public set filters(value): void {
    _set_filters(value);
  }
  static FilterAction = {
    FILTER_IGNORE = 0,
    FILTER_PASS = 1,
    FILTER_STOP = 2,
    FILTER_BLEND = 3,
  }
}