

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
  public inverse(): Transform2D;
  public affine_inverse(): Transform2D;
  public get_rotation(): number;
  public get_origin(): Vector2;
  public get_scale(): Vector2;
  public get_skew(): number;
  public orthonormalized(): Transform2D;
  public rotated(_angle: number): Transform2D;
  public rotated_local(_angle: number): Transform2D;
  public scaled(_scale: Vector2): Transform2D;
  public scaled_local(_scale: Vector2): Transform2D;
  public translated(_offset: Vector2): Transform2D;
  public translated_local(_offset: Vector2): Transform2D;
  public determinant(): number;
  public basis_xform(_v: Vector2): Vector2;
  public basis_xform_inv(_v: Vector2): Vector2;
  public interpolate_with(_xform: Transform2D, _weight: number): Transform2D;
  public is_conformal(): boolean;
  public is_equal_approx(_xform: Transform2D): boolean;
  public is_finite(): boolean;
  public looking_at(_target: Vector2 = Vector2(0, 0)): Transform2D;
}
}

export {};