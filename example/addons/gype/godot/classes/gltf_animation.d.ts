
import { Resource } from "@godot/classes/resource";

export declare class GLTFAnimation extends Resource{
  public get_original_name(): String;
  public set_original_name(_original_name: String | StringName | string): void;
  public get_loop(): boolean;
  public set_loop(_loop: boolean): void;
  public get_additional_data(_extension_name: String | StringName | string): any;
  public set_additional_data(_extension_name: String | StringName | string, _additional_data: any): void;
  public get original_name(): String {
    get_original_name();
  }
  public set original_name(value): void {
    set_original_name(value);
  }
  public get loop(): boolean {
    get_loop();
  }
  public set loop(value): void {
    set_loop(value);
  }
}