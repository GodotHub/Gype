
import { Resource } from "@godot/classes/resource";
export declare class JSON extends Resource{
  public
 static stringify(_data: any, _indent: GDString | StringName | string = "", _sort_keys: boolean = true, _full_precision: boolean = false): String;
  public
 static parse_string(_json_string: GDString | StringName | string): any;
  public parse(_json_text: GDString | StringName | string, _keep_text: boolean = false): number;
  public get_data(): any;
  public set_data(_data: any): void;
  public get_parsed_text(): String;
  public get_error_line(): number;
  public get_error_message(): String;
  public get data(): any;
  public set data(value): void;
}