

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
  public get_center(): Vector2i;
  public get_area(): number;
  public has_area(): boolean;
  public has_point(_point: Vector2i): boolean;
  public intersects(_b: Rect2i): boolean;
  public encloses(_b: Rect2i): boolean;
  public intersection(_b: Rect2i): Rect2i;
  public merge(_b: Rect2i): Rect2i;
  public expand(_to: Vector2i): Rect2i;
  public grow(_amount: number): Rect2i;
  public grow_side(_side: number, _amount: number): Rect2i;
  public grow_individual(_left: number, _top: number, _right: number, _bottom: number): Rect2i;
  public abs(): Rect2i;
}
}

export {};