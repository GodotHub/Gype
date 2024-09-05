import * as internal from '__internal__';
import { RID } from '@js_godot/variant/rid'
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { TextureLayered } from '@js_godot/classes/texture_layered'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_texture_rd_rid;
  method_get_texture_rd_rid;
}
export class TextureLayeredRD extends TextureLayered{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("TextureLayeredRD");
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
      let classname = new StringName("TextureLayeredRD");
      let methodname = new StringName("set_texture_rd_rid");
      this._bindings.method_set_texture_rd_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2722037293
      );
    }
    {
      let classname = new StringName("TextureLayeredRD");
      let methodname = new StringName("get_texture_rd_rid");
      this._bindings.method_get_texture_rd_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
  }
  
  set_texture_rd_rid(_texture_rd_rid) {
    return _call_native_mb_no_ret(
      TextureLayeredRD._bindings.method_set_texture_rd_rid,
      this._owner,
      _texture_rd_rid
    );
    
  }
  get_texture_rd_rid() {
    return _call_native_mb_ret(
      TextureLayeredRD._bindings.method_get_texture_rd_rid,
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


  static {
    this._init_bindings();
  }
}