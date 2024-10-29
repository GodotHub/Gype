
import { CollisionObject3D } from "@godot/classes/collision_object3d";
import { Resource } from "@godot/classes/resource";

export declare class GLTFPhysicsBody extends Resource{
  public from_node(_body_node: CollisionObject3D): GLTFPhysicsBody;
  public to_node(): CollisionObject3D;
  public from_dictionary(_dictionary: Dictionary): GLTFPhysicsBody;
  public to_dictionary(): Dictionary;
  public get_body_type(): String;
  public set_body_type(_body_type: String): void;
  public get_mass(): number;
  public set_mass(_mass: number): void;
  public get_linear_velocity(): Vector3;
  public set_linear_velocity(_linear_velocity: Vector3): void;
  public get_angular_velocity(): Vector3;
  public set_angular_velocity(_angular_velocity: Vector3): void;
  public get_center_of_mass(): Vector3;
  public set_center_of_mass(_center_of_mass: Vector3): void;
  public get_inertia_diagonal(): Vector3;
  public set_inertia_diagonal(_inertia_diagonal: Vector3): void;
  public get_inertia_orientation(): Quaternion;
  public set_inertia_orientation(_inertia_orientation: Quaternion): void;
  public get_inertia_tensor(): Basis;
  public set_inertia_tensor(_inertia_tensor: Basis): void;
  public get body_type(): String {
    get_body_type();
  }
  public set body_type(value): void {
    set_body_type(value);
  }
  public get mass(): number {
    get_mass();
  }
  public set mass(value): void {
    set_mass(value);
  }
  public get linear_velocity(): Vector3 {
    get_linear_velocity();
  }
  public set linear_velocity(value): void {
    set_linear_velocity(value);
  }
  public get angular_velocity(): Vector3 {
    get_angular_velocity();
  }
  public set angular_velocity(value): void {
    set_angular_velocity(value);
  }
  public get center_of_mass(): Vector3 {
    get_center_of_mass();
  }
  public set center_of_mass(value): void {
    set_center_of_mass(value);
  }
  public get inertia_diagonal(): Vector3 {
    get_inertia_diagonal();
  }
  public set inertia_diagonal(value): void {
    set_inertia_diagonal(value);
  }
  public get inertia_orientation(): Quaternion {
    get_inertia_orientation();
  }
  public set inertia_orientation(value): void {
    set_inertia_orientation(value);
  }
  public get inertia_tensor(): Basis {
    get_inertia_tensor();
  }
  public set inertia_tensor(value): void {
    set_inertia_tensor(value);
  }
}