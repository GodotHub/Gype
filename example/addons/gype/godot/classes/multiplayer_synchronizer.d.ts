
import { SceneReplicationConfig } from "@godot/classes/scene_replication_config";
import { Node } from "@godot/classes/node";


export declare class MultiplayerSynchronizer extends Node{
  public set_root_path(_path: GDString | NodePath | string): void;
  public get_root_path(): NodePath;
  public set_replication_interval(_milliseconds: number): void;
  public get_replication_interval(): number;
  public set_delta_interval(_milliseconds: number): void;
  public get_delta_interval(): number;
  public set_replication_config(_config: SceneReplicationConfig): void;
  public get_replication_config(): SceneReplicationConfig;
  public set_visibility_update_mode(_mode: number): void;
  public get_visibility_update_mode(): number;
  public update_visibility(_for_peer: number): void;
  public set_visibility_public(_visible: boolean): void;
  public is_visibility_public(): boolean;
  public add_visibility_filter(_filter: Callable): void;
  public remove_visibility_filter(_filter: Callable): void;
  public set_visibility_for(_peer: number, _visible: boolean): void;
  public get_visibility_for(_peer: number): boolean;
  public get root_path(): NodePath;
  public set root_path(value): void;
  public get replication_interval(): number;
  public set replication_interval(value): void;
  public get delta_interval(): number;
  public set delta_interval(value): void;
  public get replication_config(): SceneReplicationConfig;
  public set replication_config(value): void;
  public get visibility_update_mode(): number;
  public set visibility_update_mode(value): void;
  public get public_visibility(): boolean;
  public set public_visibility(value): void;
  static VisibilityUpdateMode = {
    VISIBILITY_PROCESS_IDLE = 0,
    VISIBILITY_PROCESS_PHYSICS = 1,
    VISIBILITY_PROCESS_NONE = 2,
  }
  public get synchronized(): Signal;
  public get delta_synchronized(): Signal;
  public get visibility_changed(): Signal;
}