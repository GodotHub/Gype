

declare global {
export declare class Vector3i {
  constructor();
  constructor(_from: Vector3i);
  constructor(_from: Vector3);
  constructor(_x: number, _y: number, _z: number);
  public x: int;
  public y: int;
  public z: int;
  public min_axis_index(): void;
  public max_axis_index(): void;
  public distance_to(_to: Vector3i): void;
  public distance_squared_to(_to: Vector3i): void;
  public length(): void;
  public length_squared(): void;
  public sign(): void;
  public abs(): void;
  public clamp(_min: Vector3i, _max: Vector3i): void;
  public clampi(_min: number, _max: number): void;
  public snapped(_step: Vector3i): void;
  public snappedi(_step: number): void;
  public min(_with: Vector3i): void;
  public mini(_with: number): void;
  public max(_with: Vector3i): void;
  public maxi(_with: number): void;
  static Axis = {
    AXIS_X = 0,
    AXIS_Y = 1,
    AXIS_Z = 2,
  }
}
}

export {};