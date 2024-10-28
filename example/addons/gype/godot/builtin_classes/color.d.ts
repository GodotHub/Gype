

declare global {
export declare class Color {
  constructor();
  constructor(_from: Color);
  constructor(_from: Color, _alpha: number);
  constructor(_r: number, _g: number, _b: number);
  constructor(_r: number, _g: number, _b: number, _a: number);
  constructor(_code: String);
  constructor(_code: String, _alpha: number);
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
  public to_argb32(): void;
  public to_abgr32(): void;
  public to_rgba32(): void;
  public to_argb64(): void;
  public to_abgr64(): void;
  public to_rgba64(): void;
  public to_html(_with_alpha: boolean): void;
  public clamp(_min: Color, _max: Color): void;
  public inverted(): void;
  public lerp(_to: Color, _weight: number): void;
  public lightened(_amount: number): void;
  public darkened(_amount: number): void;
  public blend(_over: Color): void;
  public get_luminance(): void;
  public srgb_to_linear(): void;
  public linear_to_srgb(): void;
  public is_equal_approx(_to: Color): void;
  public hex(_hex: number): void;
  public hex64(_hex: number): void;
  public html(_rgba: String): void;
  public html_is_valid(_color: String): void;
  public from_string(_str: String, _default: Color): void;
  public from_hsv(_h: number, _s: number, _v: number, _alpha: number): void;
  public from_ok_hsl(_h: number, _s: number, _l: number, _alpha: number): void;
  public from_rgbe9995(_rgbe: number): void;
}
}

export {};