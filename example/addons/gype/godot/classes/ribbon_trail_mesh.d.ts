
import { PrimitiveMesh } from "@godot/classes/primitive_mesh";
import { Curve } from "@godot/classes/curve";

export declare class RibbonTrailMesh extends PrimitiveMesh{
  public set_size(_size: number): void;
  public get_size(): number;
  public set_sections(_sections: number): void;
  public get_sections(): number;
  public set_section_length(_section_length: number): void;
  public get_section_length(): number;
  public set_section_segments(_section_segments: number): void;
  public get_section_segments(): number;
  public set_curve(_curve: Curve): void;
  public get_curve(): Curve;
  public set_shape(_shape: number): void;
  public get_shape(): number;
  public get shape(): number {
    get_shape();
  }
  public set shape(value): void {
    set_shape(value);
  }
  public get size(): number {
    get_size();
  }
  public set size(value): void {
    set_size(value);
  }
  public get sections(): number {
    get_sections();
  }
  public set sections(value): void {
    set_sections(value);
  }
  public get section_length(): number {
    get_section_length();
  }
  public set section_length(value): void {
    set_section_length(value);
  }
  public get section_segments(): number {
    get_section_segments();
  }
  public set section_segments(value): void {
    set_section_segments(value);
  }
  public get curve(): Curve {
    get_curve();
  }
  public set curve(value): void {
    set_curve(value);
  }
  static Shape = {
    SHAPE_FLAT = 0,
    SHAPE_CROSS = 1,
  }
}