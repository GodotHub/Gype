
import { Node2D } from "@godot/classes/node2d";
import { Node } from "@godot/classes/node";


export declare class Camera2D extends Node2D{
  public set_offset(_offset: Vector2): void;
  public get_offset(): Vector2;
  public set_anchor_mode(_anchor_mode: number): void;
  public get_anchor_mode(): number;
  public set_ignore_rotation(_ignore: boolean): void;
  public is_ignoring_rotation(): boolean;
  public set_process_callback(_mode: number): void;
  public get_process_callback(): number;
  public set_enabled(_enabled: boolean): void;
  public is_enabled(): boolean;
  public make_current(): void;
  public is_current(): boolean;
  public set_limit(_margin: number, _limit: number): void;
  public get_limit(_margin: number): number;
  public set_limit_smoothing_enabled(_limit_smoothing_enabled: boolean): void;
  public is_limit_smoothing_enabled(): boolean;
  public set_drag_vertical_enabled(_enabled: boolean): void;
  public is_drag_vertical_enabled(): boolean;
  public set_drag_horizontal_enabled(_enabled: boolean): void;
  public is_drag_horizontal_enabled(): boolean;
  public set_drag_vertical_offset(_offset: number): void;
  public get_drag_vertical_offset(): number;
  public set_drag_horizontal_offset(_offset: number): void;
  public get_drag_horizontal_offset(): number;
  public set_drag_margin(_margin: number, _drag_margin: number): void;
  public get_drag_margin(_margin: number): number;
  public get_target_position(): Vector2;
  public get_screen_center_position(): Vector2;
  public set_zoom(_zoom: Vector2): void;
  public get_zoom(): Vector2;
  public set_custom_viewport(_viewport: Node): void;
  public get_custom_viewport(): Node;
  public set_position_smoothing_speed(_position_smoothing_speed: number): void;
  public get_position_smoothing_speed(): number;
  public set_position_smoothing_enabled(_position_smoothing_speed: boolean): void;
  public is_position_smoothing_enabled(): boolean;
  public set_rotation_smoothing_enabled(_enabled: boolean): void;
  public is_rotation_smoothing_enabled(): boolean;
  public set_rotation_smoothing_speed(_speed: number): void;
  public get_rotation_smoothing_speed(): number;
  public force_update_scroll(): void;
  public reset_smoothing(): void;
  public align(): void;
  public set_screen_drawing_enabled(_screen_drawing_enabled: boolean): void;
  public is_screen_drawing_enabled(): boolean;
  public set_limit_drawing_enabled(_limit_drawing_enabled: boolean): void;
  public is_limit_drawing_enabled(): boolean;
  public set_margin_drawing_enabled(_margin_drawing_enabled: boolean): void;
  public is_margin_drawing_enabled(): boolean;
  public get offset(): Vector2;
  public set offset(value): void;
  public get anchor_mode(): number;
  public set anchor_mode(value): void;
  public get ignore_rotation(): boolean;
  public set ignore_rotation(value): void;
  public get enabled(): boolean;
  public set enabled(value): void;
  public get zoom(): Vector2;
  public set zoom(value): void;
  public get custom_viewport(): Viewport;
  public set custom_viewport(value): void;
  public get process_callback(): number;
  public set process_callback(value): void;
  public get limit_left(): number;
  public set limit_left(value): void;
  public get limit_top(): number;
  public set limit_top(value): void;
  public get limit_right(): number;
  public set limit_right(value): void;
  public get limit_bottom(): number;
  public set limit_bottom(value): void;
  public get limit_smoothed(): boolean;
  public set limit_smoothed(value): void;
  public get position_smoothing_enabled(): boolean;
  public set position_smoothing_enabled(value): void;
  public get position_smoothing_speed(): number;
  public set position_smoothing_speed(value): void;
  public get rotation_smoothing_enabled(): boolean;
  public set rotation_smoothing_enabled(value): void;
  public get rotation_smoothing_speed(): number;
  public set rotation_smoothing_speed(value): void;
  public get drag_horizontal_enabled(): boolean;
  public set drag_horizontal_enabled(value): void;
  public get drag_vertical_enabled(): boolean;
  public set drag_vertical_enabled(value): void;
  public get drag_horizontal_offset(): number;
  public set drag_horizontal_offset(value): void;
  public get drag_vertical_offset(): number;
  public set drag_vertical_offset(value): void;
  public get drag_left_margin(): number;
  public set drag_left_margin(value): void;
  public get drag_top_margin(): number;
  public set drag_top_margin(value): void;
  public get drag_right_margin(): number;
  public set drag_right_margin(value): void;
  public get drag_bottom_margin(): number;
  public set drag_bottom_margin(value): void;
  public get editor_draw_screen(): boolean;
  public set editor_draw_screen(value): void;
  public get editor_draw_limits(): boolean;
  public set editor_draw_limits(value): void;
  public get editor_draw_drag_margin(): boolean;
  public set editor_draw_drag_margin(value): void;
  static AnchorMode = {
    ANCHOR_MODE_FIXED_TOP_LEFT = 0,
    ANCHOR_MODE_DRAG_CENTER = 1,
  }
  static Camera2DProcessCallback = {
    CAMERA2D_PROCESS_PHYSICS = 0,
    CAMERA2D_PROCESS_IDLE = 1,
  }
}