import * as internal from '__internal__';
import { VisualInstance3D } from '@js_godot/classes/visual_instance3d'
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
  method_set_size;
  method_get_size;
  method_set_shape;
  method_get_shape;
  method_set_material;
  method_get_material;
}
@GodotClass
export class FogVolume extends VisualInstance3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("FogVolume");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_size() {
    if (!this._bindings.method_set_size) {
      let classname = new StringName("FogVolume");
      let methodname = new StringName("set_size");
      this._bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_size() {
    if (!this._bindings.method_get_size) {
      let classname = new StringName("FogVolume");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_shape() {
    if (!this._bindings.method_set_shape) {
      let classname = new StringName("FogVolume");
      let methodname = new StringName("set_shape");
      this._bindings.method_set_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1416323362
      );
    }
  }
  static init_method_get_shape() {
    if (!this._bindings.method_get_shape) {
      let classname = new StringName("FogVolume");
      let methodname = new StringName("get_shape");
      this._bindings.method_get_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3920334604
      );
    }
  }
  static init_method_set_material() {
    if (!this._bindings.method_set_material) {
      let classname = new StringName("FogVolume");
      let methodname = new StringName("set_material");
      this._bindings.method_set_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2757459619
      );
    }
  }
  static init_method_get_material() {
    if (!this._bindings.method_get_material) {
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
    FogVolume.init_method_set_size();
    return _call_native_mb_no_ret(
      FogVolume._bindings.method_set_size,
      this._owner,
      _size
    );
    
  }
  get_size() {
    FogVolume.init_method_get_size();
    return _call_native_mb_ret(
      FogVolume._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_shape(_shape) {
    FogVolume.init_method_set_shape();
    return _call_native_mb_no_ret(
      FogVolume._bindings.method_set_shape,
      this._owner,
      _shape
    );
    
  }
  get_shape() {
    FogVolume.init_method_get_shape();
    return _call_native_mb_ret(
      FogVolume._bindings.method_get_shape,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_material(_material) {
    FogVolume.init_method_set_material();
    return _call_native_mb_no_ret(
      FogVolume._bindings.method_set_material,
      this._owner,
      _material
    );
    
  }
  get_material() {
    FogVolume.init_method_get_material();
    return _call_native_mb_ret(
      FogVolume._bindings.method_get_material,
      this._owner,
			Variant.Type.OBJECT,
      
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

}