
import { Object } from "@godot/classes/object";

export declare class JSONRPC extends Object{
  public set_scope(_scope: String, _target: Object): void;
  public process_action(_action: Variant, _recurse: boolean): Variant;
  public process_string(_action: String): String;
  public make_request(_method: String, _params: Variant, _id: Variant): Dictionary;
  public make_response(_result: Variant, _id: Variant): Dictionary;
  public make_notification(_method: String, _params: Variant): Dictionary;
  public make_response_error(_code: number, _message: String, _id: Variant): Dictionary;
  static ErrorCode = {
    PARSE_ERROR = -32700,
    INVALID_REQUEST = -32600,
    METHOD_NOT_FOUND = -32601,
    INVALID_PARAMS = -32602,
    INTERNAL_ERROR = -32603,
  }
}