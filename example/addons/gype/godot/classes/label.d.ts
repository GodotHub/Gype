
import { LabelSettings } from "@godot/classes/label_settings";
import { Control } from "@godot/classes/control";

export declare class Label extends Control{
  public set_horizontal_alignment(_alignment: number): void;
  public get_horizontal_alignment(): number;
  public set_vertical_alignment(_alignment: number): void;
  public get_vertical_alignment(): number;
  public set_text(_text: String): void;
  public get_text(): String;
  public set_label_settings(_settings: LabelSettings): void;
  public get_label_settings(): LabelSettings;
  public set_text_direction(_direction: number): void;
  public get_text_direction(): number;
  public set_language(_language: String): void;
  public get_language(): String;
  public set_autowrap_mode(_autowrap_mode: number): void;
  public get_autowrap_mode(): number;
  public set_justification_flags(_justification_flags: number): void;
  public get_justification_flags(): number;
  public set_clip_text(_enable: boolean): void;
  public is_clipping_text(): boolean;
  public set_tab_stops(_tab_stops: PackedFloat32Array): void;
  public get_tab_stops(): PackedFloat32Array;
  public set_text_overrun_behavior(_overrun_behavior: number): void;
  public get_text_overrun_behavior(): number;
  public set_ellipsis_char(_char: String): void;
  public get_ellipsis_char(): String;
  public set_uppercase(_enable: boolean): void;
  public is_uppercase(): boolean;
  public get_line_height(_line: number): number;
  public get_line_count(): number;
  public get_visible_line_count(): number;
  public get_total_character_count(): number;
  public set_visible_characters(_amount: number): void;
  public get_visible_characters(): number;
  public get_visible_characters_behavior(): number;
  public set_visible_characters_behavior(_behavior: number): void;
  public set_visible_ratio(_ratio: number): void;
  public get_visible_ratio(): number;
  public set_lines_skipped(_lines_skipped: number): void;
  public get_lines_skipped(): number;
  public set_max_lines_visible(_lines_visible: number): void;
  public get_max_lines_visible(): number;
  public set_structured_text_bidi_override(_parser: number): void;
  public get_structured_text_bidi_override(): number;
  public set_structured_text_bidi_override_options(_args: GDArray): void;
  public get_structured_text_bidi_override_options(): GDArray;
  public get_character_bounds(_pos: number): Rect2;
  public get text(): String {
    get_text();
  }
  public set text(value): void {
    set_text(value);
  }
  public get label_settings(): LabelSettings {
    get_label_settings();
  }
  public set label_settings(value): void {
    set_label_settings(value);
  }
  public get horizontal_alignment(): number {
    get_horizontal_alignment();
  }
  public set horizontal_alignment(value): void {
    set_horizontal_alignment(value);
  }
  public get vertical_alignment(): number {
    get_vertical_alignment();
  }
  public set vertical_alignment(value): void {
    set_vertical_alignment(value);
  }
  public get autowrap_mode(): number {
    get_autowrap_mode();
  }
  public set autowrap_mode(value): void {
    set_autowrap_mode(value);
  }
  public get justification_flags(): number {
    get_justification_flags();
  }
  public set justification_flags(value): void {
    set_justification_flags(value);
  }
  public get clip_text(): boolean {
    is_clipping_text();
  }
  public set clip_text(value): void {
    set_clip_text(value);
  }
  public get text_overrun_behavior(): number {
    get_text_overrun_behavior();
  }
  public set text_overrun_behavior(value): void {
    set_text_overrun_behavior(value);
  }
  public get ellipsis_char(): String {
    get_ellipsis_char();
  }
  public set ellipsis_char(value): void {
    set_ellipsis_char(value);
  }
  public get uppercase(): boolean {
    is_uppercase();
  }
  public set uppercase(value): void {
    set_uppercase(value);
  }
  public get tab_stops(): PackedFloat32Array {
    get_tab_stops();
  }
  public set tab_stops(value): void {
    set_tab_stops(value);
  }
  public get lines_skipped(): number {
    get_lines_skipped();
  }
  public set lines_skipped(value): void {
    set_lines_skipped(value);
  }
  public get max_lines_visible(): number {
    get_max_lines_visible();
  }
  public set max_lines_visible(value): void {
    set_max_lines_visible(value);
  }
  public get visible_characters(): number {
    get_visible_characters();
  }
  public set visible_characters(value): void {
    set_visible_characters(value);
  }
  public get visible_characters_behavior(): number {
    get_visible_characters_behavior();
  }
  public set visible_characters_behavior(value): void {
    set_visible_characters_behavior(value);
  }
  public get visible_ratio(): number {
    get_visible_ratio();
  }
  public set visible_ratio(value): void {
    set_visible_ratio(value);
  }
  public get text_direction(): number {
    get_text_direction();
  }
  public set text_direction(value): void {
    set_text_direction(value);
  }
  public get language(): String {
    get_language();
  }
  public set language(value): void {
    set_language(value);
  }
  public get structured_text_bidi_override(): number {
    get_structured_text_bidi_override();
  }
  public set structured_text_bidi_override(value): void {
    set_structured_text_bidi_override(value);
  }
  public get structured_text_bidi_override_options(): GDArray {
    get_structured_text_bidi_override_options();
  }
  public set structured_text_bidi_override_options(value): void {
    set_structured_text_bidi_override_options(value);
  }
}