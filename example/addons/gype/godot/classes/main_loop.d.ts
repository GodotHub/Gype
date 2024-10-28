
import { Object } from "@godot/classes/object";

export declare class MainLoop extends Object{
  public _initialize(): void;
  public _physics_process(_delta: number): boolean;
  public _process(_delta: number): boolean;
  public _finalize(): void;
}