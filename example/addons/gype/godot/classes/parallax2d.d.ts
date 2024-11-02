
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
  public get scroll_scale(): Vector2;
  public set scroll_scale(value): void;
  public get scroll_offset(): Vector2;
  public set scroll_offset(value): void;
  public get repeat_size(): Vector2;
  public set repeat_size(value): void;
  public get autoscroll(): Vector2;
  public set autoscroll(value): void;
  public get repeat_times(): number;
  public set repeat_times(value): void;
  public get limit_begin(): Vector2;
  public set limit_begin(value): void;
  public get limit_end(): Vector2;
  public set limit_end(value): void;
  public get follow_viewport(): boolean;
  public set follow_viewport(value): void;
  public get ignore_camera_scroll(): boolean;
  public set ignore_camera_scroll(value): void;
  public get screen_offset(): Vector2;
  public set screen_offset(value): void;
}