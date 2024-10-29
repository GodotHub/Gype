
import { Container } from "@godot/classes/container";

export declare class GridContainer extends Container{
  public set_columns(_columns: number): void;
  public get_columns(): number;
  public get columns(): number {
    get_columns();
  }
  public set columns(value): void {
    set_columns(value);
  }
}