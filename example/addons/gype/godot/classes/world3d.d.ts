
import { PhysicsDirectSpaceState3D } from "@godot/classes/physics_direct_space_state3d";
import { Environment } from "@godot/classes/environment";
import { Resource } from "@godot/classes/resource";
import { CameraAttributes } from "@godot/classes/camera_attributes";
export declare class World3D extends Resource{
  public get_space(): RID;
  public get_navigation_map(): RID;
  public get_scenario(): RID;
  public set_environment(_env: Environment): void;
  public get_environment(): Environment;
  public set_fallback_environment(_env: Environment): void;
  public get_fallback_environment(): Environment;
  public set_camera_attributes(_attributes: CameraAttributes): void;
  public get_camera_attributes(): CameraAttributes;
  public get_direct_space_state(): PhysicsDirectSpaceState3D;
  public get environment(): Environment;
  public set environment(value): void;
  public get fallback_environment(): Environment;
  public set fallback_environment(value): void;
  public get camera_attributes(): CameraAttributesPractical;
  public set camera_attributes(value): void;
  public get space(): RID;
  public get navigation_map(): RID;
  public get scenario(): RID;
  public get direct_space_state(): PhysicsDirectSpaceState3D;
}