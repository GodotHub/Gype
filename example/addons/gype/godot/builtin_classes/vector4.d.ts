

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
  public min_axis_index(): void;
  public max_axis_index(): void;
  public length(): void;
  public length_squared(): void;
  public abs(): void;
  public sign(): void;
  public floor(): void;
  public ceil(): void;
  public round(): void;
  public lerp(_to: Vector4, _weight: number): void;
  public cubic_interpolate(_b: Vector4, _pre_a: Vector4, _post_b: Vector4, _weight: number): void;
  public cubic_interpolate_in_time(_b: Vector4, _pre_a: Vector4, _post_b: Vector4, _weight: number, _b_t: number, _pre_a_t: number, _post_b_t: number): void;
  public posmod(_mod: number): void;
  public posmodv(_modv: Vector4): void;
  public snapped(_step: Vector4): void;
  public snappedf(_step: number): void;
  public clamp(_min: Vector4, _max: Vector4): void;
  public clampf(_min: number, _max: number): void;
  public normalized(): void;
  public is_normalized(): void;
  public direction_to(_to: Vector4): void;
  public distance_to(_to: Vector4): void;
  public distance_squared_to(_to: Vector4): void;
  public dot(_with: Vector4): void;
  public inverse(): void;
  public is_equal_approx(_to: Vector4): void;
  public is_zero_approx(): void;
  public is_finite(): void;
  public min(_with: Vector4): void;
  public minf(_with: number): void;
  public max(_with: Vector4): void;
  public maxf(_with: number): void;
  static Axis = {
    AXIS_X = 0,
    AXIS_Y = 1,
    AXIS_Z = 2,
    AXIS_W = 3,
  }
}
}

export {};