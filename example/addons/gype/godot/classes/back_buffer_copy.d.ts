
import { Node2D } from "@godot/classes/node2d";

export declare class BackBufferCopy extends Node2D{
  public set_rect(_rect: Rect2): void;
  public get_rect(): Rect2;
  public set_copy_mode(_copy_mode: number): void;
  public get_copy_mode(): number;
  public get copy_mode(): number {
    get_copy_mode();
  }
  public set copy_mode(value): void {
    set_copy_mode(value);
  }
  public get rect(): Rect2 {
    get_rect();
  }
  public set rect(value): void {
    set_rect(value);
  }
  static CopyMode = {
    COPY_MODE_DISABLED = 0,
    COPY_MODE_RECT = 1,
    COPY_MODE_VIEWPORT = 2,
  }
}