
import { Resource } from "@godot/classes/resource";


export declare class SceneReplicationConfig extends Resource{
  public get_properties(): GDArray;
  public add_property(_path: GDString | NodePath | string, _index: number): void;
  public has_property(_path: GDString | NodePath | string): boolean;
  public remove_property(_path: GDString | NodePath | string): void;
  public property_get_index(_path: GDString | NodePath | string): number;
  public property_get_spawn(_path: GDString | NodePath | string): boolean;
  public property_set_spawn(_path: GDString | NodePath | string, _enabled: boolean): void;
  public property_get_replication_mode(_path: GDString | NodePath | string): number;
  public property_set_replication_mode(_path: GDString | NodePath | string, _mode: number): void;
  public property_get_sync(_path: GDString | NodePath | string): boolean;
  public property_set_sync(_path: GDString | NodePath | string, _enabled: boolean): void;
  public property_get_watch(_path: GDString | NodePath | string): boolean;
  public property_set_watch(_path: GDString | NodePath | string, _enabled: boolean): void;
  static ReplicationMode = {
    REPLICATION_MODE_NEVER = 0,
    REPLICATION_MODE_ALWAYS = 1,
    REPLICATION_MODE_ON_CHANGE = 2,
  }
}