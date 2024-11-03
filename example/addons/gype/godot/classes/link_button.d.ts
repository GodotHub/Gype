
import { BaseButton } from "@godot/classes/base_button";
export declare class LinkButton extends BaseButton{
  public set_text(_text: GDString | StringName | string): void;
  public get_text(): String;
  public set_text_direction(_direction: number): void;
  public get_text_direction(): number;
  public set_language(_language: GDString | StringName | string): void;
  public get_language(): String;
  public set_uri(_uri: GDString | StringName | string): void;
  public get_uri(): String;
  public set_underline_mode(_underline_mode: number): void;
  public get_underline_mode(): number;
  public set_structured_text_bidi_override(_parser: number): void;
  public get_structured_text_bidi_override(): number;
  public set_structured_text_bidi_override_options(_args: GDArray): void;
  public get_structured_text_bidi_override_options(): GDArray;
  public get text(): String;
  public set text(value): void;
  public get underline(): number;
  public set underline(value): void;
  public get uri(): String;
  public set uri(value): void;
  public get text_direction(): number;
  public set text_direction(value): void;
  public get language(): String;
  public set language(value): void;
  public get structured_text_bidi_override(): number;
  public set structured_text_bidi_override(value): void;
  public get structured_text_bidi_override_options(): GDArray;
  public set structured_text_bidi_override_options(value): void;
  static UnderlineMode = {
    UNDERLINE_MODE_ALWAYS = 0,
    UNDERLINE_MODE_ON_HOVER = 1,
    UNDERLINE_MODE_NEVER = 2,
  }
}