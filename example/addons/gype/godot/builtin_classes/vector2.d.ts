

declare global {
export declare class Vector2 {
  constructor();
  constructor(_from: Vector2);
  constructor(_from: Vector2i);
  constructor(_x: number, _y: number);
  public x: float;
  public y: float;
  public angle(): void;
  public angle_to(_to: Vector2): void;
  public angle_to_point(_to: Vector2): void;
  public direction_to(_to: Vector2): void;
  public distance_to(_to: Vector2): void;
  public distance_squared_to(_to: Vector2): void;
  public length(): void;
  public length_squared(): void;
  public limit_length(_length: number): void;
  public normalized(): void;
  public is_normalized(): void;
  public is_equal_approx(_to: Vector2): void;
  public is_zero_approx(): void;
  public is_finite(): void;
  public posmod(_mod: number): void;
  public posmodv(_modv: Vector2): void;
  public project(_b: Vector2): void;
  public lerp(_to: Vector2, _weight: number): void;
  public slerp(_to: Vector2, _weight: number): void;
  public cubic_interpolate(_b: Vector2, _pre_a: Vector2, _post_b: Vector2, _weight: number): void;
  public cubic_interpolate_in_time(_b: Vector2, _pre_a: Vector2, _post_b: Vector2, _weight: number, _b_t: number, _pre_a_t: number, _post_b_t: number): void;
  public bezier_interpolate(_control_1: Vector2, _control_2: Vector2, _end: Vector2, _t: number): void;
  public bezier_derivative(_control_1: Vector2, _control_2: Vector2, _end: Vector2, _t: number): void;
  public max_axis_index(): void;
  public min_axis_index(): void;
  public move_toward(_to: Vector2, _delta: number): void;
  public rotated(_angle: number): void;
  public orthogonal(): void;
  public floor(): void;
  public ceil(): void;
  public round(): void;
  public aspect(): void;
  public dot(_with: Vector2): void;
  public slide(_n: Vector2): void;
  public bounce(_n: Vector2): void;
  public reflect(_line: Vector2): void;
  public cross(_with: Vector2): void;
  public abs(): void;
  public sign(): void;
  public clamp(_min: Vector2, _max: Vector2): void;
  public clampf(_min: number, _max: number): void;
  public snapped(_step: Vector2): void;
  public snappedf(_step: number): void;
  public min(_with: Vector2): void;
  public minf(_with: number): void;
  public max(_with: Vector2): void;
  public maxf(_with: number): void;
  public from_angle(_angle: number): void;
  static Axis = {
    AXIS_X = 0,
    AXIS_Y = 1,
  }
}
}

export {};