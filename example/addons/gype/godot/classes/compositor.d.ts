
import { CompositorEffect } from "@godot/classes/compositor_effect";
import { Resource } from "@godot/classes/resource";

export declare class Compositor extends Resource{
  public set_compositor_effects(_compositor_effects: GDArray): void;
  public get_compositor_effects(): GDArray;
  public get compositor_effects(): GDArray {
    get_compositor_effects();
  }
  public set compositor_effects(value): void {
    set_compositor_effects(value);
  }
}