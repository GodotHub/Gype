
import { RDFramebufferPass } from "@godot/classes/rd_framebuffer_pass";
import { GodotObject } from "@godot/classes/godot_object";


export declare class FramebufferCacheRD extends GodotObject{
  public get_cache_multipass(_textures: GDArray, _passes: GDArray, _views: number): RID;
}