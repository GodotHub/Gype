import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { Node2D } from 'src/js_godot/classes/node2d'
import { RID } from 'src/js_godot/variant/rid'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
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
}


export class ShapeCast2D extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ShapeCast2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("set_enabled");
        this._bindings.method_set_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("is_enabled");
        this._bindings.method_is_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("set_shape");
        this._bindings.method_set_shape = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          771364740
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("get_shape");
        this._bindings.method_get_shape = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          522005891
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("set_target_position");
        this._bindings.method_set_target_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("get_target_position");
        this._bindings.method_get_target_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("set_margin");
        this._bindings.method_set_margin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("get_margin");
        this._bindings.method_get_margin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("set_max_results");
        this._bindings.method_set_max_results = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("get_max_results");
        this._bindings.method_get_max_results = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("is_colliding");
        this._bindings.method_is_colliding = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("get_collision_count");
        this._bindings.method_get_collision_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("force_shapecast_update");
        this._bindings.method_force_shapecast_update = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("get_collider");
        this._bindings.method_get_collider = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3332903315
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("get_collider_rid");
        this._bindings.method_get_collider_rid = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          495598643
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("get_collider_shape");
        this._bindings.method_get_collider_shape = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          923996154
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("get_collision_point");
        this._bindings.method_get_collision_point = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2299179447
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("get_collision_normal");
        this._bindings.method_get_collision_normal = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2299179447
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("get_closest_collision_safe_fraction");
        this._bindings.method_get_closest_collision_safe_fraction = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("get_closest_collision_unsafe_fraction");
        this._bindings.method_get_closest_collision_unsafe_fraction = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("add_exception_rid");
        this._bindings.method_add_exception_rid = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("add_exception");
        this._bindings.method_add_exception = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3090941106
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("remove_exception_rid");
        this._bindings.method_remove_exception_rid = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("remove_exception");
        this._bindings.method_remove_exception = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3090941106
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("clear_exceptions");
        this._bindings.method_clear_exceptions = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("set_collision_mask");
        this._bindings.method_set_collision_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("get_collision_mask");
        this._bindings.method_get_collision_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("set_collision_mask_value");
        this._bindings.method_set_collision_mask_value = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          300928843
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("get_collision_mask_value");
        this._bindings.method_get_collision_mask_value = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1116898809
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("set_exclude_parent_body");
        this._bindings.method_set_exclude_parent_body = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("get_exclude_parent_body");
        this._bindings.method_get_exclude_parent_body = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("set_collide_with_areas");
        this._bindings.method_set_collide_with_areas = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("is_collide_with_areas_enabled");
        this._bindings.method_is_collide_with_areas_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("set_collide_with_bodies");
        this._bindings.method_set_collide_with_bodies = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("ShapeCast2D");
        let methodname = new StringName("is_collide_with_bodies_enabled");
        this._bindings.method_is_collide_with_bodies_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
  }
  set_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_shape(_shape) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shape,
      this._owner,
      _shape
    );
    
  }
  get_shape() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_shape,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_target_position(_local_point) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_target_position,
      this._owner,
      _local_point
    );
    
  }
  get_target_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_target_position,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  set_margin(_margin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_margin,
      this._owner,
      _margin
    );
    
  }
  get_margin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_margin,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_max_results(_max_results) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_max_results,
      this._owner,
      _max_results
    );
    
  }
  get_max_results() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_max_results,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  is_colliding() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_colliding,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_collision_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  force_shapecast_update() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_force_shapecast_update,
      this._owner,
      
    );
    
  }
  get_collider(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collider,
      this._owner,
			Variant.INT,
      _index
    );
    
  }
  get_collider_rid(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collider_rid,
      this._owner,
			Variant.Type.RID
    ,
      _index
    );
    
  }
  get_collider_shape(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collider_shape,
      this._owner,
			Variant.Type.INT,
      _index
    );
    
  }
  get_collision_point(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_point,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _index
    );
    
  }
  get_collision_normal(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_normal,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _index
    );
    
  }
  get_closest_collision_safe_fraction() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_closest_collision_safe_fraction,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_closest_collision_unsafe_fraction() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_closest_collision_unsafe_fraction,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  add_exception_rid(_rid) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_exception_rid,
      this._owner,
      _rid
    );
    
  }
  add_exception(_node) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_exception,
      this._owner,
      _node
    );
    
  }
  remove_exception_rid(_rid) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_exception_rid,
      this._owner,
      _rid
    );
    
  }
  remove_exception(_node) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_exception,
      this._owner,
      _node
    );
    
  }
  clear_exceptions() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_exceptions,
      this._owner,
      
    );
    
  }
  set_collision_mask(_mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_mask,
      this._owner,
      _mask
    );
    
  }
  get_collision_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_mask,
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
  set_exclude_parent_body(_mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_exclude_parent_body,
      this._owner,
      _mask
    );
    
  }
  get_exclude_parent_body() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_exclude_parent_body,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_collide_with_areas(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collide_with_areas,
      this._owner,
      _enable
    );
    
  }
  is_collide_with_areas_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_collide_with_areas_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_collide_with_bodies(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collide_with_bodies,
      this._owner,
      _enable
    );
    
  }
  is_collide_with_bodies_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_collide_with_bodies_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
}