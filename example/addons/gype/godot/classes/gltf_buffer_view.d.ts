
import { GLTFState } from "@godot/classes/gltf_state";
import { Resource } from "@godot/classes/resource";

export declare class GLTFBufferView extends Resource{
  public load_buffer_view_data(_state: GLTFState): PackedByteArray;
  public get_buffer(): number;
  public set_buffer(_buffer: number): void;
  public get_byte_offset(): number;
  public set_byte_offset(_byte_offset: number): void;
  public get_byte_length(): number;
  public set_byte_length(_byte_length: number): void;
  public get_byte_stride(): number;
  public set_byte_stride(_byte_stride: number): void;
  public get_indices(): boolean;
  public set_indices(_indices: boolean): void;
  public get_vertex_attributes(): boolean;
  public set_vertex_attributes(_is_attributes: boolean): void;
  public get buffer(): number {
    get_buffer();
  }
  public set buffer(value: number): void {
    set_buffer(value);
  }
  public get byte_offset(): number {
    get_byte_offset();
  }
  public set byte_offset(value: number): void {
    set_byte_offset(value);
  }
  public get byte_length(): number {
    get_byte_length();
  }
  public set byte_length(value: number): void {
    set_byte_length(value);
  }
  public get byte_stride(): number {
    get_byte_stride();
  }
  public set byte_stride(value: number): void {
    set_byte_stride(value);
  }
  public get indices(): boolean {
    get_indices();
  }
  public set indices(value: boolean): void {
    set_indices(value);
  }
  public get vertex_attributes(): boolean {
    get_vertex_attributes();
  }
  public set vertex_attributes(value: boolean): void {
    set_vertex_attributes(value);
  }
}