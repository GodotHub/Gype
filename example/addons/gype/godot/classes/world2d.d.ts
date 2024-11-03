
import { Resource } from "@godot/classes/resource";
import { PhysicsDirectSpaceState2D } from "@godot/classes/physics_direct_space_state2d";
export declare class World2D extends Resource{
  public get_canvas(): RID;
  public get_space(): RID;
  public get_navigation_map(): RID;
  public get_direct_space_state(): PhysicsDirectSpaceState2D;
  public get canvas(): RID;
  public get space(): RID;
  public get navigation_map(): RID;
  public get direct_space_state(): PhysicsDirectSpaceState2D;
}