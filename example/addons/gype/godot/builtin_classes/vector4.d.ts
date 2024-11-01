

declare global {
export declare class Vector4 {
  constructor();
  constructor(_from: Vector4);
  constructor(_from: Vector4i);
  constructor(_x: number, _y: number, _z: number, _w: number);
  public x: float;
  public y: float;
  public z: float;
  public w: float;
  public min_axis_index(): number;
  public max_axis_index(): number;
  public length(): number;
  public length_squared(): number;
  public abs(): Vector4;
  public sign(): Vector4;
  public floor(): Vector4;
  public ceil(): Vector4;
  public round(): Vector4;
  public lerp(_to: Vector4, _weight: number): Vector4;
  public cubic_interpolate(_b: Vector4, _pre_a: Vector4, _post_b: Vector4, _weight: number): Vector4;
  public cubic_interpolate_in_time(_b: Vector4, _pre_a: Vector4, _post_b: Vector4, _weight: number, _b_t: number, _pre_a_t: number, _post_b_t: number): Vector4;
  public posmod(_mod: number): Vector4;
  public posmodv(_modv: Vector4): Vector4;
  public snapped(_step: Vector4): Vector4;
  public snappedf(_step: number): Vector4;
  public clamp(_min: Vector4, _max: Vector4): Vector4;
  public clampf(_min: number, _max: number): Vector4;
  public normalized(): Vector4;
  public is_normalized(): boolean;
  public direction_to(_to: Vector4): Vector4;
  public distance_to(_to: Vector4): number;
  public distance_squared_to(_to: Vector4): number;
  public dot(_with: Vector4): number;
  public inverse(): Vector4;
  public is_equal_approx(_to: Vector4): boolean;
  public is_zero_approx(): boolean;
  public is_finite(): boolean;
  public min(_with: Vector4): Vector4;
  public minf(_with: number): Vector4;
  public max(_with: Vector4): Vector4;
  public maxf(_with: number): Vector4;
  static Axis = {
    AXIS_X = 0,
    AXIS_Y = 1,
    AXIS_Z = 2,
    AXIS_W = 3,
  }
}
}

export {};