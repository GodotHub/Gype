
import { RefCounted } from "@godot/classes/ref_counted";

export declare class RDVertexAttribute extends RefCounted{
  public set_location(_p_member: number): void;
  public get_location(): number;
  public set_offset(_p_member: number): void;
  public get_offset(): number;
  public set_format(_p_member: number): void;
  public get_format(): number;
  public set_stride(_p_member: number): void;
  public get_stride(): number;
  public set_frequency(_p_member: number): void;
  public get_frequency(): number;
  public get location(): number {
    get_location();
  }
  public set location(value: number): void {
    set_location(value);
  }
  public get offset(): number {
    get_offset();
  }
  public set offset(value: number): void {
    set_offset(value);
  }
  public get format(): number {
    get_format();
  }
  public set format(value: number): void {
    set_format(value);
  }
  public get stride(): number {
    get_stride();
  }
  public set stride(value: number): void {
    set_stride(value);
  }
  public get frequency(): number {
    get_frequency();
  }
  public set frequency(value: number): void {
    set_frequency(value);
  }
}