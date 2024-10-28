
import { AnimationNode } from "@godot/classes/animation_node";

export declare class AnimationNodeSync extends AnimationNode{
  public set_use_sync(_enable: boolean): void;
  public is_using_sync(): boolean;
  public get sync(): boolean {
    is_using_sync();
  }
  public set sync(value: boolean): void {
    set_use_sync(value);
  }
}