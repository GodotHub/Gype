import { StringName } from "src/js_godot/variant/string_name";
import { classdb_construct_object, JSPointer } from "__internal__";

export class Wrapped {
  _owner;

  constructor(value) {
    GDCLASS.call(this);
    if (typeof value == "string") {
      let name = new StringName(value);
      this._owner = classdb_construct_object(name.opaque);
      // TODO
    } else {
      this._owner = value;
    }
  }

  static #_get_extension_class_name() {
    return undefined;
  }

  __get_notification() {}
  __get_get() {}
  __get_set() {}
  __get_get_property_list() {}
  __get_property_can_revert() {}
  __get_property_get_revert() {}
  __get_validate_property() {}
  __get_to_string() {}
  __has_get_property_list() {}

  static notification_bind(instance, what, p_reversed) {}
  static set_bind(instance, name, ret) {
    return false;
  }
  static get_bind(instance, name, value) {
    return false;
  }
  static get_property_list_bind(instance) {}
  static free_property_list_bind(instance, list, count) {}
  static property_can_revert_bind(instance, name) {}
  static property_get_revert_bind(instance, name, ret) {}
  static validate_property_bind(instance, property) {}
  static to_string_bind(instace) {}

  _notification(p_what) {}
  _set(p_name, p_property) {
    return false;
  }
  _get(p_name, r_property) {
    return false;
  }
  _get_property_list() {}
  _property_can_revert() {
    return false;
  }
  _property_get_revert() {
    return false;
  }
  _validate_property() {}
  _to_string() {
    return "test string";
  }
}
