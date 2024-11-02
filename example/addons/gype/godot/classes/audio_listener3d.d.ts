
import { Node3D } from "@godot/classes/node3d";


export declare class AudioListener3D extends Node3D{
  public make_current(): void;
  public clear_current(): void;
  public is_current(): boolean;
  public get_listener_transform(): Transform3D;
}