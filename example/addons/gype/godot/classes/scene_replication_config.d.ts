
import { Resource } from "@godot/classes/resource";

export declare class SceneReplicationConfig extends Resource{
  public get_properties(): GDArray;
  public add_property(_path: NodePath, _index: number): void;
  public has_property(_path: NodePath): boolean;
  public remove_property(_path: NodePath): void;
  public property_get_index(_path: NodePath): number;
  public property_get_spawn(_path: NodePath): boolean;
  public property_set_spawn(_path: NodePath, _enabled: boolean): void;
  public property_get_replication_mode(_path: NodePath): number;
  public property_set_replication_mode(_path: NodePath, _mode: number): void;
  public property_get_sync(_path: NodePath): boolean;
  public property_set_sync(_path: NodePath, _enabled: boolean): void;
  public property_get_watch(_path: NodePath): boolean;
  public property_set_watch(_path: NodePath, _enabled: boolean): void;
  static ReplicationMode = {
    REPLICATION_MODE_NEVER = 0,
    REPLICATION_MODE_ALWAYS = 1,
    REPLICATION_MODE_ON_CHANGE = 2,
  }
}