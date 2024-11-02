
import { Node3D } from "@godot/classes/node3d";


export declare class XRFaceModifier3D extends Node3D{
  public set_face_tracker(_tracker_name: GDString | StringName | string): void;
  public get_face_tracker(): StringName;
  public set_target(_target: GDString | NodePath | string): void;
  public get_target(): NodePath;
  public get face_tracker(): String;
  public set face_tracker(value): void;
  public get target(): NodePath;
  public set target(value): void;
}