
import { Resource } from "@godot/classes/resource";


export declare class Skin extends Resource{
  public set_bind_count(_bind_count: number): void;
  public get_bind_count(): number;
  public add_bind(_bone: number, _pose: Transform3D): void;
  public add_named_bind(_name: GDString | StringName | string, _pose: Transform3D): void;
  public set_bind_pose(_bind_index: number, _pose: Transform3D): void;
  public get_bind_pose(_bind_index: number): Transform3D;
  public set_bind_name(_bind_index: number, _name: GDString | StringName | string): void;
  public get_bind_name(_bind_index: number): StringName;
  public set_bind_bone(_bind_index: number, _bone: number): void;
  public get_bind_bone(_bind_index: number): number;
  public clear_binds(): void;
}