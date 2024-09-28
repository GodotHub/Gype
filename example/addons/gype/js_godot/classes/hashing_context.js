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
  method_start;
  method_update;
  method_finish;
}
@GodotClass
export class HashingContext extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("HashingContext");
    } else {
      super(godot_object);
    }
  }
  static init_method_start() {
    if (!this._bindings.method_start) {
      let classname = new StringName("HashingContext");
      let methodname = new StringName("start");
      this._bindings.method_start = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3940338335
      );
    }
  }
  static init_method_update() {
    if (!this._bindings.method_update) {
      let classname = new StringName("HashingContext");
      let methodname = new StringName("update");
      this._bindings.method_update = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        680677267
      );
    }
  }
  static init_method_finish() {
    if (!this._bindings.method_finish) {
      let classname = new StringName("HashingContext");
      let methodname = new StringName("finish");
      this._bindings.method_finish = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2115431945
      );
    }
  }

  
  
  start(_type) {
    HashingContext.init_method_start();
    return _call_native_mb_ret(
      HashingContext._bindings.method_start,
      this._owner,
			Variant.Type.INT,
    
      _type
    );
    
  }
  update(_chunk) {
    HashingContext.init_method_update();
    return _call_native_mb_ret(
      HashingContext._bindings.method_update,
      this._owner,
			Variant.Type.INT,
    
      _chunk
    );
    
  }
  finish() {
    HashingContext.init_method_finish();
    return _call_native_mb_ret(
      HashingContext._bindings.method_finish,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      
    );
    
  }
  

  static HashType = {
    HASH_MD5: 0,
    HASH_SHA1: 1,
    HASH_SHA256: 2,
  }
}