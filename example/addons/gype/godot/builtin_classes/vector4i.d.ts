

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
  public min_axis_index(): number;
  public max_axis_index(): number;
  public length(): number;
  public length_squared(): number;
  public sign(): Vector4i;
  public abs(): Vector4i;
  public clamp(_min: Vector4i, _max: Vector4i): Vector4i;
  public clampi(_min: number, _max: number): Vector4i;
  public snapped(_step: Vector4i): Vector4i;
  public snappedi(_step: number): Vector4i;
  public min(_with: Vector4i): Vector4i;
  public mini(_with: number): Vector4i;
  public max(_with: Vector4i): Vector4i;
  public maxi(_with: number): Vector4i;
  public distance_to(_to: Vector4i): number;
  public distance_squared_to(_to: Vector4i): number;
  static Axis = {
    AXIS_X = 0,
    AXIS_Y = 1,
    AXIS_Z = 2,
    AXIS_W = 3,
  }
}
}

export {};