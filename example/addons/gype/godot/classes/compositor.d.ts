
import { Resource } from "@godot/classes/resource";
import { CompositorEffect } from "@godot/classes/compositor_effect";

export declare class Compositor extends Resource{
  public set_compositor_effects(_compositor_effects: typedarray::CompositorEffect): void;
  public get_compositor_effects(): Array;
  public get compositor_effects(): Array {
    get_compositor_effects();
  }
  public set compositor_effects(value: Array): void {
    set_compositor_effects(value);
  }
}