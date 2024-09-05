import * as internal from '__internal__';
import { CollisionObject2D } from '@js_godot/classes/collision_object2d'
import { StringName } from '@js_godot/variant/string_name'
import { Vector2 } from '@js_godot/variant/vector2'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_gravity_space_override_mode;
  method_get_gravity_space_override_mode;
  method_set_gravity_is_point;
  method_is_gravity_a_point;
  method_set_gravity_point_unit_distance;
  method_get_gravity_point_unit_distance;
  method_set_gravity_point_center;
  method_get_gravity_point_center;
  method_set_gravity_direction;
  method_get_gravity_direction;
  method_set_gravity;
  method_get_gravity;
  method_set_linear_damp_space_override_mode;
  method_get_linear_damp_space_override_mode;
  method_set_angular_damp_space_override_mode;
  method_get_angular_damp_space_override_mode;
  method_set_linear_damp;
  method_get_linear_damp;
  method_set_angular_damp;
  method_get_angular_damp;
  method_set_priority;
  method_get_priority;
  method_set_monitoring;
  method_is_monitoring;
  method_set_monitorable;
  method_is_monitorable;
  method_get_overlapping_bodies;
  method_get_overlapping_areas;
  method_has_overlapping_bodies;
  method_has_overlapping_areas;
  method_overlaps_body;
  method_overlaps_area;
  method_set_audio_bus_name;
  method_get_audio_bus_name;
  method_set_audio_bus_override;
  method_is_overriding_audio_bus;
}
export class Area2D extends CollisionObject2D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Area2D");
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
      let classname = new StringName("Area2D");
      let methodname = new StringName("set_gravity_space_override_mode");
      this._bindings.method_set_gravity_space_override_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2879900038
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("get_gravity_space_override_mode");
      this._bindings.method_get_gravity_space_override_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3990256304
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("set_gravity_is_point");
      this._bindings.method_set_gravity_is_point = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("is_gravity_a_point");
      this._bindings.method_is_gravity_a_point = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("set_gravity_point_unit_distance");
      this._bindings.method_set_gravity_point_unit_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("get_gravity_point_unit_distance");
      this._bindings.method_get_gravity_point_unit_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("set_gravity_point_center");
      this._bindings.method_set_gravity_point_center = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("get_gravity_point_center");
      this._bindings.method_get_gravity_point_center = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("set_gravity_direction");
      this._bindings.method_set_gravity_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("get_gravity_direction");
      this._bindings.method_get_gravity_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("set_gravity");
      this._bindings.method_set_gravity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("get_gravity");
      this._bindings.method_get_gravity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("set_linear_damp_space_override_mode");
      this._bindings.method_set_linear_damp_space_override_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2879900038
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("get_linear_damp_space_override_mode");
      this._bindings.method_get_linear_damp_space_override_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3990256304
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("set_angular_damp_space_override_mode");
      this._bindings.method_set_angular_damp_space_override_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2879900038
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("get_angular_damp_space_override_mode");
      this._bindings.method_get_angular_damp_space_override_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3990256304
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("set_linear_damp");
      this._bindings.method_set_linear_damp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("get_linear_damp");
      this._bindings.method_get_linear_damp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("set_angular_damp");
      this._bindings.method_set_angular_damp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("get_angular_damp");
      this._bindings.method_get_angular_damp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("set_priority");
      this._bindings.method_set_priority = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("get_priority");
      this._bindings.method_get_priority = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("set_monitoring");
      this._bindings.method_set_monitoring = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("is_monitoring");
      this._bindings.method_is_monitoring = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("set_monitorable");
      this._bindings.method_set_monitorable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("is_monitorable");
      this._bindings.method_is_monitorable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("get_overlapping_bodies");
      this._bindings.method_get_overlapping_bodies = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("get_overlapping_areas");
      this._bindings.method_get_overlapping_areas = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("has_overlapping_bodies");
      this._bindings.method_has_overlapping_bodies = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("has_overlapping_areas");
      this._bindings.method_has_overlapping_areas = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("overlaps_body");
      this._bindings.method_overlaps_body = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3093956946
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("overlaps_area");
      this._bindings.method_overlaps_area = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3093956946
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("set_audio_bus_name");
      this._bindings.method_set_audio_bus_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("get_audio_bus_name");
      this._bindings.method_get_audio_bus_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2002593661
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("set_audio_bus_override");
      this._bindings.method_set_audio_bus_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Area2D");
      let methodname = new StringName("is_overriding_audio_bus");
      this._bindings.method_is_overriding_audio_bus = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  
  set_gravity_space_override_mode(_space_override_mode) {
    return _call_native_mb_no_ret(
      Area2D._bindings.method_set_gravity_space_override_mode,
      this._owner,
      _space_override_mode
    );
    
  }
  get_gravity_space_override_mode() {
    return _call_native_mb_ret(
      Area2D._bindings.method_get_gravity_space_override_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_gravity_is_point(_enable) {
    return _call_native_mb_no_ret(
      Area2D._bindings.method_set_gravity_is_point,
      this._owner,
      _enable
    );
    
  }
  is_gravity_a_point() {
    return _call_native_mb_ret(
      Area2D._bindings.method_is_gravity_a_point,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_gravity_point_unit_distance(_distance_scale) {
    return _call_native_mb_no_ret(
      Area2D._bindings.method_set_gravity_point_unit_distance,
      this._owner,
      _distance_scale
    );
    
  }
  get_gravity_point_unit_distance() {
    return _call_native_mb_ret(
      Area2D._bindings.method_get_gravity_point_unit_distance,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_gravity_point_center(_center) {
    return _call_native_mb_no_ret(
      Area2D._bindings.method_set_gravity_point_center,
      this._owner,
      _center
    );
    
  }
  get_gravity_point_center() {
    return _call_native_mb_ret(
      Area2D._bindings.method_get_gravity_point_center,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_gravity_direction(_direction) {
    return _call_native_mb_no_ret(
      Area2D._bindings.method_set_gravity_direction,
      this._owner,
      _direction
    );
    
  }
  get_gravity_direction() {
    return _call_native_mb_ret(
      Area2D._bindings.method_get_gravity_direction,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_gravity(_gravity) {
    return _call_native_mb_no_ret(
      Area2D._bindings.method_set_gravity,
      this._owner,
      _gravity
    );
    
  }
  get_gravity() {
    return _call_native_mb_ret(
      Area2D._bindings.method_get_gravity,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_linear_damp_space_override_mode(_space_override_mode) {
    return _call_native_mb_no_ret(
      Area2D._bindings.method_set_linear_damp_space_override_mode,
      this._owner,
      _space_override_mode
    );
    
  }
  get_linear_damp_space_override_mode() {
    return _call_native_mb_ret(
      Area2D._bindings.method_get_linear_damp_space_override_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_angular_damp_space_override_mode(_space_override_mode) {
    return _call_native_mb_no_ret(
      Area2D._bindings.method_set_angular_damp_space_override_mode,
      this._owner,
      _space_override_mode
    );
    
  }
  get_angular_damp_space_override_mode() {
    return _call_native_mb_ret(
      Area2D._bindings.method_get_angular_damp_space_override_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_linear_damp(_linear_damp) {
    return _call_native_mb_no_ret(
      Area2D._bindings.method_set_linear_damp,
      this._owner,
      _linear_damp
    );
    
  }
  get_linear_damp() {
    return _call_native_mb_ret(
      Area2D._bindings.method_get_linear_damp,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_angular_damp(_angular_damp) {
    return _call_native_mb_no_ret(
      Area2D._bindings.method_set_angular_damp,
      this._owner,
      _angular_damp
    );
    
  }
  get_angular_damp() {
    return _call_native_mb_ret(
      Area2D._bindings.method_get_angular_damp,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_priority(_priority) {
    return _call_native_mb_no_ret(
      Area2D._bindings.method_set_priority,
      this._owner,
      _priority
    );
    
  }
  get_priority() {
    return _call_native_mb_ret(
      Area2D._bindings.method_get_priority,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_monitoring(_enable) {
    return _call_native_mb_no_ret(
      Area2D._bindings.method_set_monitoring,
      this._owner,
      _enable
    );
    
  }
  is_monitoring() {
    return _call_native_mb_ret(
      Area2D._bindings.method_is_monitoring,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_monitorable(_enable) {
    return _call_native_mb_no_ret(
      Area2D._bindings.method_set_monitorable,
      this._owner,
      _enable
    );
    
  }
  is_monitorable() {
    return _call_native_mb_ret(
      Area2D._bindings.method_is_monitorable,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_overlapping_bodies() {
    return _call_native_mb_ret(
      Area2D._bindings.method_get_overlapping_bodies,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_overlapping_areas() {
    return _call_native_mb_ret(
      Area2D._bindings.method_get_overlapping_areas,
      this._owner,
			Variant.INT,
      
    );
    
  }
  has_overlapping_bodies() {
    return _call_native_mb_ret(
      Area2D._bindings.method_has_overlapping_bodies,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  has_overlapping_areas() {
    return _call_native_mb_ret(
      Area2D._bindings.method_has_overlapping_areas,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  overlaps_body(_body) {
    return _call_native_mb_ret(
      Area2D._bindings.method_overlaps_body,
      this._owner,
			Variant.Type.BOOL,
      _body
    );
    
  }
  overlaps_area(_area) {
    return _call_native_mb_ret(
      Area2D._bindings.method_overlaps_area,
      this._owner,
			Variant.Type.BOOL,
      _area
    );
    
  }
  set_audio_bus_name(_name) {
    return _call_native_mb_no_ret(
      Area2D._bindings.method_set_audio_bus_name,
      this._owner,
      _name
    );
    
  }
  get_audio_bus_name() {
    return _call_native_mb_ret(
      Area2D._bindings.method_get_audio_bus_name,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  set_audio_bus_override(_enable) {
    return _call_native_mb_no_ret(
      Area2D._bindings.method_set_audio_bus_override,
      this._owner,
      _enable
    );
    
  }
  is_overriding_audio_bus() {
    return _call_native_mb_ret(
      Area2D._bindings.method_is_overriding_audio_bus,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  
get monitoring () {
  return this.is_monitoring();
}
set monitoring (new_value) {
  this.set_monitoring(new_value);
}
get monitorable () {
  return this.is_monitorable();
}
set monitorable (new_value) {
  this.set_monitorable(new_value);
}
get priority () {
  return this.get_priority();
}
set priority (new_value) {
  this.set_priority(new_value);
}
get gravity_space_override () {
  return this.get_gravity_space_override_mode();
}
set gravity_space_override (new_value) {
  this.set_gravity_space_override_mode(new_value);
}
get gravity_point () {
  return this.is_gravity_a_point();
}
set gravity_point (new_value) {
  this.set_gravity_is_point(new_value);
}
get gravity_point_unit_distance () {
  return this.get_gravity_point_unit_distance();
}
set gravity_point_unit_distance (new_value) {
  this.set_gravity_point_unit_distance(new_value);
}
get gravity_point_center () {
  return this.get_gravity_point_center();
}
set gravity_point_center (new_value) {
  this.set_gravity_point_center(new_value);
}
get gravity_direction () {
  return this.get_gravity_direction();
}
set gravity_direction (new_value) {
  this.set_gravity_direction(new_value);
}
get gravity () {
  return this.get_gravity();
}
set gravity (new_value) {
  this.set_gravity(new_value);
}
get linear_damp_space_override () {
  return this.get_linear_damp_space_override_mode();
}
set linear_damp_space_override (new_value) {
  this.set_linear_damp_space_override_mode(new_value);
}
get linear_damp () {
  return this.get_linear_damp();
}
set linear_damp (new_value) {
  this.set_linear_damp(new_value);
}
get angular_damp_space_override () {
  return this.get_angular_damp_space_override_mode();
}
set angular_damp_space_override (new_value) {
  this.set_angular_damp_space_override_mode(new_value);
}
get angular_damp () {
  return this.get_angular_damp();
}
set angular_damp (new_value) {
  this.set_angular_damp(new_value);
}
get audio_bus_override () {
  return this.is_overriding_audio_bus();
}
set audio_bus_override (new_value) {
  this.set_audio_bus_override(new_value);
}
get audio_bus_name () {
  return this.get_audio_bus_name();
}
set audio_bus_name (new_value) {
  this.set_audio_bus_name(new_value);
}

  static SpaceOverride = {
    SPACE_OVERRIDE_DISABLED: 0,
    SPACE_OVERRIDE_COMBINE: 1,
    SPACE_OVERRIDE_COMBINE_REPLACE: 2,
    SPACE_OVERRIDE_REPLACE: 3,
    SPACE_OVERRIDE_REPLACE_COMBINE: 4,
  }

  static {
    this._init_bindings();
  }
}