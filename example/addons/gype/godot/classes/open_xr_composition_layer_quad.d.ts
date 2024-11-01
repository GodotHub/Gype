
import { OpenXRCompositionLayer } from "@godot/classes/open_xr_composition_layer";

export declare class OpenXRCompositionLayerQuad extends OpenXRCompositionLayer{
  public set_quad_size(_size: Vector2): void;
  public get_quad_size(): Vector2;
  public get quad_size(): Vector2 {
    get_quad_size();
  }
  public set quad_size(value): void {
    set_quad_size(value);
  }
}