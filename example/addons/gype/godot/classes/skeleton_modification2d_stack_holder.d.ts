
import { SkeletonModificationStack2D } from "@godot/classes/skeleton_modification_stack2d";
import { SkeletonModification2D } from "@godot/classes/skeleton_modification2d";


export declare class SkeletonModification2DStackHolder extends SkeletonModification2D{
  public set_held_modification_stack(_held_modification_stack: SkeletonModificationStack2D): void;
  public get_held_modification_stack(): SkeletonModificationStack2D;
}