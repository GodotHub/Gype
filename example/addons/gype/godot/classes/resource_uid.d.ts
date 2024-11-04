
import { GodotObject } from "@godot/classes/godot_object";
declare global {
export declare class _ResourceUID extends GodotObject{
  public id_to_text(_id: number): String;
  public text_to_id(_text_id: GDString | StringName | string): number;
  public create_id(): number;
  public has_id(_id: number): boolean;
  public add_id(_id: number, _path: GDString | StringName | string): void;
  public set_id(_id: number, _path: GDString | StringName | string): void;
  public get_id_path(_id: number): String;
  public remove_id(_id: number): void;
}
const ResourceUID: _ResourceUID;
}