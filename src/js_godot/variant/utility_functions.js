import { StringName } from "src/js_godot/variant/string_name";
import { Variant } from "src/js_godot/variant/variant";
import { variant_get_ptr_utility_function } from "__internal__";
import { call_utility_ret } from "src/js_godot/core/engine_ptrcall";

export class UtilityFunctions {
  static #print_func;
  static #typeof_func;

  static _init_bindings() {
    this.#print_func = variant_get_ptr_utility_function(
      new StringName("print").opaque,
      2648703342
    );
    this.#typeof_func = variant_get_ptr_utility_function(
      new StringName("typeof").opaque,
      326422594
    );
  }

  static #print_internal(...args) {
    let ret = new Variant();
    call_utility_ret(UtilityFunctions.#print_func, ret, ...args);
    return ret;
  }

  static #typeof_internal(...args) {
    let ret = new Variant();
    call_utility_ret(UtilityFunctions.#typeof_func, ret, ...args);
    return ret;
  }

  static print(...args) {
    this.#print_internal(...args);
  }

  static typeof(...args) {
    this.#typeof_internal(...args);
  }
}
