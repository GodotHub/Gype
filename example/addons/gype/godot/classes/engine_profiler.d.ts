
import { RefCounted } from "@godot/classes/ref_counted";
export declare class EngineProfiler extends RefCounted{
  public _toggle(_enable: boolean, _options: GDArray): void;
  public _add_frame(_data: GDArray): void;
  public _tick(_frame_time: number, _process_time: number, _physics_time: number, _physics_frame_time: number): void;
}