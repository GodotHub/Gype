import { convert_vars } from "@js_godot/core/convert";
import { StringName } from "@js_godot/variant/string_name";
import { GDString } from "@js_godot/variant/gd_string";
import { Variant } from "@js_godot/variant/variant";
import { object_method_bind_ptrcall } from "__internal__";

export function call_utility_ret(method, ...args) {
  let ret = new Variant();
  method(ret.opaque, convert_vars(...args), args.length);
  return ret;
}

export function call_utility_no_ret(method, ...args) {
  let ret = new Variant();
  method(ret.opaque, convert_vars(...args), args.length);
}

export function _call_native_mb_ret(mb, instance, type, ...args) {
  let data = object_method_bind_ptrcall(
    mb,
    instance,
    type,
    convert_vars(...args)
  );
  switch (type) {
    case Variant.Type.INT:
    case Variant.Type.FLOAT:
    case Variant.Type.BOOL:
      return data;
    case Variant.Type.STRING: {
      let ret = new GDString();
      ret.opaque = data;
      return ret;
    }
    case Variant.Type.STRING_NAME: {
      let ret = new StringName();
      ret.opaque = data;
      return ret;
    }
    default:
      return undefined;
  }
}

export function _call_native_mb_no_ret(mb, instance, ...args) {
  object_method_bind_ptrcall(mb, instance, 0, convert_vars(...args));
}
