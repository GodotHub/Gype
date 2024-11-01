

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
  public length(): number;
  public length_squared(): number;
  public normalized(): Quaternion;
  public is_normalized(): boolean;
  public is_equal_approx(_to: Quaternion): boolean;
  public is_finite(): boolean;
  public inverse(): Quaternion;
  public log(): Quaternion;
  public exp(): Quaternion;
  public angle_to(_to: Quaternion): number;
  public dot(_with: Quaternion): number;
  public slerp(_to: Quaternion, _weight: number): Quaternion;
  public slerpni(_to: Quaternion, _weight: number): Quaternion;
  public spherical_cubic_interpolate(_b: Quaternion, _pre_a: Quaternion, _post_b: Quaternion, _weight: number): Quaternion;
  public spherical_cubic_interpolate_in_time(_b: Quaternion, _pre_a: Quaternion, _post_b: Quaternion, _weight: number, _b_t: number, _pre_a_t: number, _post_b_t: number): Quaternion;
  public get_euler(_order: number): Vector3;
  public from_euler(_euler: Vector3): Quaternion;
  public get_axis(): Vector3;
  public get_angle(): number;
}
}

export {};