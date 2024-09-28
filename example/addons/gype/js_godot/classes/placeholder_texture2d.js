import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Texture2D } from '@js_godot/classes/texture2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_size;
}
@GodotClass
export class PlaceholderTexture2D extends Texture2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PlaceholderTexture2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_size() {
    if (!this._bindings.method_set_size) {
      let classname = new StringName("PlaceholderTexture2D");
      let methodname = new StringName("set_size");
      this._bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }

  
  
  set_size(_size) {
    PlaceholderTexture2D.init_method_set_size();
    return _call_native_mb_no_ret(
      PlaceholderTexture2D._bindings.method_set_size,
      this._owner,
      _size
    );
    
  }
  
get size () {
  return this.get_size();
}
set size (new_value) {
  this.set_size(new_value);
}

}