
import { Node2D } from "@godot/classes/node2d";

export declare class Parallax2D extends Node2D{
  public set_scroll_scale(_scale: Vector2): void;
  public get_scroll_scale(): Vector2;
  public set_repeat_size(_repeat_size: Vector2): void;
  public get_repeat_size(): Vector2;
  public set_repeat_times(_repeat_times: number): void;
  public get_repeat_times(): number;
  public set_autoscroll(_autoscroll: Vector2): void;
  public get_autoscroll(): Vector2;
  public set_scroll_offset(_offset: Vector2): void;
  public get_scroll_offset(): Vector2;
  public set_screen_offset(_offset: Vector2): void;
  public get_screen_offset(): Vector2;
  public set_limit_begin(_offset: Vector2): void;
  public get_limit_begin(): Vector2;
  public set_limit_end(_offset: Vector2): void;
  public get_limit_end(): Vector2;
  public set_follow_viewport(_follow: boolean): void;
  public get_follow_viewport(): boolean;
  public set_ignore_camera_scroll(_ignore: boolean): void;
  public is_ignore_camera_scroll(): boolean;
  public get scroll_scale(): Vector2 {
    get_scroll_scale();
  }
  public set scroll_scale(value: Vector2): void {
    set_scroll_scale(value);
  }
  public get scroll_offset(): Vector2 {
    get_scroll_offset();
  }
  public set scroll_offset(value: Vector2): void {
    set_scroll_offset(value);
  }
  public get repeat_size(): Vector2 {
    get_repeat_size();
  }
  public set repeat_size(value: Vector2): void {
    set_repeat_size(value);
  }
  public get autoscroll(): Vector2 {
    get_autoscroll();
  }
  public set autoscroll(value: Vector2): void {
    set_autoscroll(value);
  }
  public get repeat_times(): number {
    get_repeat_times();
  }
  public set repeat_times(value: number): void {
    set_repeat_times(value);
  }
  public get limit_begin(): Vector2 {
    get_limit_begin();
  }
  public set limit_begin(value: Vector2): void {
    set_limit_begin(value);
  }
  public get limit_end(): Vector2 {
    get_limit_end();
  }
  public set limit_end(value: Vector2): void {
    set_limit_end(value);
  }
  public get follow_viewport(): boolean {
    get_follow_viewport();
  }
  public set follow_viewport(value: boolean): void {
    set_follow_viewport(value);
  }
  public get ignore_camera_scroll(): boolean {
    is_ignore_camera_scroll();
  }
  public set ignore_camera_scroll(value: boolean): void {
    set_ignore_camera_scroll(value);
  }
  public get screen_offset(): Vector2 {
    get_screen_offset();
  }
  public set screen_offset(value: Vector2): void {
    set_screen_offset(value);
  }
}