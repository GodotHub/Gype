
import { PhysicsBody3D } from "@godot/classes/physics_body3d";
import { PhysicsMaterial } from "@godot/classes/physics_material";
export declare class StaticBody3D extends PhysicsBody3D{
  public set_constant_linear_velocity(_vel: Vector3): void;
  public set_constant_angular_velocity(_vel: Vector3): void;
  public get_constant_linear_velocity(): Vector3;
  public get_constant_angular_velocity(): Vector3;
  public set_physics_material_override(_physics_material_override: PhysicsMaterial): void;
  public get_physics_material_override(): PhysicsMaterial;
  public get physics_material_override(): PhysicsMaterial;
  public set physics_material_override(value): void;
  public get constant_linear_velocity(): Vector3;
  public set constant_linear_velocity(value): void;
  public get constant_angular_velocity(): Vector3;
  public set constant_angular_velocity(value): void;
}