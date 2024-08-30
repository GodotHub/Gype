import * as internal from '__internal__';
import { StringName } from 'src/js_godot/variant/string_name'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { OpenXRCompositionLayer } from 'src/js_godot/classes/open_xr_composition_layer'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_quad_size;
    method_get_quad_size;
}


export class OpenXRCompositionLayerQuad extends OpenXRCompositionLayer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("OpenXRCompositionLayerQuad");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
      ClassDB._bindings.method_set_quad_size,
      this._owner,
      _size
    );
    
  }
  get_quad_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_quad_size,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
}