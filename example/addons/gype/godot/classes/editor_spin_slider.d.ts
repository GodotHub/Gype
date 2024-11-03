
import { Range } from "@godot/classes/range";
export declare class EditorSpinSlider extends Range{
  public set_label(_label: GDString | StringName | string): void;
  public get_label(): String;
  public set_suffix(_suffix: GDString | StringName | string): void;
  public get_suffix(): String;
  public set_read_only(_read_only: boolean): void;
  public is_read_only(): boolean;
  public set_flat(_flat: boolean): void;
  public is_flat(): boolean;
  public set_hide_slider(_hide_slider: boolean): void;
  public is_hiding_slider(): boolean;
  public get label(): String;
  public set label(value): void;
  public get suffix(): String;
  public set suffix(value): void;
  public get read_only(): boolean;
  public set read_only(value): void;
  public get flat(): boolean;
  public set flat(value): void;
  public get hide_slider(): boolean;
  public set hide_slider(value): void;
  public get grabbed(): Signal;
  public get ungrabbed(): Signal;
  public get value_focus_entered(): Signal;
  public get value_focus_exited(): Signal;
}