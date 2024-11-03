
import { RDUniform } from "@godot/classes/rd_uniform";
import { GodotObject } from "@godot/classes/godot_object";
export declare class UniformSetCacheRD extends GodotObject{
  public
 static get_cache(_shader: RID, _set: number, _uniforms: GDArray): RID;
}