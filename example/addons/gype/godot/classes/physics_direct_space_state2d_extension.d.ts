
import { PhysicsDirectSpaceState2D } from "@godot/classes/physics_direct_space_state2d";

export declare class PhysicsDirectSpaceState2DExtension extends PhysicsDirectSpaceState2D{
  public _intersect_ray(_from: Vector2, _to: Vector2, _collision_mask: number, _collide_with_bodies: boolean, _collide_with_areas: boolean, _hit_from_inside: boolean, _result: PhysicsServer2DExtensionRayResult*): boolean;
  public _intersect_point(_position: Vector2, _canvas_instance_id: number, _collision_mask: number, _collide_with_bodies: boolean, _collide_with_areas: boolean, _results: PhysicsServer2DExtensionShapeResult*, _max_results: number): number;
  public _intersect_shape(_shape_rid: RID, _transform: Transform2D, _motion: Vector2, _margin: number, _collision_mask: number, _collide_with_bodies: boolean, _collide_with_areas: boolean, _result: PhysicsServer2DExtensionShapeResult*, _max_results: number): number;
  public _cast_motion(_shape_rid: RID, _transform: Transform2D, _motion: Vector2, _margin: number, _collision_mask: number, _collide_with_bodies: boolean, _collide_with_areas: boolean, _closest_safe: float*, _closest_unsafe: float*): boolean;
  public _collide_shape(_shape_rid: RID, _transform: Transform2D, _motion: Vector2, _margin: number, _collision_mask: number, _collide_with_bodies: boolean, _collide_with_areas: boolean, _results: void*, _max_results: number, _result_count: int32_t*): boolean;
  public _rest_info(_shape_rid: RID, _transform: Transform2D, _motion: Vector2, _margin: number, _collision_mask: number, _collide_with_bodies: boolean, _collide_with_areas: boolean, _rest_info: PhysicsServer2DExtensionShapeRestInfo*): boolean;
  public is_body_excluded_from_query(_body: RID): boolean;
}