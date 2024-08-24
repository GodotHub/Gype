import { StringName } from "src/js_godot/variant/variant";
import { classdb_construct_object } from "__internal__";

export class Wrapped {
  _owner;

  constructor(value) {
    if (typeof value == "string") {
      let name = new StringName(value);
      this._owner = classdb_construct_object(name.opaque);
      // TODO
    } else {
      this._owner = value;
    }
  }

  static _get_extension_class_name() {
    return undefined;
  }
}
