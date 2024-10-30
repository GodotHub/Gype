
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
  public get split_offset(): number {
    get_split_offset();
  }
  public set split_offset(value): void {
    set_split_offset(value);
  }
  public get collapsed(): boolean {
    is_collapsed();
  }
  public set collapsed(value): void {
    set_collapsed(value);
  }
  public get dragger_visibility(): number {
    get_dragger_visibility();
  }
  public set dragger_visibility(value): void {
    set_dragger_visibility(value);
  }
  public get vertical(): boolean {
    is_vertical();
  }
  public set vertical(value): void {
    set_vertical(value);
  }
  static DraggerVisibility = {
    DRAGGER_VISIBLE = 0,
    DRAGGER_HIDDEN = 1,
    DRAGGER_HIDDEN_COLLAPSED = 2,
  }
  public const dragged: string = "dragged";
}