
import { GodotObject } from "@godot/classes/godot_object";

export declare class JSONRPC extends GodotObject{
  public set_scope(_scope: String | StringName | string, _target: Object): void;
  public process_action(_action: any, _recurse: boolean): any;
  public process_string(_action: String | StringName | string): String;
  public make_request(_method: String | StringName | string, _params: any, _id: any): Dictionary;
  public make_response(_result: any, _id: any): Dictionary;
  public make_notification(_method: String | StringName | string, _params: any): Dictionary;
  public make_response_error(_code: number, _message: String | StringName | string, _id: any): Dictionary;
  static ErrorCode = {
    PARSE_ERROR = -32700,
    INVALID_REQUEST = -32600,
    METHOD_NOT_FOUND = -32601,
    INVALID_PARAMS = -32602,
    INTERNAL_ERROR = -32603,
  }
}