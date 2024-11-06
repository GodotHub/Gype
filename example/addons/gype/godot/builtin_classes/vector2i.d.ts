

declare global {
export declare class Vector2i {
  constructor();
  constructor(_from: Vector2i);
  constructor(_from: Vector2);
  constructor(_x: number, _y: number);
  public x: int;
  public y: int;
  public aspect(): number;
  public max_axis_index(): number;
  public min_axis_index(): number;
  public distance_to(_to: Vector2i): number;
  public distance_squared_to(_to: Vector2i): number;
  public length(): number;
  public length_squared(): number;
  public sign(): Vector2i;
  public abs(): Vector2i;
  public clamp(_min: Vector2i, _max: Vector2i): Vector2i;
  public clampi(_min: number, _max: number): Vector2i;
  public snapped(_step: Vector2i): Vector2i;
  public snappedi(_step: number): Vector2i;
  public min(_with: Vector2i): Vector2i;
  public mini(_with: number): Vector2i;
  public max(_with: Vector2i): Vector2i;
  public maxi(_with: number): Vector2i;
  static Axis = {
    AXIS_X = 0,
    AXIS_Y = 1,
  }
}
}

export {};