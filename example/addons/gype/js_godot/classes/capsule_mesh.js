import * as internal from '__internal__';
import { PrimitiveMesh } from '@js_godot/classes/primitive_mesh'
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
  method_set_radius;
  method_get_radius;
  method_set_height;
  method_get_height;
  method_set_radial_segments;
  method_get_radial_segments;
  method_set_rings;
  method_get_rings;
}
@GodotClass
export class CapsuleMesh extends PrimitiveMesh{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CapsuleMesh");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_radius() {
    if (!this._bindings.method_set_radius) {
      let classname = new StringName("CapsuleMesh");
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
      let classname = new StringName("CapsuleMesh");
      let methodname = new StringName("get_radius");
      this._bindings.method_get_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_height() {
    if (!this._bindings.method_set_height) {
      let classname = new StringName("CapsuleMesh");
      let methodname = new StringName("set_height");
      this._bindings.method_set_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_height() {
    if (!this._bindings.method_get_height) {
      let classname = new StringName("CapsuleMesh");
      let methodname = new StringName("get_height");
      this._bindings.method_get_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_radial_segments() {
    if (!this._bindings.method_set_radial_segments) {
      let classname = new StringName("CapsuleMesh");
      let methodname = new StringName("set_radial_segments");
      this._bindings.method_set_radial_segments = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_radial_segments() {
    if (!this._bindings.method_get_radial_segments) {
      let classname = new StringName("CapsuleMesh");
      let methodname = new StringName("get_radial_segments");
      this._bindings.method_get_radial_segments = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_rings() {
    if (!this._bindings.method_set_rings) {
      let classname = new StringName("CapsuleMesh");
      let methodname = new StringName("set_rings");
      this._bindings.method_set_rings = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_rings() {
    if (!this._bindings.method_get_rings) {
      let classname = new StringName("CapsuleMesh");
      let methodname = new StringName("get_rings");
      this._bindings.method_get_rings = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }

  
  
  set_radius(_radius) {
    CapsuleMesh.init_method_set_radius();
    return _call_native_mb_no_ret(
      CapsuleMesh._bindings.method_set_radius,
      this._owner,
      _radius
    );
    
  }
  get_radius() {
    CapsuleMesh.init_method_get_radius();
    return _call_native_mb_ret(
      CapsuleMesh._bindings.method_get_radius,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_height(_height) {
    CapsuleMesh.init_method_set_height();
    return _call_native_mb_no_ret(
      CapsuleMesh._bindings.method_set_height,
      this._owner,
      _height
    );
    
  }
  get_height() {
    CapsuleMesh.init_method_get_height();
    return _call_native_mb_ret(
      CapsuleMesh._bindings.method_get_height,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_radial_segments(_segments) {
    CapsuleMesh.init_method_set_radial_segments();
    return _call_native_mb_no_ret(
      CapsuleMesh._bindings.method_set_radial_segments,
      this._owner,
      _segments
    );
    
  }
  get_radial_segments() {
    CapsuleMesh.init_method_get_radial_segments();
    return _call_native_mb_ret(
      CapsuleMesh._bindings.method_get_radial_segments,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_rings(_rings) {
    CapsuleMesh.init_method_set_rings();
    return _call_native_mb_no_ret(
      CapsuleMesh._bindings.method_set_rings,
      this._owner,
      _rings
    );
    
  }
  get_rings() {
    CapsuleMesh.init_method_get_rings();
    return _call_native_mb_ret(
      CapsuleMesh._bindings.method_get_rings,
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
get height () {
  return this.get_height();
}
set height (new_value) {
  this.set_height(new_value);
}
get radial_segments () {
  return this.get_radial_segments();
}
set radial_segments (new_value) {
  this.set_radial_segments(new_value);
}
get rings () {
  return this.get_rings();
}
set rings (new_value) {
  this.set_rings(new_value);
}

}