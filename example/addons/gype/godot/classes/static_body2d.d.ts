
import { PhysicsBody2D } from "@godot/classes/physics_body2d";
import { PhysicsMaterial } from "@godot/classes/physics_material";
export declare class StaticBody2D extends PhysicsBody2D{
  public set_constant_linear_velocity(_vel: Vector2): void;
  public set_constant_angular_velocity(_vel: number): void;
  public get_constant_linear_velocity(): Vector2;
  public get_constant_angular_velocity(): number;
  public set_physics_material_override(_physics_material_override: PhysicsMaterial): void;
  public get_physics_material_override(): PhysicsMaterial;
  public get physics_material_override(): PhysicsMaterial;
  public set physics_material_override(value): void;
  public get constant_linear_velocity(): Vector2;
  public set constant_linear_velocity(value): void;
  public get constant_angular_velocity(): number;
  public set constant_angular_velocity(value): void;
}