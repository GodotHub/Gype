
import { Resource } from "@godot/classes/resource";


export declare class Translation extends Resource{
  public _get_plural_message(_src_message: GDString | StringName | string, _src_plural_message: GDString | StringName | string, _n: number, _context: GDString | StringName | string): StringName;
  public _get_message(_src_message: GDString | StringName | string, _context: GDString | StringName | string): StringName;
  public set_locale(_locale: GDString | StringName | string): void;
  public get_locale(): String;
  public add_message(_src_message: GDString | StringName | string, _xlated_message: GDString | StringName | string, _context: GDString | StringName | string): void;
  public add_plural_message(_src_message: GDString | StringName | string, _xlated_messages: PackedStringArray, _context: GDString | StringName | string): void;
  public get_message(_src_message: GDString | StringName | string, _context: GDString | StringName | string): StringName;
  public get_plural_message(_src_message: GDString | StringName | string, _src_plural_message: GDString | StringName | string, _n: number, _context: GDString | StringName | string): StringName;
  public erase_message(_src_message: GDString | StringName | string, _context: GDString | StringName | string): void;
  public get_message_list(): PackedStringArray;
  public get_translated_message_list(): PackedStringArray;
  public get_message_count(): number;
  public get messages(): Dictionary;
  public set messages(value): void;
  public get locale(): String;
  public set locale(value): void;
}