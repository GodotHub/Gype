import { StringName } from "src/js_godot/variant/string_name";
import {
  classdb_construct_object,
  object_set_instance,
  object_set_instance_binding,
  JSPointer,
} from "__internal__";

export class Wrapped {
  _owner;
  _constructing_extension_class_name = undefined;

  constructor(value) {
    if (typeof value == "string") {
      this._constructing_extension_class_name =
        this._get_extension_class_name();
      let p_godot_class = new StringName(value);
      this._owner = classdb_construct_object(p_godot_class.opaque);
      if (this._constructing_extension_class_name) {
        object_set_instance(
          _owner,
          this._constructing_extension_class_name.opaque,
          this
        );
      }
      object_set_instance_binding(this._owner, this);
    } else {
      this._owner = value;
    }
  }

  _get_extension_class_name() {}

  __get_notification() {}
  __get_get() {}
  __get_set() {}
  __get_get_property_list() {}
  __get_property_can_revert() {}
  __get_property_get_revert() {}
  __get_validate_property() {}
  __get_to_string() {}
  __has_get_property_list() {}

  static __notification_bind(instance, what, p_reversed) {}
  static __set_bind(instance, name, ret) {}
  static __get_bind(instance, name, value) {}
  static __get_property_list_bind(instance) {}
  static __free_property_list_bind(instance, list, count) {}
  static __property_can_revert_bind(instance, name) {}
  static __property_get_revert_bind(instance, name, ret) {}
  static __validate_property_bind(instance, property) {}
  static __to_string_bind(instace) {}

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