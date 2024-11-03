
import { Curve } from "@godot/classes/curve";
import { PrimitiveMesh } from "@godot/classes/primitive_mesh";
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
  public get shape(): number;
  public set shape(value): void;
  public get size(): number;
  public set size(value): void;
  public get sections(): number;
  public set sections(value): void;
  public get section_length(): number;
  public set section_length(value): void;
  public get section_segments(): number;
  public set section_segments(value): void;
  public get curve(): Curve;
  public set curve(value): void;
  static Shape = {
    SHAPE_FLAT = 0,
    SHAPE_CROSS = 1,
  }
}