
import { RefCounted } from "@godot/classes/ref_counted";
export declare class SceneTreeTimer extends RefCounted{
  public set_time_left(_time: number): void;
  public get_time_left(): number;
  public get time_left(): number;
  public set time_left(value): void;
  public get timeout(): Signal;
}