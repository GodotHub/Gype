import * as internal from '__internal__';
import { Texture3D } from '@js_godot/classes/texture3d'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_size;
  method_get_size;
}
@GodotClass
export class PlaceholderTexture3D extends Texture3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PlaceholderTexture3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_size() {
    if (!this._bindings.method_set_size) {
      let classname = new StringName("PlaceholderTexture3D");
      let methodname = new StringName("set_size");
      this._bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        560364750
      );
    }
  }
  static init_method_get_size() {
    if (!this._bindings.method_get_size) {
      let classname = new StringName("PlaceholderTexture3D");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2785653706
      );
    }
  }

  
  
  set_size(_size) {
    PlaceholderTexture3D.init_method_set_size();
    return _call_native_mb_no_ret(
      PlaceholderTexture3D._bindings.method_set_size,
      this._owner,
      _size
    );
    
  }
  get_size() {
    PlaceholderTexture3D.init_method_get_size();
    return _call_native_mb_ret(
      PlaceholderTexture3D._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR3I,
    
      
    );
    
  }
  
get size () {
  return this.get_size();
}
set size (new_value) {
  this.set_size(new_value);
}

}