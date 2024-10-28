
import { Object } from "@godot/classes/object";

export declare class ResourceUID extends Object{
  public id_to_text(_id: number): String;
  public text_to_id(_text_id: String): number;
  public create_id(): number;
  public has_id(_id: number): boolean;
  public add_id(_id: number, _path: String): void;
  public set_id(_id: number, _path: String): void;
  public get_id_path(_id: number): String;
  public remove_id(_id: number): void;
}