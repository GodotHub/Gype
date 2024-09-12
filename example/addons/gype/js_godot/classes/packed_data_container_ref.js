import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { RefCounted } from '@js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_size;
}
export class PackedDataContainerRef extends RefCounted{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PackedDataContainerRef");
    } else {
      super(godot_object);
    }
  }
  static init_method_size() {
    if (!this.#_bindings.method_size) {
      let classname = new StringName("PackedDataContainerRef");
      let methodname = new StringName("size");
      this.#_bindings.method_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }

  
  
  size() {
    PackedDataContainerRef.init_method_size();
    return _call_native_mb_ret(
      PackedDataContainerRef.#_bindings.method_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  

}