

declare global {
export declare class Rect2i {
  constructor();
  constructor(_from: Rect2i);
  constructor(_from: Rect2);
  constructor(_position: Vector2i, _size: Vector2i);
  constructor(_x: number, _y: number, _width: number, _height: number);
  public position: Vector2i;
  public size: Vector2i;
  public end: Vector2i;
  public get_center(): void;
  public get_area(): void;
  public has_area(): void;
  public has_point(_point: Vector2i): void;
  public intersects(_b: Rect2i): void;
  public encloses(_b: Rect2i): void;
  public intersection(_b: Rect2i): void;
  public merge(_b: Rect2i): void;
  public expand(_to: Vector2i): void;
  public grow(_amount: number): void;
  public grow_side(_side: number, _amount: number): void;
  public grow_individual(_left: number, _top: number, _right: number, _bottom: number): void;
  public abs(): void;
}
}

export {};