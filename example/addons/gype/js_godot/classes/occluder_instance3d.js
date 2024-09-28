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
  method_set_bake_mask;
  method_get_bake_mask;
  method_set_bake_mask_value;
  method_get_bake_mask_value;
  method_set_bake_simplification_distance;
  method_get_bake_simplification_distance;
  method_set_occluder;
  method_get_occluder;
}
@GodotClass
export class OccluderInstance3D extends VisualInstance3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("OccluderInstance3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_bake_mask() {
    if (!this._bindings.method_set_bake_mask) {
      let classname = new StringName("OccluderInstance3D");
      let methodname = new StringName("set_bake_mask");
      this._bindings.method_set_bake_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_bake_mask() {
    if (!this._bindings.method_get_bake_mask) {
      let classname = new StringName("OccluderInstance3D");
      let methodname = new StringName("get_bake_mask");
      this._bindings.method_get_bake_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_bake_mask_value() {
    if (!this._bindings.method_set_bake_mask_value) {
      let classname = new StringName("OccluderInstance3D");
      let methodname = new StringName("set_bake_mask_value");
      this._bindings.method_set_bake_mask_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_bake_mask_value() {
    if (!this._bindings.method_get_bake_mask_value) {
      let classname = new StringName("OccluderInstance3D");
      let methodname = new StringName("get_bake_mask_value");
      this._bindings.method_get_bake_mask_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_bake_simplification_distance() {
    if (!this._bindings.method_set_bake_simplification_distance) {
      let classname = new StringName("OccluderInstance3D");
      let methodname = new StringName("set_bake_simplification_distance");
      this._bindings.method_set_bake_simplification_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_bake_simplification_distance() {
    if (!this._bindings.method_get_bake_simplification_distance) {
      let classname = new StringName("OccluderInstance3D");
      let methodname = new StringName("get_bake_simplification_distance");
      this._bindings.method_get_bake_simplification_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_occluder() {
    if (!this._bindings.method_set_occluder) {
      let classname = new StringName("OccluderInstance3D");
      let methodname = new StringName("set_occluder");
      this._bindings.method_set_occluder = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1664878165
      );
    }
  }
  static init_method_get_occluder() {
    if (!this._bindings.method_get_occluder) {
      let classname = new StringName("OccluderInstance3D");
      let methodname = new StringName("get_occluder");
      this._bindings.method_get_occluder = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1696836198
      );
    }
  }

  
  
  set_bake_mask(_mask) {
    OccluderInstance3D.init_method_set_bake_mask();
    return _call_native_mb_no_ret(
      OccluderInstance3D._bindings.method_set_bake_mask,
      this._owner,
      _mask
    );
    
  }
  get_bake_mask() {
    OccluderInstance3D.init_method_get_bake_mask();
    return _call_native_mb_ret(
      OccluderInstance3D._bindings.method_get_bake_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_bake_mask_value(_layer_number, _value) {
    OccluderInstance3D.init_method_set_bake_mask_value();
    return _call_native_mb_no_ret(
      OccluderInstance3D._bindings.method_set_bake_mask_value,
      this._owner,
      _layer_number, _value
    );
    
  }
  get_bake_mask_value(_layer_number) {
    OccluderInstance3D.init_method_get_bake_mask_value();
    return _call_native_mb_ret(
      OccluderInstance3D._bindings.method_get_bake_mask_value,
      this._owner,
			Variant.Type.BOOL,
    
      _layer_number
    );
    
  }
  set_bake_simplification_distance(_simplification_distance) {
    OccluderInstance3D.init_method_set_bake_simplification_distance();
    return _call_native_mb_no_ret(
      OccluderInstance3D._bindings.method_set_bake_simplification_distance,
      this._owner,
      _simplification_distance
    );
    
  }
  get_bake_simplification_distance() {
    OccluderInstance3D.init_method_get_bake_simplification_distance();
    return _call_native_mb_ret(
      OccluderInstance3D._bindings.method_get_bake_simplification_distance,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_occluder(_occluder) {
    OccluderInstance3D.init_method_set_occluder();
    return _call_native_mb_no_ret(
      OccluderInstance3D._bindings.method_set_occluder,
      this._owner,
      _occluder
    );
    
  }
  get_occluder() {
    OccluderInstance3D.init_method_get_occluder();
    return _call_native_mb_ret(
      OccluderInstance3D._bindings.method_get_occluder,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get occluder () {
  return this.get_occluder();
}
set occluder (new_value) {
  this.set_occluder(new_value);
}
get bake_mask () {
  return this.get_bake_mask();
}
set bake_mask (new_value) {
  this.set_bake_mask(new_value);
}
get bake_simplification_distance () {
  return this.get_bake_simplification_distance();
}
set bake_simplification_distance (new_value) {
  this.set_bake_simplification_distance(new_value);
}

}