
import { Skin } from "@godot/classes/skin";
import { Resource } from "@godot/classes/resource";

export declare class GLTFSkin extends Resource{
  public get_skin_root(): number;
  public set_skin_root(_skin_root: number): void;
  public get_joints_original(): PackedInt32Array;
  public set_joints_original(_joints_original: PackedInt32Array): void;
  public get_inverse_binds(): Array;
  public set_inverse_binds(_inverse_binds: typedarray::Transform3D): void;
  public get_joints(): PackedInt32Array;
  public set_joints(_joints: PackedInt32Array): void;
  public get_non_joints(): PackedInt32Array;
  public set_non_joints(_non_joints: PackedInt32Array): void;
  public get_roots(): PackedInt32Array;
  public set_roots(_roots: PackedInt32Array): void;
  public get_skeleton(): number;
  public set_skeleton(_skeleton: number): void;
  public get_joint_i_to_bone_i(): Dictionary;
  public set_joint_i_to_bone_i(_joint_i_to_bone_i: Dictionary): void;
  public get_joint_i_to_name(): Dictionary;
  public set_joint_i_to_name(_joint_i_to_name: Dictionary): void;
  public get_godot_skin(): Skin;
  public set_godot_skin(_godot_skin: Skin): void;
  public get skin_root(): number {
    get_skin_root();
  }
  public set skin_root(value: number): void {
    set_skin_root(value);
  }
  public get joints_original(): PackedInt32Array {
    get_joints_original();
  }
  public set joints_original(value: PackedInt32Array): void {
    set_joints_original(value);
  }
  public get inverse_binds(): Array {
    get_inverse_binds();
  }
  public set inverse_binds(value: Array): void {
    set_inverse_binds(value);
  }
  public get joints(): PackedInt32Array {
    get_joints();
  }
  public set joints(value: PackedInt32Array): void {
    set_joints(value);
  }
  public get non_joints(): PackedInt32Array {
    get_non_joints();
  }
  public set non_joints(value: PackedInt32Array): void {
    set_non_joints(value);
  }
  public get roots(): PackedInt32Array {
    get_roots();
  }
  public set roots(value: PackedInt32Array): void {
    set_roots(value);
  }
  public get skeleton(): number {
    get_skeleton();
  }
  public set skeleton(value: number): void {
    set_skeleton(value);
  }
  public get joint_i_to_bone_i(): Dictionary {
    get_joint_i_to_bone_i();
  }
  public set joint_i_to_bone_i(value: Dictionary): void {
    set_joint_i_to_bone_i(value);
  }
  public get joint_i_to_name(): Dictionary {
    get_joint_i_to_name();
  }
  public set joint_i_to_name(value: Dictionary): void {
    set_joint_i_to_name(value);
  }
  public get godot_skin(): Skin {
    get_godot_skin();
  }
  public set godot_skin(value: Skin): void {
    set_godot_skin(value);
  }
}