
import { Node2D } from "@godot/classes/node2d";
export declare class Joint2D extends Node2D{
  public set_node_a(_node: GDString | NodePath | string): void;
  public get_node_a(): NodePath;
  public set_node_b(_node: GDString | NodePath | string): void;
  public get_node_b(): NodePath;
  public set_bias(_bias: number): void;
  public get_bias(): number;
  public set_exclude_nodes_from_collision(_enable: boolean): void;
  public get_exclude_nodes_from_collision(): boolean;
  public get_rid(): RID;
  public get node_a(): NodePath;
  public set node_a(value): void;
  public get node_b(): NodePath;
  public set node_b(value): void;
  public get bias(): number;
  public set bias(value): void;
  public get disable_collision(): boolean;
  public set disable_collision(value): void;
}