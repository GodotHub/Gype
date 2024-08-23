import { convert_args } from "src/js_godot/core/convert";

export function call_utility_ret(method, ret, ...args) {
  method(ret.opaque, convert_args(...args));
  return ret;
}
