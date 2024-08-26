import * as internal from '__internal__';
import { PhysicsDirectSpaceState2D } from 'src/js_godot/classesphysics_direct_space_state2d'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { RID } from 'src/js_godot/variant/rid'
import { Transform2D } from 'src/js_godot/variant/transform2d'
class _MethodBindings {
    method__intersect_ray;
    method__intersect_point;
    method__intersect_shape;
    method__cast_motion;
    method__collide_shape;
    method__rest_info;
    method_is_body_excluded_from_query;
}


export class PhysicsDirectSpaceState2DExtension extends PhysicsDirectSpaceState2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsDirectSpaceState2DExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("PhysicsDirectSpaceState2DExtension");
      let methodname = new StringName("_intersect_ray");
      this._bindings.method__intersect_ray = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectSpaceState2DExtension");
      let methodname = new StringName("_intersect_point");
      this._bindings.method__intersect_point = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectSpaceState2DExtension");
      let methodname = new StringName("_intersect_shape");
      this._bindings.method__intersect_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectSpaceState2DExtension");
      let methodname = new StringName("_cast_motion");
      this._bindings.method__cast_motion = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectSpaceState2DExtension");
      let methodname = new StringName("_collide_shape");
      this._bindings.method__collide_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectSpaceState2DExtension");
      let methodname = new StringName("_rest_info");
      this._bindings.method__rest_info = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectSpaceState2DExtension");
      let methodname = new StringName("is_body_excluded_from_query");
      this._bindings.method_is_body_excluded_from_query = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4155700596
      );
    }
  }
  _intersect_ray(_from, _to, _collision_mask, _collide_with_bodies, _collide_with_areas, _hit_from_inside, _result) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__intersect_ray,
      this._owner,
			Variant.Type.BOOL,
      _from, _to, _collision_mask, _collide_with_bodies, _collide_with_areas, _hit_from_inside, _result
    );
  }
  _intersect_point(_position, _canvas_instance_id, _collision_mask, _collide_with_bodies, _collide_with_areas, _results, _max_results) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__intersect_point,
      this._owner,
			Variant.Type.INT,
      _position, _canvas_instance_id, _collision_mask, _collide_with_bodies, _collide_with_areas, _results, _max_results
    );
  }
  _intersect_shape(_shape_rid, _transform, _motion, _margin, _collision_mask, _collide_with_bodies, _collide_with_areas, _result, _max_results) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__intersect_shape,
      this._owner,
			Variant.Type.INT,
      _shape_rid, _transform, _motion, _margin, _collision_mask, _collide_with_bodies, _collide_with_areas, _result, _max_results
    );
  }
  _cast_motion(_shape_rid, _transform, _motion, _margin, _collision_mask, _collide_with_bodies, _collide_with_areas, _closest_safe, _closest_unsafe) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__cast_motion,
      this._owner,
			Variant.Type.BOOL,
      _shape_rid, _transform, _motion, _margin, _collision_mask, _collide_with_bodies, _collide_with_areas, _closest_safe, _closest_unsafe
    );
  }
  _collide_shape(_shape_rid, _transform, _motion, _margin, _collision_mask, _collide_with_bodies, _collide_with_areas, _results, _max_results, _result_count) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__collide_shape,
      this._owner,
			Variant.Type.BOOL,
      _shape_rid, _transform, _motion, _margin, _collision_mask, _collide_with_bodies, _collide_with_areas, _results, _max_results, _result_count
    );
  }
  _rest_info(_shape_rid, _transform, _motion, _margin, _collision_mask, _collide_with_bodies, _collide_with_areas, _rest_info) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__rest_info,
      this._owner,
			Variant.Type.BOOL,
      _shape_rid, _transform, _motion, _margin, _collision_mask, _collide_with_bodies, _collide_with_areas, _rest_info
    );
  }
  is_body_excluded_from_query(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_body_excluded_from_query,
      this._owner,
			Variant.Type.BOOL,
      _body
    );
  }
}