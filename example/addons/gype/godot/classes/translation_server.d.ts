
import { Translation } from "@godot/classes/translation";
import { GodotObject } from "@godot/classes/godot_object";
declare global {
export declare class _TranslationServer extends GodotObject{
  public set_locale(_locale: GDString | StringName | string): void;
  public get_locale(): String;
  public get_tool_locale(): String;
  public compare_locales(_locale_a: GDString | StringName | string, _locale_b: GDString | StringName | string): number;
  public standardize_locale(_locale: GDString | StringName | string): String;
  public get_all_languages(): PackedStringArray;
  public get_language_name(_language: GDString | StringName | string): String;
  public get_all_scripts(): PackedStringArray;
  public get_script_name(_script: GDString | StringName | string): String;
  public get_all_countries(): PackedStringArray;
  public get_country_name(_country: GDString | StringName | string): String;
  public get_locale_name(_locale: GDString | StringName | string): String;
  public translate(_message: GDString | StringName | string, _context: GDString | StringName | string = ""): StringName;
  public translate_plural(_message: GDString | StringName | string, _plural_message: GDString | StringName | string, _n: number, _context: GDString | StringName | string = ""): StringName;
  public add_translation(_translation: Translation): void;
  public remove_translation(_translation: Translation): void;
  public get_translation_object(_locale: GDString | StringName | string): Translation;
  public clear(): void;
  public get_loaded_locales(): PackedStringArray;
  public is_pseudolocalization_enabled(): boolean;
  public set_pseudolocalization_enabled(_enabled: boolean): void;
  public reload_pseudolocalization(): void;
  public pseudolocalize(_message: GDString | StringName | string): StringName;
  public get pseudolocalization_enabled(): boolean;
  public set pseudolocalization_enabled(value): void;
}
}
declare global {
  const TranslationServer: _TranslationServer;
}