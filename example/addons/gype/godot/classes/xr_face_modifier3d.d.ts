
import { Node3D } from "@godot/classes/node3d";

export declare class XRFaceModifier3D extends Node3D{
  public set_face_tracker(_tracker_name: StringName): void;
  public get_face_tracker(): StringName;
  public set_target(_target: NodePath): void;
  public get_target(): NodePath;
  public get face_tracker(): String {
    get_face_tracker();
  }
  public set face_tracker(value): void {
    set_face_tracker(value);
  }
  public get target(): NodePath {
    get_target();
  }
  public set target(value): void {
    set_target(value);
  }
}