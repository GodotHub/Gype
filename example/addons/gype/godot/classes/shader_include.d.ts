
import { Resource } from "@godot/classes/resource";

export declare class ShaderInclude extends Resource{
  public set_code(_code: String): void;
  public get_code(): String;
  public get code(): String {
    get_code();
  }
  public set code(value): void {
    set_code(value);
  }
}