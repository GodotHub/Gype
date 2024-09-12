import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { CSGPrimitive3D } from '@js_godot/classes/csg_primitive3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_polygon;
  method_get_polygon;
  method_set_mode;
  method_get_mode;
  method_set_depth;
  method_get_depth;
  method_set_spin_degrees;
  method_get_spin_degrees;
  method_set_spin_sides;
  method_get_spin_sides;
  method_set_path_node;
  method_get_path_node;
  method_set_path_interval_type;
  method_get_path_interval_type;
  method_set_path_interval;
  method_get_path_interval;
  method_set_path_simplify_angle;
  method_get_path_simplify_angle;
  method_set_path_rotation;
  method_get_path_rotation;
  method_set_path_local;
  method_is_path_local;
  method_set_path_continuous_u;
  method_is_path_continuous_u;
  method_set_path_u_distance;
  method_get_path_u_distance;
  method_set_path_joined;
  method_is_path_joined;
  method_set_material;
  method_get_material;
  method_set_smooth_faces;
  method_get_smooth_faces;
}
export class CSGPolygon3D extends CSGPrimitive3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("CSGPolygon3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_polygon() {
    if (!this.#_bindings.method_set_polygon) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_polygon");
      this.#_bindings.method_set_polygon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1509147220
      );
    }
  }
  static init_method_get_polygon() {
    if (!this.#_bindings.method_get_polygon) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_polygon");
      this.#_bindings.method_get_polygon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2961356807
      );
    }
  }
  static init_method_set_mode() {
    if (!this.#_bindings.method_set_mode) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_mode");
      this.#_bindings.method_set_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3158377035
      );
    }
  }
  static init_method_get_mode() {
    if (!this.#_bindings.method_get_mode) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_mode");
      this.#_bindings.method_get_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1201612222
      );
    }
  }
  static init_method_set_depth() {
    if (!this.#_bindings.method_set_depth) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_depth");
      this.#_bindings.method_set_depth = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_depth() {
    if (!this.#_bindings.method_get_depth) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_depth");
      this.#_bindings.method_get_depth = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_spin_degrees() {
    if (!this.#_bindings.method_set_spin_degrees) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_spin_degrees");
      this.#_bindings.method_set_spin_degrees = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_spin_degrees() {
    if (!this.#_bindings.method_get_spin_degrees) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_spin_degrees");
      this.#_bindings.method_get_spin_degrees = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_spin_sides() {
    if (!this.#_bindings.method_set_spin_sides) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_spin_sides");
      this.#_bindings.method_set_spin_sides = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_spin_sides() {
    if (!this.#_bindings.method_get_spin_sides) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_spin_sides");
      this.#_bindings.method_get_spin_sides = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_path_node() {
    if (!this.#_bindings.method_set_path_node) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_path_node");
      this.#_bindings.method_set_path_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_get_path_node() {
    if (!this.#_bindings.method_get_path_node) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_path_node");
      this.#_bindings.method_get_path_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }
  static init_method_set_path_interval_type() {
    if (!this.#_bindings.method_set_path_interval_type) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_path_interval_type");
      this.#_bindings.method_set_path_interval_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3744240707
      );
    }
  }
  static init_method_get_path_interval_type() {
    if (!this.#_bindings.method_get_path_interval_type) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_path_interval_type");
      this.#_bindings.method_get_path_interval_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3434618397
      );
    }
  }
  static init_method_set_path_interval() {
    if (!this.#_bindings.method_set_path_interval) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_path_interval");
      this.#_bindings.method_set_path_interval = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_path_interval() {
    if (!this.#_bindings.method_get_path_interval) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_path_interval");
      this.#_bindings.method_get_path_interval = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_path_simplify_angle() {
    if (!this.#_bindings.method_set_path_simplify_angle) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_path_simplify_angle");
      this.#_bindings.method_set_path_simplify_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_path_simplify_angle() {
    if (!this.#_bindings.method_get_path_simplify_angle) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_path_simplify_angle");
      this.#_bindings.method_get_path_simplify_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_path_rotation() {
    if (!this.#_bindings.method_set_path_rotation) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_path_rotation");
      this.#_bindings.method_set_path_rotation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1412947288
      );
    }
  }
  static init_method_get_path_rotation() {
    if (!this.#_bindings.method_get_path_rotation) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_path_rotation");
      this.#_bindings.method_get_path_rotation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        647219346
      );
    }
  }
  static init_method_set_path_local() {
    if (!this.#_bindings.method_set_path_local) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_path_local");
      this.#_bindings.method_set_path_local = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_path_local() {
    if (!this.#_bindings.method_is_path_local) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("is_path_local");
      this.#_bindings.method_is_path_local = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_path_continuous_u() {
    if (!this.#_bindings.method_set_path_continuous_u) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_path_continuous_u");
      this.#_bindings.method_set_path_continuous_u = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_path_continuous_u() {
    if (!this.#_bindings.method_is_path_continuous_u) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("is_path_continuous_u");
      this.#_bindings.method_is_path_continuous_u = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_path_u_distance() {
    if (!this.#_bindings.method_set_path_u_distance) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_path_u_distance");
      this.#_bindings.method_set_path_u_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_path_u_distance() {
    if (!this.#_bindings.method_get_path_u_distance) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_path_u_distance");
      this.#_bindings.method_get_path_u_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_path_joined() {
    if (!this.#_bindings.method_set_path_joined) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_path_joined");
      this.#_bindings.method_set_path_joined = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_path_joined() {
    if (!this.#_bindings.method_is_path_joined) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("is_path_joined");
      this.#_bindings.method_is_path_joined = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_material() {
    if (!this.#_bindings.method_set_material) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_material");
      this.#_bindings.method_set_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2757459619
      );
    }
  }
  static init_method_get_material() {
    if (!this.#_bindings.method_get_material) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_material");
      this.#_bindings.method_get_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        5934680
      );
    }
  }
  static init_method_set_smooth_faces() {
    if (!this.#_bindings.method_set_smooth_faces) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("set_smooth_faces");
      this.#_bindings.method_set_smooth_faces = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_smooth_faces() {
    if (!this.#_bindings.method_get_smooth_faces) {
      let classname = new StringName("CSGPolygon3D");
      let methodname = new StringName("get_smooth_faces");
      this.#_bindings.method_get_smooth_faces = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_polygon(_polygon) {
    CSGPolygon3D.init_method_set_polygon();
    return _call_native_mb_no_ret(
      CSGPolygon3D.#_bindings.method_set_polygon,
      this._owner,
      _polygon
    );
    
  }
  get_polygon() {
    CSGPolygon3D.init_method_get_polygon();
    return _call_native_mb_ret(
      CSGPolygon3D.#_bindings.method_get_polygon,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      
    );
    
  }
  set_mode(_mode) {
    CSGPolygon3D.init_method_set_mode();
    return _call_native_mb_no_ret(
      CSGPolygon3D.#_bindings.method_set_mode,
      this._owner,
      _mode
    );
    
  }
  get_mode() {
    CSGPolygon3D.init_method_get_mode();
    return _call_native_mb_ret(
      CSGPolygon3D.#_bindings.method_get_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_depth(_depth) {
    CSGPolygon3D.init_method_set_depth();
    return _call_native_mb_no_ret(
      CSGPolygon3D.#_bindings.method_set_depth,
      this._owner,
      _depth
    );
    
  }
  get_depth() {
    CSGPolygon3D.init_method_get_depth();
    return _call_native_mb_ret(
      CSGPolygon3D.#_bindings.method_get_depth,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_spin_degrees(_degrees) {
    CSGPolygon3D.init_method_set_spin_degrees();
    return _call_native_mb_no_ret(
      CSGPolygon3D.#_bindings.method_set_spin_degrees,
      this._owner,
      _degrees
    );
    
  }
  get_spin_degrees() {
    CSGPolygon3D.init_method_get_spin_degrees();
    return _call_native_mb_ret(
      CSGPolygon3D.#_bindings.method_get_spin_degrees,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_spin_sides(_spin_sides) {
    CSGPolygon3D.init_method_set_spin_sides();
    return _call_native_mb_no_ret(
      CSGPolygon3D.#_bindings.method_set_spin_sides,
      this._owner,
      _spin_sides
    );
    
  }
  get_spin_sides() {
    CSGPolygon3D.init_method_get_spin_sides();
    return _call_native_mb_ret(
      CSGPolygon3D.#_bindings.method_get_spin_sides,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_path_node(_path) {
    CSGPolygon3D.init_method_set_path_node();
    return _call_native_mb_no_ret(
      CSGPolygon3D.#_bindings.method_set_path_node,
      this._owner,
      _path
    );
    
  }
  get_path_node() {
    CSGPolygon3D.init_method_get_path_node();
    return _call_native_mb_ret(
      CSGPolygon3D.#_bindings.method_get_path_node,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_path_interval_type(_interval_type) {
    CSGPolygon3D.init_method_set_path_interval_type();
    return _call_native_mb_no_ret(
      CSGPolygon3D.#_bindings.method_set_path_interval_type,
      this._owner,
      _interval_type
    );
    
  }
  get_path_interval_type() {
    CSGPolygon3D.init_method_get_path_interval_type();
    return _call_native_mb_ret(
      CSGPolygon3D.#_bindings.method_get_path_interval_type,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_path_interval(_interval) {
    CSGPolygon3D.init_method_set_path_interval();
    return _call_native_mb_no_ret(
      CSGPolygon3D.#_bindings.method_set_path_interval,
      this._owner,
      _interval
    );
    
  }
  get_path_interval() {
    CSGPolygon3D.init_method_get_path_interval();
    return _call_native_mb_ret(
      CSGPolygon3D.#_bindings.method_get_path_interval,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_path_simplify_angle(_degrees) {
    CSGPolygon3D.init_method_set_path_simplify_angle();
    return _call_native_mb_no_ret(
      CSGPolygon3D.#_bindings.method_set_path_simplify_angle,
      this._owner,
      _degrees
    );
    
  }
  get_path_simplify_angle() {
    CSGPolygon3D.init_method_get_path_simplify_angle();
    return _call_native_mb_ret(
      CSGPolygon3D.#_bindings.method_get_path_simplify_angle,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_path_rotation(_path_rotation) {
    CSGPolygon3D.init_method_set_path_rotation();
    return _call_native_mb_no_ret(
      CSGPolygon3D.#_bindings.method_set_path_rotation,
      this._owner,
      _path_rotation
    );
    
  }
  get_path_rotation() {
    CSGPolygon3D.init_method_get_path_rotation();
    return _call_native_mb_ret(
      CSGPolygon3D.#_bindings.method_get_path_rotation,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_path_local(_enable) {
    CSGPolygon3D.init_method_set_path_local();
    return _call_native_mb_no_ret(
      CSGPolygon3D.#_bindings.method_set_path_local,
      this._owner,
      _enable
    );
    
  }
  is_path_local() {
    CSGPolygon3D.init_method_is_path_local();
    return _call_native_mb_ret(
      CSGPolygon3D.#_bindings.method_is_path_local,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_path_continuous_u(_enable) {
    CSGPolygon3D.init_method_set_path_continuous_u();
    return _call_native_mb_no_ret(
      CSGPolygon3D.#_bindings.method_set_path_continuous_u,
      this._owner,
      _enable
    );
    
  }
  is_path_continuous_u() {
    CSGPolygon3D.init_method_is_path_continuous_u();
    return _call_native_mb_ret(
      CSGPolygon3D.#_bindings.method_is_path_continuous_u,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_path_u_distance(_distance) {
    CSGPolygon3D.init_method_set_path_u_distance();
    return _call_native_mb_no_ret(
      CSGPolygon3D.#_bindings.method_set_path_u_distance,
      this._owner,
      _distance
    );
    
  }
  get_path_u_distance() {
    CSGPolygon3D.init_method_get_path_u_distance();
    return _call_native_mb_ret(
      CSGPolygon3D.#_bindings.method_get_path_u_distance,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_path_joined(_enable) {
    CSGPolygon3D.init_method_set_path_joined();
    return _call_native_mb_no_ret(
      CSGPolygon3D.#_bindings.method_set_path_joined,
      this._owner,
      _enable
    );
    
  }
  is_path_joined() {
    CSGPolygon3D.init_method_is_path_joined();
    return _call_native_mb_ret(
      CSGPolygon3D.#_bindings.method_is_path_joined,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_material(_material) {
    CSGPolygon3D.init_method_set_material();
    return _call_native_mb_no_ret(
      CSGPolygon3D.#_bindings.method_set_material,
      this._owner,
      _material
    );
    
  }
  get_material() {
    CSGPolygon3D.init_method_get_material();
    return _call_native_mb_ret(
      CSGPolygon3D.#_bindings.method_get_material,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_smooth_faces(_smooth_faces) {
    CSGPolygon3D.init_method_set_smooth_faces();
    return _call_native_mb_no_ret(
      CSGPolygon3D.#_bindings.method_set_smooth_faces,
      this._owner,
      _smooth_faces
    );
    
  }
  get_smooth_faces() {
    CSGPolygon3D.init_method_get_smooth_faces();
    return _call_native_mb_ret(
      CSGPolygon3D.#_bindings.method_get_smooth_faces,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get polygon () {
  return this.get_polygon();
}
set polygon (new_value) {
  this.set_polygon(new_value);
}
get mode () {
  return this.get_mode();
}
set mode (new_value) {
  this.set_mode(new_value);
}
get depth () {
  return this.get_depth();
}
set depth (new_value) {
  this.set_depth(new_value);
}
get spin_degrees () {
  return this.get_spin_degrees();
}
set spin_degrees (new_value) {
  this.set_spin_degrees(new_value);
}
get spin_sides () {
  return this.get_spin_sides();
}
set spin_sides (new_value) {
  this.set_spin_sides(new_value);
}
get path_node () {
  return this.get_path_node();
}
set path_node (new_value) {
  this.set_path_node(new_value);
}
get path_interval_type () {
  return this.get_path_interval_type();
}
set path_interval_type (new_value) {
  this.set_path_interval_type(new_value);
}
get path_interval () {
  return this.get_path_interval();
}
set path_interval (new_value) {
  this.set_path_interval(new_value);
}
get path_simplify_angle () {
  return this.get_path_simplify_angle();
}
set path_simplify_angle (new_value) {
  this.set_path_simplify_angle(new_value);
}
get path_rotation () {
  return this.get_path_rotation();
}
set path_rotation (new_value) {
  this.set_path_rotation(new_value);
}
get path_local () {
  return this.is_path_local();
}
set path_local (new_value) {
  this.set_path_local(new_value);
}
get path_continuous_u () {
  return this.is_path_continuous_u();
}
set path_continuous_u (new_value) {
  this.set_path_continuous_u(new_value);
}
get path_u_distance () {
  return this.get_path_u_distance();
}
set path_u_distance (new_value) {
  this.set_path_u_distance(new_value);
}
get path_joined () {
  return this.is_path_joined();
}
set path_joined (new_value) {
  this.set_path_joined(new_value);
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

  static Mode = {
    MODE_DEPTH: 0,
    MODE_SPIN: 1,
    MODE_PATH: 2,
  }
  static PathRotation = {
    PATH_ROTATION_POLYGON: 0,
    PATH_ROTATION_PATH: 1,
    PATH_ROTATION_PATH_FOLLOW: 2,
  }
  static PathIntervalType = {
    PATH_INTERVAL_DISTANCE: 0,
    PATH_INTERVAL_SUBDIVIDE: 1,
  }
}