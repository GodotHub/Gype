import { Variant } from "@js_godot/variant/variant";
import { variant_get_type } from "__internal__";
export const opaque_type = Symbol("OpaqueType");
export function get_type(value) {
    let variant = new Variant(value);
    return variant_get_type(variant.opaque);
}
