
import { Translation } from "@godot/classes/translation";
import { Object } from "@godot/classes/object";

export declare class TranslationServer extends Object{
  public set_locale(_locale: String): void;
  public get_locale(): String;
  public get_tool_locale(): String;
  public compare_locales(_locale_a: String, _locale_b: String): number;
  public standardize_locale(_locale: String): String;
  public get_all_languages(): PackedStringArray;
  public get_language_name(_language: String): String;
  public get_all_scripts(): PackedStringArray;
  public get_script_name(_script: String): String;
  public get_all_countries(): PackedStringArray;
  public get_country_name(_country: String): String;
  public get_locale_name(_locale: String): String;
  public translate(_message: StringName, _context: StringName): StringName;
  public translate_plural(_message: StringName, _plural_message: StringName, _n: number, _context: StringName): StringName;
  public add_translation(_translation: Translation): void;
  public remove_translation(_translation: Translation): void;
  public get_translation_object(_locale: String): Translation;
  public clear(): void;
  public get_loaded_locales(): PackedStringArray;
  public is_pseudolocalization_enabled(): boolean;
  public set_pseudolocalization_enabled(_enabled: boolean): void;
  public reload_pseudolocalization(): void;
  public pseudolocalize(_message: StringName): StringName;
  public get pseudolocalization_enabled(): boolean {
    is_pseudolocalization_enabled();
  }
  public set pseudolocalization_enabled(value: boolean): void {
    set_pseudolocalization_enabled(value);
  }
}