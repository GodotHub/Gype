import * as internal from '__internal__';
import { PhysicsDirectSpaceState2D } from '@js_godot/classes/physics_direct_space_state2d'
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
  method_is_body_excluded_from_query;
}
@GodotClass
export class PhysicsDirectSpaceState2DExtension extends PhysicsDirectSpaceState2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsDirectSpaceState2DExtension");
    } else {
      super(godot_object);
    }
  }
  static init_method_is_body_excluded_from_query() {
    if (!this._bindings.method_is_body_excluded_from_query) {
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
  }
  _intersect_point(_position, _canvas_instance_id, _collision_mask, _collide_with_bodies, _collide_with_areas, _results, _max_results) {
  }
  _intersect_shape(_shape_rid, _transform, _motion, _margin, _collision_mask, _collide_with_bodies, _collide_with_areas, _result, _max_results) {
  }
  _cast_motion(_shape_rid, _transform, _motion, _margin, _collision_mask, _collide_with_bodies, _collide_with_areas, _closest_safe, _closest_unsafe) {
  }
  _collide_shape(_shape_rid, _transform, _motion, _margin, _collision_mask, _collide_with_bodies, _collide_with_areas, _results, _max_results, _result_count) {
  }
  _rest_info(_shape_rid, _transform, _motion, _margin, _collision_mask, _collide_with_bodies, _collide_with_areas, _rest_info) {
  }
  is_body_excluded_from_query(_body) {
    PhysicsDirectSpaceState2DExtension.init_method_is_body_excluded_from_query();
    return _call_native_mb_ret(
      PhysicsDirectSpaceState2DExtension._bindings.method_is_body_excluded_from_query,
      this._owner,
			Variant.Type.BOOL,
    
      _body
    );
    
  }
  

}