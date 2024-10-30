
import { Node } from "@godot/classes/node";
import { SceneReplicationConfig } from "@godot/classes/scene_replication_config";

export declare class MultiplayerSynchronizer extends Node{
  public set_root_path(_path: NodePath): void;
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
  public get root_path(): NodePath {
    get_root_path();
  }
  public set root_path(value): void {
    set_root_path(value);
  }
  public get replication_interval(): number {
    get_replication_interval();
  }
  public set replication_interval(value): void {
    set_replication_interval(value);
  }
  public get delta_interval(): number {
    get_delta_interval();
  }
  public set delta_interval(value): void {
    set_delta_interval(value);
  }
  public get replication_config(): SceneReplicationConfig {
    get_replication_config();
  }
  public set replication_config(value): void {
    set_replication_config(value);
  }
  public get visibility_update_mode(): number {
    get_visibility_update_mode();
  }
  public set visibility_update_mode(value): void {
    set_visibility_update_mode(value);
  }
  public get public_visibility(): boolean {
    is_visibility_public();
  }
  public set public_visibility(value): void {
    set_visibility_public(value);
  }
  static VisibilityUpdateMode = {
    VISIBILITY_PROCESS_IDLE = 0,
    VISIBILITY_PROCESS_PHYSICS = 1,
    VISIBILITY_PROCESS_NONE = 2,
  }
  public const synchronized: string = "synchronized";
  public const delta_synchronized: string = "delta_synchronized";
  public const visibility_changed: string = "visibility_changed";
}