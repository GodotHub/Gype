

declare global {
export declare class AABB {
  constructor();
  constructor(_from: AABB);
  constructor(_position: Vector3, _size: Vector3);
  public position: Vector3;
  public size: Vector3;
  public end: Vector3;
  public abs(): void;
  public get_center(): void;
  public get_volume(): void;
  public has_volume(): void;
  public has_surface(): void;
  public has_point(_point: Vector3): void;
  public is_equal_approx(_aabb: AABB): void;
  public is_finite(): void;
  public intersects(_with: AABB): void;
  public encloses(_with: AABB): void;
  public intersects_plane(_plane: Plane): void;
  public intersection(_with: AABB): void;
  public merge(_with: AABB): void;
  public expand(_to_point: Vector3): void;
  public grow(_by: number): void;
  public get_support(_dir: Vector3): void;
  public get_longest_axis(): void;
  public get_longest_axis_index(): void;
  public get_longest_axis_size(): void;
  public get_shortest_axis(): void;
  public get_shortest_axis_index(): void;
  public get_shortest_axis_size(): void;
  public get_endpoint(_idx: number): void;
  public intersects_segment(_from: Vector3, _to: Vector3): void;
  public intersects_ray(_from: Vector3, _dir: Vector3): void;
}
}

export {};