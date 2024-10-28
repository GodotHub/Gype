

declare global {
export declare class Plane {
  constructor();
  constructor(_from: Plane);
  constructor(_normal: Vector3);
  constructor(_normal: Vector3, _d: number);
  constructor(_normal: Vector3, _point: Vector3);
  constructor(_point1: Vector3, _point2: Vector3, _point3: Vector3);
  constructor(_a: number, _b: number, _c: number, _d: number);
  public x: float;
  public y: float;
  public z: float;
  public d: float;
  public normal: Vector3;
  public normalized(): void;
  public get_center(): void;
  public is_equal_approx(_to_plane: Plane): void;
  public is_finite(): void;
  public is_point_over(_point: Vector3): void;
  public distance_to(_point: Vector3): void;
  public has_point(_point: Vector3, _tolerance: number): void;
  public project(_point: Vector3): void;
  public intersect_3(_b: Plane, _c: Plane): void;
  public intersects_ray(_from: Vector3, _dir: Vector3): void;
  public intersects_segment(_from: Vector3, _to: Vector3): void;
}
}

export {};