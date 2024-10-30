
import { ArrayMesh } from "@godot/classes/array_mesh";
import { Resource } from "@godot/classes/resource";

export declare class Shape3D extends Resource{
  public set_custom_solver_bias(_bias: number): void;
  public get_custom_solver_bias(): number;
  public set_margin(_margin: number): void;
  public get_margin(): number;
  public get_debug_mesh(): ArrayMesh;
  public get custom_solver_bias(): number {
    get_custom_solver_bias();
  }
  public set custom_solver_bias(value): void {
    set_custom_solver_bias(value);
  }
  public get margin(): number {
    get_margin();
  }
  public set margin(value): void {
    set_margin(value);
  }
}