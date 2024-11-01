
import { OccluderPolygon2D } from "@godot/classes/occluder_polygon2d";
import { Node2D } from "@godot/classes/node2d";

export declare class LightOccluder2D extends Node2D{
  public set_occluder_polygon(_polygon: OccluderPolygon2D): void;
  public get_occluder_polygon(): OccluderPolygon2D;
  public set_occluder_light_mask(_mask: number): void;
  public get_occluder_light_mask(): number;
  public set_as_sdf_collision(_enable: boolean): void;
  public is_set_as_sdf_collision(): boolean;
  public get occluder(): OccluderPolygon2D {
    get_occluder_polygon();
  }
  public set occluder(value): void {
    set_occluder_polygon(value);
  }
  public get sdf_collision(): boolean {
    is_set_as_sdf_collision();
  }
  public set sdf_collision(value): void {
    set_as_sdf_collision(value);
  }
  public get occluder_light_mask(): number {
    get_occluder_light_mask();
  }
  public set occluder_light_mask(value): void {
    set_occluder_light_mask(value);
  }
}