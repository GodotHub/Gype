
import { GodotObject } from "@godot/classes/godot_object";
declare global {
export declare class _WorkerThreadPool extends GodotObject{
  public add_task(_action: Callable, _high_priority: boolean = false, _description: GDString | StringName | string = ""): number;
  public is_task_completed(_task_id: number): boolean;
  public wait_for_task_completion(_task_id: number): number;
  public add_group_task(_action: Callable, _elements: number, _tasks_needed: number = -1, _high_priority: boolean = false, _description: GDString | StringName | string = ""): number;
  public is_group_task_completed(_group_id: number): boolean;
  public get_group_processed_element_count(_group_id: number): number;
  public wait_for_group_task_completion(_group_id: number): void;
}
}
declare global {
  const WorkerThreadPool: _WorkerThreadPool;
}