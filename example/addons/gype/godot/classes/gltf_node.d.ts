
import { Resource } from "@godot/classes/resource";

export declare class GLTFNode extends Resource{
  public get_original_name(): String;
  public set_original_name(_original_name: String): void;
  public get_parent(): number;
  public set_parent(_parent: number): void;
  public get_height(): number;
  public set_height(_height: number): void;
  public get_xform(): Transform3D;
  public set_xform(_xform: Transform3D): void;
  public get_mesh(): number;
  public set_mesh(_mesh: number): void;
  public get_camera(): number;
  public set_camera(_camera: number): void;
  public get_skin(): number;
  public set_skin(_skin: number): void;
  public get_skeleton(): number;
  public set_skeleton(_skeleton: number): void;
  public get_position(): Vector3;
  public set_position(_position: Vector3): void;
  public get_rotation(): Quaternion;
  public set_rotation(_rotation: Quaternion): void;
  public get_scale(): Vector3;
  public set_scale(_scale: Vector3): void;
  public get_children(): PackedInt32Array;
  public set_children(_children: PackedInt32Array): void;
  public get_light(): number;
  public set_light(_light: number): void;
  public get_additional_data(_extension_name: StringName): Variant;
  public set_additional_data(_extension_name: StringName, _additional_data: Variant): void;
  public get original_name(): String {
    get_original_name();
  }
  public set original_name(value: String): void {
    set_original_name(value);
  }
  public get parent(): number {
    get_parent();
  }
  public set parent(value: number): void {
    set_parent(value);
  }
  public get height(): number {
    get_height();
  }
  public set height(value: number): void {
    set_height(value);
  }
  public get xform(): Transform3D {
    get_xform();
  }
  public set xform(value: Transform3D): void {
    set_xform(value);
  }
  public get mesh(): number {
    get_mesh();
  }
  public set mesh(value: number): void {
    set_mesh(value);
  }
  public get camera(): number {
    get_camera();
  }
  public set camera(value: number): void {
    set_camera(value);
  }
  public get skin(): number {
    get_skin();
  }
  public set skin(value: number): void {
    set_skin(value);
  }
  public get skeleton(): number {
    get_skeleton();
  }
  public set skeleton(value: number): void {
    set_skeleton(value);
  }
  public get position(): Vector3 {
    get_position();
  }
  public set position(value: Vector3): void {
    set_position(value);
  }
  public get rotation(): Quaternion {
    get_rotation();
  }
  public set rotation(value: Quaternion): void {
    set_rotation(value);
  }
  public get scale(): Vector3 {
    get_scale();
  }
  public set scale(value: Vector3): void {
    set_scale(value);
  }
  public get children(): PackedInt32Array {
    get_children();
  }
  public set children(value: PackedInt32Array): void {
    set_children(value);
  }
  public get light(): number {
    get_light();
  }
  public set light(value: number): void {
    set_light(value);
  }
}