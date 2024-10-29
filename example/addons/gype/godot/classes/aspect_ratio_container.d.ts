
import { Container } from "@godot/classes/container";

export declare class AspectRatioContainer extends Container{
  public set_ratio(_ratio: number): void;
  public get_ratio(): number;
  public set_stretch_mode(_stretch_mode: number): void;
  public get_stretch_mode(): number;
  public set_alignment_horizontal(_alignment_horizontal: number): void;
  public get_alignment_horizontal(): number;
  public set_alignment_vertical(_alignment_vertical: number): void;
  public get_alignment_vertical(): number;
  public get ratio(): number {
    get_ratio();
  }
  public set ratio(value): void {
    set_ratio(value);
  }
  public get stretch_mode(): number {
    get_stretch_mode();
  }
  public set stretch_mode(value): void {
    set_stretch_mode(value);
  }
  public get alignment_horizontal(): number {
    get_alignment_horizontal();
  }
  public set alignment_horizontal(value): void {
    set_alignment_horizontal(value);
  }
  public get alignment_vertical(): number {
    get_alignment_vertical();
  }
  public set alignment_vertical(value): void {
    set_alignment_vertical(value);
  }
  static StretchMode = {
    STRETCH_WIDTH_CONTROLS_HEIGHT = 0,
    STRETCH_HEIGHT_CONTROLS_WIDTH = 1,
    STRETCH_FIT = 2,
    STRETCH_COVER = 3,
  }
  static AlignmentMode = {
    ALIGNMENT_BEGIN = 0,
    ALIGNMENT_CENTER = 1,
    ALIGNMENT_END = 2,
  }
}