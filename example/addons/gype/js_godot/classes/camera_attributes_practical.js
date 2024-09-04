import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { CameraAttributes } from '@js_godot/classes/camera_attributes'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_dof_blur_far_enabled;
  method_is_dof_blur_far_enabled;
  method_set_dof_blur_far_distance;
  method_get_dof_blur_far_distance;
  method_set_dof_blur_far_transition;
  method_get_dof_blur_far_transition;
  method_set_dof_blur_near_enabled;
  method_is_dof_blur_near_enabled;
  method_set_dof_blur_near_distance;
  method_get_dof_blur_near_distance;
  method_set_dof_blur_near_transition;
  method_get_dof_blur_near_transition;
  method_set_dof_blur_amount;
  method_get_dof_blur_amount;
  method_set_auto_exposure_max_sensitivity;
  method_get_auto_exposure_max_sensitivity;
  method_set_auto_exposure_min_sensitivity;
  method_get_auto_exposure_min_sensitivity;
}
export class CameraAttributesPractical extends CameraAttributes{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("CameraAttributesPractical");
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
      let classname = new StringName("CameraAttributesPractical");
      let methodname = new StringName("set_dof_blur_far_enabled");
      this._bindings.method_set_dof_blur_far_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CameraAttributesPractical");
      let methodname = new StringName("is_dof_blur_far_enabled");
      this._bindings.method_is_dof_blur_far_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CameraAttributesPractical");
      let methodname = new StringName("set_dof_blur_far_distance");
      this._bindings.method_set_dof_blur_far_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CameraAttributesPractical");
      let methodname = new StringName("get_dof_blur_far_distance");
      this._bindings.method_get_dof_blur_far_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CameraAttributesPractical");
      let methodname = new StringName("set_dof_blur_far_transition");
      this._bindings.method_set_dof_blur_far_transition = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CameraAttributesPractical");
      let methodname = new StringName("get_dof_blur_far_transition");
      this._bindings.method_get_dof_blur_far_transition = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CameraAttributesPractical");
      let methodname = new StringName("set_dof_blur_near_enabled");
      this._bindings.method_set_dof_blur_near_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CameraAttributesPractical");
      let methodname = new StringName("is_dof_blur_near_enabled");
      this._bindings.method_is_dof_blur_near_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CameraAttributesPractical");
      let methodname = new StringName("set_dof_blur_near_distance");
      this._bindings.method_set_dof_blur_near_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CameraAttributesPractical");
      let methodname = new StringName("get_dof_blur_near_distance");
      this._bindings.method_get_dof_blur_near_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CameraAttributesPractical");
      let methodname = new StringName("set_dof_blur_near_transition");
      this._bindings.method_set_dof_blur_near_transition = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CameraAttributesPractical");
      let methodname = new StringName("get_dof_blur_near_transition");
      this._bindings.method_get_dof_blur_near_transition = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CameraAttributesPractical");
      let methodname = new StringName("set_dof_blur_amount");
      this._bindings.method_set_dof_blur_amount = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CameraAttributesPractical");
      let methodname = new StringName("get_dof_blur_amount");
      this._bindings.method_get_dof_blur_amount = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CameraAttributesPractical");
      let methodname = new StringName("set_auto_exposure_max_sensitivity");
      this._bindings.method_set_auto_exposure_max_sensitivity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CameraAttributesPractical");
      let methodname = new StringName("get_auto_exposure_max_sensitivity");
      this._bindings.method_get_auto_exposure_max_sensitivity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CameraAttributesPractical");
      let methodname = new StringName("set_auto_exposure_min_sensitivity");
      this._bindings.method_set_auto_exposure_min_sensitivity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CameraAttributesPractical");
      let methodname = new StringName("get_auto_exposure_min_sensitivity");
      this._bindings.method_get_auto_exposure_min_sensitivity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  set_dof_blur_far_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_dof_blur_far_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_dof_blur_far_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_dof_blur_far_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_dof_blur_far_distance(_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_dof_blur_far_distance,
      this._owner,
      _distance
    );
    
  }
  get_dof_blur_far_distance() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_dof_blur_far_distance,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_dof_blur_far_transition(_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_dof_blur_far_transition,
      this._owner,
      _distance
    );
    
  }
  get_dof_blur_far_transition() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_dof_blur_far_transition,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_dof_blur_near_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_dof_blur_near_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_dof_blur_near_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_dof_blur_near_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_dof_blur_near_distance(_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_dof_blur_near_distance,
      this._owner,
      _distance
    );
    
  }
  get_dof_blur_near_distance() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_dof_blur_near_distance,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_dof_blur_near_transition(_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_dof_blur_near_transition,
      this._owner,
      _distance
    );
    
  }
  get_dof_blur_near_transition() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_dof_blur_near_transition,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_dof_blur_amount(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_dof_blur_amount,
      this._owner,
      _amount
    );
    
  }
  get_dof_blur_amount() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_dof_blur_amount,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_auto_exposure_max_sensitivity(_max_sensitivity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_auto_exposure_max_sensitivity,
      this._owner,
      _max_sensitivity
    );
    
  }
  get_auto_exposure_max_sensitivity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_auto_exposure_max_sensitivity,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_auto_exposure_min_sensitivity(_min_sensitivity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_auto_exposure_min_sensitivity,
      this._owner,
      _min_sensitivity
    );
    
  }
  get_auto_exposure_min_sensitivity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_auto_exposure_min_sensitivity,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  
get dof_blur_far_enabled () {
  return this.is_dof_blur_far_enabled();
}
set dof_blur_far_enabled (new_value) {
  this.set_dof_blur_far_enabled(new_value);
}
get dof_blur_far_distance () {
  return this.get_dof_blur_far_distance();
}
set dof_blur_far_distance (new_value) {
  this.set_dof_blur_far_distance(new_value);
}
get dof_blur_far_transition () {
  return this.get_dof_blur_far_transition();
}
set dof_blur_far_transition (new_value) {
  this.set_dof_blur_far_transition(new_value);
}
get dof_blur_near_enabled () {
  return this.is_dof_blur_near_enabled();
}
set dof_blur_near_enabled (new_value) {
  this.set_dof_blur_near_enabled(new_value);
}
get dof_blur_near_distance () {
  return this.get_dof_blur_near_distance();
}
set dof_blur_near_distance (new_value) {
  this.set_dof_blur_near_distance(new_value);
}
get dof_blur_near_transition () {
  return this.get_dof_blur_near_transition();
}
set dof_blur_near_transition (new_value) {
  this.set_dof_blur_near_transition(new_value);
}
get dof_blur_amount () {
  return this.get_dof_blur_amount();
}
set dof_blur_amount (new_value) {
  this.set_dof_blur_amount(new_value);
}
get auto_exposure_min_sensitivity () {
  return this.get_auto_exposure_min_sensitivity();
}
set auto_exposure_min_sensitivity (new_value) {
  this.set_auto_exposure_min_sensitivity(new_value);
}
get auto_exposure_max_sensitivity () {
  return this.get_auto_exposure_max_sensitivity();
}
set auto_exposure_max_sensitivity (new_value) {
  this.set_auto_exposure_max_sensitivity(new_value);
}


  static {
    this._init_bindings();
  }
}