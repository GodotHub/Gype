
import { RDUniform } from "@godot/classes/rd_uniform";
import { Object } from "@godot/classes/object";

export declare class UniformSetCacheRD extends Object{
  public get_cache(_shader: RID, _set: number, _uniforms: typedarray::RDUniform): RID;
}