import { Variant } from "@js_godot/variant/variant";
import { variant_get_type } from "__internal__";
export const opaque_type = Symbol("OpaqueType");
export function get_type(value) {
  let variant = new Variant(value);
  return variant_get_type(variant.opaque);
}

export function to_variant(src_type, opaque) {
  switch (src_type) {
    case Variant.Type.VARIANT:
      return new Variant(opaque);
    case Variant.Type.STRING:
      return new GDString(opaque);
    case Variant.Type.STRING_NAME:
      return new StringName(opaque);
    default:
      break;
  }
}
