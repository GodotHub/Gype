
import { Node3DGizmo } from "@godot/classes/node3d_gizmo";
import { Node3DGizmo } from "@godot/classes/node3d_gizmo";
import { Node } from "@godot/classes/node";
import { World3D } from "@godot/classes/world3d";

export declare class Node3D extends Node{
  public set_transform(_local: Transform3D): void;
  public get_transform(): Transform3D;
  public set_position(_position: Vector3): void;
  public get_position(): Vector3;
  public set_rotation(_euler_radians: Vector3): void;
  public get_rotation(): Vector3;
  public set_rotation_degrees(_euler_degrees: Vector3): void;
  public get_rotation_degrees(): Vector3;
  public set_rotation_order(_order: number): void;
  public get_rotation_order(): number;
  public set_rotation_edit_mode(_edit_mode: number): void;
  public get_rotation_edit_mode(): number;
  public set_scale(_scale: Vector3): void;
  public get_scale(): Vector3;
  public set_quaternion(_quaternion: Quaternion): void;
  public get_quaternion(): Quaternion;
  public set_basis(_basis: Basis): void;
  public get_basis(): Basis;
  public set_global_transform(_global: Transform3D): void;
  public get_global_transform(): Transform3D;
  public set_global_position(_position: Vector3): void;
  public get_global_position(): Vector3;
  public set_global_basis(_basis: Basis): void;
  public get_global_basis(): Basis;
  public set_global_rotation(_euler_radians: Vector3): void;
  public get_global_rotation(): Vector3;
  public set_global_rotation_degrees(_euler_degrees: Vector3): void;
  public get_global_rotation_degrees(): Vector3;
  public get_parent_node_3d(): Node3D;
  public set_ignore_transform_notification(_enabled: boolean): void;
  public set_as_top_level(_enable: boolean): void;
  public is_set_as_top_level(): boolean;
  public set_disable_scale(_disable: boolean): void;
  public is_scale_disabled(): boolean;
  public get_world_3d(): World3D;
  public force_update_transform(): void;
  public set_visibility_parent(_path: NodePath): void;
  public get_visibility_parent(): NodePath;
  public update_gizmos(): void;
  public add_gizmo(_gizmo: Node3DGizmo): void;
  public get_gizmos(): GDArray;
  public clear_gizmos(): void;
  public set_subgizmo_selection(_gizmo: Node3DGizmo, _id: number, _transform: Transform3D): void;
  public clear_subgizmo_selection(): void;
  public set_visible(_visible: boolean): void;
  public is_visible(): boolean;
  public is_visible_in_tree(): boolean;
  public show(): void;
  public hide(): void;
  public set_notify_local_transform(_enable: boolean): void;
  public is_local_transform_notification_enabled(): boolean;
  public set_notify_transform(_enable: boolean): void;
  public is_transform_notification_enabled(): boolean;
  public rotate(_axis: Vector3, _angle: number): void;
  public global_rotate(_axis: Vector3, _angle: number): void;
  public global_scale(_scale: Vector3): void;
  public global_translate(_offset: Vector3): void;
  public rotate_object_local(_axis: Vector3, _angle: number): void;
  public scale_object_local(_scale: Vector3): void;
  public translate_object_local(_offset: Vector3): void;
  public rotate_x(_angle: number): void;
  public rotate_y(_angle: number): void;
  public rotate_z(_angle: number): void;
  public translate(_offset: Vector3): void;
  public orthonormalize(): void;
  public set_identity(): void;
  public look_at(_target: Vector3, _up: Vector3, _use_model_front: boolean): void;
  public look_at_from_position(_position: Vector3, _target: Vector3, _up: Vector3, _use_model_front: boolean): void;
  public to_local(_global_point: Vector3): Vector3;
  public to_global(_local_point: Vector3): Vector3;
  public get transform(): Transform3D {
    get_transform();
  }
  public set transform(value): void {
    set_transform(value);
  }
  public get global_transform(): Transform3D {
    get_global_transform();
  }
  public set global_transform(value): void {
    set_global_transform(value);
  }
  public get position(): Vector3 {
    get_position();
  }
  public set position(value): void {
    set_position(value);
  }
  public get rotation(): Vector3 {
    get_rotation();
  }
  public set rotation(value): void {
    set_rotation(value);
  }
  public get rotation_degrees(): Vector3 {
    get_rotation_degrees();
  }
  public set rotation_degrees(value): void {
    set_rotation_degrees(value);
  }
  public get quaternion(): Quaternion {
    get_quaternion();
  }
  public set quaternion(value): void {
    set_quaternion(value);
  }
  public get basis(): Basis {
    get_basis();
  }
  public set basis(value): void {
    set_basis(value);
  }
  public get scale(): Vector3 {
    get_scale();
  }
  public set scale(value): void {
    set_scale(value);
  }
  public get rotation_edit_mode(): number {
    get_rotation_edit_mode();
  }
  public set rotation_edit_mode(value): void {
    set_rotation_edit_mode(value);
  }
  public get rotation_order(): number {
    get_rotation_order();
  }
  public set rotation_order(value): void {
    set_rotation_order(value);
  }
  public get top_level(): boolean {
    is_set_as_top_level();
  }
  public set top_level(value): void {
    set_as_top_level(value);
  }
  public get global_position(): Vector3 {
    get_global_position();
  }
  public set global_position(value): void {
    set_global_position(value);
  }
  public get global_basis(): Basis {
    get_global_basis();
  }
  public set global_basis(value): void {
    set_global_basis(value);
  }
  public get global_rotation(): Vector3 {
    get_global_rotation();
  }
  public set global_rotation(value): void {
    set_global_rotation(value);
  }
  public get global_rotation_degrees(): Vector3 {
    get_global_rotation_degrees();
  }
  public set global_rotation_degrees(value): void {
    set_global_rotation_degrees(value);
  }
  public get visible(): boolean {
    is_visible();
  }
  public set visible(value): void {
    set_visible(value);
  }
  public get visibility_parent(): NodePath {
    get_visibility_parent();
  }
  public set visibility_parent(value): void {
    set_visibility_parent(value);
  }
  static RotationEditMode = {
    ROTATION_EDIT_MODE_EULER = 0,
    ROTATION_EDIT_MODE_QUATERNION = 1,
    ROTATION_EDIT_MODE_BASIS = 2,
  }
  public get visibility_changed(): Signal;
}