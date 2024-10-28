
import { Container } from "@godot/classes/container";

export declare class CenterContainer extends Container{
  public set_use_top_left(_enable: boolean): void;
  public is_using_top_left(): boolean;
  public get use_top_left(): boolean {
    is_using_top_left();
  }
  public set use_top_left(value: boolean): void {
    set_use_top_left(value);
  }
}