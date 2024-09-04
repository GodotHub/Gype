import { GDString } from "@js_godot/variant/gd_string";
import { StringName } from "@js_godot/variant/string_name";
import { Variant } from "@js_godot/variant/variant";

export function convert_args(...args) {
  for (let index = 0; index < args.length; index++) {
    const element = args[index];
    if (
      element instanceof GDString ||
      element instanceof StringName ||
      element instanceof Variant
    ) {
      args[index] = element.opaque;
    } else {
      let variant = new Variant(args[index]);
      args[index] = variant.opaque;
    }
  }
  return args;
}

export function convert_vars(...vars) {
  for (let index = 0; index < vars.length; index++) {
    const element = vars[index];
    let variant = new Variant(vars[index]);
    if (!element instanceof Variant) {
      vars[index] = variant.opaque;
    } else {
      vars[index] = variant.opaque;
    }
  }
  return vars;
}
