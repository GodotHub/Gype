
import { Resource } from "@godot/classes/resource";

export declare class Translation extends Resource{
  public _get_plural_message(_src_message: String | StringName | string, _src_plural_message: String | StringName | string, _n: number, _context: String | StringName | string): StringName;
  public _get_message(_src_message: String | StringName | string, _context: String | StringName | string): StringName;
  public set_locale(_locale: String | StringName | string): void;
  public get_locale(): String;
  public add_message(_src_message: String | StringName | string, _xlated_message: String | StringName | string, _context: String | StringName | string): void;
  public add_plural_message(_src_message: String | StringName | string, _xlated_messages: PackedStringArray, _context: String | StringName | string): void;
  public get_message(_src_message: String | StringName | string, _context: String | StringName | string): StringName;
  public get_plural_message(_src_message: String | StringName | string, _src_plural_message: String | StringName | string, _n: number, _context: String | StringName | string): StringName;
  public erase_message(_src_message: String | StringName | string, _context: String | StringName | string): void;
  public get_message_list(): PackedStringArray;
  public get_translated_message_list(): PackedStringArray;
  public get_message_count(): number;
  public get messages(): Dictionary {
    _get_messages();
  }
  public set messages(value): void {
    _set_messages(value);
  }
  public get locale(): String {
    get_locale();
  }
  public set locale(value): void {
    set_locale(value);
  }
}