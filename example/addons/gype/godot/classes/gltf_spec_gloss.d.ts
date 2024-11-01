
import { Image } from "@godot/classes/image";
import { Resource } from "@godot/classes/resource";

export declare class GLTFSpecGloss extends Resource{
  public get_diffuse_img(): Image;
  public set_diffuse_img(_diffuse_img: Image): void;
  public get_diffuse_factor(): Color;
  public set_diffuse_factor(_diffuse_factor: Color): void;
  public get_gloss_factor(): number;
  public set_gloss_factor(_gloss_factor: number): void;
  public get_specular_factor(): Color;
  public set_specular_factor(_specular_factor: Color): void;
  public get_spec_gloss_img(): Image;
  public set_spec_gloss_img(_spec_gloss_img: Image): void;
  public get diffuse_img(): GodotObject {
    get_diffuse_img();
  }
  public set diffuse_img(value): void {
    set_diffuse_img(value);
  }
  public get diffuse_factor(): Color {
    get_diffuse_factor();
  }
  public set diffuse_factor(value): void {
    set_diffuse_factor(value);
  }
  public get gloss_factor(): number {
    get_gloss_factor();
  }
  public set gloss_factor(value): void {
    set_gloss_factor(value);
  }
  public get specular_factor(): Color {
    get_specular_factor();
  }
  public set specular_factor(value): void {
    set_specular_factor(value);
  }
  public get spec_gloss_img(): GodotObject {
    get_spec_gloss_img();
  }
  public set spec_gloss_img(value): void {
    set_spec_gloss_img(value);
  }
}