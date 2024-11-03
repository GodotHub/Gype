
import { Node3D } from "@godot/classes/node3d";
export declare class Joint3D extends Node3D{
  public set_node_a(_node: GDString | NodePath | string): void;
  public get_node_a(): NodePath;
  public set_node_b(_node: GDString | NodePath | string): void;
  public get_node_b(): NodePath;
  public set_solver_priority(_priority: number): void;
  public get_solver_priority(): number;
  public set_exclude_nodes_from_collision(_enable: boolean): void;
  public get_exclude_nodes_from_collision(): boolean;
  public get_rid(): RID;
  public get node_a(): NodePath;
  public set node_a(value): void;
  public get node_b(): NodePath;
  public set node_b(value): void;
  public get solver_priority(): number;
  public set solver_priority(value): void;
  public get exclude_nodes_from_collision(): boolean;
  public set exclude_nodes_from_collision(value): void;
}