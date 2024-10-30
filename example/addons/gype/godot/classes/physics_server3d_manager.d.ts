
import { GodotObject } from "@godot/classes/godot_object";

export declare class PhysicsServer3DManager extends GodotObject{
  public register_server(_name: String | StringName | string, _create_callback: Callable): void;
  public set_default_server(_name: String | StringName | string, _priority: number): void;
}