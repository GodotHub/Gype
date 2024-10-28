
import { JavaScriptObject } from "@godot/classes/java_script_object";
import { Object } from "@godot/classes/object";

export declare class JavaScriptBridge extends Object{
  public eval(_code: String, _use_global_execution_context: boolean): Variant;
  public get_interface(_interface: String): JavaScriptObject;
  public create_callback(_callable: Callable): JavaScriptObject;
  public create_object(_object: String): Variant;
  public download_buffer(_buffer: PackedByteArray, _name: String, _mime: String): void;
  public pwa_needs_update(): boolean;
  public pwa_update(): number;
  public force_fs_sync(): void;
}