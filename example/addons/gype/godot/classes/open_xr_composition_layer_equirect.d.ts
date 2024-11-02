
import { OpenXRCompositionLayer } from "@godot/classes/open_xr_composition_layer";


export declare class OpenXRCompositionLayerEquirect extends OpenXRCompositionLayer{
  public set_radius(_radius: number): void;
  public get_radius(): number;
  public set_central_horizontal_angle(_angle: number): void;
  public get_central_horizontal_angle(): number;
  public set_upper_vertical_angle(_angle: number): void;
  public get_upper_vertical_angle(): number;
  public set_lower_vertical_angle(_angle: number): void;
  public get_lower_vertical_angle(): number;
  public set_fallback_segments(_segments: number): void;
  public get_fallback_segments(): number;
  public get radius(): number;
  public set radius(value): void;
  public get central_horizontal_angle(): number;
  public set central_horizontal_angle(value): void;
  public get upper_vertical_angle(): number;
  public set upper_vertical_angle(value): void;
  public get lower_vertical_angle(): number;
  public set lower_vertical_angle(value): void;
  public get fallback_segments(): number;
  public set fallback_segments(value): void;
}