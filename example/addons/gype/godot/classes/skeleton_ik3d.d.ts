
import { Skeleton3D } from "@godot/classes/skeleton3d";
import { SkeletonModifier3D } from "@godot/classes/skeleton_modifier3d";

export declare class SkeletonIK3D extends SkeletonModifier3D{
  public set_root_bone(_root_bone: StringName): void;
  public get_root_bone(): StringName;
  public set_tip_bone(_tip_bone: StringName): void;
  public get_tip_bone(): StringName;
  public set_target_transform(_target: Transform3D): void;
  public get_target_transform(): Transform3D;
  public set_target_node(_node: NodePath): void;
  public get_target_node(): NodePath;
  public set_override_tip_basis(_override: boolean): void;
  public is_override_tip_basis(): boolean;
  public set_use_magnet(_use: boolean): void;
  public is_using_magnet(): boolean;
  public set_magnet_position(_local_position: Vector3): void;
  public get_magnet_position(): Vector3;
  public get_parent_skeleton(): Skeleton3D;
  public is_running(): boolean;
  public set_min_distance(_min_distance: number): void;
  public get_min_distance(): number;
  public set_max_iterations(_iterations: number): void;
  public get_max_iterations(): number;
  public start(_one_time: boolean): void;
  public stop(): void;
  public set_interpolation(_interpolation: number): void;
  public get_interpolation(): number;
  public get root_bone(): StringName {
    get_root_bone();
  }
  public set root_bone(value: StringName): void {
    set_root_bone(value);
  }
  public get tip_bone(): StringName {
    get_tip_bone();
  }
  public set tip_bone(value: StringName): void {
    set_tip_bone(value);
  }
  public get target(): Transform3D {
    get_target_transform();
  }
  public set target(value: Transform3D): void {
    set_target_transform(value);
  }
  public get override_tip_basis(): boolean {
    is_override_tip_basis();
  }
  public set override_tip_basis(value: boolean): void {
    set_override_tip_basis(value);
  }
  public get use_magnet(): boolean {
    is_using_magnet();
  }
  public set use_magnet(value: boolean): void {
    set_use_magnet(value);
  }
  public get magnet(): Vector3 {
    get_magnet_position();
  }
  public set magnet(value: Vector3): void {
    set_magnet_position(value);
  }
  public get target_node(): NodePath {
    get_target_node();
  }
  public set target_node(value: NodePath): void {
    set_target_node(value);
  }
  public get min_distance(): number {
    get_min_distance();
  }
  public set min_distance(value: number): void {
    set_min_distance(value);
  }
  public get max_iterations(): number {
    get_max_iterations();
  }
  public set max_iterations(value: number): void {
    set_max_iterations(value);
  }
  public get interpolation(): number {
    get_interpolation();
  }
  public set interpolation(value: number): void {
    set_interpolation(value);
  }
}