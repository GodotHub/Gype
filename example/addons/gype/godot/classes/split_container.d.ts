
import { Container } from "@godot/classes/container";
export declare class SplitContainer extends Container{
  public set_split_offset(_offset: number): void;
  public get_split_offset(): number;
  public clamp_split_offset(): void;
  public set_collapsed(_collapsed: boolean): void;
  public is_collapsed(): boolean;
  public set_dragger_visibility(_mode: number): void;
  public get_dragger_visibility(): number;
  public set_vertical(_vertical: boolean): void;
  public is_vertical(): boolean;
  public get split_offset(): number;
  public set split_offset(value): void;
  public get collapsed(): boolean;
  public set collapsed(value): void;
  public get dragger_visibility(): number;
  public set dragger_visibility(value): void;
  public get vertical(): boolean;
  public set vertical(value): void;
  static DraggerVisibility = {
    DRAGGER_VISIBLE = 0,
    DRAGGER_HIDDEN = 1,
    DRAGGER_HIDDEN_COLLAPSED = 2,
  }
  public get dragged(): Signal;
}