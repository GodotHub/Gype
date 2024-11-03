
import { Range } from "@godot/classes/range";
import { LineEdit } from "@godot/classes/line_edit";
export declare class SpinBox extends Range{
  public set_horizontal_alignment(_alignment: number): void;
  public get_horizontal_alignment(): number;
  public set_suffix(_suffix: GDString | StringName | string): void;
  public get_suffix(): String;
  public set_prefix(_prefix: GDString | StringName | string): void;
  public get_prefix(): String;
  public set_editable(_enabled: boolean): void;
  public set_custom_arrow_step(_arrow_step: number): void;
  public get_custom_arrow_step(): number;
  public is_editable(): boolean;
  public set_update_on_text_changed(_enabled: boolean): void;
  public get_update_on_text_changed(): boolean;
  public set_select_all_on_focus(_enabled: boolean): void;
  public is_select_all_on_focus(): boolean;
  public apply(): void;
  public get_line_edit(): LineEdit;
  public get alignment(): number;
  public set alignment(value): void;
  public get editable(): boolean;
  public set editable(value): void;
  public get update_on_text_changed(): boolean;
  public set update_on_text_changed(value): void;
  public get prefix(): String;
  public set prefix(value): void;
  public get suffix(): String;
  public set suffix(value): void;
  public get custom_arrow_step(): number;
  public set custom_arrow_step(value): void;
  public get select_all_on_focus(): boolean;
  public set select_all_on_focus(value): void;
}