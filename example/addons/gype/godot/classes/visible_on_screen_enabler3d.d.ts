
import { VisibleOnScreenNotifier3D } from "@godot/classes/visible_on_screen_notifier3d";

export declare class VisibleOnScreenEnabler3D extends VisibleOnScreenNotifier3D{
  public set_enable_mode(_mode: number): void;
  public get_enable_mode(): number;
  public set_enable_node_path(_path: NodePath): void;
  public get_enable_node_path(): NodePath;
  public get enable_mode(): number {
    get_enable_mode();
  }
  public set enable_mode(value): void {
    set_enable_mode(value);
  }
  public get enable_node_path(): NodePath {
    get_enable_node_path();
  }
  public set enable_node_path(value): void {
    set_enable_node_path(value);
  }
  static EnableMode = {
    ENABLE_MODE_INHERIT = 0,
    ENABLE_MODE_ALWAYS = 1,
    ENABLE_MODE_WHEN_PAUSED = 2,
  }
}