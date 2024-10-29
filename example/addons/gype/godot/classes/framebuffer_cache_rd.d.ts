
import { RDFramebufferPass } from "@godot/classes/rd_framebuffer_pass";
import { Object } from "@godot/classes/object";

export declare class FramebufferCacheRD extends Object{
  public get_cache_multipass(_textures: GDArray, _passes: GDArray, _views: number): RID;
}