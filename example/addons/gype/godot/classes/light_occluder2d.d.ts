
import { Node2D } from "@godot/classes/node2d";
import { OccluderPolygon2D } from "@godot/classes/occluder_polygon2d";


export declare class LightOccluder2D extends Node2D{
  public set_occluder_polygon(_polygon: OccluderPolygon2D): void;
  public get_occluder_polygon(): OccluderPolygon2D;
  public set_occluder_light_mask(_mask: number): void;
  public get_occluder_light_mask(): number;
  public set_as_sdf_collision(_enable: boolean): void;
  public is_set_as_sdf_collision(): boolean;
  public get occluder(): OccluderPolygon2D;
  public set occluder(value): void;
  public get sdf_collision(): boolean;
  public set sdf_collision(value): void;
  public get occluder_light_mask(): number;
  public set occluder_light_mask(value): void;
}