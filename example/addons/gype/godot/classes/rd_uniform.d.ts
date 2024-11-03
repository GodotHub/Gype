
import { RefCounted } from "@godot/classes/ref_counted";
export declare class RDUniform extends RefCounted{
  public set_uniform_type(_p_member: number): void;
  public get_uniform_type(): number;
  public set_binding(_p_member: number): void;
  public get_binding(): number;
  public add_id(_id: RID): void;
  public clear_ids(): void;
  public get_ids(): GDArray;
  public get uniform_type(): number;
  public set uniform_type(value): void;
  public get binding(): number;
  public set binding(value): void;
}