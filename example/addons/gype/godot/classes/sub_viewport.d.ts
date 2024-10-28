
import { Viewport } from "@godot/classes/viewport";

export declare class SubViewport extends Viewport{
  public set_size(_size: Vector2i): void;
  public get_size(): Vector2i;
  public set_size_2d_override(_size: Vector2i): void;
  public get_size_2d_override(): Vector2i;
  public set_size_2d_override_stretch(_enable: boolean): void;
  public is_size_2d_override_stretch_enabled(): boolean;
  public set_update_mode(_mode: number): void;
  public get_update_mode(): number;
  public set_clear_mode(_mode: number): void;
  public get_clear_mode(): number;
  public get size(): Vector2i {
    get_size();
  }
  public set size(value: Vector2i): void {
    set_size(value);
  }
  public get size_2d_override(): Vector2i {
    get_size_2d_override();
  }
  public set size_2d_override(value: Vector2i): void {
    set_size_2d_override(value);
  }
  public get size_2d_override_stretch(): boolean {
    is_size_2d_override_stretch_enabled();
  }
  public set size_2d_override_stretch(value: boolean): void {
    set_size_2d_override_stretch(value);
  }
  public get render_target_clear_mode(): number {
    get_clear_mode();
  }
  public set render_target_clear_mode(value: number): void {
    set_clear_mode(value);
  }
  public get render_target_update_mode(): number {
    get_update_mode();
  }
  public set render_target_update_mode(value: number): void {
    set_update_mode(value);
  }
  static ClearMode = {
    CLEAR_MODE_ALWAYS = 0,
    CLEAR_MODE_NEVER = 1,
    CLEAR_MODE_ONCE = 2,
  }
  static UpdateMode = {
    UPDATE_DISABLED = 0,
    UPDATE_ONCE = 1,
    UPDATE_WHEN_VISIBLE = 2,
    UPDATE_WHEN_PARENT_VISIBLE = 3,
    UPDATE_ALWAYS = 4,
  }
}