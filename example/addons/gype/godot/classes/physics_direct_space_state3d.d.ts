
import { PhysicsPointQueryParameters3D } from "@godot/classes/physics_point_query_parameters3d";
import { PhysicsShapeQueryParameters3D } from "@godot/classes/physics_shape_query_parameters3d";
import { Object } from "@godot/classes/object";
import { PhysicsRayQueryParameters3D } from "@godot/classes/physics_ray_query_parameters3d";

export declare class PhysicsDirectSpaceState3D extends Object{
  public intersect_point(_parameters: PhysicsPointQueryParameters3D, _max_results: number): Array;
  public intersect_ray(_parameters: PhysicsRayQueryParameters3D): Dictionary;
  public intersect_shape(_parameters: PhysicsShapeQueryParameters3D, _max_results: number): Array;
  public cast_motion(_parameters: PhysicsShapeQueryParameters3D): PackedFloat32Array;
  public collide_shape(_parameters: PhysicsShapeQueryParameters3D, _max_results: number): Array;
  public get_rest_info(_parameters: PhysicsShapeQueryParameters3D): Dictionary;
}