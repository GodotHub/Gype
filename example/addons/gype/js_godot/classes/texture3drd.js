import * as internal from '__internal__';
import { Texture3D } from '@js_godot/classes/texture3d'
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
  method_set_texture_rd_rid;
  method_get_texture_rd_rid;
}
@GodotClass
export class Texture3DRD extends Texture3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Texture3DRD");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_texture_rd_rid() {
    if (!this._bindings.method_set_texture_rd_rid) {
      let classname = new StringName("Texture3DRD");
      let methodname = new StringName("set_texture_rd_rid");
      this._bindings.method_set_texture_rd_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2722037293
      );
    }
  }
  static init_method_get_texture_rd_rid() {
    if (!this._bindings.method_get_texture_rd_rid) {
      let classname = new StringName("Texture3DRD");
      let methodname = new StringName("get_texture_rd_rid");
      this._bindings.method_get_texture_rd_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }

  
  
  set_texture_rd_rid(_texture_rd_rid) {
    Texture3DRD.init_method_set_texture_rd_rid();
    return _call_native_mb_no_ret(
      Texture3DRD._bindings.method_set_texture_rd_rid,
      this._owner,
      _texture_rd_rid
    );
    
  }
  get_texture_rd_rid() {
    Texture3DRD.init_method_get_texture_rd_rid();
    return _call_native_mb_ret(
      Texture3DRD._bindings.method_get_texture_rd_rid,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  
get texture_rd_rid () {
  return this.get_texture_rd_rid();
}
set texture_rd_rid (new_value) {
  this.set_texture_rd_rid(new_value);
}

}