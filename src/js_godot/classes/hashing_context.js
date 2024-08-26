import * as internal from '__internal__';
import { PackedByteArray } from 'src/js_godot/variant/packed_byte_array'
import { RefCounted } from 'src/js_godot/classesref_counted'
class _MethodBindings {
    method_start;
    method_update;
    method_finish;
}


export class HashingContext extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("HashingContext");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("HashingContext");
      let methodname = new StringName("start");
      this._bindings.method_start = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3940338335
      );
    }
    {
      let classname = new StringName("HashingContext");
      let methodname = new StringName("update");
      this._bindings.method_update = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        680677267
      );
    }
    {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method_start,
      this._owner,
			Variant.INT,
      _type
    );
  }
  update(_chunk) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_update,
      this._owner,
			Variant.INT,
      _chunk
    );
  }
  finish() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_finish,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY
    ,
      
    );
  }
  static HashType = {
    HASH_MD5: 0,
    HASH_SHA1: 1,
    HASH_SHA256: 2,
  }
}