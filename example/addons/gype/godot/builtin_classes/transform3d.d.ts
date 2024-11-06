

declare global {
export declare class Transform3D {
  constructor();
  constructor(_from: Transform3D);
  constructor(_basis: Basis, _origin: Vector3);
  constructor(_x_axis: Vector3, _y_axis: Vector3, _z_axis: Vector3, _origin: Vector3);
  constructor(_from: Projection);
  public basis: Basis;
  public origin: Vector3;
  public inverse(): Transform3D;
  public affine_inverse(): Transform3D;
  public orthonormalized(): Transform3D;
  public rotated(_axis: Vector3, _angle: number): Transform3D;
  public rotated_local(_axis: Vector3, _angle: number): Transform3D;
  public scaled(_scale: Vector3): Transform3D;
  public scaled_local(_scale: Vector3): Transform3D;
  public translated(_offset: Vector3): Transform3D;
  public translated_local(_offset: Vector3): Transform3D;
  public looking_at(_target: Vector3, _up: Vector3 = Vector3(0, 1, 0), _use_model_front: boolean = false): Transform3D;
  public interpolate_with(_xform: Transform3D, _weight: number): Transform3D;
  public is_equal_approx(_xform: Transform3D): boolean;
  public is_finite(): boolean;
}
}

export {};