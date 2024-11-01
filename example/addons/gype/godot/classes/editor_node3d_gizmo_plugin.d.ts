
import { StandardMaterial3D } from "@godot/classes/standard_material3d";
import { Texture2D } from "@godot/classes/texture2d";
import { Resource } from "@godot/classes/resource";
import { EditorNode3DGizmo } from "@godot/classes/editor_node3d_gizmo";
import { Node3D } from "@godot/classes/node3d";
import { Camera3D } from "@godot/classes/camera3d";

export declare class EditorNode3DGizmoPlugin extends Resource{
  public _has_gizmo(_for_node_3d: Node3D): boolean;
  public _create_gizmo(_for_node_3d: Node3D): EditorNode3DGizmo;
  public _get_gizmo_name(): String;
  public _get_priority(): number;
  public _can_be_hidden(): boolean;
  public _is_selectable_when_hidden(): boolean;
  public _redraw(_gizmo: EditorNode3DGizmo): void;
  public _get_handle_name(_gizmo: EditorNode3DGizmo, _handle_id: number, _secondary: boolean): String;
  public _is_handle_highlighted(_gizmo: EditorNode3DGizmo, _handle_id: number, _secondary: boolean): boolean;
  public _get_handle_value(_gizmo: EditorNode3DGizmo, _handle_id: number, _secondary: boolean): any;
  public _begin_handle_action(_gizmo: EditorNode3DGizmo, _handle_id: number, _secondary: boolean): void;
  public _set_handle(_gizmo: EditorNode3DGizmo, _handle_id: number, _secondary: boolean, _camera: Camera3D, _screen_pos: Vector2): void;
  public _commit_handle(_gizmo: EditorNode3DGizmo, _handle_id: number, _secondary: boolean, _restore: any, _cancel: boolean): void;
  public _subgizmos_intersect_ray(_gizmo: EditorNode3DGizmo, _camera: Camera3D, _screen_pos: Vector2): number;
  public _subgizmos_intersect_frustum(_gizmo: EditorNode3DGizmo, _camera: Camera3D, _frustum_planes: GDArray): PackedInt32Array;
  public _get_subgizmo_transform(_gizmo: EditorNode3DGizmo, _subgizmo_id: number): Transform3D;
  public _set_subgizmo_transform(_gizmo: EditorNode3DGizmo, _subgizmo_id: number, _transform: Transform3D): void;
  public _commit_subgizmos(_gizmo: EditorNode3DGizmo, _ids: PackedInt32Array, _restores: GDArray, _cancel: boolean): void;
  public create_material(_name: String | StringName | string, _color: Color, _billboard: boolean, _on_top: boolean, _use_vertex_color: boolean): void;
  public create_icon_material(_name: String | StringName | string, _texture: Texture2D, _on_top: boolean, _color: Color): void;
  public create_handle_material(_name: String | StringName | string, _billboard: boolean, _texture: Texture2D): void;
  public add_material(_name: String | StringName | string, _material: StandardMaterial3D): void;
  public get_material(_name: String | StringName | string, _gizmo: EditorNode3DGizmo): StandardMaterial3D;
}