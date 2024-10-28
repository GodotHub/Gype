
import { Object } from "@godot/classes/object";
import { RDFramebufferPass } from "@godot/classes/rd_framebuffer_pass";

export declare class FramebufferCacheRD extends Object{
  public get_cache_multipass(_textures: typedarray::RID, _passes: typedarray::RDFramebufferPass, _views: number): RID;
}