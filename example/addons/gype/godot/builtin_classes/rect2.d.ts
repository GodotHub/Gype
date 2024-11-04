

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
  public get_center(): Vector2;
  public get_area(): number;
  public has_area(): boolean;
  public has_point(_point: Vector2): boolean;
  public is_equal_approx(_rect: Rect2): boolean;
  public is_finite(): boolean;
  public intersects(_b: Rect2, _include_borders: boolean = false): boolean;
  public encloses(_b: Rect2): boolean;
  public intersection(_b: Rect2): Rect2;
  public merge(_b: Rect2): Rect2;
  public expand(_to: Vector2): Rect2;
  public grow(_amount: number): Rect2;
  public grow_side(_side: number, _amount: number): Rect2;
  public grow_individual(_left: number, _top: number, _right: number, _bottom: number): Rect2;
  public abs(): Rect2;
}
}

export {};