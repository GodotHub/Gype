
import { JavaScriptObject } from "@godot/classes/java_script_object";
import { GodotObject } from "@godot/classes/godot_object";

export declare class JavaScriptBridge extends GodotObject{
  public eval(_code: String | StringName | string, _use_global_execution_context: boolean): any;
  public get_interface(_interface: String | StringName | string): JavaScriptObject;
  public create_callback(_callable: Callable): JavaScriptObject;
  public create_object(_object: String | StringName | string, ...arg: String): any;
  public download_buffer(_buffer: PackedByteArray, _name: String | StringName | string, _mime: String | StringName | string): void;
  public pwa_needs_update(): boolean;
  public pwa_update(): number;
  public force_fs_sync(): void;
  public get pwa_update_available(): Signal;
}