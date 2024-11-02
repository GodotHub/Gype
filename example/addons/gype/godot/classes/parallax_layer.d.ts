
import { Node2D } from "@godot/classes/node2d";


export declare class ParallaxLayer extends Node2D{
  public set_motion_scale(_scale: Vector2): void;
  public get_motion_scale(): Vector2;
  public set_motion_offset(_offset: Vector2): void;
  public get_motion_offset(): Vector2;
  public set_mirroring(_mirror: Vector2): void;
  public get_mirroring(): Vector2;
  public get motion_scale(): Vector2;
  public set motion_scale(value): void;
  public get motion_offset(): Vector2;
  public set motion_offset(value): void;
  public get motion_mirroring(): Vector2;
  public set motion_mirroring(value): void;
}