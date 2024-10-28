
import { Resource } from "@godot/classes/resource";

export declare class Translation extends Resource{
  public _get_plural_message(_src_message: StringName, _src_plural_message: StringName, _n: number, _context: StringName): StringName;
  public _get_message(_src_message: StringName, _context: StringName): StringName;
  public set_locale(_locale: String): void;
  public get_locale(): String;
  public add_message(_src_message: StringName, _xlated_message: StringName, _context: StringName): void;
  public add_plural_message(_src_message: StringName, _xlated_messages: PackedStringArray, _context: StringName): void;
  public get_message(_src_message: StringName, _context: StringName): StringName;
  public get_plural_message(_src_message: StringName, _src_plural_message: StringName, _n: number, _context: StringName): StringName;
  public erase_message(_src_message: StringName, _context: StringName): void;
  public get_message_list(): PackedStringArray;
  public get_translated_message_list(): PackedStringArray;
  public get_message_count(): number;
  public get messages(): Dictionary {
    _get_messages();
  }
  public set messages(value: Dictionary): void {
    _set_messages(value);
  }
  public get locale(): String {
    get_locale();
  }
  public set locale(value: String): void {
    set_locale(value);
  }
}