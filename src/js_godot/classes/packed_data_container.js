import * as internal from '__internal__';
import { Variant } from 'src/js_godot/variant/variant'
import { Resource } from 'src/js_godot/classes/resource'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_pack;
    method_size;
}


export class PackedDataContainer extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PackedDataContainer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("PackedDataContainer");
        let methodname = new StringName("pack");
        this._bindings.method_pack = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          966674026
        );
      }
      {
        let classname = new StringName("PackedDataContainer");
        let methodname = new StringName("size");
        this._bindings.method_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
  }
  pack(_value) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_pack,
      this._owner,
			Variant.INT,
      _value
    );
    
  }
  size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_size,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
}