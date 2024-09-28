import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { OpenXRCompositionLayer } from '@js_godot/classes/open_xr_composition_layer'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_radius;
  method_get_radius;
  method_set_central_horizontal_angle;
  method_get_central_horizontal_angle;
  method_set_upper_vertical_angle;
  method_get_upper_vertical_angle;
  method_set_lower_vertical_angle;
  method_get_lower_vertical_angle;
  method_set_fallback_segments;
  method_get_fallback_segments;
}
@GodotClass
export class OpenXRCompositionLayerEquirect extends OpenXRCompositionLayer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("OpenXRCompositionLayerEquirect");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_radius() {
    if (!this._bindings.method_set_radius) {
      let classname = new StringName("OpenXRCompositionLayerEquirect");
      let methodname = new StringName("set_radius");
      this._bindings.method_set_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_radius() {
    if (!this._bindings.method_get_radius) {
      let classname = new StringName("OpenXRCompositionLayerEquirect");
      let methodname = new StringName("get_radius");
      this._bindings.method_get_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_central_horizontal_angle() {
    if (!this._bindings.method_set_central_horizontal_angle) {
      let classname = new StringName("OpenXRCompositionLayerEquirect");
      let methodname = new StringName("set_central_horizontal_angle");
      this._bindings.method_set_central_horizontal_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_central_horizontal_angle() {
    if (!this._bindings.method_get_central_horizontal_angle) {
      let classname = new StringName("OpenXRCompositionLayerEquirect");
      let methodname = new StringName("get_central_horizontal_angle");
      this._bindings.method_get_central_horizontal_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_upper_vertical_angle() {
    if (!this._bindings.method_set_upper_vertical_angle) {
      let classname = new StringName("OpenXRCompositionLayerEquirect");
      let methodname = new StringName("set_upper_vertical_angle");
      this._bindings.method_set_upper_vertical_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_upper_vertical_angle() {
    if (!this._bindings.method_get_upper_vertical_angle) {
      let classname = new StringName("OpenXRCompositionLayerEquirect");
      let methodname = new StringName("get_upper_vertical_angle");
      this._bindings.method_get_upper_vertical_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_lower_vertical_angle() {
    if (!this._bindings.method_set_lower_vertical_angle) {
      let classname = new StringName("OpenXRCompositionLayerEquirect");
      let methodname = new StringName("set_lower_vertical_angle");
      this._bindings.method_set_lower_vertical_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_lower_vertical_angle() {
    if (!this._bindings.method_get_lower_vertical_angle) {
      let classname = new StringName("OpenXRCompositionLayerEquirect");
      let methodname = new StringName("get_lower_vertical_angle");
      this._bindings.method_get_lower_vertical_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_fallback_segments() {
    if (!this._bindings.method_set_fallback_segments) {
      let classname = new StringName("OpenXRCompositionLayerEquirect");
      let methodname = new StringName("set_fallback_segments");
      this._bindings.method_set_fallback_segments = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_fallback_segments() {
    if (!this._bindings.method_get_fallback_segments) {
      let classname = new StringName("OpenXRCompositionLayerEquirect");
      let methodname = new StringName("get_fallback_segments");
      this._bindings.method_get_fallback_segments = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }

  
  
  set_radius(_radius) {
    OpenXRCompositionLayerEquirect.init_method_set_radius();
    return _call_native_mb_no_ret(
      OpenXRCompositionLayerEquirect._bindings.method_set_radius,
      this._owner,
      _radius
    );
    
  }
  get_radius() {
    OpenXRCompositionLayerEquirect.init_method_get_radius();
    return _call_native_mb_ret(
      OpenXRCompositionLayerEquirect._bindings.method_get_radius,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_central_horizontal_angle(_angle) {
    OpenXRCompositionLayerEquirect.init_method_set_central_horizontal_angle();
    return _call_native_mb_no_ret(
      OpenXRCompositionLayerEquirect._bindings.method_set_central_horizontal_angle,
      this._owner,
      _angle
    );
    
  }
  get_central_horizontal_angle() {
    OpenXRCompositionLayerEquirect.init_method_get_central_horizontal_angle();
    return _call_native_mb_ret(
      OpenXRCompositionLayerEquirect._bindings.method_get_central_horizontal_angle,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_upper_vertical_angle(_angle) {
    OpenXRCompositionLayerEquirect.init_method_set_upper_vertical_angle();
    return _call_native_mb_no_ret(
      OpenXRCompositionLayerEquirect._bindings.method_set_upper_vertical_angle,
      this._owner,
      _angle
    );
    
  }
  get_upper_vertical_angle() {
    OpenXRCompositionLayerEquirect.init_method_get_upper_vertical_angle();
    return _call_native_mb_ret(
      OpenXRCompositionLayerEquirect._bindings.method_get_upper_vertical_angle,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_lower_vertical_angle(_angle) {
    OpenXRCompositionLayerEquirect.init_method_set_lower_vertical_angle();
    return _call_native_mb_no_ret(
      OpenXRCompositionLayerEquirect._bindings.method_set_lower_vertical_angle,
      this._owner,
      _angle
    );
    
  }
  get_lower_vertical_angle() {
    OpenXRCompositionLayerEquirect.init_method_get_lower_vertical_angle();
    return _call_native_mb_ret(
      OpenXRCompositionLayerEquirect._bindings.method_get_lower_vertical_angle,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_fallback_segments(_segments) {
    OpenXRCompositionLayerEquirect.init_method_set_fallback_segments();
    return _call_native_mb_no_ret(
      OpenXRCompositionLayerEquirect._bindings.method_set_fallback_segments,
      this._owner,
      _segments
    );
    
  }
  get_fallback_segments() {
    OpenXRCompositionLayerEquirect.init_method_get_fallback_segments();
    return _call_native_mb_ret(
      OpenXRCompositionLayerEquirect._bindings.method_get_fallback_segments,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get radius () {
  return this.get_radius();
}
set radius (new_value) {
  this.set_radius(new_value);
}
get central_horizontal_angle () {
  return this.get_central_horizontal_angle();
}
set central_horizontal_angle (new_value) {
  this.set_central_horizontal_angle(new_value);
}
get upper_vertical_angle () {
  return this.get_upper_vertical_angle();
}
set upper_vertical_angle (new_value) {
  this.set_upper_vertical_angle(new_value);
}
get lower_vertical_angle () {
  return this.get_lower_vertical_angle();
}
set lower_vertical_angle (new_value) {
  this.set_lower_vertical_angle(new_value);
}
get fallback_segments () {
  return this.get_fallback_segments();
}
set fallback_segments (new_value) {
  this.set_fallback_segments(new_value);
}

}