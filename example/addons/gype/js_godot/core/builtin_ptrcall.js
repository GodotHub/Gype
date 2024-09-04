import { convert_args } from "@js_godot/core/convert";
import { GodotObject } from "@js_godot/classes/godot_object";

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

export function _call_builtin_method_ptr_no_ret(method, base, args = []) {
  method(base.opaque, convert_args(...args));
}

export function _call_builtin_method_ptr_ret_obj(
  method,
  base,
  ret_type,
  args = []
) {
  let owner = method(base.opaque, convert_args(...args), ret_type);
  let obj = new GodotObject();
  obj._owner = owner;
  return obj;
}
