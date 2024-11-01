
import { BaseButton } from "@godot/classes/base_button";
import { Texture2D } from "@godot/classes/texture2d";

export declare class Button extends BaseButton{
  public set_text(_text: String | StringName | string): void;
  public get_text(): String;
  public set_text_overrun_behavior(_overrun_behavior: number): void;
  public get_text_overrun_behavior(): number;
  public set_autowrap_mode(_autowrap_mode: number): void;
  public get_autowrap_mode(): number;
  public set_text_direction(_direction: number): void;
  public get_text_direction(): number;
  public set_language(_language: String | StringName | string): void;
  public get_language(): String;
  public set_button_icon(_texture: Texture2D): void;
  public get_button_icon(): Texture2D;
  public set_flat(_enabled: boolean): void;
  public is_flat(): boolean;
  public set_clip_text(_enabled: boolean): void;
  public get_clip_text(): boolean;
  public set_text_alignment(_alignment: number): void;
  public get_text_alignment(): number;
  public set_icon_alignment(_icon_alignment: number): void;
  public get_icon_alignment(): number;
  public set_vertical_icon_alignment(_vertical_icon_alignment: number): void;
  public get_vertical_icon_alignment(): number;
  public set_expand_icon(_enabled: boolean): void;
  public is_expand_icon(): boolean;
  public get text(): String {
    get_text();
  }
  public set text(value): void {
    set_text(value);
  }
  public get icon(): Texture2D {
    get_button_icon();
  }
  public set icon(value): void {
    set_button_icon(value);
  }
  public get flat(): boolean {
    is_flat();
  }
  public set flat(value): void {
    set_flat(value);
  }
  public get alignment(): number {
    get_text_alignment();
  }
  public set alignment(value): void {
    set_text_alignment(value);
  }
  public get text_overrun_behavior(): number {
    get_text_overrun_behavior();
  }
  public set text_overrun_behavior(value): void {
    set_text_overrun_behavior(value);
  }
  public get autowrap_mode(): number {
    get_autowrap_mode();
  }
  public set autowrap_mode(value): void {
    set_autowrap_mode(value);
  }
  public get clip_text(): boolean {
    get_clip_text();
  }
  public set clip_text(value): void {
    set_clip_text(value);
  }
  public get icon_alignment(): number {
    get_icon_alignment();
  }
  public set icon_alignment(value): void {
    set_icon_alignment(value);
  }
  public get vertical_icon_alignment(): number {
    get_vertical_icon_alignment();
  }
  public set vertical_icon_alignment(value): void {
    set_vertical_icon_alignment(value);
  }
  public get expand_icon(): boolean {
    is_expand_icon();
  }
  public set expand_icon(value): void {
    set_expand_icon(value);
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
}