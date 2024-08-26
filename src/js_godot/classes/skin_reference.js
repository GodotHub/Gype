import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classesref_counted'
import { RID } from 'src/js_godot/variant/rid'
class _MethodBindings {
    method_get_skeleton;
    method_get_skin;
}


export class SkinReference extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SkinReference");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("SkinReference");
      let methodname = new StringName("get_skeleton");
      this._bindings.method_get_skeleton = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
    {
      let classname = new StringName("SkinReference");
      let methodname = new StringName("get_skin");
      this._bindings.method_get_skin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2074563878
      );
    }
  }
  get_skeleton() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_skeleton,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  get_skin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_skin,
      this._owner,
			Variant.INT,
      
    );
  }
}