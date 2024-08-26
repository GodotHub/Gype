import * as internal from '__internal__';
import { OpenXRCompositionLayer } from 'src/js_godot/classesopen_xr_composition_layer'
class _MethodBindings {
    method_set_radius;
    method_get_radius;
    method_set_aspect_ratio;
    method_get_aspect_ratio;
    method_set_central_angle;
    method_get_central_angle;
    method_set_fallback_segments;
    method_get_fallback_segments;
}


export class OpenXRCompositionLayerCylinder extends OpenXRCompositionLayer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("OpenXRCompositionLayerCylinder");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("OpenXRCompositionLayerCylinder");
      let methodname = new StringName("set_radius");
      this._bindings.method_set_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("OpenXRCompositionLayerCylinder");
      let methodname = new StringName("get_radius");
      this._bindings.method_get_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("OpenXRCompositionLayerCylinder");
      let methodname = new StringName("set_aspect_ratio");
      this._bindings.method_set_aspect_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("OpenXRCompositionLayerCylinder");
      let methodname = new StringName("get_aspect_ratio");
      this._bindings.method_get_aspect_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("OpenXRCompositionLayerCylinder");
      let methodname = new StringName("set_central_angle");
      this._bindings.method_set_central_angle = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("OpenXRCompositionLayerCylinder");
      let methodname = new StringName("get_central_angle");
      this._bindings.method_get_central_angle = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("OpenXRCompositionLayerCylinder");
      let methodname = new StringName("set_fallback_segments");
      this._bindings.method_set_fallback_segments = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("OpenXRCompositionLayerCylinder");
      let methodname = new StringName("get_fallback_segments");
      this._bindings.method_get_fallback_segments = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
  }
  set_radius(_radius) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_radius,
      this._owner,
      _radius
    );
  }
  get_radius() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_aspect_ratio(_aspect_ratio) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_aspect_ratio,
      this._owner,
      _aspect_ratio
    );
  }
  get_aspect_ratio() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_aspect_ratio,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_central_angle(_angle) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_central_angle,
      this._owner,
      _angle
    );
  }
  get_central_angle() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_central_angle,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_fallback_segments(_segments) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fallback_segments,
      this._owner,
      _segments
    );
  }
  get_fallback_segments() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fallback_segments,
      this._owner,
			Variant.Type.INT,
      
    );
  }
}