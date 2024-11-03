
import { VisualInstance3D } from "@godot/classes/visual_instance3d";
export declare class RootMotionView extends VisualInstance3D{
  public set_animation_path(_path: GDString | NodePath | string): void;
  public get_animation_path(): NodePath;
  public set_color(_color: Color): void;
  public get_color(): Color;
  public set_cell_size(_size: number): void;
  public get_cell_size(): number;
  public set_radius(_size: number): void;
  public get_radius(): number;
  public set_zero_y(_enable: boolean): void;
  public get_zero_y(): boolean;
  public get animation_path(): NodePath;
  public set animation_path(value): void;
  public get color(): Color;
  public set color(value): void;
  public get cell_size(): number;
  public set cell_size(value): void;
  public get radius(): number;
  public set radius(value): void;
  public get zero_y(): boolean;
  public set zero_y(value): void;
}