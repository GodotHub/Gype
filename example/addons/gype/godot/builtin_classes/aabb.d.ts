

declare global {
export declare class AABB {
  constructor();
  constructor(_from: AABB);
  constructor(_position: Vector3, _size: Vector3);
  public position: Vector3;
  public size: Vector3;
  public end: Vector3;
  public abs(): AABB;
  public get_center(): Vector3;
  public get_volume(): number;
  public has_volume(): boolean;
  public has_surface(): boolean;
  public has_point(_point: Vector3): boolean;
  public is_equal_approx(_aabb: AABB): boolean;
  public is_finite(): boolean;
  public intersects(_with: AABB): boolean;
  public encloses(_with: AABB): boolean;
  public intersects_plane(_plane: Plane): boolean;
  public intersection(_with: AABB): AABB;
  public merge(_with: AABB): AABB;
  public expand(_to_point: Vector3): AABB;
  public grow(_by: number): AABB;
  public get_support(_dir: Vector3): Vector3;
  public get_longest_axis(): Vector3;
  public get_longest_axis_index(): number;
  public get_longest_axis_size(): number;
  public get_shortest_axis(): Vector3;
  public get_shortest_axis_index(): number;
  public get_shortest_axis_size(): number;
  public get_endpoint(_idx: number): Vector3;
  public intersects_segment(_from: Vector3, _to: Vector3): any;
  public intersects_ray(_from: Vector3, _dir: Vector3): any;
}
}

export {};