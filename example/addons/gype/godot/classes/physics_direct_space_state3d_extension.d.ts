
import { PhysicsDirectSpaceState3D } from "@godot/classes/physics_direct_space_state3d";

export declare class PhysicsDirectSpaceState3DExtension extends PhysicsDirectSpaceState3D{
  public _intersect_ray(_from: Vector3, _to: Vector3, _collision_mask: number, _collide_with_bodies: boolean, _collide_with_areas: boolean, _hit_from_inside: boolean, _hit_back_faces: boolean, _pick_ray: boolean, _result: PhysicsServer3DExtensionRayResult*): boolean;
  public _intersect_point(_position: Vector3, _collision_mask: number, _collide_with_bodies: boolean, _collide_with_areas: boolean, _results: PhysicsServer3DExtensionShapeResult*, _max_results: number): number;
  public _intersect_shape(_shape_rid: RID, _transform: Transform3D, _motion: Vector3, _margin: number, _collision_mask: number, _collide_with_bodies: boolean, _collide_with_areas: boolean, _result_count: PhysicsServer3DExtensionShapeResult*, _max_results: number): number;
  public _cast_motion(_shape_rid: RID, _transform: Transform3D, _motion: Vector3, _margin: number, _collision_mask: number, _collide_with_bodies: boolean, _collide_with_areas: boolean, _closest_safe: float*, _closest_unsafe: float*, _info: PhysicsServer3DExtensionShapeRestInfo*): boolean;
  public _collide_shape(_shape_rid: RID, _transform: Transform3D, _motion: Vector3, _margin: number, _collision_mask: number, _collide_with_bodies: boolean, _collide_with_areas: boolean, _results: void*, _max_results: number, _result_count: int32_t*): boolean;
  public _rest_info(_shape_rid: RID, _transform: Transform3D, _motion: Vector3, _margin: number, _collision_mask: number, _collide_with_bodies: boolean, _collide_with_areas: boolean, _rest_info: PhysicsServer3DExtensionShapeRestInfo*): boolean;
  public _get_closest_point_to_object_volume(_object: RID, _point: Vector3): Vector3;
  public is_body_excluded_from_query(_body: RID): boolean;
}