import {
  get_variant_to_type_constructor,
  variant_get_ptr_constructor,
  string_new_with_latin1_chars,
  variant_get_ptr_builtin_method,
  variant_get_ptr_destructor,
  string_name_new_with_latin1_chars,
} from "__internal__";
import { GDExtensionVariantType } from "src/js_godot/gde/gde";
import {
  _call_builtin_constructor,
  _call_builtin_method_ptr_ret,
} from "src/js_godot/core/builtin_ptrcall";
import { StringName } from "src/js_godot/variant/string_name";
import { GDString } from "src/js_godot/variant/gd_string";
import { Variant } from "src/js_godot/variant/variant";

class _MethodBindings {
  from_variant_constructor;
  destructor;
  constructor_0;
  constructor_1;
  constructor_2;
  method_is_absolute;
  method_get_name_count;
  method_get_name;
  method_get_subname_count;
  method_hash;
  method_get_subname;
  method_get_concatenated_names;
  method_get_concatenated_subnames;
  method_slice;
  method_get_as_property_path;
  method_is_empty;
  operator_equal_Variant;
  operator_not_equal_Variant;
  operator_not_;
  operator_equal_NodePath;
  operator_not_equal_NodePath;
  operator_in_Dictionary;
  operator_in_Array;
}

export class NodePath {
  static #SIZE = 8;
  opaque = new Uint8Array(NodePath.#SIZE);

  static _bindings = new _MethodBindings();

  constructor(from) {
    if (!from) {
      _call_builtin_constructor(NodePath._bindings.constructor_0, this);
    } else if (from instanceof NodePath) {
      _call_builtin_constructor(NodePath._bindings.constructor_1, this, [from]);
    } else if (from instanceof GDString) {
      _call_builtin_constructor(NodePath._bindings.constructor_2, this, [from]);
    } else if (from instanceof Variant) {
      NodePath._bindings.from_variant_constructor(this.opaque, from.opaque);
    } else if (typeof from == "string") {
      _call_builtin_constructor(NodePath._bindings.constructor_2, this, [
        new GDString(from).opaque,
      ]);
    }
  }

  static __init_bindings_constructors_destructor() {
    this._bindings.from_variant_constructor = get_variant_to_type_constructor(
      GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_NODE_PATH
    );
    this._bindings.constructor_0 = variant_get_ptr_constructor(
      GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_NODE_PATH,
      0
    );
    this._bindings.constructor_1 = variant_get_ptr_constructor(
      GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_NODE_PATH,
      1
    );
    this._bindings.constructor_2 = variant_get_ptr_constructor(
      GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_NODE_PATH,
      2
    );
    this._bindings.destructor = variant_get_ptr_destructor(
      GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_NODE_PATH
    );
  }

  static _init_bindings() {
    this.__init_bindings_constructors_destructor();
    {
      let _gde_name = new StringName("is_absolute");
      this._bindings.method_is_absolute = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_NODE_PATH,
        _gde_name.opaque,
        3918633141
      );
    }
    {
      let _gde_name = new StringName("get_name_count");
      this._bindings.method_get_name_count = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_NODE_PATH,
        _gde_name.opaque,
        3173160232
      );
    }
    {
      let _gde_name = new StringName("get_name");
      this._bindings.method_get_name = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_NODE_PATH,
        _gde_name.opaque,
        2948586938
      );
    }
    {
      let _gde_name = new StringName("get_subname_count");
      this._bindings.method_get_subname_count = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_NODE_PATH,
        _gde_name.opaque,
        3173160232
      );
    }
    {
      let _gde_name = new StringName("hash");
      this._bindings.method_hash = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_NODE_PATH,
        _gde_name.opaque,
        3173160232
      );
    }
    {
      let _gde_name = new StringName("get_subname");
      this._bindings.method_get_subname = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_NODE_PATH,
        _gde_name.opaque,
        2948586938
      );
    }
    {
      let _gde_name = new StringName("get_concatenated_names");
      this._bindings.method_get_concatenated_names =
        variant_get_ptr_builtin_method(
          GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_NODE_PATH,
          _gde_name.opaque,
          1825232092
        );
    }
    {
      let _gde_name = new StringName("get_concatenated_subnames");
      this._bindings.method_get_concatenated_subnames =
        variant_get_ptr_builtin_method(
          GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_NODE_PATH,
          _gde_name.opaque,
          1825232092
        );
    }
    {
      let _gde_name = new StringName("slice");
      this._bindings.method_slice = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_NODE_PATH,
        _gde_name.opaque,
        421628484
      );
    }
    {
      let _gde_name = new StringName("get_as_property_path");
      this._bindings.method_get_as_property_path =
        variant_get_ptr_builtin_method(
          GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_NODE_PATH,
          _gde_name.opaque,
          1598598043
        );
    }
    {
      let _gde_name = new StringName("is_empty");
      this._bindings.method_is_empty = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_NODE_PATH,
        _gde_name.opaque,
        3918633141
      );
    }
  }

  is_absolute() {
    let ret;
    ret = _call_builtin_method_ptr_ret(
      NodePath._bindings.method_is_absolute,
      this,
      "bool",
      []
    );
    return ret;
  }
  get_name_count() {
    let ret;
    ret = _call_builtin_method_ptr_ret(
      NodePath._bindings.method_get_name_count,
      this,
      "int",
      []
    );
    return ret;
  }
  get_name(idx) {
    let ret = new StringName();
    ret.opaque = _call_builtin_method_ptr_ret(
      NodePath._bindings.method_get_name,
      this,
      "StringName",
      [idx]
    );
    return ret;
  }
  get_subname_count() {
    let ret;
    ret = _call_builtin_method_ptr_ret(
      NodePath._bindings.method_get_subname_count,
      this,
      "int",
      []
    );
    return ret;
  }
  hash() {
    let ret;
    ret = _call_builtin_method_ptr_ret(
      NodePath._bindings.method_hash,
      this,
      "int",
      []
    );
    return ret;
  }
  get_subname(idx) {
    let ret = new StringName();
    ret.opaque = _call_builtin_method_ptr_ret(
      NodePath._bindings.method_get_subname,
      this,
      "StringName",
      [idx]
    );
    return ret;
  }
  get_concatenated_names() {
    let ret = new StringName();
    ret.opaque = _call_builtin_method_ptr_ret(
      NodePath._bindings.method_get_concatenated_names,
      this,
      "StringName",
      []
    );
    return ret;
  }
  get_concatenated_subnames() {
    let ret = new StringName();
    ret.opaque = _call_builtin_method_ptr_ret(
      NodePath._bindings.method_get_concatenated_subnames,
      this,
      "StringName",
      []
    );
    return ret;
  }
  slice(begin, end) {
    let ret = new NodePath();
    ret.opaque = _call_builtin_method_ptr_ret(
      NodePath._bindings.method_slice,
      this,
      "NodePath",
      [begin, end]
    );
    return ret;
  }
  get_as_property_path() {
    let ret = new NodePath();
    ret.opaque = _call_builtin_method_ptr_ret(
      NodePath._bindings.method_get_as_property_path,
      this,
      "NodePath",
      []
    );
    return ret;
  }
  is_empty() {
    let ret;
    ret = _call_builtin_method_ptr_ret(
      NodePath._bindings.method_is_empty,
      this,
      "bool",
      []
    );
    return ret;
  }
}
