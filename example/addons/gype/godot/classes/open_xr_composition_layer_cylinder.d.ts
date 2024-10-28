
import { OpenXRCompositionLayer } from "@godot/classes/open_xr_composition_layer";

export declare class OpenXRCompositionLayerCylinder extends OpenXRCompositionLayer{
  public set_radius(_radius: number): void;
  public get_radius(): number;
  public set_aspect_ratio(_aspect_ratio: number): void;
  public get_aspect_ratio(): number;
  public set_central_angle(_angle: number): void;
  public get_central_angle(): number;
  public set_fallback_segments(_segments: number): void;
  public get_fallback_segments(): number;
  public get radius(): number {
    get_radius();
  }
  public set radius(value: number): void {
    set_radius(value);
  }
  public get aspect_ratio(): number {
    get_aspect_ratio();
  }
  public set aspect_ratio(value: number): void {
    set_aspect_ratio(value);
  }
  public get central_angle(): number {
    get_central_angle();
  }
  public set central_angle(value: number): void {
    set_central_angle(value);
  }
  public get fallback_segments(): number {
    get_fallback_segments();
  }
  public set fallback_segments(value: number): void {
    set_fallback_segments(value);
  }
}