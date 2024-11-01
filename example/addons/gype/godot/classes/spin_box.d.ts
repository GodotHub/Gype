
import { Range } from "@godot/classes/range";
import { LineEdit } from "@godot/classes/line_edit";

export declare class SpinBox extends Range{
  public set_horizontal_alignment(_alignment: number): void;
  public get_horizontal_alignment(): number;
  public set_suffix(_suffix: String | StringName | string): void;
  public get_suffix(): String;
  public set_prefix(_prefix: String | StringName | string): void;
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
  public get alignment(): number {
    get_horizontal_alignment();
  }
  public set alignment(value): void {
    set_horizontal_alignment(value);
  }
  public get editable(): boolean {
    is_editable();
  }
  public set editable(value): void {
    set_editable(value);
  }
  public get update_on_text_changed(): boolean {
    get_update_on_text_changed();
  }
  public set update_on_text_changed(value): void {
    set_update_on_text_changed(value);
  }
  public get prefix(): String {
    get_prefix();
  }
  public set prefix(value): void {
    set_prefix(value);
  }
  public get suffix(): String {
    get_suffix();
  }
  public set suffix(value): void {
    set_suffix(value);
  }
  public get custom_arrow_step(): number {
    get_custom_arrow_step();
  }
  public set custom_arrow_step(value): void {
    set_custom_arrow_step(value);
  }
  public get select_all_on_focus(): boolean {
    is_select_all_on_focus();
  }
  public set select_all_on_focus(value): void {
    set_select_all_on_focus(value);
  }
}