

declare global {
export declare class Vector3i {
  constructor();
  constructor(_from: Vector3i);
  constructor(_from: Vector3);
  constructor(_x: number, _y: number, _z: number);
  public x: int;
  public y: int;
  public z: int;
  public min_axis_index(): number;
  public max_axis_index(): number;
  public distance_to(_to: Vector3i): number;
  public distance_squared_to(_to: Vector3i): number;
  public length(): number;
  public length_squared(): number;
  public sign(): Vector3i;
  public abs(): Vector3i;
  public clamp(_min: Vector3i, _max: Vector3i): Vector3i;
  public clampi(_min: number, _max: number): Vector3i;
  public snapped(_step: Vector3i): Vector3i;
  public snappedi(_step: number): Vector3i;
  public min(_with: Vector3i): Vector3i;
  public mini(_with: number): Vector3i;
  public max(_with: Vector3i): Vector3i;
  public maxi(_with: number): Vector3i;
  static Axis = {
    AXIS_X = 0,
    AXIS_Y = 1,
    AXIS_Z = 2,
  }
}
}

export {};