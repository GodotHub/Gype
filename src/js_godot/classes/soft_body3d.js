import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { MeshInstance3D } from '@js_godot/classes/mesh_instance3d'
import { StringName } from '@js_godot/variant/string_name'
import { GDArray } from '@js_godot/variant/gd_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_physics_rid;
  method_set_collision_mask;
  method_get_collision_mask;
  method_set_collision_layer;
  method_get_collision_layer;
  method_set_collision_mask_value;
  method_get_collision_mask_value;
  method_set_collision_layer_value;
  method_get_collision_layer_value;
  method_set_parent_collision_ignore;
  method_get_parent_collision_ignore;
  method_set_disable_mode;
  method_get_disable_mode;
  method_get_collision_exceptions;
  method_add_collision_exception_with;
  method_remove_collision_exception_with;
  method_set_simulation_precision;
  method_get_simulation_precision;
  method_set_total_mass;
  method_get_total_mass;
  method_set_linear_stiffness;
  method_get_linear_stiffness;
  method_set_pressure_coefficient;
  method_get_pressure_coefficient;
  method_set_damping_coefficient;
  method_get_damping_coefficient;
  method_set_drag_coefficient;
  method_get_drag_coefficient;
  method_get_point_transform;
  method_set_point_pinned;
  method_is_point_pinned;
  method_set_ray_pickable;
  method_is_ray_pickable;
}
export class SoftBody3D extends MeshInstance3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("SoftBody3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_physics_rid() {
    if (!this.#_bindings.method_get_physics_rid) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("get_physics_rid");
      this.#_bindings.method_get_physics_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_set_collision_mask() {
    if (!this.#_bindings.method_set_collision_mask) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("set_collision_mask");
      this.#_bindings.method_set_collision_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_collision_mask() {
    if (!this.#_bindings.method_get_collision_mask) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("get_collision_mask");
      this.#_bindings.method_get_collision_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_collision_layer() {
    if (!this.#_bindings.method_set_collision_layer) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("set_collision_layer");
      this.#_bindings.method_set_collision_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_collision_layer() {
    if (!this.#_bindings.method_get_collision_layer) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("get_collision_layer");
      this.#_bindings.method_get_collision_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_collision_mask_value() {
    if (!this.#_bindings.method_set_collision_mask_value) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("set_collision_mask_value");
      this.#_bindings.method_set_collision_mask_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_collision_mask_value() {
    if (!this.#_bindings.method_get_collision_mask_value) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("get_collision_mask_value");
      this.#_bindings.method_get_collision_mask_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_collision_layer_value() {
    if (!this.#_bindings.method_set_collision_layer_value) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("set_collision_layer_value");
      this.#_bindings.method_set_collision_layer_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_collision_layer_value() {
    if (!this.#_bindings.method_get_collision_layer_value) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("get_collision_layer_value");
      this.#_bindings.method_get_collision_layer_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_parent_collision_ignore() {
    if (!this.#_bindings.method_set_parent_collision_ignore) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("set_parent_collision_ignore");
      this.#_bindings.method_set_parent_collision_ignore = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_get_parent_collision_ignore() {
    if (!this.#_bindings.method_get_parent_collision_ignore) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("get_parent_collision_ignore");
      this.#_bindings.method_get_parent_collision_ignore = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }
  static init_method_set_disable_mode() {
    if (!this.#_bindings.method_set_disable_mode) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("set_disable_mode");
      this.#_bindings.method_set_disable_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1104158384
      );
    }
  }
  static init_method_get_disable_mode() {
    if (!this.#_bindings.method_get_disable_mode) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("get_disable_mode");
      this.#_bindings.method_get_disable_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4135042476
      );
    }
  }
  static init_method_get_collision_exceptions() {
    if (!this.#_bindings.method_get_collision_exceptions) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("get_collision_exceptions");
      this.#_bindings.method_get_collision_exceptions = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_add_collision_exception_with() {
    if (!this.#_bindings.method_add_collision_exception_with) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("add_collision_exception_with");
      this.#_bindings.method_add_collision_exception_with = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1078189570
      );
    }
  }
  static init_method_remove_collision_exception_with() {
    if (!this.#_bindings.method_remove_collision_exception_with) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("remove_collision_exception_with");
      this.#_bindings.method_remove_collision_exception_with = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1078189570
      );
    }
  }
  static init_method_set_simulation_precision() {
    if (!this.#_bindings.method_set_simulation_precision) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("set_simulation_precision");
      this.#_bindings.method_set_simulation_precision = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_simulation_precision() {
    if (!this.#_bindings.method_get_simulation_precision) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("get_simulation_precision");
      this.#_bindings.method_get_simulation_precision = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_set_total_mass() {
    if (!this.#_bindings.method_set_total_mass) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("set_total_mass");
      this.#_bindings.method_set_total_mass = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_total_mass() {
    if (!this.#_bindings.method_get_total_mass) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("get_total_mass");
      this.#_bindings.method_get_total_mass = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        191475506
      );
    }
  }
  static init_method_set_linear_stiffness() {
    if (!this.#_bindings.method_set_linear_stiffness) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("set_linear_stiffness");
      this.#_bindings.method_set_linear_stiffness = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_linear_stiffness() {
    if (!this.#_bindings.method_get_linear_stiffness) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("get_linear_stiffness");
      this.#_bindings.method_get_linear_stiffness = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        191475506
      );
    }
  }
  static init_method_set_pressure_coefficient() {
    if (!this.#_bindings.method_set_pressure_coefficient) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("set_pressure_coefficient");
      this.#_bindings.method_set_pressure_coefficient = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_pressure_coefficient() {
    if (!this.#_bindings.method_get_pressure_coefficient) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("get_pressure_coefficient");
      this.#_bindings.method_get_pressure_coefficient = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        191475506
      );
    }
  }
  static init_method_set_damping_coefficient() {
    if (!this.#_bindings.method_set_damping_coefficient) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("set_damping_coefficient");
      this.#_bindings.method_set_damping_coefficient = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_damping_coefficient() {
    if (!this.#_bindings.method_get_damping_coefficient) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("get_damping_coefficient");
      this.#_bindings.method_get_damping_coefficient = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        191475506
      );
    }
  }
  static init_method_set_drag_coefficient() {
    if (!this.#_bindings.method_set_drag_coefficient) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("set_drag_coefficient");
      this.#_bindings.method_set_drag_coefficient = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_drag_coefficient() {
    if (!this.#_bindings.method_get_drag_coefficient) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("get_drag_coefficient");
      this.#_bindings.method_get_drag_coefficient = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        191475506
      );
    }
  }
  static init_method_get_point_transform() {
    if (!this.#_bindings.method_get_point_transform) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("get_point_transform");
      this.#_bindings.method_get_point_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        871989493
      );
    }
  }
  static init_method_set_point_pinned() {
    if (!this.#_bindings.method_set_point_pinned) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("set_point_pinned");
      this.#_bindings.method_set_point_pinned = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3814935226
      );
    }
  }
  static init_method_is_point_pinned() {
    if (!this.#_bindings.method_is_point_pinned) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("is_point_pinned");
      this.#_bindings.method_is_point_pinned = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_ray_pickable() {
    if (!this.#_bindings.method_set_ray_pickable) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("set_ray_pickable");
      this.#_bindings.method_set_ray_pickable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_ray_pickable() {
    if (!this.#_bindings.method_is_ray_pickable) {
      let classname = new StringName("SoftBody3D");
      let methodname = new StringName("is_ray_pickable");
      this.#_bindings.method_is_ray_pickable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  get_physics_rid() {
    SoftBody3D.init_method_get_physics_rid();
    return _call_native_mb_ret(
      SoftBody3D.#_bindings.method_get_physics_rid,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  set_collision_mask(_collision_mask) {
    SoftBody3D.init_method_set_collision_mask();
    return _call_native_mb_no_ret(
      SoftBody3D.#_bindings.method_set_collision_mask,
      this._owner,
      _collision_mask
    );
    
  }
  get_collision_mask() {
    SoftBody3D.init_method_get_collision_mask();
    return _call_native_mb_ret(
      SoftBody3D.#_bindings.method_get_collision_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_collision_layer(_collision_layer) {
    SoftBody3D.init_method_set_collision_layer();
    return _call_native_mb_no_ret(
      SoftBody3D.#_bindings.method_set_collision_layer,
      this._owner,
      _collision_layer
    );
    
  }
  get_collision_layer() {
    SoftBody3D.init_method_get_collision_layer();
    return _call_native_mb_ret(
      SoftBody3D.#_bindings.method_get_collision_layer,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_collision_mask_value(_layer_number, _value) {
    SoftBody3D.init_method_set_collision_mask_value();
    return _call_native_mb_no_ret(
      SoftBody3D.#_bindings.method_set_collision_mask_value,
      this._owner,
      _layer_number, _value
    );
    
  }
  get_collision_mask_value(_layer_number) {
    SoftBody3D.init_method_get_collision_mask_value();
    return _call_native_mb_ret(
      SoftBody3D.#_bindings.method_get_collision_mask_value,
      this._owner,
			Variant.Type.BOOL,
    
      _layer_number
    );
    
  }
  set_collision_layer_value(_layer_number, _value) {
    SoftBody3D.init_method_set_collision_layer_value();
    return _call_native_mb_no_ret(
      SoftBody3D.#_bindings.method_set_collision_layer_value,
      this._owner,
      _layer_number, _value
    );
    
  }
  get_collision_layer_value(_layer_number) {
    SoftBody3D.init_method_get_collision_layer_value();
    return _call_native_mb_ret(
      SoftBody3D.#_bindings.method_get_collision_layer_value,
      this._owner,
			Variant.Type.BOOL,
    
      _layer_number
    );
    
  }
  set_parent_collision_ignore(_parent_collision_ignore) {
    SoftBody3D.init_method_set_parent_collision_ignore();
    return _call_native_mb_no_ret(
      SoftBody3D.#_bindings.method_set_parent_collision_ignore,
      this._owner,
      _parent_collision_ignore
    );
    
  }
  get_parent_collision_ignore() {
    SoftBody3D.init_method_get_parent_collision_ignore();
    return _call_native_mb_ret(
      SoftBody3D.#_bindings.method_get_parent_collision_ignore,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_disable_mode(_mode) {
    SoftBody3D.init_method_set_disable_mode();
    return _call_native_mb_no_ret(
      SoftBody3D.#_bindings.method_set_disable_mode,
      this._owner,
      _mode
    );
    
  }
  get_disable_mode() {
    SoftBody3D.init_method_get_disable_mode();
    return _call_native_mb_ret(
      SoftBody3D.#_bindings.method_get_disable_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_collision_exceptions() {
    SoftBody3D.init_method_get_collision_exceptions();
    return _call_native_mb_ret(
      SoftBody3D.#_bindings.method_get_collision_exceptions,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  add_collision_exception_with(_body) {
    SoftBody3D.init_method_add_collision_exception_with();
    return _call_native_mb_no_ret(
      SoftBody3D.#_bindings.method_add_collision_exception_with,
      this._owner,
      _body
    );
    
  }
  remove_collision_exception_with(_body) {
    SoftBody3D.init_method_remove_collision_exception_with();
    return _call_native_mb_no_ret(
      SoftBody3D.#_bindings.method_remove_collision_exception_with,
      this._owner,
      _body
    );
    
  }
  set_simulation_precision(_simulation_precision) {
    SoftBody3D.init_method_set_simulation_precision();
    return _call_native_mb_no_ret(
      SoftBody3D.#_bindings.method_set_simulation_precision,
      this._owner,
      _simulation_precision
    );
    
  }
  get_simulation_precision() {
    SoftBody3D.init_method_get_simulation_precision();
    return _call_native_mb_ret(
      SoftBody3D.#_bindings.method_get_simulation_precision,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_total_mass(_mass) {
    SoftBody3D.init_method_set_total_mass();
    return _call_native_mb_no_ret(
      SoftBody3D.#_bindings.method_set_total_mass,
      this._owner,
      _mass
    );
    
  }
  get_total_mass() {
    SoftBody3D.init_method_get_total_mass();
    return _call_native_mb_ret(
      SoftBody3D.#_bindings.method_get_total_mass,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_linear_stiffness(_linear_stiffness) {
    SoftBody3D.init_method_set_linear_stiffness();
    return _call_native_mb_no_ret(
      SoftBody3D.#_bindings.method_set_linear_stiffness,
      this._owner,
      _linear_stiffness
    );
    
  }
  get_linear_stiffness() {
    SoftBody3D.init_method_get_linear_stiffness();
    return _call_native_mb_ret(
      SoftBody3D.#_bindings.method_get_linear_stiffness,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_pressure_coefficient(_pressure_coefficient) {
    SoftBody3D.init_method_set_pressure_coefficient();
    return _call_native_mb_no_ret(
      SoftBody3D.#_bindings.method_set_pressure_coefficient,
      this._owner,
      _pressure_coefficient
    );
    
  }
  get_pressure_coefficient() {
    SoftBody3D.init_method_get_pressure_coefficient();
    return _call_native_mb_ret(
      SoftBody3D.#_bindings.method_get_pressure_coefficient,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_damping_coefficient(_damping_coefficient) {
    SoftBody3D.init_method_set_damping_coefficient();
    return _call_native_mb_no_ret(
      SoftBody3D.#_bindings.method_set_damping_coefficient,
      this._owner,
      _damping_coefficient
    );
    
  }
  get_damping_coefficient() {
    SoftBody3D.init_method_get_damping_coefficient();
    return _call_native_mb_ret(
      SoftBody3D.#_bindings.method_get_damping_coefficient,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_drag_coefficient(_drag_coefficient) {
    SoftBody3D.init_method_set_drag_coefficient();
    return _call_native_mb_no_ret(
      SoftBody3D.#_bindings.method_set_drag_coefficient,
      this._owner,
      _drag_coefficient
    );
    
  }
  get_drag_coefficient() {
    SoftBody3D.init_method_get_drag_coefficient();
    return _call_native_mb_ret(
      SoftBody3D.#_bindings.method_get_drag_coefficient,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_point_transform(_point_index) {
    SoftBody3D.init_method_get_point_transform();
    return _call_native_mb_ret(
      SoftBody3D.#_bindings.method_get_point_transform,
      this._owner,
			Variant.Type.VECTOR3,
    
      _point_index
    );
    
  }
  set_point_pinned(_point_index, _pinned, _attachment_path) {
    SoftBody3D.init_method_set_point_pinned();
    return _call_native_mb_no_ret(
      SoftBody3D.#_bindings.method_set_point_pinned,
      this._owner,
      _point_index, _pinned, _attachment_path
    );
    
  }
  is_point_pinned(_point_index) {
    SoftBody3D.init_method_is_point_pinned();
    return _call_native_mb_ret(
      SoftBody3D.#_bindings.method_is_point_pinned,
      this._owner,
			Variant.Type.BOOL,
    
      _point_index
    );
    
  }
  set_ray_pickable(_ray_pickable) {
    SoftBody3D.init_method_set_ray_pickable();
    return _call_native_mb_no_ret(
      SoftBody3D.#_bindings.method_set_ray_pickable,
      this._owner,
      _ray_pickable
    );
    
  }
  is_ray_pickable() {
    SoftBody3D.init_method_is_ray_pickable();
    return _call_native_mb_ret(
      SoftBody3D.#_bindings.method_is_ray_pickable,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get collision_layer () {
  return this.get_collision_layer();
}
set collision_layer (new_value) {
  this.set_collision_layer(new_value);
}
get collision_mask () {
  return this.get_collision_mask();
}
set collision_mask (new_value) {
  this.set_collision_mask(new_value);
}
get parent_collision_ignore () {
  return this.get_parent_collision_ignore();
}
set parent_collision_ignore (new_value) {
  this.set_parent_collision_ignore(new_value);
}
get simulation_precision () {
  return this.get_simulation_precision();
}
set simulation_precision (new_value) {
  this.set_simulation_precision(new_value);
}
get total_mass () {
  return this.get_total_mass();
}
set total_mass (new_value) {
  this.set_total_mass(new_value);
}
get linear_stiffness () {
  return this.get_linear_stiffness();
}
set linear_stiffness (new_value) {
  this.set_linear_stiffness(new_value);
}
get pressure_coefficient () {
  return this.get_pressure_coefficient();
}
set pressure_coefficient (new_value) {
  this.set_pressure_coefficient(new_value);
}
get damping_coefficient () {
  return this.get_damping_coefficient();
}
set damping_coefficient (new_value) {
  this.set_damping_coefficient(new_value);
}
get drag_coefficient () {
  return this.get_drag_coefficient();
}
set drag_coefficient (new_value) {
  this.set_drag_coefficient(new_value);
}
get ray_pickable () {
  return this.is_ray_pickable();
}
set ray_pickable (new_value) {
  this.set_ray_pickable(new_value);
}
get disable_mode () {
  return this.get_disable_mode();
}
set disable_mode (new_value) {
  this.set_disable_mode(new_value);
}

  static DisableMode = {
    DISABLE_MODE_REMOVE: 0,
    DISABLE_MODE_KEEP_ACTIVE: 1,
  }
}