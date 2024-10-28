

declare global {
export declare class Quaternion {
  constructor();
  constructor(_from: Quaternion);
  constructor(_from: Basis);
  constructor(_axis: Vector3, _angle: number);
  constructor(_arc_from: Vector3, _arc_to: Vector3);
  constructor(_x: number, _y: number, _z: number, _w: number);
  public x: float;
  public y: float;
  public z: float;
  public w: float;
  public length(): void;
  public length_squared(): void;
  public normalized(): void;
  public is_normalized(): void;
  public is_equal_approx(_to: Quaternion): void;
  public is_finite(): void;
  public inverse(): void;
  public log(): void;
  public exp(): void;
  public angle_to(_to: Quaternion): void;
  public dot(_with: Quaternion): void;
  public slerp(_to: Quaternion, _weight: number): void;
  public slerpni(_to: Quaternion, _weight: number): void;
  public spherical_cubic_interpolate(_b: Quaternion, _pre_a: Quaternion, _post_b: Quaternion, _weight: number): void;
  public spherical_cubic_interpolate_in_time(_b: Quaternion, _pre_a: Quaternion, _post_b: Quaternion, _weight: number, _b_t: number, _pre_a_t: number, _post_b_t: number): void;
  public get_euler(_order: number): void;
  public from_euler(_euler: Vector3): void;
  public get_axis(): void;
  public get_angle(): void;
}
}

export {};