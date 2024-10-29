
import { ImporterMesh } from "@godot/classes/importer_mesh";
import { Skin } from "@godot/classes/skin";
import { Node3D } from "@godot/classes/node3d";

export declare class ImporterMeshInstance3D extends Node3D{
  public set_mesh(_mesh: ImporterMesh): void;
  public get_mesh(): ImporterMesh;
  public set_skin(_skin: Skin): void;
  public get_skin(): Skin;
  public set_skeleton_path(_skeleton_path: NodePath): void;
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
  public get mesh(): ImporterMesh {
    get_mesh();
  }
  public set mesh(value): void {
    set_mesh(value);
  }
  public get skin(): Skin {
    get_skin();
  }
  public set skin(value): void {
    set_skin(value);
  }
  public get skeleton_path(): NodePath {
    get_skeleton_path();
  }
  public set skeleton_path(value): void {
    set_skeleton_path(value);
  }
  public get layer_mask(): number {
    get_layer_mask();
  }
  public set layer_mask(value): void {
    set_layer_mask(value);
  }
  public get cast_shadow(): number {
    get_cast_shadows_setting();
  }
  public set cast_shadow(value): void {
    set_cast_shadows_setting(value);
  }
  public get visibility_range_begin(): number {
    get_visibility_range_begin();
  }
  public set visibility_range_begin(value): void {
    set_visibility_range_begin(value);
  }
  public get visibility_range_begin_margin(): number {
    get_visibility_range_begin_margin();
  }
  public set visibility_range_begin_margin(value): void {
    set_visibility_range_begin_margin(value);
  }
  public get visibility_range_end(): number {
    get_visibility_range_end();
  }
  public set visibility_range_end(value): void {
    set_visibility_range_end(value);
  }
  public get visibility_range_end_margin(): number {
    get_visibility_range_end_margin();
  }
  public set visibility_range_end_margin(value): void {
    set_visibility_range_end_margin(value);
  }
  public get visibility_range_fade_mode(): number {
    get_visibility_range_fade_mode();
  }
  public set visibility_range_fade_mode(value): void {
    set_visibility_range_fade_mode(value);
  }
}