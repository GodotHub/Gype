
import { GodotObject } from "@godot/classes/godot_object";
declare global {
export declare class _PhysicsServer2DManager extends GodotObject{
  public register_server(_name: GDString | StringName | string, _create_callback: Callable): void;
  public set_default_server(_name: GDString | StringName | string, _priority: number): void;
}
const PhysicsServer2DManager: _PhysicsServer2DManager;
}