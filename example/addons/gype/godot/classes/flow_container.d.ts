
import { Container } from "@godot/classes/container";

export declare class FlowContainer extends Container{
  public get_line_count(): number;
  public set_alignment(_alignment: number): void;
  public get_alignment(): number;
  public set_last_wrap_alignment(_last_wrap_alignment: number): void;
  public get_last_wrap_alignment(): number;
  public set_vertical(_vertical: boolean): void;
  public is_vertical(): boolean;
  public set_reverse_fill(_reverse_fill: boolean): void;
  public is_reverse_fill(): boolean;
  public get alignment(): number {
    get_alignment();
  }
  public set alignment(value): void {
    set_alignment(value);
  }
  public get last_wrap_alignment(): number {
    get_last_wrap_alignment();
  }
  public set last_wrap_alignment(value): void {
    set_last_wrap_alignment(value);
  }
  public get vertical(): boolean {
    is_vertical();
  }
  public set vertical(value): void {
    set_vertical(value);
  }
  public get reverse_fill(): boolean {
    is_reverse_fill();
  }
  public set reverse_fill(value): void {
    set_reverse_fill(value);
  }
  static AlignmentMode = {
    ALIGNMENT_BEGIN = 0,
    ALIGNMENT_CENTER = 1,
    ALIGNMENT_END = 2,
  }
  static LastWrapAlignmentMode = {
    LAST_WRAP_ALIGNMENT_INHERIT = 0,
    LAST_WRAP_ALIGNMENT_BEGIN = 1,
    LAST_WRAP_ALIGNMENT_CENTER = 2,
    LAST_WRAP_ALIGNMENT_END = 3,
  }
}