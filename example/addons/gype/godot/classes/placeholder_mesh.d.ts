
import { Mesh } from "@godot/classes/mesh";

export declare class PlaceholderMesh extends Mesh{
  public set_aabb(_aabb: AABB): void;
  public get aabb(): AABB {
    get_aabb();
  }
  public set aabb(value: AABB): void {
    set_aabb(value);
  }
}