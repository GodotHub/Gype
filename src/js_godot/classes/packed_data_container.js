import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_pack;
  method_size;
}
export class PackedDataContainer extends Resource{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PackedDataContainer");
    } else {
      super(godot_object);
    }
  }
  static init_method_pack() {
    if (!this.#_bindings.method_pack) {
      let classname = new StringName("PackedDataContainer");
      let methodname = new StringName("pack");
      this.#_bindings.method_pack = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        966674026
      );
    }
  }
  static init_method_size() {
    if (!this.#_bindings.method_size) {
      let classname = new StringName("PackedDataContainer");
      let methodname = new StringName("size");
      this.#_bindings.method_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }

  
  
  pack(_value) {
    PackedDataContainer.init_method_pack();
    return _call_native_mb_ret(
      PackedDataContainer.#_bindings.method_pack,
      this._owner,
			Variant.Type.INT,
    
      _value
    );
    
  }
  size() {
    PackedDataContainer.init_method_size();
    return _call_native_mb_ret(
      PackedDataContainer.#_bindings.method_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  

}