
import { BaseButton } from "@godot/classes/base_button";

export declare class LinkButton extends BaseButton{
  public set_text(_text: String): void;
  public get_text(): String;
  public set_text_direction(_direction: number): void;
  public get_text_direction(): number;
  public set_language(_language: String): void;
  public get_language(): String;
  public set_uri(_uri: String): void;
  public get_uri(): String;
  public set_underline_mode(_underline_mode: number): void;
  public get_underline_mode(): number;
  public set_structured_text_bidi_override(_parser: number): void;
  public get_structured_text_bidi_override(): number;
  public set_structured_text_bidi_override_options(_args: GDArray): void;
  public get_structured_text_bidi_override_options(): GDArray;
  public get text(): String {
    get_text();
  }
  public set text(value: String): void {
    set_text(value);
  }
  public get underline(): number {
    get_underline_mode();
  }
  public set underline(value: number): void {
    set_underline_mode(value);
  }
  public get uri(): String {
    get_uri();
  }
  public set uri(value: String): void {
    set_uri(value);
  }
  public get text_direction(): number {
    get_text_direction();
  }
  public set text_direction(value: number): void {
    set_text_direction(value);
  }
  public get language(): String {
    get_language();
  }
  public set language(value: String): void {
    set_language(value);
  }
  public get structured_text_bidi_override(): number {
    get_structured_text_bidi_override();
  }
  public set structured_text_bidi_override(value: number): void {
    set_structured_text_bidi_override(value);
  }
  public get structured_text_bidi_override_options(): Array {
    get_structured_text_bidi_override_options();
  }
  public set structured_text_bidi_override_options(value: Array): void {
    set_structured_text_bidi_override_options(value);
  }
  static UnderlineMode = {
    UNDERLINE_MODE_ALWAYS = 0,
    UNDERLINE_MODE_ON_HOVER = 1,
    UNDERLINE_MODE_NEVER = 2,
  }
}