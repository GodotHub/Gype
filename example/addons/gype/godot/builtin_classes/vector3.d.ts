

declare global {
export declare class Vector3 {
  constructor();
  constructor(_from: Vector3);
  constructor(_from: Vector3i);
  constructor(_x: number, _y: number, _z: number);
  public x: float;
  public y: float;
  public z: float;
  public min_axis_index(): number;
  public max_axis_index(): number;
  public angle_to(_to: Vector3): number;
  public signed_angle_to(_to: Vector3, _axis: Vector3): number;
  public direction_to(_to: Vector3): Vector3;
  public distance_to(_to: Vector3): number;
  public distance_squared_to(_to: Vector3): number;
  public length(): number;
  public length_squared(): number;
  public limit_length(_length: number = 1.0): Vector3;
  public normalized(): Vector3;
  public is_normalized(): boolean;
  public is_equal_approx(_to: Vector3): boolean;
  public is_zero_approx(): boolean;
  public is_finite(): boolean;
  public inverse(): Vector3;
  public clamp(_min: Vector3, _max: Vector3): Vector3;
  public clampf(_min: number, _max: number): Vector3;
  public snapped(_step: Vector3): Vector3;
  public snappedf(_step: number): Vector3;
  public rotated(_axis: Vector3, _angle: number): Vector3;
  public lerp(_to: Vector3, _weight: number): Vector3;
  public slerp(_to: Vector3, _weight: number): Vector3;
  public cubic_interpolate(_b: Vector3, _pre_a: Vector3, _post_b: Vector3, _weight: number): Vector3;
  public cubic_interpolate_in_time(_b: Vector3, _pre_a: Vector3, _post_b: Vector3, _weight: number, _b_t: number, _pre_a_t: number, _post_b_t: number): Vector3;
  public bezier_interpolate(_control_1: Vector3, _control_2: Vector3, _end: Vector3, _t: number): Vector3;
  public bezier_derivative(_control_1: Vector3, _control_2: Vector3, _end: Vector3, _t: number): Vector3;
  public move_toward(_to: Vector3, _delta: number): Vector3;
  public dot(_with: Vector3): number;
  public cross(_with: Vector3): Vector3;
  public outer(_with: Vector3): Basis;
  public abs(): Vector3;
  public floor(): Vector3;
  public ceil(): Vector3;
  public round(): Vector3;
  public posmod(_mod: number): Vector3;
  public posmodv(_modv: Vector3): Vector3;
  public project(_b: Vector3): Vector3;
  public slide(_n: Vector3): Vector3;
  public bounce(_n: Vector3): Vector3;
  public reflect(_n: Vector3): Vector3;
  public sign(): Vector3;
  public octahedron_encode(): Vector2;
  public min(_with: Vector3): Vector3;
  public minf(_with: number): Vector3;
  public max(_with: Vector3): Vector3;
  public maxf(_with: number): Vector3;
  public octahedron_decode(_uv: Vector2): Vector3;
  static Axis = {
    AXIS_X = 0,
    AXIS_Y = 1,
    AXIS_Z = 2,
  }
}
}

export {};