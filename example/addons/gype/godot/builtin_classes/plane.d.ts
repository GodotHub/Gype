

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
  public normalized(): Plane;
  public get_center(): Vector3;
  public is_equal_approx(_to_plane: Plane): boolean;
  public is_finite(): boolean;
  public is_point_over(_point: Vector3): boolean;
  public distance_to(_point: Vector3): number;
  public has_point(_point: Vector3, _tolerance: number = 1e-05): boolean;
  public project(_point: Vector3): Vector3;
  public intersect_3(_b: Plane, _c: Plane): any;
  public intersects_ray(_from: Vector3, _dir: Vector3): any;
  public intersects_segment(_from: Vector3, _to: Vector3): any;
}
}

export {};