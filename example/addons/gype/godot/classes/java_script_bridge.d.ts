
import { JavaScriptObject } from "@godot/classes/java_script_object";
import { GodotObject } from "@godot/classes/godot_object";
declare global {
export declare class _JavaScriptBridge extends GodotObject{
  public eval(_code: GDString | StringName | string, _use_global_execution_context: boolean = false): any;
  public get_interface(_interface: GDString | StringName | string): JavaScriptObject;
  public create_callback(_callable: Callable): JavaScriptObject;
  public create_object(_object: GDString | StringName | string, ...arg: String): any;
  public download_buffer(_buffer: PackedByteArray, _name: GDString | StringName | string, _mime: GDString | StringName | string = "application/octet-stream"): void;
  public pwa_needs_update(): boolean;
  public pwa_update(): number;
  public force_fs_sync(): void;
  public get pwa_update_available(): Signal;
}
const JavaScriptBridge: _JavaScriptBridge;
}