
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
  public get transform_format(): number;
  public set transform_format(value): void;
  public get use_colors(): boolean;
  public set use_colors(value): void;
  public get use_custom_data(): boolean;
  public set use_custom_data(value): void;
  public get custom_aabb(): AABB;
  public set custom_aabb(value): void;
  public get instance_count(): number;
  public set instance_count(value): void;
  public get visible_instance_count(): number;
  public set visible_instance_count(value): void;
  public get mesh(): Mesh;
  public set mesh(value): void;
  public get buffer(): PackedFloat32Array;
  public set buffer(value): void;
  public get transform_array(): PackedVector3Array;
  public set transform_array(value): void;
  public get transform_2d_array(): PackedVector2Array;
  public set transform_2d_array(value): void;
  public get color_array(): PackedColorArray;
  public set color_array(value): void;
  public get custom_data_array(): PackedColorArray;
  public set custom_data_array(value): void;
  static TransformFormat = {
    TRANSFORM_2D = 0,
    TRANSFORM_3D = 1,
  }
}