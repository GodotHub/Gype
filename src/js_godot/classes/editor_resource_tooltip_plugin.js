import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Dictionary } from '@js_godot/variant/dictionary'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_request_thumbnail;
}
export class EditorResourceTooltipPlugin extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("EditorResourceTooltipPlugin");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("EditorResourceTooltipPlugin");
      let methodname = new StringName("request_thumbnail");
      this._bindings.method_request_thumbnail = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3245519720
      );
    }
  }
  
  _handles(_type) {
  }
  _make_tooltip_for_path(_path, _metadata, _base) {
  }
  request_thumbnail(_path, _control) {
    return _call_native_mb_no_ret(
      EditorResourceTooltipPlugin._bindings.method_request_thumbnail,
      this._owner,
      _path, _control
    );
    
  }
  


  static {
    this._init_bindings();
  }
}