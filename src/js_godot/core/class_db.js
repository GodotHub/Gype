import { GodotObject } from "src/js_godot/core/godot_object";
import { classdb_get_method_bind } from "__internal__";
import { StringName } from "src/js_godot/variant/string_name";
import { GDExtensionVariantType } from "src/js_godot/gde/gde";
import { _call_native_mb_ret } from "src/js_godot/core/engine_ptrcall";
import { UtilityFunctions } from "src/js_godot/variant/utility_functions";

class _MethodBindings {
  method_get_class_list;
}

export class ClassDB extends GodotObject {
  static _bindings = new _MethodBindings();

  static singleton = new ClassDB();

  static _init_bindings() {
    {
      let classname = new StringName("ClassDB");
      let methodname = new StringName("get_class_list");
      this._bindings.method_get_class_list = classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1139954409
      );
    }
  }
  //
  constructor() {
    super("ClassDB");
  }

  get_class_list() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_class_list,
      this._owner,
      GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY
    );
  }
}
