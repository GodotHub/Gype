import * as internal from '__internal__';
import { CSGPrimitive3D } from '@js_godot/classes/csg_primitive3d'
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
  method_set_radial_segments;
  method_get_radial_segments;
  method_set_rings;
  method_get_rings;
  method_set_smooth_faces;
  method_get_smooth_faces;
  method_set_material;
  method_get_material;
}
@GodotClass
export class CSGSphere3D extends CSGPrimitive3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CSGSphere3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_radius() {
    if (!this._bindings.method_set_radius) {
      let classname = new StringName("CSGSphere3D");
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
      let classname = new StringName("CSGSphere3D");
      let methodname = new StringName("get_radius");
      this._bindings.method_get_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_radial_segments() {
    if (!this._bindings.method_set_radial_segments) {
      let classname = new StringName("CSGSphere3D");
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
      let classname = new StringName("CSGSphere3D");
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
      let classname = new StringName("CSGSphere3D");
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
      let classname = new StringName("CSGSphere3D");
      let methodname = new StringName("get_rings");
      this._bindings.method_get_rings = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_smooth_faces() {
    if (!this._bindings.method_set_smooth_faces) {
      let classname = new StringName("CSGSphere3D");
      let methodname = new StringName("set_smooth_faces");
      this._bindings.method_set_smooth_faces = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_smooth_faces() {
    if (!this._bindings.method_get_smooth_faces) {
      let classname = new StringName("CSGSphere3D");
      let methodname = new StringName("get_smooth_faces");
      this._bindings.method_get_smooth_faces = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_material() {
    if (!this._bindings.method_set_material) {
      let classname = new StringName("CSGSphere3D");
      let methodname = new StringName("set_material");
      this._bindings.method_set_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2757459619
      );
    }
  }
  static init_method_get_material() {
    if (!this._bindings.method_get_material) {
      let classname = new StringName("CSGSphere3D");
      let methodname = new StringName("get_material");
      this._bindings.method_get_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        5934680
      );
    }
  }

  
  
  set_radius(_radius) {
    CSGSphere3D.init_method_set_radius();
    return _call_native_mb_no_ret(
      CSGSphere3D._bindings.method_set_radius,
      this._owner,
      _radius
    );
    
  }
  get_radius() {
    CSGSphere3D.init_method_get_radius();
    return _call_native_mb_ret(
      CSGSphere3D._bindings.method_get_radius,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_radial_segments(_radial_segments) {
    CSGSphere3D.init_method_set_radial_segments();
    return _call_native_mb_no_ret(
      CSGSphere3D._bindings.method_set_radial_segments,
      this._owner,
      _radial_segments
    );
    
  }
  get_radial_segments() {
    CSGSphere3D.init_method_get_radial_segments();
    return _call_native_mb_ret(
      CSGSphere3D._bindings.method_get_radial_segments,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_rings(_rings) {
    CSGSphere3D.init_method_set_rings();
    return _call_native_mb_no_ret(
      CSGSphere3D._bindings.method_set_rings,
      this._owner,
      _rings
    );
    
  }
  get_rings() {
    CSGSphere3D.init_method_get_rings();
    return _call_native_mb_ret(
      CSGSphere3D._bindings.method_get_rings,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_smooth_faces(_smooth_faces) {
    CSGSphere3D.init_method_set_smooth_faces();
    return _call_native_mb_no_ret(
      CSGSphere3D._bindings.method_set_smooth_faces,
      this._owner,
      _smooth_faces
    );
    
  }
  get_smooth_faces() {
    CSGSphere3D.init_method_get_smooth_faces();
    return _call_native_mb_ret(
      CSGSphere3D._bindings.method_get_smooth_faces,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_material(_material) {
    CSGSphere3D.init_method_set_material();
    return _call_native_mb_no_ret(
      CSGSphere3D._bindings.method_set_material,
      this._owner,
      _material
    );
    
  }
  get_material() {
    CSGSphere3D.init_method_get_material();
    return _call_native_mb_ret(
      CSGSphere3D._bindings.method_get_material,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get radius () {
  return this.get_radius();
}
set radius (new_value) {
  this.set_radius(new_value);
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

}