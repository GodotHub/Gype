import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { GodotObject } from '@js_godot/classes/godot_object'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_init_ref;
  method_reference;
  method_unreference;
  method_get_reference_count;
}
export class RefCounted extends GodotObject{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("RefCounted");
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
      let classname = new StringName("RefCounted");
      let methodname = new StringName("init_ref");
      this._bindings.method_init_ref = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("RefCounted");
      let methodname = new StringName("reference");
      this._bindings.method_reference = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("RefCounted");
      let methodname = new StringName("unreference");
      this._bindings.method_unreference = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("RefCounted");
      let methodname = new StringName("get_reference_count");
      this._bindings.method_get_reference_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
  }
  
  init_ref() {
    return _call_native_mb_ret(
      RefCounted._bindings.method_init_ref,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  reference() {
    return _call_native_mb_ret(
      RefCounted._bindings.method_reference,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  unreference() {
    return _call_native_mb_ret(
      RefCounted._bindings.method_unreference,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_reference_count() {
    return _call_native_mb_ret(
      RefCounted._bindings.method_get_reference_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  


  static {
    this._init_bindings();
  }
}