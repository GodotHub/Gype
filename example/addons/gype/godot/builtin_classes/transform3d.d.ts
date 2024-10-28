

declare global {
export declare class Transform3D {
  constructor();
  constructor(_from: Transform3D);
  constructor(_basis: Basis, _origin: Vector3);
  constructor(_x_axis: Vector3, _y_axis: Vector3, _z_axis: Vector3, _origin: Vector3);
  constructor(_from: Projection);
  public basis: Basis;
  public origin: Vector3;
  public inverse(): void;
  public affine_inverse(): void;
  public orthonormalized(): void;
  public rotated(_axis: Vector3, _angle: number): void;
  public rotated_local(_axis: Vector3, _angle: number): void;
  public scaled(_scale: Vector3): void;
  public scaled_local(_scale: Vector3): void;
  public translated(_offset: Vector3): void;
  public translated_local(_offset: Vector3): void;
  public looking_at(_target: Vector3, _up: Vector3, _use_model_front: boolean): void;
  public interpolate_with(_xform: Transform3D, _weight: number): void;
  public is_equal_approx(_xform: Transform3D): void;
  public is_finite(): void;
}
}

export {};