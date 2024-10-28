
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
  public get offset(): Vector2 {
    get_offset();
  }
  public set offset(value: Vector2): void {
    set_offset(value);
  }
  public get anchor_mode(): number {
    get_anchor_mode();
  }
  public set anchor_mode(value: number): void {
    set_anchor_mode(value);
  }
  public get ignore_rotation(): boolean {
    is_ignoring_rotation();
  }
  public set ignore_rotation(value: boolean): void {
    set_ignore_rotation(value);
  }
  public get enabled(): boolean {
    is_enabled();
  }
  public set enabled(value: boolean): void {
    set_enabled(value);
  }
  public get zoom(): Vector2 {
    get_zoom();
  }
  public set zoom(value: Vector2): void {
    set_zoom(value);
  }
  public get custom_viewport(): Viewport {
    get_custom_viewport();
  }
  public set custom_viewport(value: Viewport): void {
    set_custom_viewport(value);
  }
  public get process_callback(): number {
    get_process_callback();
  }
  public set process_callback(value: number): void {
    set_process_callback(value);
  }
  public get limit_left(): number {
    get_limit();
  }
  public set limit_left(value: number): void {
    set_limit(value);
  }
  public get limit_top(): number {
    get_limit();
  }
  public set limit_top(value: number): void {
    set_limit(value);
  }
  public get limit_right(): number {
    get_limit();
  }
  public set limit_right(value: number): void {
    set_limit(value);
  }
  public get limit_bottom(): number {
    get_limit();
  }
  public set limit_bottom(value: number): void {
    set_limit(value);
  }
  public get limit_smoothed(): boolean {
    is_limit_smoothing_enabled();
  }
  public set limit_smoothed(value: boolean): void {
    set_limit_smoothing_enabled(value);
  }
  public get position_smoothing_enabled(): boolean {
    is_position_smoothing_enabled();
  }
  public set position_smoothing_enabled(value: boolean): void {
    set_position_smoothing_enabled(value);
  }
  public get position_smoothing_speed(): number {
    get_position_smoothing_speed();
  }
  public set position_smoothing_speed(value: number): void {
    set_position_smoothing_speed(value);
  }
  public get rotation_smoothing_enabled(): boolean {
    is_rotation_smoothing_enabled();
  }
  public set rotation_smoothing_enabled(value: boolean): void {
    set_rotation_smoothing_enabled(value);
  }
  public get rotation_smoothing_speed(): number {
    get_rotation_smoothing_speed();
  }
  public set rotation_smoothing_speed(value: number): void {
    set_rotation_smoothing_speed(value);
  }
  public get drag_horizontal_enabled(): boolean {
    is_drag_horizontal_enabled();
  }
  public set drag_horizontal_enabled(value: boolean): void {
    set_drag_horizontal_enabled(value);
  }
  public get drag_vertical_enabled(): boolean {
    is_drag_vertical_enabled();
  }
  public set drag_vertical_enabled(value: boolean): void {
    set_drag_vertical_enabled(value);
  }
  public get drag_horizontal_offset(): number {
    get_drag_horizontal_offset();
  }
  public set drag_horizontal_offset(value: number): void {
    set_drag_horizontal_offset(value);
  }
  public get drag_vertical_offset(): number {
    get_drag_vertical_offset();
  }
  public set drag_vertical_offset(value: number): void {
    set_drag_vertical_offset(value);
  }
  public get drag_left_margin(): number {
    get_drag_margin();
  }
  public set drag_left_margin(value: number): void {
    set_drag_margin(value);
  }
  public get drag_top_margin(): number {
    get_drag_margin();
  }
  public set drag_top_margin(value: number): void {
    set_drag_margin(value);
  }
  public get drag_right_margin(): number {
    get_drag_margin();
  }
  public set drag_right_margin(value: number): void {
    set_drag_margin(value);
  }
  public get drag_bottom_margin(): number {
    get_drag_margin();
  }
  public set drag_bottom_margin(value: number): void {
    set_drag_margin(value);
  }
  public get editor_draw_screen(): boolean {
    is_screen_drawing_enabled();
  }
  public set editor_draw_screen(value: boolean): void {
    set_screen_drawing_enabled(value);
  }
  public get editor_draw_limits(): boolean {
    is_limit_drawing_enabled();
  }
  public set editor_draw_limits(value: boolean): void {
    set_limit_drawing_enabled(value);
  }
  public get editor_draw_drag_margin(): boolean {
    is_margin_drawing_enabled();
  }
  public set editor_draw_drag_margin(value: boolean): void {
    set_margin_drawing_enabled(value);
  }
  static AnchorMode = {
    ANCHOR_MODE_FIXED_TOP_LEFT = 0,
    ANCHOR_MODE_DRAG_CENTER = 1,
  }
  static Camera2DProcessCallback = {
    CAMERA2D_PROCESS_PHYSICS = 0,
    CAMERA2D_PROCESS_IDLE = 1,
  }
}