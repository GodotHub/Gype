import * as internal from '__internal__';
import { Node3D } from '@js_godot/classes/node3d'
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
  method_resource_changed;
  method_set_enabled;
  method_is_enabled;
  method_set_shape;
  method_get_shape;
  method_set_target_position;
  method_get_target_position;
  method_set_margin;
  method_get_margin;
  method_set_max_results;
  method_get_max_results;
  method_is_colliding;
  method_get_collision_count;
  method_force_shapecast_update;
  method_get_collider;
  method_get_collider_rid;
  method_get_collider_shape;
  method_get_collision_point;
  method_get_collision_normal;
  method_get_closest_collision_safe_fraction;
  method_get_closest_collision_unsafe_fraction;
  method_add_exception_rid;
  method_add_exception;
  method_remove_exception_rid;
  method_remove_exception;
  method_clear_exceptions;
  method_set_collision_mask;
  method_get_collision_mask;
  method_set_collision_mask_value;
  method_get_collision_mask_value;
  method_set_exclude_parent_body;
  method_get_exclude_parent_body;
  method_set_collide_with_areas;
  method_is_collide_with_areas_enabled;
  method_set_collide_with_bodies;
  method_is_collide_with_bodies_enabled;
  method_set_debug_shape_custom_color;
  method_get_debug_shape_custom_color;
}
@GodotClass
export class ShapeCast3D extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ShapeCast3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_resource_changed() {
    if (!this._bindings.method_resource_changed) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("resource_changed");
      this._bindings.method_resource_changed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        968641751
      );
    }
  }
  static init_method_set_enabled() {
    if (!this._bindings.method_set_enabled) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("set_enabled");
      this._bindings.method_set_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_enabled() {
    if (!this._bindings.method_is_enabled) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("is_enabled");
      this._bindings.method_is_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_shape() {
    if (!this._bindings.method_set_shape) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("set_shape");
      this._bindings.method_set_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1549710052
      );
    }
  }
  static init_method_get_shape() {
    if (!this._bindings.method_get_shape) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("get_shape");
      this._bindings.method_get_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3214262478
      );
    }
  }
  static init_method_set_target_position() {
    if (!this._bindings.method_set_target_position) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("set_target_position");
      this._bindings.method_set_target_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_target_position() {
    if (!this._bindings.method_get_target_position) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("get_target_position");
      this._bindings.method_get_target_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_margin() {
    if (!this._bindings.method_set_margin) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("set_margin");
      this._bindings.method_set_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_margin() {
    if (!this._bindings.method_get_margin) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("get_margin");
      this._bindings.method_get_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_max_results() {
    if (!this._bindings.method_set_max_results) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("set_max_results");
      this._bindings.method_set_max_results = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_max_results() {
    if (!this._bindings.method_get_max_results) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("get_max_results");
      this._bindings.method_get_max_results = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_is_colliding() {
    if (!this._bindings.method_is_colliding) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("is_colliding");
      this._bindings.method_is_colliding = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_collision_count() {
    if (!this._bindings.method_get_collision_count) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("get_collision_count");
      this._bindings.method_get_collision_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_force_shapecast_update() {
    if (!this._bindings.method_force_shapecast_update) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("force_shapecast_update");
      this._bindings.method_force_shapecast_update = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_collider() {
    if (!this._bindings.method_get_collider) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("get_collider");
      this._bindings.method_get_collider = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3332903315
      );
    }
  }
  static init_method_get_collider_rid() {
    if (!this._bindings.method_get_collider_rid) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("get_collider_rid");
      this._bindings.method_get_collider_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        495598643
      );
    }
  }
  static init_method_get_collider_shape() {
    if (!this._bindings.method_get_collider_shape) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("get_collider_shape");
      this._bindings.method_get_collider_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_get_collision_point() {
    if (!this._bindings.method_get_collision_point) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("get_collision_point");
      this._bindings.method_get_collision_point = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        711720468
      );
    }
  }
  static init_method_get_collision_normal() {
    if (!this._bindings.method_get_collision_normal) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("get_collision_normal");
      this._bindings.method_get_collision_normal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        711720468
      );
    }
  }
  static init_method_get_closest_collision_safe_fraction() {
    if (!this._bindings.method_get_closest_collision_safe_fraction) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("get_closest_collision_safe_fraction");
      this._bindings.method_get_closest_collision_safe_fraction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_closest_collision_unsafe_fraction() {
    if (!this._bindings.method_get_closest_collision_unsafe_fraction) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("get_closest_collision_unsafe_fraction");
      this._bindings.method_get_closest_collision_unsafe_fraction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_add_exception_rid() {
    if (!this._bindings.method_add_exception_rid) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("add_exception_rid");
      this._bindings.method_add_exception_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2722037293
      );
    }
  }
  static init_method_add_exception() {
    if (!this._bindings.method_add_exception) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("add_exception");
      this._bindings.method_add_exception = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1976431078
      );
    }
  }
  static init_method_remove_exception_rid() {
    if (!this._bindings.method_remove_exception_rid) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("remove_exception_rid");
      this._bindings.method_remove_exception_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2722037293
      );
    }
  }
  static init_method_remove_exception() {
    if (!this._bindings.method_remove_exception) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("remove_exception");
      this._bindings.method_remove_exception = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1976431078
      );
    }
  }
  static init_method_clear_exceptions() {
    if (!this._bindings.method_clear_exceptions) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("clear_exceptions");
      this._bindings.method_clear_exceptions = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_collision_mask() {
    if (!this._bindings.method_set_collision_mask) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("set_collision_mask");
      this._bindings.method_set_collision_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_collision_mask() {
    if (!this._bindings.method_get_collision_mask) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("get_collision_mask");
      this._bindings.method_get_collision_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_collision_mask_value() {
    if (!this._bindings.method_set_collision_mask_value) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("set_collision_mask_value");
      this._bindings.method_set_collision_mask_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_collision_mask_value() {
    if (!this._bindings.method_get_collision_mask_value) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("get_collision_mask_value");
      this._bindings.method_get_collision_mask_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_exclude_parent_body() {
    if (!this._bindings.method_set_exclude_parent_body) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("set_exclude_parent_body");
      this._bindings.method_set_exclude_parent_body = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_exclude_parent_body() {
    if (!this._bindings.method_get_exclude_parent_body) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("get_exclude_parent_body");
      this._bindings.method_get_exclude_parent_body = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_collide_with_areas() {
    if (!this._bindings.method_set_collide_with_areas) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("set_collide_with_areas");
      this._bindings.method_set_collide_with_areas = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_collide_with_areas_enabled() {
    if (!this._bindings.method_is_collide_with_areas_enabled) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("is_collide_with_areas_enabled");
      this._bindings.method_is_collide_with_areas_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_collide_with_bodies() {
    if (!this._bindings.method_set_collide_with_bodies) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("set_collide_with_bodies");
      this._bindings.method_set_collide_with_bodies = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_collide_with_bodies_enabled() {
    if (!this._bindings.method_is_collide_with_bodies_enabled) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("is_collide_with_bodies_enabled");
      this._bindings.method_is_collide_with_bodies_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_debug_shape_custom_color() {
    if (!this._bindings.method_set_debug_shape_custom_color) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("set_debug_shape_custom_color");
      this._bindings.method_set_debug_shape_custom_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_debug_shape_custom_color() {
    if (!this._bindings.method_get_debug_shape_custom_color) {
      let classname = new StringName("ShapeCast3D");
      let methodname = new StringName("get_debug_shape_custom_color");
      this._bindings.method_get_debug_shape_custom_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }

  
  
  resource_changed(_resource) {
    ShapeCast3D.init_method_resource_changed();
    return _call_native_mb_no_ret(
      ShapeCast3D._bindings.method_resource_changed,
      this._owner,
      _resource
    );
    
  }
  set_enabled(_enabled) {
    ShapeCast3D.init_method_set_enabled();
    return _call_native_mb_no_ret(
      ShapeCast3D._bindings.method_set_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_enabled() {
    ShapeCast3D.init_method_is_enabled();
    return _call_native_mb_ret(
      ShapeCast3D._bindings.method_is_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_shape(_shape) {
    ShapeCast3D.init_method_set_shape();
    return _call_native_mb_no_ret(
      ShapeCast3D._bindings.method_set_shape,
      this._owner,
      _shape
    );
    
  }
  get_shape() {
    ShapeCast3D.init_method_get_shape();
    return _call_native_mb_ret(
      ShapeCast3D._bindings.method_get_shape,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_target_position(_local_point) {
    ShapeCast3D.init_method_set_target_position();
    return _call_native_mb_no_ret(
      ShapeCast3D._bindings.method_set_target_position,
      this._owner,
      _local_point
    );
    
  }
  get_target_position() {
    ShapeCast3D.init_method_get_target_position();
    return _call_native_mb_ret(
      ShapeCast3D._bindings.method_get_target_position,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_margin(_margin) {
    ShapeCast3D.init_method_set_margin();
    return _call_native_mb_no_ret(
      ShapeCast3D._bindings.method_set_margin,
      this._owner,
      _margin
    );
    
  }
  get_margin() {
    ShapeCast3D.init_method_get_margin();
    return _call_native_mb_ret(
      ShapeCast3D._bindings.method_get_margin,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_max_results(_max_results) {
    ShapeCast3D.init_method_set_max_results();
    return _call_native_mb_no_ret(
      ShapeCast3D._bindings.method_set_max_results,
      this._owner,
      _max_results
    );
    
  }
  get_max_results() {
    ShapeCast3D.init_method_get_max_results();
    return _call_native_mb_ret(
      ShapeCast3D._bindings.method_get_max_results,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  is_colliding() {
    ShapeCast3D.init_method_is_colliding();
    return _call_native_mb_ret(
      ShapeCast3D._bindings.method_is_colliding,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_collision_count() {
    ShapeCast3D.init_method_get_collision_count();
    return _call_native_mb_ret(
      ShapeCast3D._bindings.method_get_collision_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  force_shapecast_update() {
    ShapeCast3D.init_method_force_shapecast_update();
    return _call_native_mb_no_ret(
      ShapeCast3D._bindings.method_force_shapecast_update,
      this._owner,
      
    );
    
  }
  get_collider(_index) {
    ShapeCast3D.init_method_get_collider();
    return _call_native_mb_ret(
      ShapeCast3D._bindings.method_get_collider,
      this._owner,
			Variant.Type.OBJECT,
      _index
    );
    
  }
  get_collider_rid(_index) {
    ShapeCast3D.init_method_get_collider_rid();
    return _call_native_mb_ret(
      ShapeCast3D._bindings.method_get_collider_rid,
      this._owner,
			Variant.Type.RID,
    
      _index
    );
    
  }
  get_collider_shape(_index) {
    ShapeCast3D.init_method_get_collider_shape();
    return _call_native_mb_ret(
      ShapeCast3D._bindings.method_get_collider_shape,
      this._owner,
			Variant.Type.INT,
    
      _index
    );
    
  }
  get_collision_point(_index) {
    ShapeCast3D.init_method_get_collision_point();
    return _call_native_mb_ret(
      ShapeCast3D._bindings.method_get_collision_point,
      this._owner,
			Variant.Type.VECTOR3,
    
      _index
    );
    
  }
  get_collision_normal(_index) {
    ShapeCast3D.init_method_get_collision_normal();
    return _call_native_mb_ret(
      ShapeCast3D._bindings.method_get_collision_normal,
      this._owner,
			Variant.Type.VECTOR3,
    
      _index
    );
    
  }
  get_closest_collision_safe_fraction() {
    ShapeCast3D.init_method_get_closest_collision_safe_fraction();
    return _call_native_mb_ret(
      ShapeCast3D._bindings.method_get_closest_collision_safe_fraction,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_closest_collision_unsafe_fraction() {
    ShapeCast3D.init_method_get_closest_collision_unsafe_fraction();
    return _call_native_mb_ret(
      ShapeCast3D._bindings.method_get_closest_collision_unsafe_fraction,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  add_exception_rid(_rid) {
    ShapeCast3D.init_method_add_exception_rid();
    return _call_native_mb_no_ret(
      ShapeCast3D._bindings.method_add_exception_rid,
      this._owner,
      _rid
    );
    
  }
  add_exception(_node) {
    ShapeCast3D.init_method_add_exception();
    return _call_native_mb_no_ret(
      ShapeCast3D._bindings.method_add_exception,
      this._owner,
      _node
    );
    
  }
  remove_exception_rid(_rid) {
    ShapeCast3D.init_method_remove_exception_rid();
    return _call_native_mb_no_ret(
      ShapeCast3D._bindings.method_remove_exception_rid,
      this._owner,
      _rid
    );
    
  }
  remove_exception(_node) {
    ShapeCast3D.init_method_remove_exception();
    return _call_native_mb_no_ret(
      ShapeCast3D._bindings.method_remove_exception,
      this._owner,
      _node
    );
    
  }
  clear_exceptions() {
    ShapeCast3D.init_method_clear_exceptions();
    return _call_native_mb_no_ret(
      ShapeCast3D._bindings.method_clear_exceptions,
      this._owner,
      
    );
    
  }
  set_collision_mask(_mask) {
    ShapeCast3D.init_method_set_collision_mask();
    return _call_native_mb_no_ret(
      ShapeCast3D._bindings.method_set_collision_mask,
      this._owner,
      _mask
    );
    
  }
  get_collision_mask() {
    ShapeCast3D.init_method_get_collision_mask();
    return _call_native_mb_ret(
      ShapeCast3D._bindings.method_get_collision_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_collision_mask_value(_layer_number, _value) {
    ShapeCast3D.init_method_set_collision_mask_value();
    return _call_native_mb_no_ret(
      ShapeCast3D._bindings.method_set_collision_mask_value,
      this._owner,
      _layer_number, _value
    );
    
  }
  get_collision_mask_value(_layer_number) {
    ShapeCast3D.init_method_get_collision_mask_value();
    return _call_native_mb_ret(
      ShapeCast3D._bindings.method_get_collision_mask_value,
      this._owner,
			Variant.Type.BOOL,
    
      _layer_number
    );
    
  }
  set_exclude_parent_body(_mask) {
    ShapeCast3D.init_method_set_exclude_parent_body();
    return _call_native_mb_no_ret(
      ShapeCast3D._bindings.method_set_exclude_parent_body,
      this._owner,
      _mask
    );
    
  }
  get_exclude_parent_body() {
    ShapeCast3D.init_method_get_exclude_parent_body();
    return _call_native_mb_ret(
      ShapeCast3D._bindings.method_get_exclude_parent_body,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_collide_with_areas(_enable) {
    ShapeCast3D.init_method_set_collide_with_areas();
    return _call_native_mb_no_ret(
      ShapeCast3D._bindings.method_set_collide_with_areas,
      this._owner,
      _enable
    );
    
  }
  is_collide_with_areas_enabled() {
    ShapeCast3D.init_method_is_collide_with_areas_enabled();
    return _call_native_mb_ret(
      ShapeCast3D._bindings.method_is_collide_with_areas_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_collide_with_bodies(_enable) {
    ShapeCast3D.init_method_set_collide_with_bodies();
    return _call_native_mb_no_ret(
      ShapeCast3D._bindings.method_set_collide_with_bodies,
      this._owner,
      _enable
    );
    
  }
  is_collide_with_bodies_enabled() {
    ShapeCast3D.init_method_is_collide_with_bodies_enabled();
    return _call_native_mb_ret(
      ShapeCast3D._bindings.method_is_collide_with_bodies_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_debug_shape_custom_color(_debug_shape_custom_color) {
    ShapeCast3D.init_method_set_debug_shape_custom_color();
    return _call_native_mb_no_ret(
      ShapeCast3D._bindings.method_set_debug_shape_custom_color,
      this._owner,
      _debug_shape_custom_color
    );
    
  }
  get_debug_shape_custom_color() {
    ShapeCast3D.init_method_get_debug_shape_custom_color();
    return _call_native_mb_ret(
      ShapeCast3D._bindings.method_get_debug_shape_custom_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  
get enabled () {
  return this.is_enabled();
}
set enabled (new_value) {
  this.set_enabled(new_value);
}
get shape () {
  return this.get_shape();
}
set shape (new_value) {
  this.set_shape(new_value);
}
get exclude_parent () {
  return this.get_exclude_parent_body();
}
set exclude_parent (new_value) {
  this.set_exclude_parent_body(new_value);
}
get target_position () {
  return this.get_target_position();
}
set target_position (new_value) {
  this.set_target_position(new_value);
}
get margin () {
  return this.get_margin();
}
set margin (new_value) {
  this.set_margin(new_value);
}
get max_results () {
  return this.get_max_results();
}
set max_results (new_value) {
  this.set_max_results(new_value);
}
get collision_mask () {
  return this.get_collision_mask();
}
set collision_mask (new_value) {
  this.set_collision_mask(new_value);
}
get collision_result () {
  return this._get_collision_result();
}
get collide_with_areas () {
  return this.is_collide_with_areas_enabled();
}
set collide_with_areas (new_value) {
  this.set_collide_with_areas(new_value);
}
get collide_with_bodies () {
  return this.is_collide_with_bodies_enabled();
}
set collide_with_bodies (new_value) {
  this.set_collide_with_bodies(new_value);
}
get debug_shape_custom_color () {
  return this.get_debug_shape_custom_color();
}
set debug_shape_custom_color (new_value) {
  this.set_debug_shape_custom_color(new_value);
}

}