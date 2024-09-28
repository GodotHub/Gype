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
  method_set_height;
  method_get_height;
  method_set_sides;
  method_get_sides;
  method_set_cone;
  method_is_cone;
  method_set_material;
  method_get_material;
  method_set_smooth_faces;
  method_get_smooth_faces;
}
@GodotClass
export class CSGCylinder3D extends CSGPrimitive3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CSGCylinder3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_radius() {
    if (!this._bindings.method_set_radius) {
      let classname = new StringName("CSGCylinder3D");
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
      let classname = new StringName("CSGCylinder3D");
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
      let classname = new StringName("CSGCylinder3D");
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
      let classname = new StringName("CSGCylinder3D");
      let methodname = new StringName("get_height");
      this._bindings.method_get_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_sides() {
    if (!this._bindings.method_set_sides) {
      let classname = new StringName("CSGCylinder3D");
      let methodname = new StringName("set_sides");
      this._bindings.method_set_sides = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_sides() {
    if (!this._bindings.method_get_sides) {
      let classname = new StringName("CSGCylinder3D");
      let methodname = new StringName("get_sides");
      this._bindings.method_get_sides = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_cone() {
    if (!this._bindings.method_set_cone) {
      let classname = new StringName("CSGCylinder3D");
      let methodname = new StringName("set_cone");
      this._bindings.method_set_cone = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_cone() {
    if (!this._bindings.method_is_cone) {
      let classname = new StringName("CSGCylinder3D");
      let methodname = new StringName("is_cone");
      this._bindings.method_is_cone = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_material() {
    if (!this._bindings.method_set_material) {
      let classname = new StringName("CSGCylinder3D");
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
      let classname = new StringName("CSGCylinder3D");
      let methodname = new StringName("get_material");
      this._bindings.method_get_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        5934680
      );
    }
  }
  static init_method_set_smooth_faces() {
    if (!this._bindings.method_set_smooth_faces) {
      let classname = new StringName("CSGCylinder3D");
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
      let classname = new StringName("CSGCylinder3D");
      let methodname = new StringName("get_smooth_faces");
      this._bindings.method_get_smooth_faces = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_radius(_radius) {
    CSGCylinder3D.init_method_set_radius();
    return _call_native_mb_no_ret(
      CSGCylinder3D._bindings.method_set_radius,
      this._owner,
      _radius
    );
    
  }
  get_radius() {
    CSGCylinder3D.init_method_get_radius();
    return _call_native_mb_ret(
      CSGCylinder3D._bindings.method_get_radius,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_height(_height) {
    CSGCylinder3D.init_method_set_height();
    return _call_native_mb_no_ret(
      CSGCylinder3D._bindings.method_set_height,
      this._owner,
      _height
    );
    
  }
  get_height() {
    CSGCylinder3D.init_method_get_height();
    return _call_native_mb_ret(
      CSGCylinder3D._bindings.method_get_height,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_sides(_sides) {
    CSGCylinder3D.init_method_set_sides();
    return _call_native_mb_no_ret(
      CSGCylinder3D._bindings.method_set_sides,
      this._owner,
      _sides
    );
    
  }
  get_sides() {
    CSGCylinder3D.init_method_get_sides();
    return _call_native_mb_ret(
      CSGCylinder3D._bindings.method_get_sides,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_cone(_cone) {
    CSGCylinder3D.init_method_set_cone();
    return _call_native_mb_no_ret(
      CSGCylinder3D._bindings.method_set_cone,
      this._owner,
      _cone
    );
    
  }
  is_cone() {
    CSGCylinder3D.init_method_is_cone();
    return _call_native_mb_ret(
      CSGCylinder3D._bindings.method_is_cone,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_material(_material) {
    CSGCylinder3D.init_method_set_material();
    return _call_native_mb_no_ret(
      CSGCylinder3D._bindings.method_set_material,
      this._owner,
      _material
    );
    
  }
  get_material() {
    CSGCylinder3D.init_method_get_material();
    return _call_native_mb_ret(
      CSGCylinder3D._bindings.method_get_material,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_smooth_faces(_smooth_faces) {
    CSGCylinder3D.init_method_set_smooth_faces();
    return _call_native_mb_no_ret(
      CSGCylinder3D._bindings.method_set_smooth_faces,
      this._owner,
      _smooth_faces
    );
    
  }
  get_smooth_faces() {
    CSGCylinder3D.init_method_get_smooth_faces();
    return _call_native_mb_ret(
      CSGCylinder3D._bindings.method_get_smooth_faces,
      this._owner,
			Variant.Type.BOOL,
    
      
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
get sides () {
  return this.get_sides();
}
set sides (new_value) {
  this.set_sides(new_value);
}
get cone () {
  return this.is_cone();
}
set cone (new_value) {
  this.set_cone(new_value);
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