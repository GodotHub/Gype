
import { Curve } from "@godot/classes/curve";
import { PrimitiveMesh } from "@godot/classes/primitive_mesh";
export declare class TubeTrailMesh extends PrimitiveMesh{
  public set_radius(_radius: number): void;
  public get_radius(): number;
  public set_radial_steps(_radial_steps: number): void;
  public get_radial_steps(): number;
  public set_sections(_sections: number): void;
  public get_sections(): number;
  public set_section_length(_section_length: number): void;
  public get_section_length(): number;
  public set_section_rings(_section_rings: number): void;
  public get_section_rings(): number;
  public set_cap_top(_cap_top: boolean): void;
  public is_cap_top(): boolean;
  public set_cap_bottom(_cap_bottom: boolean): void;
  public is_cap_bottom(): boolean;
  public set_curve(_curve: Curve): void;
  public get_curve(): Curve;
  public get radius(): number;
  public set radius(value): void;
  public get radial_steps(): number;
  public set radial_steps(value): void;
  public get sections(): number;
  public set sections(value): void;
  public get section_length(): number;
  public set section_length(value): void;
  public get section_rings(): number;
  public set section_rings(value): void;
  public get cap_top(): boolean;
  public set cap_top(value): void;
  public get cap_bottom(): boolean;
  public set cap_bottom(value): void;
  public get curve(): Curve;
  public set curve(value): void;
}