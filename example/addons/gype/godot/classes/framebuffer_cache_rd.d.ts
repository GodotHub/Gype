
import { GodotObject } from "@godot/classes/godot_object";
import { RDFramebufferPass } from "@godot/classes/rd_framebuffer_pass";
export declare class FramebufferCacheRD extends GodotObject{
  public
 static get_cache_multipass(_textures: GDArray, _passes: GDArray, _views: number): RID;
}