
import { Object } from "@godot/classes/object";

export declare class PhysicsServer2DManager extends Object{
  public register_server(_name: String, _create_callback: Callable): void;
  public set_default_server(_name: String, _priority: number): void;
}