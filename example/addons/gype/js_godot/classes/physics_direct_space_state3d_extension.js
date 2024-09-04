import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { Transform3D } from '@js_godot/variant/transform3d'
import { Vector3 } from '@js_godot/variant/vector3'
import { StringName } from '@js_godot/variant/string_name'
import { PhysicsDirectSpaceState3D } from '@js_godot/classes/physics_direct_space_state3d'
import { RID } from '@js_godot/variant/rid'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_is_body_excluded_from_query;
}
export class PhysicsDirectSpaceState3DExtension extends PhysicsDirectSpaceState3D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsDirectSpaceState3DExtension");
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
      let classname = new StringName("PhysicsDirectSpaceState3DExtension");
      let methodname = new StringName("is_body_excluded_from_query");
      this._bindings.method_is_body_excluded_from_query = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4155700596
      );
    }
  }
  _intersect_ray(_from, _to, _collision_mask, _collide_with_bodies, _collide_with_areas, _hit_from_inside, _hit_back_faces, _pick_ray, _result) {
  }
  _intersect_point(_position, _collision_mask, _collide_with_bodies, _collide_with_areas, _results, _max_results) {
  }
  _intersect_shape(_shape_rid, _transform, _motion, _margin, _collision_mask, _collide_with_bodies, _collide_with_areas, _result_count, _max_results) {
  }
  _cast_motion(_shape_rid, _transform, _motion, _margin, _collision_mask, _collide_with_bodies, _collide_with_areas, _closest_safe, _closest_unsafe, _info) {
  }
  _collide_shape(_shape_rid, _transform, _motion, _margin, _collision_mask, _collide_with_bodies, _collide_with_areas, _results, _max_results, _result_count) {
  }
  _rest_info(_shape_rid, _transform, _motion, _margin, _collision_mask, _collide_with_bodies, _collide_with_areas, _rest_info) {
  }
  _get_closest_point_to_object_volume(_object, _point) {
  }
  is_body_excluded_from_query(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_body_excluded_from_query,
      this._owner,
			Variant.Type.BOOL,
      _body
    );
    
  }
  


  static {
    this._init_bindings();
  }
}