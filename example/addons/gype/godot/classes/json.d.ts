
import { Resource } from "@godot/classes/resource";

export declare class JSON extends Resource{
  public stringify(_data: Variant, _indent: String, _sort_keys: boolean, _full_precision: boolean): String;
  public parse_string(_json_string: String): Variant;
  public parse(_json_text: String, _keep_text: boolean): number;
  public get_data(): Variant;
  public set_data(_data: Variant): void;
  public get_parsed_text(): String;
  public get_error_line(): number;
  public get_error_message(): String;
  public get data(): Variant {
    get_data();
  }
  public set data(value: Variant): void {
    set_data(value);
  }
}