

declare global {
export declare class Transform2D {
  constructor();
  constructor(_from: Transform2D);
  constructor(_rotation: number, _position: Vector2);
  constructor(_rotation: number, _scale: Vector2, _skew: number, _position: Vector2);
  constructor(_x_axis: Vector2, _y_axis: Vector2, _origin: Vector2);
  public x: Vector2;
  public y: Vector2;
  public origin: Vector2;
  public inverse(): void;
  public affine_inverse(): void;
  public get_rotation(): void;
  public get_origin(): void;
  public get_scale(): void;
  public get_skew(): void;
  public orthonormalized(): void;
  public rotated(_angle: number): void;
  public rotated_local(_angle: number): void;
  public scaled(_scale: Vector2): void;
  public scaled_local(_scale: Vector2): void;
  public translated(_offset: Vector2): void;
  public translated_local(_offset: Vector2): void;
  public determinant(): void;
  public basis_xform(_v: Vector2): void;
  public basis_xform_inv(_v: Vector2): void;
  public interpolate_with(_xform: Transform2D, _weight: number): void;
  public is_conformal(): void;
  public is_equal_approx(_xform: Transform2D): void;
  public is_finite(): void;
  public looking_at(_target: Vector2): void;
}
}

export {};