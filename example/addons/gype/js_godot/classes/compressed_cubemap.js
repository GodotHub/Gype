import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { CompressedTextureLayered } from '@js_godot/classes/compressed_texture_layered'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
}
export class CompressedCubemap extends CompressedTextureLayered{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("CompressedCubemap");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
  }
  


  static {
    this._init_bindings();
  }
}