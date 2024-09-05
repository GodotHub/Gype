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

class _MethodBindings {
  method_set_inner_radius;
  method_get_inner_radius;
  method_set_outer_radius;
  method_get_outer_radius;
  method_set_rings;
  method_get_rings;
  method_set_ring_segments;
  method_get_ring_segments;
}
export class TorusMesh extends PrimitiveMesh{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("TorusMesh");
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
      let classname = new StringName("TorusMesh");
      let methodname = new StringName("set_inner_radius");
      this._bindings.method_set_inner_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("TorusMesh");
      let methodname = new StringName("get_inner_radius");
      this._bindings.method_get_inner_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("TorusMesh");
      let methodname = new StringName("set_outer_radius");
      this._bindings.method_set_outer_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("TorusMesh");
      let methodname = new StringName("get_outer_radius");
      this._bindings.method_get_outer_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("TorusMesh");
      let methodname = new StringName("set_rings");
      this._bindings.method_set_rings = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("TorusMesh");
      let methodname = new StringName("get_rings");
      this._bindings.method_get_rings = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("TorusMesh");
      let methodname = new StringName("set_ring_segments");
      this._bindings.method_set_ring_segments = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("TorusMesh");
      let methodname = new StringName("get_ring_segments");
      this._bindings.method_get_ring_segments = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
  }
  
  set_inner_radius(_radius) {
    return _call_native_mb_no_ret(
      TorusMesh._bindings.method_set_inner_radius,
      this._owner,
      _radius
    );
    
  }
  get_inner_radius() {
    return _call_native_mb_ret(
      TorusMesh._bindings.method_get_inner_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_outer_radius(_radius) {
    return _call_native_mb_no_ret(
      TorusMesh._bindings.method_set_outer_radius,
      this._owner,
      _radius
    );
    
  }
  get_outer_radius() {
    return _call_native_mb_ret(
      TorusMesh._bindings.method_get_outer_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_rings(_rings) {
    return _call_native_mb_no_ret(
      TorusMesh._bindings.method_set_rings,
      this._owner,
      _rings
    );
    
  }
  get_rings() {
    return _call_native_mb_ret(
      TorusMesh._bindings.method_get_rings,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_ring_segments(_rings) {
    return _call_native_mb_no_ret(
      TorusMesh._bindings.method_set_ring_segments,
      this._owner,
      _rings
    );
    
  }
  get_ring_segments() {
    return _call_native_mb_ret(
      TorusMesh._bindings.method_get_ring_segments,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  
get inner_radius () {
  return this.get_inner_radius();
}
set inner_radius (new_value) {
  this.set_inner_radius(new_value);
}
get outer_radius () {
  return this.get_outer_radius();
}
set outer_radius (new_value) {
  this.set_outer_radius(new_value);
}
get rings () {
  return this.get_rings();
}
set rings (new_value) {
  this.set_rings(new_value);
}
get ring_segments () {
  return this.get_ring_segments();
}
set ring_segments (new_value) {
  this.set_ring_segments(new_value);
}


  static {
    this._init_bindings();
  }
}