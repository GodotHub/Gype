import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { OpenXRCompositionLayer } from '@js_godot/classes/open_xr_composition_layer'
import { Vector2 } from '@js_godot/variant/vector2'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_quad_size;
  method_get_quad_size;
}
export class OpenXRCompositionLayerQuad extends OpenXRCompositionLayer{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("OpenXRCompositionLayerQuad");
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
      let classname = new StringName("OpenXRCompositionLayerQuad");
      let methodname = new StringName("set_quad_size");
      this._bindings.method_set_quad_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("OpenXRCompositionLayerQuad");
      let methodname = new StringName("get_quad_size");
      this._bindings.method_get_quad_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
  }
  
  set_quad_size(_size) {
    return _call_native_mb_no_ret(
      OpenXRCompositionLayerQuad._bindings.method_set_quad_size,
      this._owner,
      _size
    );
    
  }
  get_quad_size() {
    return _call_native_mb_ret(
      OpenXRCompositionLayerQuad._bindings.method_get_quad_size,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  
get quad_size () {
  return this.get_quad_size();
}
set quad_size (new_value) {
  this.set_quad_size(new_value);
}


  static {
    this._init_bindings();
  }
}