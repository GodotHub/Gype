
import { Range } from "@godot/classes/range";

export declare class ProgressBar extends Range{
  public set_fill_mode(_mode: number): void;
  public get_fill_mode(): number;
  public set_show_percentage(_visible: boolean): void;
  public is_percentage_shown(): boolean;
  public set_indeterminate(_indeterminate: boolean): void;
  public is_indeterminate(): boolean;
  public set_editor_preview_indeterminate(_preview_indeterminate: boolean): void;
  public is_editor_preview_indeterminate_enabled(): boolean;
  public get fill_mode(): number {
    get_fill_mode();
  }
  public set fill_mode(value): void {
    set_fill_mode(value);
  }
  public get show_percentage(): boolean {
    is_percentage_shown();
  }
  public set show_percentage(value): void {
    set_show_percentage(value);
  }
  public get indeterminate(): boolean {
    is_indeterminate();
  }
  public set indeterminate(value): void {
    set_indeterminate(value);
  }
  public get editor_preview_indeterminate(): boolean {
    is_editor_preview_indeterminate_enabled();
  }
  public set editor_preview_indeterminate(value): void {
    set_editor_preview_indeterminate(value);
  }
  static FillMode = {
    FILL_BEGIN_TO_END = 0,
    FILL_END_TO_BEGIN = 1,
    FILL_TOP_TO_BOTTOM = 2,
    FILL_BOTTOM_TO_TOP = 3,
  }
}