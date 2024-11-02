
import { VisibleOnScreenNotifier3D } from "@godot/classes/visible_on_screen_notifier3d";


export declare class VisibleOnScreenEnabler3D extends VisibleOnScreenNotifier3D{
  public set_enable_mode(_mode: number): void;
  public get_enable_mode(): number;
  public set_enable_node_path(_path: GDString | NodePath | string): void;
  public get_enable_node_path(): NodePath;
  public get enable_mode(): number;
  public set enable_mode(value): void;
  public get enable_node_path(): NodePath;
  public set enable_node_path(value): void;
  static EnableMode = {
    ENABLE_MODE_INHERIT = 0,
    ENABLE_MODE_ALWAYS = 1,
    ENABLE_MODE_WHEN_PAUSED = 2,
  }
}