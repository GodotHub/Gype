
import { Resource } from "@godot/classes/resource";

export declare class GLTFTexture extends Resource{
  public get_src_image(): number;
  public set_src_image(_src_image: number): void;
  public get_sampler(): number;
  public set_sampler(_sampler: number): void;
  public get src_image(): number {
    get_src_image();
  }
  public set src_image(value: number): void {
    set_src_image(value);
  }
  public get sampler(): number {
    get_sampler();
  }
  public set sampler(value: number): void {
    set_sampler(value);
  }
}