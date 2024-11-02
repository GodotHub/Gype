
import { Resource } from "@godot/classes/resource";


export declare class GLTFAccessor extends Resource{
  public get_buffer_view(): number;
  public set_buffer_view(_buffer_view: number): void;
  public get_byte_offset(): number;
  public set_byte_offset(_byte_offset: number): void;
  public get_component_type(): number;
  public set_component_type(_component_type: number): void;
  public get_normalized(): boolean;
  public set_normalized(_normalized: boolean): void;
  public get_count(): number;
  public set_count(_count: number): void;
  public get_accessor_type(): number;
  public set_accessor_type(_accessor_type: number): void;
  public get_type(): number;
  public set_type(_type: number): void;
  public get_min(): PackedFloat64Array;
  public set_min(_min: PackedFloat64Array): void;
  public get_max(): PackedFloat64Array;
  public set_max(_max: PackedFloat64Array): void;
  public get_sparse_count(): number;
  public set_sparse_count(_sparse_count: number): void;
  public get_sparse_indices_buffer_view(): number;
  public set_sparse_indices_buffer_view(_sparse_indices_buffer_view: number): void;
  public get_sparse_indices_byte_offset(): number;
  public set_sparse_indices_byte_offset(_sparse_indices_byte_offset: number): void;
  public get_sparse_indices_component_type(): number;
  public set_sparse_indices_component_type(_sparse_indices_component_type: number): void;
  public get_sparse_values_buffer_view(): number;
  public set_sparse_values_buffer_view(_sparse_values_buffer_view: number): void;
  public get_sparse_values_byte_offset(): number;
  public set_sparse_values_byte_offset(_sparse_values_byte_offset: number): void;
  public get buffer_view(): number;
  public set buffer_view(value): void;
  public get byte_offset(): number;
  public set byte_offset(value): void;
  public get component_type(): number;
  public set component_type(value): void;
  public get normalized(): boolean;
  public set normalized(value): void;
  public get count(): number;
  public set count(value): void;
  public get accessor_type(): number;
  public set accessor_type(value): void;
  public get type(): number;
  public set type(value): void;
  public get min(): PackedFloat64Array;
  public set min(value): void;
  public get max(): PackedFloat64Array;
  public set max(value): void;
  public get sparse_count(): number;
  public set sparse_count(value): void;
  public get sparse_indices_buffer_view(): number;
  public set sparse_indices_buffer_view(value): void;
  public get sparse_indices_byte_offset(): number;
  public set sparse_indices_byte_offset(value): void;
  public get sparse_indices_component_type(): number;
  public set sparse_indices_component_type(value): void;
  public get sparse_values_buffer_view(): number;
  public set sparse_values_buffer_view(value): void;
  public get sparse_values_byte_offset(): number;
  public set sparse_values_byte_offset(value): void;
  static GLTFAccessorType = {
    TYPE_SCALAR = 0,
    TYPE_VEC2 = 1,
    TYPE_VEC3 = 2,
    TYPE_VEC4 = 3,
    TYPE_MAT2 = 4,
    TYPE_MAT3 = 5,
    TYPE_MAT4 = 6,
  }
}