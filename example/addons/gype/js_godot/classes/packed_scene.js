import * as internal from '__internal__';
import { Resource } from '@js_godot/classes/resource'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_pack;
  method_instantiate;
  method_can_instantiate;
  method_get_state;
}
export class PackedScene extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PackedScene");
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
      let classname = new StringName("PackedScene");
      let methodname = new StringName("pack");
      this._bindings.method_pack = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2584678054
      );
    }
    {
      let classname = new StringName("PackedScene");
      let methodname = new StringName("instantiate");
      this._bindings.method_instantiate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2628778455
      );
    }
    {
      let classname = new StringName("PackedScene");
      let methodname = new StringName("can_instantiate");
      this._bindings.method_can_instantiate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("PackedScene");
      let methodname = new StringName("get_state");
      this._bindings.method_get_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3479783971
      );
    }
  }
  
  pack(_path) {
    return _call_native_mb_ret(
      PackedScene._bindings.method_pack,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  instantiate(_edit_state) {
    return _call_native_mb_ret(
      PackedScene._bindings.method_instantiate,
      this._owner,
			Variant.INT,
      _edit_state
    );
    
  }
  can_instantiate() {
    return _call_native_mb_ret(
      PackedScene._bindings.method_can_instantiate,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_state() {
    return _call_native_mb_ret(
      PackedScene._bindings.method_get_state,
      this._owner,
			Variant.INT,
      
    );
    
  }
  

  static GenEditState = {
    GEN_EDIT_STATE_DISABLED: 0,
    GEN_EDIT_STATE_INSTANCE: 1,
    GEN_EDIT_STATE_MAIN: 2,
    GEN_EDIT_STATE_MAIN_INHERITED: 3,
  }

  static {
    this._init_bindings();
  }
}