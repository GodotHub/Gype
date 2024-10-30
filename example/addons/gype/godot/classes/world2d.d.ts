
import { PhysicsDirectSpaceState2D } from "@godot/classes/physics_direct_space_state2d";
import { Resource } from "@godot/classes/resource";

export declare class World2D extends Resource{
  public get_canvas(): RID;
  public get_space(): RID;
  public get_navigation_map(): RID;
  public get_direct_space_state(): PhysicsDirectSpaceState2D;
  public get canvas(): RID {
    get_canvas();
  }
  public get space(): RID {
    get_space();
  }
  public get navigation_map(): RID {
    get_navigation_map();
  }
  public get direct_space_state(): PhysicsDirectSpaceState2D {
    get_direct_space_state();
  }
}