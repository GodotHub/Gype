

declare global {
export declare class Vector2i {
  constructor();
  constructor(_from: Vector2i);
  constructor(_from: Vector2);
  constructor(_x: number, _y: number);
  public x: int;
  public y: int;
  public aspect(): void;
  public max_axis_index(): void;
  public min_axis_index(): void;
  public distance_to(_to: Vector2i): void;
  public distance_squared_to(_to: Vector2i): void;
  public length(): void;
  public length_squared(): void;
  public sign(): void;
  public abs(): void;
  public clamp(_min: Vector2i, _max: Vector2i): void;
  public clampi(_min: number, _max: number): void;
  public snapped(_step: Vector2i): void;
  public snappedi(_step: number): void;
  public min(_with: Vector2i): void;
  public mini(_with: number): void;
  public max(_with: Vector2i): void;
  public maxi(_with: number): void;
  static Axis = {
    AXIS_X = 0,
    AXIS_Y = 1,
  }
}
}

export {};