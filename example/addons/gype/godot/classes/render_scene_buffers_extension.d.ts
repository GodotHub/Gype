
import { RenderSceneBuffers } from "@godot/classes/render_scene_buffers";
import { RenderSceneBuffersConfiguration } from "@godot/classes/render_scene_buffers_configuration";

export declare class RenderSceneBuffersExtension extends RenderSceneBuffers{
  public _configure(_config: RenderSceneBuffersConfiguration): void;
  public _set_fsr_sharpness(_fsr_sharpness: number): void;
  public _set_texture_mipmap_bias(_texture_mipmap_bias: number): void;
  public _set_use_debanding(_use_debanding: boolean): void;
}