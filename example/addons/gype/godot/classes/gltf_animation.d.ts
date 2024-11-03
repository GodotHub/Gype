
import { Resource } from "@godot/classes/resource";
export declare class GLTFAnimation extends Resource{
  public get_original_name(): String;
  public set_original_name(_original_name: GDString | StringName | string): void;
  public get_loop(): boolean;
  public set_loop(_loop: boolean): void;
  public get_additional_data(_extension_name: GDString | StringName | string): any;
  public set_additional_data(_extension_name: GDString | StringName | string, _additional_data: any): void;
  public get original_name(): String;
  public set original_name(value): void;
  public get loop(): boolean;
  public set loop(value): void;
}