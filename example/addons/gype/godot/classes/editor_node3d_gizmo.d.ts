
import { SkinReference } from "@godot/classes/skin_reference";
import { Node } from "@godot/classes/node";
import { Material } from "@godot/classes/material";
import { Node3D } from "@godot/classes/node3d";
import { Mesh } from "@godot/classes/mesh";
import { Camera3D } from "@godot/classes/camera3d";
import { TriangleMesh } from "@godot/classes/triangle_mesh";
import { EditorNode3DGizmoPlugin } from "@godot/classes/editor_node3d_gizmo_plugin";
import { Node3DGizmo } from "@godot/classes/node3d_gizmo";
export declare class EditorNode3DGizmo extends Node3DGizmo{
  public _redraw(): void;
  public _get_handle_name(_id: number, _secondary: boolean): String;
  public _is_handle_highlighted(_id: number, _secondary: boolean): boolean;
  public _get_handle_value(_id: number, _secondary: boolean): any;
  public _begin_handle_action(_id: number, _secondary: boolean): void;
  public _set_handle(_id: number, _secondary: boolean, _camera: Camera3D, _point: Vector2): void;
  public _commit_handle(_id: number, _secondary: boolean, _restore: any, _cancel: boolean): void;
  public _subgizmos_intersect_ray(_camera: Camera3D, _point: Vector2): number;
  public _subgizmos_intersect_frustum(_camera: Camera3D, _frustum: GDArray): PackedInt32Array;
  public _set_subgizmo_transform(_id: number, _transform: Transform3D): void;
  public _get_subgizmo_transform(_id: number): Transform3D;
  public _commit_subgizmos(_ids: PackedInt32Array, _restores: GDArray, _cancel: boolean): void;
  public add_lines(_lines: PackedVector3Array, _material: Material, _billboard: boolean = false, _modulate: Color = Color(1, 1, 1, 1)): void;
  public add_mesh(_mesh: Mesh, _material: Material = null, _transform: Transform3D = Transform3D(1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0), _skeleton: SkinReference = null): void;
  public add_collision_segments(_segments: PackedVector3Array): void;
  public add_collision_triangles(_triangles: TriangleMesh): void;
  public add_unscaled_billboard(_material: Material, _default_scale: number = 1, _modulate: Color = Color(1, 1, 1, 1)): void;
  public add_handles(_handles: PackedVector3Array, _material: Material, _ids: PackedInt32Array, _billboard: boolean = false, _secondary: boolean = false): void;
  public set_node_3d(_node: Node): void;
  public get_node_3d(): Node3D;
  public get_plugin(): EditorNode3DGizmoPlugin;
  public clear(): void;
  public set_hidden(_hidden: boolean): void;
  public is_subgizmo_selected(_id: number): boolean;
  public get_subgizmo_selection(): PackedInt32Array;
}