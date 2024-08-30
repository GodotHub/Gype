import * as internal from '__internal__';
import { StringName } from 'src/js_godot/variant/string_name'
import { NodePath } from 'src/js_godot/variant/node_path'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { RID } from 'src/js_godot/variant/rid'
import { MeshInstance3D } from 'src/js_godot/classes/mesh_instance3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SoftBody3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("get_physics_rid");
        this._bindings.method_get_physics_rid = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2944877500
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("set_collision_mask");
        this._bindings.method_set_collision_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("get_collision_mask");
        this._bindings.method_get_collision_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("set_collision_layer");
        this._bindings.method_set_collision_layer = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("get_collision_layer");
        this._bindings.method_get_collision_layer = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("set_collision_mask_value");
        this._bindings.method_set_collision_mask_value = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          300928843
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("get_collision_mask_value");
        this._bindings.method_get_collision_mask_value = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1116898809
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("set_collision_layer_value");
        this._bindings.method_set_collision_layer_value = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          300928843
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("get_collision_layer_value");
        this._bindings.method_get_collision_layer_value = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1116898809
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("set_parent_collision_ignore");
        this._bindings.method_set_parent_collision_ignore = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1348162250
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("get_parent_collision_ignore");
        this._bindings.method_get_parent_collision_ignore = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4075236667
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("set_disable_mode");
        this._bindings.method_set_disable_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1104158384
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("get_disable_mode");
        this._bindings.method_get_disable_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4135042476
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("get_collision_exceptions");
        this._bindings.method_get_collision_exceptions = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2915620761
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("add_collision_exception_with");
        this._bindings.method_add_collision_exception_with = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1078189570
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("remove_collision_exception_with");
        this._bindings.method_remove_collision_exception_with = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1078189570
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("set_simulation_precision");
        this._bindings.method_set_simulation_precision = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("get_simulation_precision");
        this._bindings.method_get_simulation_precision = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("set_total_mass");
        this._bindings.method_set_total_mass = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("get_total_mass");
        this._bindings.method_get_total_mass = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          191475506
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("set_linear_stiffness");
        this._bindings.method_set_linear_stiffness = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("get_linear_stiffness");
        this._bindings.method_get_linear_stiffness = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          191475506
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("set_pressure_coefficient");
        this._bindings.method_set_pressure_coefficient = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("get_pressure_coefficient");
        this._bindings.method_get_pressure_coefficient = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          191475506
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("set_damping_coefficient");
        this._bindings.method_set_damping_coefficient = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("get_damping_coefficient");
        this._bindings.method_get_damping_coefficient = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          191475506
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("set_drag_coefficient");
        this._bindings.method_set_drag_coefficient = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("get_drag_coefficient");
        this._bindings.method_get_drag_coefficient = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          191475506
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("get_point_transform");
        this._bindings.method_get_point_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          871989493
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("set_point_pinned");
        this._bindings.method_set_point_pinned = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3814935226
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("is_point_pinned");
        this._bindings.method_is_point_pinned = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1116898809
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("set_ray_pickable");
        this._bindings.method_set_ray_pickable = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("SoftBody3D");
        let methodname = new StringName("is_ray_pickable");
        this._bindings.method_is_ray_pickable = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
  }
  get_physics_rid() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_physics_rid,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  set_collision_mask(_collision_mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_mask,
      this._owner,
      _collision_mask
    );
    
  }
  get_collision_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_mask,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_collision_layer(_collision_layer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_layer,
      this._owner,
      _collision_layer
    );
    
  }
  get_collision_layer() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_layer,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_collision_mask_value(_layer_number, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_mask_value,
      this._owner,
      _layer_number, _value
    );
    
  }
  get_collision_mask_value(_layer_number) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_mask_value,
      this._owner,
			Variant.Type.BOOL,
      _layer_number
    );
    
  }
  set_collision_layer_value(_layer_number, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_layer_value,
      this._owner,
      _layer_number, _value
    );
    
  }
  get_collision_layer_value(_layer_number) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_layer_value,
      this._owner,
			Variant.Type.BOOL,
      _layer_number
    );
    
  }
  set_parent_collision_ignore(_parent_collision_ignore) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_parent_collision_ignore,
      this._owner,
      _parent_collision_ignore
    );
    
  }
  get_parent_collision_ignore() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_parent_collision_ignore,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      
    );
    
  }
  set_disable_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_disable_mode,
      this._owner,
      _mode
    );
    
  }
  get_disable_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_disable_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_collision_exceptions() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_exceptions,
      this._owner,
			Variant.INT,
      
    );
    
  }
  add_collision_exception_with(_body) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_collision_exception_with,
      this._owner,
      _body
    );
    
  }
  remove_collision_exception_with(_body) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_collision_exception_with,
      this._owner,
      _body
    );
    
  }
  set_simulation_precision(_simulation_precision) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_simulation_precision,
      this._owner,
      _simulation_precision
    );
    
  }
  get_simulation_precision() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_simulation_precision,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_total_mass(_mass) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_total_mass,
      this._owner,
      _mass
    );
    
  }
  get_total_mass() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_total_mass,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_linear_stiffness(_linear_stiffness) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_linear_stiffness,
      this._owner,
      _linear_stiffness
    );
    
  }
  get_linear_stiffness() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_linear_stiffness,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_pressure_coefficient(_pressure_coefficient) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_pressure_coefficient,
      this._owner,
      _pressure_coefficient
    );
    
  }
  get_pressure_coefficient() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_pressure_coefficient,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_damping_coefficient(_damping_coefficient) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_damping_coefficient,
      this._owner,
      _damping_coefficient
    );
    
  }
  get_damping_coefficient() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_damping_coefficient,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_drag_coefficient(_drag_coefficient) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_drag_coefficient,
      this._owner,
      _drag_coefficient
    );
    
  }
  get_drag_coefficient() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_drag_coefficient,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_point_transform(_point_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_point_transform,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _point_index
    );
    
  }
  set_point_pinned(_point_index, _pinned, _attachment_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_point_pinned,
      this._owner,
      _point_index, _pinned, _attachment_path
    );
    
  }
  is_point_pinned(_point_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_point_pinned,
      this._owner,
			Variant.Type.BOOL,
      _point_index
    );
    
  }
  set_ray_pickable(_ray_pickable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ray_pickable,
      this._owner,
      _ray_pickable
    );
    
  }
  is_ray_pickable() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_ray_pickable,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  static DisableMode = {
    DISABLE_MODE_REMOVE: 0,
    DISABLE_MODE_KEEP_ACTIVE: 1,
  }
}