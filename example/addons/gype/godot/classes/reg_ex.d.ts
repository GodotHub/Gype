
import { RefCounted } from "@godot/classes/ref_counted";
import { RegExMatch } from "@godot/classes/reg_ex_match";
import { RegExMatch } from "@godot/classes/reg_ex_match";


export declare class RegEx extends RefCounted{
  public create_from_string(_pattern: GDString | StringName | string): RegEx;
  public clear(): void;
  public compile(_pattern: GDString | StringName | string): number;
  public search(_subject: GDString | StringName | string, _offset: number, _end: number): RegExMatch;
  public search_all(_subject: GDString | StringName | string, _offset: number, _end: number): GDArray;
  public sub(_subject: GDString | StringName | string, _replacement: GDString | StringName | string, _all: boolean, _offset: number, _end: number): String;
  public is_valid(): boolean;
  public get_pattern(): String;
  public get_group_count(): number;
  public get_names(): PackedStringArray;
}