

declare global {
export declare class Basis {
  constructor();
  constructor(_from: Basis);
  constructor(_from: Quaternion);
  constructor(_axis: Vector3, _angle: number);
  constructor(_x_axis: Vector3, _y_axis: Vector3, _z_axis: Vector3);
  public x: Vector3;
  public y: Vector3;
  public z: Vector3;
  public inverse(): Basis;
  public transposed(): Basis;
  public orthonormalized(): Basis;
  public determinant(): number;
  public rotated(_axis: Vector3, _angle: number): Basis;
  public scaled(_scale: Vector3): Basis;
  public get_scale(): Vector3;
  public get_euler(_order: number): Vector3;
  public tdotx(_with: Vector3): number;
  public tdoty(_with: Vector3): number;
  public tdotz(_with: Vector3): number;
  public slerp(_to: Basis, _weight: number): Basis;
  public is_conformal(): boolean;
  public is_equal_approx(_b: Basis): boolean;
  public is_finite(): boolean;
  public get_rotation_quaternion(): Quaternion;
  public looking_at(_target: Vector3, _up: Vector3, _use_model_front: boolean): Basis;
  public from_scale(_scale: Vector3): Basis;
  public from_euler(_euler: Vector3, _order: number): Basis;
}
}

export {};