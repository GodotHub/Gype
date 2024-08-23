import { convert_args } from "src/js_godot/core/convert";

export function _call_builtin_constructor(_constructor, base, args = []) {
  _constructor(base.opaque, convert_args(...args));
}

export function _call_builtin_method_ptr_ret(
  method,
  base,
  ret_type,
  args = []
) {
  return method(base.opaque, convert_args(...args), ret_type);
}
