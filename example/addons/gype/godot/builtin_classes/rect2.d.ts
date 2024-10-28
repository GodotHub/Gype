

declare global {
export declare class Rect2 {
  constructor();
  constructor(_from: Rect2);
  constructor(_from: Rect2i);
  constructor(_position: Vector2, _size: Vector2);
  constructor(_x: number, _y: number, _width: number, _height: number);
  public position: Vector2;
  public size: Vector2;
  public end: Vector2;
  public get_center(): void;
  public get_area(): void;
  public has_area(): void;
  public has_point(_point: Vector2): void;
  public is_equal_approx(_rect: Rect2): void;
  public is_finite(): void;
  public intersects(_b: Rect2, _include_borders: boolean): void;
  public encloses(_b: Rect2): void;
  public intersection(_b: Rect2): void;
  public merge(_b: Rect2): void;
  public expand(_to: Vector2): void;
  public grow(_amount: number): void;
  public grow_side(_side: number, _amount: number): void;
  public grow_individual(_left: number, _top: number, _right: number, _bottom: number): void;
  public abs(): void;
}
}

export {};