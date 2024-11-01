
import { VisualInstance3D } from "@godot/classes/visual_instance3d";

export declare class RootMotionView extends VisualInstance3D{
  public set_animation_path(_path: NodePath): void;
  public get_animation_path(): NodePath;
  public set_color(_color: Color): void;
  public get_color(): Color;
  public set_cell_size(_size: number): void;
  public get_cell_size(): number;
  public set_radius(_size: number): void;
  public get_radius(): number;
  public set_zero_y(_enable: boolean): void;
  public get_zero_y(): boolean;
  public get animation_path(): NodePath {
    get_animation_path();
  }
  public set animation_path(value): void {
    set_animation_path(value);
  }
  public get color(): Color {
    get_color();
  }
  public set color(value): void {
    set_color(value);
  }
  public get cell_size(): number {
    get_cell_size();
  }
  public set cell_size(value): void {
    set_cell_size(value);
  }
  public get radius(): number {
    get_radius();
  }
  public set radius(value): void {
    set_radius(value);
  }
  public get zero_y(): boolean {
    get_zero_y();
  }
  public set zero_y(value): void {
    set_zero_y(value);
  }
}