import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { PrimitiveMesh } from '@js_godot/classes/primitive_mesh'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_top_radius;
  method_get_top_radius;
  method_set_bottom_radius;
  method_get_bottom_radius;
  method_set_height;
  method_get_height;
  method_set_radial_segments;
  method_get_radial_segments;
  method_set_rings;
  method_get_rings;
  method_set_cap_top;
  method_is_cap_top;
  method_set_cap_bottom;
  method_is_cap_bottom;
}
export class CylinderMesh extends PrimitiveMesh{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("CylinderMesh");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_top_radius() {
    if (!this.#_bindings.method_set_top_radius) {
      let classname = new StringName("CylinderMesh");
      let methodname = new StringName("set_top_radius");
      this.#_bindings.method_set_top_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_top_radius() {
    if (!this.#_bindings.method_get_top_radius) {
      let classname = new StringName("CylinderMesh");
      let methodname = new StringName("get_top_radius");
      this.#_bindings.method_get_top_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_bottom_radius() {
    if (!this.#_bindings.method_set_bottom_radius) {
      let classname = new StringName("CylinderMesh");
      let methodname = new StringName("set_bottom_radius");
      this.#_bindings.method_set_bottom_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_bottom_radius() {
    if (!this.#_bindings.method_get_bottom_radius) {
      let classname = new StringName("CylinderMesh");
      let methodname = new StringName("get_bottom_radius");
      this.#_bindings.method_get_bottom_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_height() {
    if (!this.#_bindings.method_set_height) {
      let classname = new StringName("CylinderMesh");
      let methodname = new StringName("set_height");
      this.#_bindings.method_set_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_height() {
    if (!this.#_bindings.method_get_height) {
      let classname = new StringName("CylinderMesh");
      let methodname = new StringName("get_height");
      this.#_bindings.method_get_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_radial_segments() {
    if (!this.#_bindings.method_set_radial_segments) {
      let classname = new StringName("CylinderMesh");
      let methodname = new StringName("set_radial_segments");
      this.#_bindings.method_set_radial_segments = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_radial_segments() {
    if (!this.#_bindings.method_get_radial_segments) {
      let classname = new StringName("CylinderMesh");
      let methodname = new StringName("get_radial_segments");
      this.#_bindings.method_get_radial_segments = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_rings() {
    if (!this.#_bindings.method_set_rings) {
      let classname = new StringName("CylinderMesh");
      let methodname = new StringName("set_rings");
      this.#_bindings.method_set_rings = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_rings() {
    if (!this.#_bindings.method_get_rings) {
      let classname = new StringName("CylinderMesh");
      let methodname = new StringName("get_rings");
      this.#_bindings.method_get_rings = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_cap_top() {
    if (!this.#_bindings.method_set_cap_top) {
      let classname = new StringName("CylinderMesh");
      let methodname = new StringName("set_cap_top");
      this.#_bindings.method_set_cap_top = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_cap_top() {
    if (!this.#_bindings.method_is_cap_top) {
      let classname = new StringName("CylinderMesh");
      let methodname = new StringName("is_cap_top");
      this.#_bindings.method_is_cap_top = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_cap_bottom() {
    if (!this.#_bindings.method_set_cap_bottom) {
      let classname = new StringName("CylinderMesh");
      let methodname = new StringName("set_cap_bottom");
      this.#_bindings.method_set_cap_bottom = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_cap_bottom() {
    if (!this.#_bindings.method_is_cap_bottom) {
      let classname = new StringName("CylinderMesh");
      let methodname = new StringName("is_cap_bottom");
      this.#_bindings.method_is_cap_bottom = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_top_radius(_radius) {
    CylinderMesh.init_method_set_top_radius();
    return _call_native_mb_no_ret(
      CylinderMesh.#_bindings.method_set_top_radius,
      this._owner,
      _radius
    );
    
  }
  get_top_radius() {
    CylinderMesh.init_method_get_top_radius();
    return _call_native_mb_ret(
      CylinderMesh.#_bindings.method_get_top_radius,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_bottom_radius(_radius) {
    CylinderMesh.init_method_set_bottom_radius();
    return _call_native_mb_no_ret(
      CylinderMesh.#_bindings.method_set_bottom_radius,
      this._owner,
      _radius
    );
    
  }
  get_bottom_radius() {
    CylinderMesh.init_method_get_bottom_radius();
    return _call_native_mb_ret(
      CylinderMesh.#_bindings.method_get_bottom_radius,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_height(_height) {
    CylinderMesh.init_method_set_height();
    return _call_native_mb_no_ret(
      CylinderMesh.#_bindings.method_set_height,
      this._owner,
      _height
    );
    
  }
  get_height() {
    CylinderMesh.init_method_get_height();
    return _call_native_mb_ret(
      CylinderMesh.#_bindings.method_get_height,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_radial_segments(_segments) {
    CylinderMesh.init_method_set_radial_segments();
    return _call_native_mb_no_ret(
      CylinderMesh.#_bindings.method_set_radial_segments,
      this._owner,
      _segments
    );
    
  }
  get_radial_segments() {
    CylinderMesh.init_method_get_radial_segments();
    return _call_native_mb_ret(
      CylinderMesh.#_bindings.method_get_radial_segments,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_rings(_rings) {
    CylinderMesh.init_method_set_rings();
    return _call_native_mb_no_ret(
      CylinderMesh.#_bindings.method_set_rings,
      this._owner,
      _rings
    );
    
  }
  get_rings() {
    CylinderMesh.init_method_get_rings();
    return _call_native_mb_ret(
      CylinderMesh.#_bindings.method_get_rings,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_cap_top(_cap_top) {
    CylinderMesh.init_method_set_cap_top();
    return _call_native_mb_no_ret(
      CylinderMesh.#_bindings.method_set_cap_top,
      this._owner,
      _cap_top
    );
    
  }
  is_cap_top() {
    CylinderMesh.init_method_is_cap_top();
    return _call_native_mb_ret(
      CylinderMesh.#_bindings.method_is_cap_top,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_cap_bottom(_cap_bottom) {
    CylinderMesh.init_method_set_cap_bottom();
    return _call_native_mb_no_ret(
      CylinderMesh.#_bindings.method_set_cap_bottom,
      this._owner,
      _cap_bottom
    );
    
  }
  is_cap_bottom() {
    CylinderMesh.init_method_is_cap_bottom();
    return _call_native_mb_ret(
      CylinderMesh.#_bindings.method_is_cap_bottom,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get top_radius () {
  return this.get_top_radius();
}
set top_radius (new_value) {
  this.set_top_radius(new_value);
}
get bottom_radius () {
  return this.get_bottom_radius();
}
set bottom_radius (new_value) {
  this.set_bottom_radius(new_value);
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
get cap_top () {
  return this.is_cap_top();
}
set cap_top (new_value) {
  this.set_cap_top(new_value);
}
get cap_bottom () {
  return this.is_cap_bottom();
}
set cap_bottom (new_value) {
  this.set_cap_bottom(new_value);
}

}