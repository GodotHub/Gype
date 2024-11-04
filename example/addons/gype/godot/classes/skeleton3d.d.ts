
import { Skin } from "@godot/classes/skin";
import { Node3D } from "@godot/classes/node3d";
import { SkinReference } from "@godot/classes/skin_reference";
export declare class Skeleton3D extends Node3D{
  public add_bone(_name: GDString | StringName | string): number;
  public find_bone(_name: GDString | StringName | string): number;
  public get_bone_name(_bone_idx: number): String;
  public set_bone_name(_bone_idx: number, _name: GDString | StringName | string): void;
  public get_concatenated_bone_names(): StringName;
  public get_bone_parent(_bone_idx: number): number;
  public set_bone_parent(_bone_idx: number, _parent_idx: number): void;
  public get_bone_count(): number;
  public get_version(): number;
  public unparent_bone_and_rest(_bone_idx: number): void;
  public get_bone_children(_bone_idx: number): PackedInt32Array;
  public get_parentless_bones(): PackedInt32Array;
  public get_bone_rest(_bone_idx: number): Transform3D;
  public set_bone_rest(_bone_idx: number, _rest: Transform3D): void;
  public get_bone_global_rest(_bone_idx: number): Transform3D;
  public create_skin_from_rest_transforms(): Skin;
  public register_skin(_skin: Skin): SkinReference;
  public localize_rests(): void;
  public clear_bones(): void;
  public get_bone_pose(_bone_idx: number): Transform3D;
  public set_bone_pose(_bone_idx: number, _pose: Transform3D): void;
  public set_bone_pose_position(_bone_idx: number, _position: Vector3): void;
  public set_bone_pose_rotation(_bone_idx: number, _rotation: Quaternion): void;
  public set_bone_pose_scale(_bone_idx: number, _scale: Vector3): void;
  public get_bone_pose_position(_bone_idx: number): Vector3;
  public get_bone_pose_rotation(_bone_idx: number): Quaternion;
  public get_bone_pose_scale(_bone_idx: number): Vector3;
  public reset_bone_pose(_bone_idx: number): void;
  public reset_bone_poses(): void;
  public is_bone_enabled(_bone_idx: number): boolean;
  public set_bone_enabled(_bone_idx: number, _enabled: boolean = true): void;
  public get_bone_global_pose(_bone_idx: number): Transform3D;
  public set_bone_global_pose(_bone_idx: number, _pose: Transform3D): void;
  public force_update_all_bone_transforms(): void;
  public force_update_bone_child_transform(_bone_idx: number): void;
  public set_motion_scale(_motion_scale: number): void;
  public get_motion_scale(): number;
  public set_show_rest_only(_enabled: boolean): void;
  public is_show_rest_only(): boolean;
  public set_modifier_callback_mode_process(_mode: number): void;
  public get_modifier_callback_mode_process(): number;
  public clear_bones_global_pose_override(): void;
  public set_bone_global_pose_override(_bone_idx: number, _pose: Transform3D, _amount: number, _persistent: boolean = false): void;
  public get_bone_global_pose_override(_bone_idx: number): Transform3D;
  public get_bone_global_pose_no_override(_bone_idx: number): Transform3D;
  public set_animate_physical_bones(_enabled: boolean): void;
  public get_animate_physical_bones(): boolean;
  public physical_bones_stop_simulation(): void;
  public physical_bones_start_simulation(_bones: GDArray = []): void;
  public physical_bones_add_collision_exception(_exception: RID): void;
  public physical_bones_remove_collision_exception(_exception: RID): void;
  public get motion_scale(): number;
  public set motion_scale(value): void;
  public get show_rest_only(): boolean;
  public set show_rest_only(value): void;
  public get modifier_callback_mode_process(): number;
  public set modifier_callback_mode_process(value): void;
  public get animate_physical_bones(): boolean;
  public set animate_physical_bones(value): void;
  static ModifierCallbackModeProcess = {
    MODIFIER_CALLBACK_MODE_PROCESS_PHYSICS = 0,
    MODIFIER_CALLBACK_MODE_PROCESS_IDLE = 1,
  }
  public get pose_updated(): Signal;
  public get skeleton_updated(): Signal;
  public get bone_enabled_changed(): Signal;
  public get bone_list_changed(): Signal;
  public get show_rest_only_changed(): Signal;
}