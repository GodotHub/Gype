
import { Node2D } from "@godot/classes/node2d";

export declare class Joint2D extends Node2D{
  public set_node_a(_node: NodePath): void;
  public get_node_a(): NodePath;
  public set_node_b(_node: NodePath): void;
  public get_node_b(): NodePath;
  public set_bias(_bias: number): void;
  public get_bias(): number;
  public set_exclude_nodes_from_collision(_enable: boolean): void;
  public get_exclude_nodes_from_collision(): boolean;
  public get_rid(): RID;
  public get node_a(): NodePath {
    get_node_a();
  }
  public set node_a(value): void {
    set_node_a(value);
  }
  public get node_b(): NodePath {
    get_node_b();
  }
  public set node_b(value): void {
    set_node_b(value);
  }
  public get bias(): number {
    get_bias();
  }
  public set bias(value): void {
    set_bias(value);
  }
  public get disable_collision(): boolean {
    get_exclude_nodes_from_collision();
  }
  public set disable_collision(value): void {
    set_exclude_nodes_from_collision(value);
  }
}