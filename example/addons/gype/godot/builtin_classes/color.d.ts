

declare global {
export declare class Color {
  constructor();
  constructor(_from: Color);
  constructor(_from: Color, _alpha: number);
  constructor(_r: number, _g: number, _b: number);
  constructor(_r: number, _g: number, _b: number, _a: number);
  constructor(_code: String | StringName | string);
  constructor(_code: String | StringName | string, _alpha: number);
  public r: float;
  public g: float;
  public b: float;
  public a: float;
  public r8: int;
  public g8: int;
  public b8: int;
  public a8: int;
  public h: float;
  public s: float;
  public v: float;
  public to_argb32(): number;
  public to_abgr32(): number;
  public to_rgba32(): number;
  public to_argb64(): number;
  public to_abgr64(): number;
  public to_rgba64(): number;
  public to_html(_with_alpha: boolean): String;
  public clamp(_min: Color, _max: Color): Color;
  public inverted(): Color;
  public lerp(_to: Color, _weight: number): Color;
  public lightened(_amount: number): Color;
  public darkened(_amount: number): Color;
  public blend(_over: Color): Color;
  public get_luminance(): number;
  public srgb_to_linear(): Color;
  public linear_to_srgb(): Color;
  public is_equal_approx(_to: Color): boolean;
  public hex(_hex: number): Color;
  public hex64(_hex: number): Color;
  public html(_rgba: String | StringName | string): Color;
  public html_is_valid(_color: String | StringName | string): boolean;
  public from_string(_str: String | StringName | string, _default: Color): Color;
  public from_hsv(_h: number, _s: number, _v: number, _alpha: number): Color;
  public from_ok_hsl(_h: number, _s: number, _l: number, _alpha: number): Color;
  public from_rgbe9995(_rgbe: number): Color;
}
}

export {};