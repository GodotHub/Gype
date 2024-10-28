
import { Resource } from "@godot/classes/resource";

export declare class GLTFAnimation extends Resource{
  public get_original_name(): String;
  public set_original_name(_original_name: String): void;
  public get_loop(): boolean;
  public set_loop(_loop: boolean): void;
  public get_additional_data(_extension_name: StringName): Variant;
  public set_additional_data(_extension_name: StringName, _additional_data: Variant): void;
  public get original_name(): String {
    get_original_name();
  }
  public set original_name(value: String): void {
    set_original_name(value);
  }
  public get loop(): boolean {
    get_loop();
  }
  public set loop(value: boolean): void {
    set_loop(value);
  }
}