
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
  public get buffer_view(): number {
    get_buffer_view();
  }
  public set buffer_view(value: number): void {
    set_buffer_view(value);
  }
  public get byte_offset(): number {
    get_byte_offset();
  }
  public set byte_offset(value: number): void {
    set_byte_offset(value);
  }
  public get component_type(): number {
    get_component_type();
  }
  public set component_type(value: number): void {
    set_component_type(value);
  }
  public get normalized(): boolean {
    get_normalized();
  }
  public set normalized(value: boolean): void {
    set_normalized(value);
  }
  public get count(): number {
    get_count();
  }
  public set count(value: number): void {
    set_count(value);
  }
  public get accessor_type(): number {
    get_accessor_type();
  }
  public set accessor_type(value: number): void {
    set_accessor_type(value);
  }
  public get type(): number {
    get_type();
  }
  public set type(value: number): void {
    set_type(value);
  }
  public get min(): PackedFloat64Array {
    get_min();
  }
  public set min(value: PackedFloat64Array): void {
    set_min(value);
  }
  public get max(): PackedFloat64Array {
    get_max();
  }
  public set max(value: PackedFloat64Array): void {
    set_max(value);
  }
  public get sparse_count(): number {
    get_sparse_count();
  }
  public set sparse_count(value: number): void {
    set_sparse_count(value);
  }
  public get sparse_indices_buffer_view(): number {
    get_sparse_indices_buffer_view();
  }
  public set sparse_indices_buffer_view(value: number): void {
    set_sparse_indices_buffer_view(value);
  }
  public get sparse_indices_byte_offset(): number {
    get_sparse_indices_byte_offset();
  }
  public set sparse_indices_byte_offset(value: number): void {
    set_sparse_indices_byte_offset(value);
  }
  public get sparse_indices_component_type(): number {
    get_sparse_indices_component_type();
  }
  public set sparse_indices_component_type(value: number): void {
    set_sparse_indices_component_type(value);
  }
  public get sparse_values_buffer_view(): number {
    get_sparse_values_buffer_view();
  }
  public set sparse_values_buffer_view(value: number): void {
    set_sparse_values_buffer_view(value);
  }
  public get sparse_values_byte_offset(): number {
    get_sparse_values_byte_offset();
  }
  public set sparse_values_byte_offset(value: number): void {
    set_sparse_values_byte_offset(value);
  }
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