import { convert_args } from "src/js_godot/core/convert";
import { GDExtensionVariantType } from "src/js_godot/gde/gde";
import { StringName } from "src/js_godot/variant/string_name";
import { GDString } from "src/js_godot/variant/gd_string";
import { object_method_bind_ptrcall } from "__internal__";

export function call_utility_ret(method, ret, ...args) {
  method(ret.opaque, convert_args(...args));
  return ret;
}

export function _call_native_mb_ret(mb, instance, type, ...args) {
  let data = object_method_bind_ptrcall(mb, instance, type, ...args);
  switch (type) {
    case GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_NIL:
    case GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_INT:
    case GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_FLOAT:
    case GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_BOOL:
      return data;
    case GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING: {
      let ret = new GDString();
      ret.opaque = data;
      return ret;
    }
    case GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING_NAME: {
      let ret = new StringName();
      ret.opaque = data;
      return ret;
    }
    default:
      return undefined;
  }
}
