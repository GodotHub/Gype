
import { GodotObject } from "@godot/classes/godot_object";
import { Translation } from "@godot/classes/translation";

export declare class TranslationServer extends GodotObject{
  public set_locale(_locale: String | StringName | string): void;
  public get_locale(): String;
  public get_tool_locale(): String;
  public compare_locales(_locale_a: String | StringName | string, _locale_b: String | StringName | string): number;
  public standardize_locale(_locale: String | StringName | string): String;
  public get_all_languages(): PackedStringArray;
  public get_language_name(_language: String | StringName | string): String;
  public get_all_scripts(): PackedStringArray;
  public get_script_name(_script: String | StringName | string): String;
  public get_all_countries(): PackedStringArray;
  public get_country_name(_country: String | StringName | string): String;
  public get_locale_name(_locale: String | StringName | string): String;
  public translate(_message: String | StringName | string, _context: String | StringName | string): StringName;
  public translate_plural(_message: String | StringName | string, _plural_message: String | StringName | string, _n: number, _context: String | StringName | string): StringName;
  public add_translation(_translation: Translation): void;
  public remove_translation(_translation: Translation): void;
  public get_translation_object(_locale: String | StringName | string): Translation;
  public clear(): void;
  public get_loaded_locales(): PackedStringArray;
  public is_pseudolocalization_enabled(): boolean;
  public set_pseudolocalization_enabled(_enabled: boolean): void;
  public reload_pseudolocalization(): void;
  public pseudolocalize(_message: String | StringName | string): StringName;
  public get pseudolocalization_enabled(): boolean {
    is_pseudolocalization_enabled();
  }
  public set pseudolocalization_enabled(value): void {
    set_pseudolocalization_enabled(value);
  }
}