
import { Mesh } from "@godot/classes/mesh";
import { Resource } from "@godot/classes/resource";

export declare class MultiMesh extends Resource{
  public set_mesh(_mesh: Mesh): void;
  public get_mesh(): Mesh;
  public set_use_colors(_enable: boolean): void;
  public is_using_colors(): boolean;
  public set_use_custom_data(_enable: boolean): void;
  public is_using_custom_data(): boolean;
  public set_transform_format(_format: number): void;
  public get_transform_format(): number;
  public set_instance_count(_count: number): void;
  public get_instance_count(): number;
  public set_visible_instance_count(_count: number): void;
  public get_visible_instance_count(): number;
  public set_instance_transform(_instance: number, _transform: Transform3D): void;
  public set_instance_transform_2d(_instance: number, _transform: Transform2D): void;
  public get_instance_transform(_instance: number): Transform3D;
  public get_instance_transform_2d(_instance: number): Transform2D;
  public set_instance_color(_instance: number, _color: Color): void;
  public get_instance_color(_instance: number): Color;
  public set_instance_custom_data(_instance: number, _custom_data: Color): void;
  public get_instance_custom_data(_instance: number): Color;
  public set_custom_aabb(_aabb: AABB): void;
  public get_custom_aabb(): AABB;
  public get_aabb(): AABB;
  public get_buffer(): PackedFloat32Array;
  public set_buffer(_buffer: PackedFloat32Array): void;
  public get transform_format(): number {
    get_transform_format();
  }
  public set transform_format(value: number): void {
    set_transform_format(value);
  }
  public get use_colors(): boolean {
    is_using_colors();
  }
  public set use_colors(value: boolean): void {
    set_use_colors(value);
  }
  public get use_custom_data(): boolean {
    is_using_custom_data();
  }
  public set use_custom_data(value: boolean): void {
    set_use_custom_data(value);
  }
  public get custom_aabb(): AABB {
    get_custom_aabb();
  }
  public set custom_aabb(value: AABB): void {
    set_custom_aabb(value);
  }
  public get instance_count(): number {
    get_instance_count();
  }
  public set instance_count(value: number): void {
    set_instance_count(value);
  }
  public get visible_instance_count(): number {
    get_visible_instance_count();
  }
  public set visible_instance_count(value: number): void {
    set_visible_instance_count(value);
  }
  public get mesh(): Mesh {
    get_mesh();
  }
  public set mesh(value: Mesh): void {
    set_mesh(value);
  }
  public get buffer(): PackedFloat32Array {
    get_buffer();
  }
  public set buffer(value: PackedFloat32Array): void {
    set_buffer(value);
  }
  public get transform_array(): PackedVector3Array {
    _get_transform_array();
  }
  public set transform_array(value: PackedVector3Array): void {
    _set_transform_array(value);
  }
  public get transform_2d_array(): PackedVector2Array {
    _get_transform_2d_array();
  }
  public set transform_2d_array(value: PackedVector2Array): void {
    _set_transform_2d_array(value);
  }
  public get color_array(): PackedColorArray {
    _get_color_array();
  }
  public set color_array(value: PackedColorArray): void {
    _set_color_array(value);
  }
  public get custom_data_array(): PackedColorArray {
    _get_custom_data_array();
  }
  public set custom_data_array(value: PackedColorArray): void {
    _set_custom_data_array(value);
  }
  static TransformFormat = {
    TRANSFORM_2D = 0,
    TRANSFORM_3D = 1,
  }
}