

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
  public inverse(): void;
  public transposed(): void;
  public orthonormalized(): void;
  public determinant(): void;
  public rotated(_axis: Vector3, _angle: number): void;
  public scaled(_scale: Vector3): void;
  public get_scale(): void;
  public get_euler(_order: number): void;
  public tdotx(_with: Vector3): void;
  public tdoty(_with: Vector3): void;
  public tdotz(_with: Vector3): void;
  public slerp(_to: Basis, _weight: number): void;
  public is_conformal(): void;
  public is_equal_approx(_b: Basis): void;
  public is_finite(): void;
  public get_rotation_quaternion(): void;
  public looking_at(_target: Vector3, _up: Vector3, _use_model_front: boolean): void;
  public from_scale(_scale: Vector3): void;
  public from_euler(_euler: Vector3, _order: number): void;
}
}

export {};