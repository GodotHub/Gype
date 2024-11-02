
import { GodotObject } from "@godot/classes/godot_object";
import { RDUniform } from "@godot/classes/rd_uniform";


export declare class UniformSetCacheRD extends GodotObject{
  public get_cache(_shader: RID, _set: number, _uniforms: GDArray): RID;
}