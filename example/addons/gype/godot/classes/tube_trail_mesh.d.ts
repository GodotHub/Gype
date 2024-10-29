
import { PrimitiveMesh } from "@godot/classes/primitive_mesh";
import { Curve } from "@godot/classes/curve";

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
  public get radius(): number {
    get_radius();
  }
  public set radius(value): void {
    set_radius(value);
  }
  public get radial_steps(): number {
    get_radial_steps();
  }
  public set radial_steps(value): void {
    set_radial_steps(value);
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
  public get section_rings(): number {
    get_section_rings();
  }
  public set section_rings(value): void {
    set_section_rings(value);
  }
  public get cap_top(): boolean {
    is_cap_top();
  }
  public set cap_top(value): void {
    set_cap_top(value);
  }
  public get cap_bottom(): boolean {
    is_cap_bottom();
  }
  public set cap_bottom(value): void {
    set_cap_bottom(value);
  }
  public get curve(): Curve {
    get_curve();
  }
  public set curve(value): void {
    set_curve(value);
  }
}