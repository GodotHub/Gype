import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classesref_counted'
class _MethodBindings {
    method_set_object_id;
    method_get_object_id;
}


export class EncodedObjectAsID extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EncodedObjectAsID");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
      ClassDB._bindings.method_set_object_id,
      this._owner,
      _id
    );
  }
  get_object_id() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_object_id,
      this._owner,
			Variant.Type.INT,
      
    );
  }
}