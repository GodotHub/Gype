
import { ImporterMesh } from "@godot/classes/importer_mesh";
import { Skin } from "@godot/classes/skin";
import { Node3D } from "@godot/classes/node3d";


export declare class ImporterMeshInstance3D extends Node3D{
  public set_mesh(_mesh: ImporterMesh): void;
  public get_mesh(): ImporterMesh;
  public set_skin(_skin: Skin): void;
  public get_skin(): Skin;
  public set_skeleton_path(_skeleton_path: GDString | NodePath | string): void;
  public get_skeleton_path(): NodePath;
  public set_layer_mask(_layer_mask: number): void;
  public get_layer_mask(): number;
  public set_cast_shadows_setting(_shadow_casting_setting: number): void;
  public get_cast_shadows_setting(): number;
  public set_visibility_range_end_margin(_distance: number): void;
  public get_visibility_range_end_margin(): number;
  public set_visibility_range_end(_distance: number): void;
  public get_visibility_range_end(): number;
  public set_visibility_range_begin_margin(_distance: number): void;
  public get_visibility_range_begin_margin(): number;
  public set_visibility_range_begin(_distance: number): void;
  public get_visibility_range_begin(): number;
  public set_visibility_range_fade_mode(_mode: number): void;
  public get_visibility_range_fade_mode(): number;
  public get mesh(): ImporterMesh;
  public set mesh(value): void;
  public get skin(): Skin;
  public set skin(value): void;
  public get skeleton_path(): NodePath;
  public set skeleton_path(value): void;
  public get layer_mask(): number;
  public set layer_mask(value): void;
  public get cast_shadow(): number;
  public set cast_shadow(value): void;
  public get visibility_range_begin(): number;
  public set visibility_range_begin(value): void;
  public get visibility_range_begin_margin(): number;
  public set visibility_range_begin_margin(value): void;
  public get visibility_range_end(): number;
  public set visibility_range_end(value): void;
  public get visibility_range_end_margin(): number;
  public set visibility_range_end_margin(value): void;
  public get visibility_range_fade_mode(): number;
  public set visibility_range_fade_mode(value): void;
}