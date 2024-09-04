import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Resource } from '@js_godot/classes/resource'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_file;
  method_get_file;
}
export class VideoStream extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VideoStream");
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
      let classname = new StringName("VideoStream");
      let methodname = new StringName("set_file");
      this._bindings.method_set_file = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("VideoStream");
      let methodname = new StringName("get_file");
      this._bindings.method_get_file = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2841200299
      );
    }
  }
  _instantiate_playback() {
  }
  set_file(_file) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_file,
      this._owner,
      _file
    );
    
  }
  get_file() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_file,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  
get file () {
  return this.get_file();
}
set file (new_value) {
  this.set_file(new_value);
}


  static {
    this._init_bindings();
  }
}