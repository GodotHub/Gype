
import { RefCounted } from "@godot/classes/ref_counted";


export declare class EditorFeatureProfile extends RefCounted{
  public set_disable_class(_class_name: GDString | StringName | string, _disable: boolean): void;
  public is_class_disabled(_class_name: GDString | StringName | string): boolean;
  public set_disable_class_editor(_class_name: GDString | StringName | string, _disable: boolean): void;
  public is_class_editor_disabled(_class_name: GDString | StringName | string): boolean;
  public set_disable_class_property(_class_name: GDString | StringName | string, _property: GDString | StringName | string, _disable: boolean): void;
  public is_class_property_disabled(_class_name: GDString | StringName | string, _property: GDString | StringName | string): boolean;
  public set_disable_feature(_feature: number, _disable: boolean): void;
  public is_feature_disabled(_feature: number): boolean;
  public get_feature_name(_feature: number): String;
  public save_to_file(_path: GDString | StringName | string): number;
  public load_from_file(_path: GDString | StringName | string): number;
  static Feature = {
    FEATURE_3D = 0,
    FEATURE_SCRIPT = 1,
    FEATURE_ASSET_LIB = 2,
    FEATURE_SCENE_TREE = 3,
    FEATURE_NODE_DOCK = 4,
    FEATURE_FILESYSTEM_DOCK = 5,
    FEATURE_IMPORT_DOCK = 6,
    FEATURE_HISTORY_DOCK = 7,
    FEATURE_MAX = 8,
  }
}