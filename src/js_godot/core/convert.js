import { GDString } from "src/js_godot/variant/gd_string";
import { StringName } from "src/js_godot/variant/string_name";
import { Variant } from "src/js_godot/variant/variant";

export function convert_args(...args) {
  for (let index = 0; index < args.length; index++) {
    const element = args[index];
    if (
      element instanceof GDString ||
      element instanceof StringName ||
      element instanceof Variant
    ) {
      args[index] = element.opaque;
    }
  }
  return args;
}
