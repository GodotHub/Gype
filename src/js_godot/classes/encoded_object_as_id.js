import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_object_id;
  method_get_object_id;
}
export class EncodedObjectAsID extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("EncodedObjectAsID");
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
      let classname = new StringName("EncodedObjectAsID");
      let methodname = new StringName("set_object_id");
      this._bindings.method_set_object_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("EncodedObjectAsID");
      let methodname = new StringName("get_object_id");
      this._bindings.method_get_object_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
  }
  
  set_object_id(_id) {
    return _call_native_mb_no_ret(
      EncodedObjectAsID._bindings.method_set_object_id,
      this._owner,
      _id
    );
    
  }
  get_object_id() {
    return _call_native_mb_ret(
      EncodedObjectAsID._bindings.method_get_object_id,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  
get object_id () {
  return this.get_object_id();
}
set object_id (new_value) {
  this.set_object_id(new_value);
}


  static {
    this._init_bindings();
  }
}