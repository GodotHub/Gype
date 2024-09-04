import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Vector3 } from '@js_godot/variant/vector3'
import { VisualInstance3D } from '@js_godot/classes/visual_instance3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_size;
  method_get_size;
  method_set_shape;
  method_get_shape;
  method_set_material;
  method_get_material;
}
export class FogVolume extends VisualInstance3D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("FogVolume");
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
      let classname = new StringName("FogVolume");
      let methodname = new StringName("set_size");
      this._bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("FogVolume");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("FogVolume");
      let methodname = new StringName("set_shape");
      this._bindings.method_set_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1416323362
      );
    }
    {
      let classname = new StringName("FogVolume");
      let methodname = new StringName("get_shape");
      this._bindings.method_get_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3920334604
      );
    }
    {
      let classname = new StringName("FogVolume");
      let methodname = new StringName("set_material");
      this._bindings.method_set_material = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2757459619
      );
    }
    {
      let classname = new StringName("FogVolume");
      let methodname = new StringName("get_material");
      this._bindings.method_get_material = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        5934680
      );
    }
  }
  set_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_size,
      this._owner,
      _size
    );
    
  }
  get_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_shape(_shape) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shape,
      this._owner,
      _shape
    );
    
  }
  get_shape() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_shape,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_material(_material) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_material,
      this._owner,
      _material
    );
    
  }
  get_material() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_material,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get size () {
  return this.get_size();
}
set size (new_value) {
  this.set_size(new_value);
}
get shape () {
  return this.get_shape();
}
set shape (new_value) {
  this.set_shape(new_value);
}
get material () {
  return this.get_material();
}
set material (new_value) {
  this.set_material(new_value);
}


  static {
    this._init_bindings();
  }
}