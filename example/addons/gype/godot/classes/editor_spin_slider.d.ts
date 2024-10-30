
import { Range } from "@godot/classes/range";

export declare class EditorSpinSlider extends Range{
  public set_label(_label: String | StringName | string): void;
  public get_label(): String;
  public set_suffix(_suffix: String | StringName | string): void;
  public get_suffix(): String;
  public set_read_only(_read_only: boolean): void;
  public is_read_only(): boolean;
  public set_flat(_flat: boolean): void;
  public is_flat(): boolean;
  public set_hide_slider(_hide_slider: boolean): void;
  public is_hiding_slider(): boolean;
  public get label(): String {
    get_label();
  }
  public set label(value): void {
    set_label(value);
  }
  public get suffix(): String {
    get_suffix();
  }
  public set suffix(value): void {
    set_suffix(value);
  }
  public get read_only(): boolean {
    is_read_only();
  }
  public set read_only(value): void {
    set_read_only(value);
  }
  public get flat(): boolean {
    is_flat();
  }
  public set flat(value): void {
    set_flat(value);
  }
  public get hide_slider(): boolean {
    is_hiding_slider();
  }
  public set hide_slider(value): void {
    set_hide_slider(value);
  }
  public const grabbed: string = "grabbed";
  public const ungrabbed: string = "ungrabbed";
  public const value_focus_entered: string = "value_focus_entered";
  public const value_focus_exited: string = "value_focus_exited";
}