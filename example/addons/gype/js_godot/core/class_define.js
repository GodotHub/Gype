import { GDString } from "@js_godot/variant/gd_string";
import { StringName } from "@js_godot/variant/string_name";
import { Variant } from "@js_godot/variant/variant";
import {
  JSPointer,
  ClassInfo,
  classdb_register_extension_class3,
  classdb_register_extension_class_virtual_method,
} from "__internal__";

export function gd_class(target) {
  target.prototype["_is_extension_class"] = () => true;
  target.prototype["_get_extension_class_name"] = () =>
    target.prototype["get_class"].call();
  target.prototype["_get_bind_methods"] = () => {};
  target.prototype["_get_notification"] = () => target._notification;
  target.prototype["_get_set"] = () => target._set;
  target.prototype["_get_get"] = () => target._get;
  target.prototype["_get_get_property_list"] = () => target._get_property_list;
  target.prototype["_get_property_can_revert"] = () =>
    target._property_can_revert;
  target.prototype["_get_property_get_revert"] = () =>
    target._property_get_revert;
  target.prototype["_get_validate_property"] = () => target._validate_property;
  target.prototype["_get_to_string"] = () => target._to_string;
  target.prototype["get_class"] = () => new StringName(target.name);
  target.prototype["initialize_class"] = () => {
    // initialized = false;
    // if (initialized) return;
    // super.initialize_class();
    // if (target.)
  };
}
export function extension_class(target) {
  // private
  target.prototype["_get_bind_methods"] = () => {};
  target.prototype["_get_notification"] = () => {};
  target.prototype["_get_set"] = () => {};
  target.prototype["_get_get"] = () => {};
  target.prototype["_get_get_property_list"] = () => {};
  target.prototype["_get_property_can_revert"] = () => {};
  target.prototype["_get_property_get_revert"] = () => {};
  target.prototype["_get_validate_property"] = () => {};
  target.prototype["_get_to_string"] = () => {};
  // public
  target.prototype["get_class"] = () => new StringName(target.name);
  target.prototype["initialize_class"] = () => {};
}

const _GodotClass = Symbol("_GodotClass");
export function GodotClass(target) {
  target[_GodotClass] = true;

  let class_name = target.name;
  let base_name = Object.getPrototypeOf(target).name;
  classdb_register_extension_class3(class_name, base_name, {
    p_userdata: target,
  });
}

const _VirtualMethod = Symbol("_VirtualMethod");
export function VirtualMethod(method_info) {
  return function VirtualMethodDescriptor(target, key, descriptor) {
    descriptor.value[_VirtualMethod] = method_info;
  };
}
