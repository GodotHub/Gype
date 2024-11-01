
import { PhysicsDirectSpaceState3D } from "@godot/classes/physics_direct_space_state3d";
import { Resource } from "@godot/classes/resource";
import { Environment } from "@godot/classes/environment";
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
  public get environment(): Environment {
    get_environment();
  }
  public set environment(value): void {
    set_environment(value);
  }
  public get fallback_environment(): Environment {
    get_fallback_environment();
  }
  public set fallback_environment(value): void {
    set_fallback_environment(value);
  }
  public get camera_attributes(): CameraAttributesPractical {
    get_camera_attributes();
  }
  public set camera_attributes(value): void {
    set_camera_attributes(value);
  }
  public get space(): RID {
    get_space();
  }
  public get navigation_map(): RID {
    get_navigation_map();
  }
  public get scenario(): RID {
    get_scenario();
  }
  public get direct_space_state(): PhysicsDirectSpaceState3D {
    get_direct_space_state();
  }
}