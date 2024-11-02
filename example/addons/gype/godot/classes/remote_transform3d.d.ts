
import { Node3D } from "@godot/classes/node3d";


export declare class RemoteTransform3D extends Node3D{
  public set_remote_node(_path: GDString | NodePath | string): void;
  public get_remote_node(): NodePath;
  public force_update_cache(): void;
  public set_use_global_coordinates(_use_global_coordinates: boolean): void;
  public get_use_global_coordinates(): boolean;
  public set_update_position(_update_remote_position: boolean): void;
  public get_update_position(): boolean;
  public set_update_rotation(_update_remote_rotation: boolean): void;
  public get_update_rotation(): boolean;
  public set_update_scale(_update_remote_scale: boolean): void;
  public get_update_scale(): boolean;
  public get remote_path(): NodePath;
  public set remote_path(value): void;
  public get use_global_coordinates(): boolean;
  public set use_global_coordinates(value): void;
  public get update_position(): boolean;
  public set update_position(value): void;
  public get update_rotation(): boolean;
  public set update_rotation(value): void;
  public get update_scale(): boolean;
  public set update_scale(value): void;
}