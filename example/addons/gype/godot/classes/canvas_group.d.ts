
import { Node2D } from "@godot/classes/node2d";


export declare class CanvasGroup extends Node2D{
  public set_fit_margin(_fit_margin: number): void;
  public get_fit_margin(): number;
  public set_clear_margin(_clear_margin: number): void;
  public get_clear_margin(): number;
  public set_use_mipmaps(_use_mipmaps: boolean): void;
  public is_using_mipmaps(): boolean;
  public get fit_margin(): number;
  public set fit_margin(value): void;
  public get clear_margin(): number;
  public set clear_margin(value): void;
  public get use_mipmaps(): boolean;
  public set use_mipmaps(value): void;
}