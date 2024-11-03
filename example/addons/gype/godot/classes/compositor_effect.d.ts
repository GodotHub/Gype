
import { RenderData } from "@godot/classes/render_data";
import { Resource } from "@godot/classes/resource";
export declare class CompositorEffect extends Resource{
  public _render_callback(_effect_callback_type: number, _render_data: RenderData): void;
  public set_enabled(_enabled: boolean): void;
  public get_enabled(): boolean;
  public set_effect_callback_type(_effect_callback_type: number): void;
  public get_effect_callback_type(): number;
  public set_access_resolved_color(_enable: boolean): void;
  public get_access_resolved_color(): boolean;
  public set_access_resolved_depth(_enable: boolean): void;
  public get_access_resolved_depth(): boolean;
  public set_needs_motion_vectors(_enable: boolean): void;
  public get_needs_motion_vectors(): boolean;
  public set_needs_normal_roughness(_enable: boolean): void;
  public get_needs_normal_roughness(): boolean;
  public set_needs_separate_specular(_enable: boolean): void;
  public get_needs_separate_specular(): boolean;
  public get enabled(): boolean;
  public set enabled(value): void;
  public get effect_callback_type(): number;
  public set effect_callback_type(value): void;
  public get access_resolved_color(): boolean;
  public set access_resolved_color(value): void;
  public get access_resolved_depth(): boolean;
  public set access_resolved_depth(value): void;
  public get needs_motion_vectors(): boolean;
  public set needs_motion_vectors(value): void;
  public get needs_normal_roughness(): boolean;
  public set needs_normal_roughness(value): void;
  public get needs_separate_specular(): boolean;
  public set needs_separate_specular(value): void;
  static EffectCallbackType = {
    EFFECT_CALLBACK_TYPE_PRE_OPAQUE = 0,
    EFFECT_CALLBACK_TYPE_POST_OPAQUE = 1,
    EFFECT_CALLBACK_TYPE_POST_SKY = 2,
    EFFECT_CALLBACK_TYPE_PRE_TRANSPARENT = 3,
    EFFECT_CALLBACK_TYPE_POST_TRANSPARENT = 4,
    EFFECT_CALLBACK_TYPE_MAX = 5,
  }
}