import * as internal from '__internal__';
import { PrimitiveMesh } from 'src/js_godot/classesprimitive_mesh'
class _MethodBindings {
    method_set_radius;
    method_get_radius;
    method_set_height;
    method_get_height;
    method_set_radial_segments;
    method_get_radial_segments;
    method_set_rings;
    method_get_rings;
    method_set_is_hemisphere;
    method_get_is_hemisphere;
}


export class SphereMesh extends PrimitiveMesh{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SphereMesh");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("SphereMesh");
      let methodname = new StringName("set_radius");
      this._bindings.method_set_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("SphereMesh");
      let methodname = new StringName("get_radius");
      this._bindings.method_get_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("SphereMesh");
      let methodname = new StringName("set_height");
      this._bindings.method_set_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("SphereMesh");
      let methodname = new StringName("get_height");
      this._bindings.method_get_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("SphereMesh");
      let methodname = new StringName("set_radial_segments");
      this._bindings.method_set_radial_segments = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("SphereMesh");
      let methodname = new StringName("get_radial_segments");
      this._bindings.method_get_radial_segments = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("SphereMesh");
      let methodname = new StringName("set_rings");
      this._bindings.method_set_rings = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("SphereMesh");
      let methodname = new StringName("get_rings");
      this._bindings.method_get_rings = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("SphereMesh");
      let methodname = new StringName("set_is_hemisphere");
      this._bindings.method_set_is_hemisphere = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("SphereMesh");
      let methodname = new StringName("get_is_hemisphere");
      this._bindings.method_get_is_hemisphere = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
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
  set_height(_height) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_height,
      this._owner,
      _height
    );
  }
  get_height() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_height,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_radial_segments(_radial_segments) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_radial_segments,
      this._owner,
      _radial_segments
    );
  }
  get_radial_segments() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_radial_segments,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_rings(_rings) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_rings,
      this._owner,
      _rings
    );
  }
  get_rings() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rings,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_is_hemisphere(_is_hemisphere) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_is_hemisphere,
      this._owner,
      _is_hemisphere
    );
  }
  get_is_hemisphere() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_is_hemisphere,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
}