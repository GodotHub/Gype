
import { Resource } from "@godot/classes/resource";


export declare class ShaderInclude extends Resource{
  public set_code(_code: GDString | StringName | string): void;
  public get_code(): String;
  public get code(): String;
  public set code(value): void;
}