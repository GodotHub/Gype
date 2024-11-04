
import { GodotObject } from "@godot/classes/godot_object";
import { PhysicsRayQueryParameters3D } from "@godot/classes/physics_ray_query_parameters3d";
import { PhysicsShapeQueryParameters3D } from "@godot/classes/physics_shape_query_parameters3d";
import { PhysicsPointQueryParameters3D } from "@godot/classes/physics_point_query_parameters3d";
export declare class PhysicsDirectSpaceState3D extends GodotObject{
  public intersect_point(_parameters: PhysicsPointQueryParameters3D, _max_results: number = 32): GDArray;
  public intersect_ray(_parameters: PhysicsRayQueryParameters3D): Dictionary;
  public intersect_shape(_parameters: PhysicsShapeQueryParameters3D, _max_results: number = 32): GDArray;
  public cast_motion(_parameters: PhysicsShapeQueryParameters3D): PackedFloat32Array;
  public collide_shape(_parameters: PhysicsShapeQueryParameters3D, _max_results: number = 32): GDArray;
  public get_rest_info(_parameters: PhysicsShapeQueryParameters3D): Dictionary;
}