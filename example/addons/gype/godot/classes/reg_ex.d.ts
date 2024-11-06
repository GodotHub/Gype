
import { RegExMatch } from "@godot/classes/reg_ex_match";
import { RegExMatch } from "@godot/classes/reg_ex_match";
import { RefCounted } from "@godot/classes/ref_counted";
export declare class RegEx extends RefCounted{
  public
 static create_from_string(_pattern: GDString | StringName | string): RegEx;
  public clear(): void;
  public compile(_pattern: GDString | StringName | string): number;
  public search(_subject: GDString | StringName | string, _offset: number = 0, _end: number = -1): RegExMatch;
  public search_all(_subject: GDString | StringName | string, _offset: number = 0, _end: number = -1): GDArray;
  public sub(_subject: GDString | StringName | string, _replacement: GDString | StringName | string, _all: boolean = false, _offset: number = 0, _end: number = -1): String;
  public is_valid(): boolean;
  public get_pattern(): String;
  public get_group_count(): number;
  public get_names(): PackedStringArray;
}