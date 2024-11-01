
import { Node2D } from "@godot/classes/node2d";

export declare class RemoteTransform2D extends Node2D{
  public set_remote_node(_path: NodePath): void;
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
  public get remote_path(): NodePath {
    get_remote_node();
  }
  public set remote_path(value): void {
    set_remote_node(value);
  }
  public get use_global_coordinates(): boolean {
    get_use_global_coordinates();
  }
  public set use_global_coordinates(value): void {
    set_use_global_coordinates(value);
  }
  public get update_position(): boolean {
    get_update_position();
  }
  public set update_position(value): void {
    set_update_position(value);
  }
  public get update_rotation(): boolean {
    get_update_rotation();
  }
  public set update_rotation(value): void {
    set_update_rotation(value);
  }
  public get update_scale(): boolean {
    get_update_scale();
  }
  public set update_scale(value): void {
    set_update_scale(value);
  }
}