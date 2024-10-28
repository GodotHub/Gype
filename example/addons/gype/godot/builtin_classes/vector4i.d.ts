

declare global {
export declare class Vector4i {
  constructor();
  constructor(_from: Vector4i);
  constructor(_from: Vector4);
  constructor(_x: number, _y: number, _z: number, _w: number);
  public x: int;
  public y: int;
  public z: int;
  public w: int;
  public min_axis_index(): void;
  public max_axis_index(): void;
  public length(): void;
  public length_squared(): void;
  public sign(): void;
  public abs(): void;
  public clamp(_min: Vector4i, _max: Vector4i): void;
  public clampi(_min: number, _max: number): void;
  public snapped(_step: Vector4i): void;
  public snappedi(_step: number): void;
  public min(_with: Vector4i): void;
  public mini(_with: number): void;
  public max(_with: Vector4i): void;
  public maxi(_with: number): void;
  public distance_to(_to: Vector4i): void;
  public distance_squared_to(_to: Vector4i): void;
  static Axis = {
    AXIS_X = 0,
    AXIS_Y = 1,
    AXIS_Z = 2,
    AXIS_W = 3,
  }
}
}

export {};