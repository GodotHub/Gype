import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { GDArray } from '@js_godot/variant/gd_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
}
export class EngineProfiler extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("EngineProfiler");
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
  _toggle(_enable, _options) {
  }
  _add_frame(_data) {
  }
  _tick(_frame_time, _process_time, _physics_time, _physics_frame_time) {
  }
  


  static {
    this._init_bindings();
  }
}