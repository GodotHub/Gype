import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
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
  method_set_object_id;
  method_get_object_id;
}
@GodotClass
export class EncodedObjectAsID extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EncodedObjectAsID");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_object_id() {
    if (!this._bindings.method_set_object_id) {
      let classname = new StringName("EncodedObjectAsID");
      let methodname = new StringName("set_object_id");
      this._bindings.method_set_object_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_object_id() {
    if (!this._bindings.method_get_object_id) {
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
    EncodedObjectAsID.init_method_set_object_id();
    return _call_native_mb_no_ret(
      EncodedObjectAsID._bindings.method_set_object_id,
      this._owner,
      _id
    );
    
  }
  get_object_id() {
    EncodedObjectAsID.init_method_get_object_id();
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

}