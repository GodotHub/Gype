
import { RefCounted } from "@godot/classes/ref_counted";

export declare class SceneTreeTimer extends RefCounted{
  public set_time_left(_time: number): void;
  public get_time_left(): number;
  public get time_left(): number {
    get_time_left();
  }
  public set time_left(value): void {
    set_time_left(value);
  }
  public const timeout: string = "timeout";
}