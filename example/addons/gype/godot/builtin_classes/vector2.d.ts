

declare global {
export declare class Vector2 {
  constructor();
  constructor(_from: Vector2);
  constructor(_from: Vector2i);
  constructor(_x: number, _y: number);
  public x: float;
  public y: float;
  public angle(): number;
  public angle_to(_to: Vector2): number;
  public angle_to_point(_to: Vector2): number;
  public direction_to(_to: Vector2): Vector2;
  public distance_to(_to: Vector2): number;
  public distance_squared_to(_to: Vector2): number;
  public length(): number;
  public length_squared(): number;
  public limit_length(_length: number = 1.0): Vector2;
  public normalized(): Vector2;
  public is_normalized(): boolean;
  public is_equal_approx(_to: Vector2): boolean;
  public is_zero_approx(): boolean;
  public is_finite(): boolean;
  public posmod(_mod: number): Vector2;
  public posmodv(_modv: Vector2): Vector2;
  public project(_b: Vector2): Vector2;
  public lerp(_to: Vector2, _weight: number): Vector2;
  public slerp(_to: Vector2, _weight: number): Vector2;
  public cubic_interpolate(_b: Vector2, _pre_a: Vector2, _post_b: Vector2, _weight: number): Vector2;
  public cubic_interpolate_in_time(_b: Vector2, _pre_a: Vector2, _post_b: Vector2, _weight: number, _b_t: number, _pre_a_t: number, _post_b_t: number): Vector2;
  public bezier_interpolate(_control_1: Vector2, _control_2: Vector2, _end: Vector2, _t: number): Vector2;
  public bezier_derivative(_control_1: Vector2, _control_2: Vector2, _end: Vector2, _t: number): Vector2;
  public max_axis_index(): number;
  public min_axis_index(): number;
  public move_toward(_to: Vector2, _delta: number): Vector2;
  public rotated(_angle: number): Vector2;
  public orthogonal(): Vector2;
  public floor(): Vector2;
  public ceil(): Vector2;
  public round(): Vector2;
  public aspect(): number;
  public dot(_with: Vector2): number;
  public slide(_n: Vector2): Vector2;
  public bounce(_n: Vector2): Vector2;
  public reflect(_line: Vector2): Vector2;
  public cross(_with: Vector2): number;
  public abs(): Vector2;
  public sign(): Vector2;
  public clamp(_min: Vector2, _max: Vector2): Vector2;
  public clampf(_min: number, _max: number): Vector2;
  public snapped(_step: Vector2): Vector2;
  public snappedf(_step: number): Vector2;
  public min(_with: Vector2): Vector2;
  public minf(_with: number): Vector2;
  public max(_with: Vector2): Vector2;
  public maxf(_with: number): Vector2;
  public from_angle(_angle: number): Vector2;
  static Axis = {
    AXIS_X = 0,
    AXIS_Y = 1,
  }
}
}

export {};