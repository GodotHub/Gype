

declare global {
export declare class Vector3 {
  constructor();
  constructor(_from: Vector3);
  constructor(_from: Vector3i);
  constructor(_x: number, _y: number, _z: number);
  public x: float;
  public y: float;
  public z: float;
  public min_axis_index(): void;
  public max_axis_index(): void;
  public angle_to(_to: Vector3): void;
  public signed_angle_to(_to: Vector3, _axis: Vector3): void;
  public direction_to(_to: Vector3): void;
  public distance_to(_to: Vector3): void;
  public distance_squared_to(_to: Vector3): void;
  public length(): void;
  public length_squared(): void;
  public limit_length(_length: number): void;
  public normalized(): void;
  public is_normalized(): void;
  public is_equal_approx(_to: Vector3): void;
  public is_zero_approx(): void;
  public is_finite(): void;
  public inverse(): void;
  public clamp(_min: Vector3, _max: Vector3): void;
  public clampf(_min: number, _max: number): void;
  public snapped(_step: Vector3): void;
  public snappedf(_step: number): void;
  public rotated(_axis: Vector3, _angle: number): void;
  public lerp(_to: Vector3, _weight: number): void;
  public slerp(_to: Vector3, _weight: number): void;
  public cubic_interpolate(_b: Vector3, _pre_a: Vector3, _post_b: Vector3, _weight: number): void;
  public cubic_interpolate_in_time(_b: Vector3, _pre_a: Vector3, _post_b: Vector3, _weight: number, _b_t: number, _pre_a_t: number, _post_b_t: number): void;
  public bezier_interpolate(_control_1: Vector3, _control_2: Vector3, _end: Vector3, _t: number): void;
  public bezier_derivative(_control_1: Vector3, _control_2: Vector3, _end: Vector3, _t: number): void;
  public move_toward(_to: Vector3, _delta: number): void;
  public dot(_with: Vector3): void;
  public cross(_with: Vector3): void;
  public outer(_with: Vector3): void;
  public abs(): void;
  public floor(): void;
  public ceil(): void;
  public round(): void;
  public posmod(_mod: number): void;
  public posmodv(_modv: Vector3): void;
  public project(_b: Vector3): void;
  public slide(_n: Vector3): void;
  public bounce(_n: Vector3): void;
  public reflect(_n: Vector3): void;
  public sign(): void;
  public octahedron_encode(): void;
  public min(_with: Vector3): void;
  public minf(_with: number): void;
  public max(_with: Vector3): void;
  public maxf(_with: number): void;
  public octahedron_decode(_uv: Vector2): void;
  static Axis = {
    AXIS_X = 0,
    AXIS_Y = 1,
    AXIS_Z = 2,
  }
}
}

export {};