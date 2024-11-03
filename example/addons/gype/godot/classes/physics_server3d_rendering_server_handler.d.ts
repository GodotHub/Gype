
import { GodotObject } from "@godot/classes/godot_object";
export declare class PhysicsServer3DRenderingServerHandler extends GodotObject{
  public _set_vertex(_vertex_id: number, _vertex: Vector3): void;
  public _set_normal(_vertex_id: number, _normal: Vector3): void;
  public _set_aabb(_aabb: AABB): void;
  public set_vertex(_vertex_id: number, _vertex: Vector3): void;
  public set_normal(_vertex_id: number, _normal: Vector3): void;
  public set_aabb(_aabb: AABB): void;
}