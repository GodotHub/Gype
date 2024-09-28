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
  method_get_skeleton;
  method_get_skin;
}
@GodotClass
export class SkinReference extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SkinReference");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_skeleton() {
    if (!this._bindings.method_get_skeleton) {
      let classname = new StringName("SkinReference");
      let methodname = new StringName("get_skeleton");
      this._bindings.method_get_skeleton = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_get_skin() {
    if (!this._bindings.method_get_skin) {
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
    SkinReference.init_method_get_skeleton();
    return _call_native_mb_ret(
      SkinReference._bindings.method_get_skeleton,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  get_skin() {
    SkinReference.init_method_get_skin();
    return _call_native_mb_ret(
      SkinReference._bindings.method_get_skin,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  

}