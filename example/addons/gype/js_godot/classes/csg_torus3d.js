import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { CSGPrimitive3D } from '@js_godot/classes/csg_primitive3d'
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
  method_set_sides;
  method_get_sides;
  method_set_ring_sides;
  method_get_ring_sides;
  method_set_material;
  method_get_material;
  method_set_smooth_faces;
  method_get_smooth_faces;
}
export class CSGTorus3D extends CSGPrimitive3D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("CSGTorus3D");
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
      let classname = new StringName("CSGTorus3D");
      let methodname = new StringName("set_inner_radius");
      this._bindings.method_set_inner_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CSGTorus3D");
      let methodname = new StringName("get_inner_radius");
      this._bindings.method_get_inner_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CSGTorus3D");
      let methodname = new StringName("set_outer_radius");
      this._bindings.method_set_outer_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CSGTorus3D");
      let methodname = new StringName("get_outer_radius");
      this._bindings.method_get_outer_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CSGTorus3D");
      let methodname = new StringName("set_sides");
      this._bindings.method_set_sides = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("CSGTorus3D");
      let methodname = new StringName("get_sides");
      this._bindings.method_get_sides = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("CSGTorus3D");
      let methodname = new StringName("set_ring_sides");
      this._bindings.method_set_ring_sides = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("CSGTorus3D");
      let methodname = new StringName("get_ring_sides");
      this._bindings.method_get_ring_sides = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("CSGTorus3D");
      let methodname = new StringName("set_material");
      this._bindings.method_set_material = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2757459619
      );
    }
    {
      let classname = new StringName("CSGTorus3D");
      let methodname = new StringName("get_material");
      this._bindings.method_get_material = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        5934680
      );
    }
    {
      let classname = new StringName("CSGTorus3D");
      let methodname = new StringName("set_smooth_faces");
      this._bindings.method_set_smooth_faces = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CSGTorus3D");
      let methodname = new StringName("get_smooth_faces");
      this._bindings.method_get_smooth_faces = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  set_inner_radius(_radius) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_inner_radius,
      this._owner,
      _radius
    );
    
  }
  get_inner_radius() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_inner_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_outer_radius(_radius) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_outer_radius,
      this._owner,
      _radius
    );
    
  }
  get_outer_radius() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_outer_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_sides(_sides) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sides,
      this._owner,
      _sides
    );
    
  }
  get_sides() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sides,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_ring_sides(_sides) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ring_sides,
      this._owner,
      _sides
    );
    
  }
  get_ring_sides() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ring_sides,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_material(_material) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_material,
      this._owner,
      _material
    );
    
  }
  get_material() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_material,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_smooth_faces(_smooth_faces) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_smooth_faces,
      this._owner,
      _smooth_faces
    );
    
  }
  get_smooth_faces() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_smooth_faces,
      this._owner,
			Variant.Type.BOOL,
      
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
get sides () {
  return this.get_sides();
}
set sides (new_value) {
  this.set_sides(new_value);
}
get ring_sides () {
  return this.get_ring_sides();
}
set ring_sides (new_value) {
  this.set_ring_sides(new_value);
}
get smooth_faces () {
  return this.get_smooth_faces();
}
set smooth_faces (new_value) {
  this.set_smooth_faces(new_value);
}
get material () {
  return this.get_material();
}
set material (new_value) {
  this.set_material(new_value);
}


  static {
    this._init_bindings();
  }
}