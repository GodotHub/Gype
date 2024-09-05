import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { XRInterface } from '@js_godot/classes/xr_interface'
import { Variant } from '@js_godot/variant/variant'
import { Rect2 } from '@js_godot/variant/rect2'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_eye_height;
  method_get_eye_height;
  method_set_iod;
  method_get_iod;
  method_set_display_width;
  method_get_display_width;
  method_set_display_to_lens;
  method_get_display_to_lens;
  method_set_offset_rect;
  method_get_offset_rect;
  method_set_oversample;
  method_get_oversample;
  method_set_k1;
  method_get_k1;
  method_set_k2;
  method_get_k2;
  method_get_vrs_min_radius;
  method_set_vrs_min_radius;
  method_get_vrs_strength;
  method_set_vrs_strength;
}
export class MobileVRInterface extends XRInterface{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("MobileVRInterface");
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
      let classname = new StringName("MobileVRInterface");
      let methodname = new StringName("set_eye_height");
      this._bindings.method_set_eye_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("MobileVRInterface");
      let methodname = new StringName("get_eye_height");
      this._bindings.method_get_eye_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("MobileVRInterface");
      let methodname = new StringName("set_iod");
      this._bindings.method_set_iod = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("MobileVRInterface");
      let methodname = new StringName("get_iod");
      this._bindings.method_get_iod = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("MobileVRInterface");
      let methodname = new StringName("set_display_width");
      this._bindings.method_set_display_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("MobileVRInterface");
      let methodname = new StringName("get_display_width");
      this._bindings.method_get_display_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("MobileVRInterface");
      let methodname = new StringName("set_display_to_lens");
      this._bindings.method_set_display_to_lens = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("MobileVRInterface");
      let methodname = new StringName("get_display_to_lens");
      this._bindings.method_get_display_to_lens = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("MobileVRInterface");
      let methodname = new StringName("set_offset_rect");
      this._bindings.method_set_offset_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2046264180
      );
    }
    {
      let classname = new StringName("MobileVRInterface");
      let methodname = new StringName("get_offset_rect");
      this._bindings.method_get_offset_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1639390495
      );
    }
    {
      let classname = new StringName("MobileVRInterface");
      let methodname = new StringName("set_oversample");
      this._bindings.method_set_oversample = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("MobileVRInterface");
      let methodname = new StringName("get_oversample");
      this._bindings.method_get_oversample = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("MobileVRInterface");
      let methodname = new StringName("set_k1");
      this._bindings.method_set_k1 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("MobileVRInterface");
      let methodname = new StringName("get_k1");
      this._bindings.method_get_k1 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("MobileVRInterface");
      let methodname = new StringName("set_k2");
      this._bindings.method_set_k2 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("MobileVRInterface");
      let methodname = new StringName("get_k2");
      this._bindings.method_get_k2 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("MobileVRInterface");
      let methodname = new StringName("get_vrs_min_radius");
      this._bindings.method_get_vrs_min_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("MobileVRInterface");
      let methodname = new StringName("set_vrs_min_radius");
      this._bindings.method_set_vrs_min_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("MobileVRInterface");
      let methodname = new StringName("get_vrs_strength");
      this._bindings.method_get_vrs_strength = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("MobileVRInterface");
      let methodname = new StringName("set_vrs_strength");
      this._bindings.method_set_vrs_strength = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
  }
  
  set_eye_height(_eye_height) {
    return _call_native_mb_no_ret(
      MobileVRInterface._bindings.method_set_eye_height,
      this._owner,
      _eye_height
    );
    
  }
  get_eye_height() {
    return _call_native_mb_ret(
      MobileVRInterface._bindings.method_get_eye_height,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_iod(_iod) {
    return _call_native_mb_no_ret(
      MobileVRInterface._bindings.method_set_iod,
      this._owner,
      _iod
    );
    
  }
  get_iod() {
    return _call_native_mb_ret(
      MobileVRInterface._bindings.method_get_iod,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_display_width(_display_width) {
    return _call_native_mb_no_ret(
      MobileVRInterface._bindings.method_set_display_width,
      this._owner,
      _display_width
    );
    
  }
  get_display_width() {
    return _call_native_mb_ret(
      MobileVRInterface._bindings.method_get_display_width,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_display_to_lens(_display_to_lens) {
    return _call_native_mb_no_ret(
      MobileVRInterface._bindings.method_set_display_to_lens,
      this._owner,
      _display_to_lens
    );
    
  }
  get_display_to_lens() {
    return _call_native_mb_ret(
      MobileVRInterface._bindings.method_get_display_to_lens,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_offset_rect(_offset_rect) {
    return _call_native_mb_no_ret(
      MobileVRInterface._bindings.method_set_offset_rect,
      this._owner,
      _offset_rect
    );
    
  }
  get_offset_rect() {
    return _call_native_mb_ret(
      MobileVRInterface._bindings.method_get_offset_rect,
      this._owner,
			Variant.Type.RECT2,
    
      
    );
    
  }
  set_oversample(_oversample) {
    return _call_native_mb_no_ret(
      MobileVRInterface._bindings.method_set_oversample,
      this._owner,
      _oversample
    );
    
  }
  get_oversample() {
    return _call_native_mb_ret(
      MobileVRInterface._bindings.method_get_oversample,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_k1(_k) {
    return _call_native_mb_no_ret(
      MobileVRInterface._bindings.method_set_k1,
      this._owner,
      _k
    );
    
  }
  get_k1() {
    return _call_native_mb_ret(
      MobileVRInterface._bindings.method_get_k1,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_k2(_k) {
    return _call_native_mb_no_ret(
      MobileVRInterface._bindings.method_set_k2,
      this._owner,
      _k
    );
    
  }
  get_k2() {
    return _call_native_mb_ret(
      MobileVRInterface._bindings.method_get_k2,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_vrs_min_radius() {
    return _call_native_mb_ret(
      MobileVRInterface._bindings.method_get_vrs_min_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_vrs_min_radius(_radius) {
    return _call_native_mb_no_ret(
      MobileVRInterface._bindings.method_set_vrs_min_radius,
      this._owner,
      _radius
    );
    
  }
  get_vrs_strength() {
    return _call_native_mb_ret(
      MobileVRInterface._bindings.method_get_vrs_strength,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_vrs_strength(_strength) {
    return _call_native_mb_no_ret(
      MobileVRInterface._bindings.method_set_vrs_strength,
      this._owner,
      _strength
    );
    
  }
  
get eye_height () {
  return this.get_eye_height();
}
set eye_height (new_value) {
  this.set_eye_height(new_value);
}
get iod () {
  return this.get_iod();
}
set iod (new_value) {
  this.set_iod(new_value);
}
get display_width () {
  return this.get_display_width();
}
set display_width (new_value) {
  this.set_display_width(new_value);
}
get display_to_lens () {
  return this.get_display_to_lens();
}
set display_to_lens (new_value) {
  this.set_display_to_lens(new_value);
}
get offset_rect () {
  return this.get_offset_rect();
}
set offset_rect (new_value) {
  this.set_offset_rect(new_value);
}
get oversample () {
  return this.get_oversample();
}
set oversample (new_value) {
  this.set_oversample(new_value);
}
get k1 () {
  return this.get_k1();
}
set k1 (new_value) {
  this.set_k1(new_value);
}
get k2 () {
  return this.get_k2();
}
set k2 (new_value) {
  this.set_k2(new_value);
}
get vrs_min_radius () {
  return this.get_vrs_min_radius();
}
set vrs_min_radius (new_value) {
  this.set_vrs_min_radius(new_value);
}
get vrs_strength () {
  return this.get_vrs_strength();
}
set vrs_strength (new_value) {
  this.set_vrs_strength(new_value);
}


  static {
    this._init_bindings();
  }
}