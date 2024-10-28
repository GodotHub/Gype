
import { Node3D } from "@godot/classes/node3d";

export declare class Joint3D extends Node3D{
  public set_node_a(_node: NodePath): void;
  public get_node_a(): NodePath;
  public set_node_b(_node: NodePath): void;
  public get_node_b(): NodePath;
  public set_solver_priority(_priority: number): void;
  public get_solver_priority(): number;
  public set_exclude_nodes_from_collision(_enable: boolean): void;
  public get_exclude_nodes_from_collision(): boolean;
  public get_rid(): RID;
  public get node_a(): NodePath {
    get_node_a();
  }
  public set node_a(value: NodePath): void {
    set_node_a(value);
  }
  public get node_b(): NodePath {
    get_node_b();
  }
  public set node_b(value: NodePath): void {
    set_node_b(value);
  }
  public get solver_priority(): number {
    get_solver_priority();
  }
  public set solver_priority(value: number): void {
    set_solver_priority(value);
  }
  public get exclude_nodes_from_collision(): boolean {
    get_exclude_nodes_from_collision();
  }
  public set exclude_nodes_from_collision(value: boolean): void {
    set_exclude_nodes_from_collision(value);
  }
}