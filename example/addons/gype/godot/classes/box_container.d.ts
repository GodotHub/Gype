
import { Control } from "@godot/classes/control";
import { Container } from "@godot/classes/container";
export declare class BoxContainer extends Container{
  public add_spacer(_begin: boolean): Control;
  public set_alignment(_alignment: number): void;
  public get_alignment(): number;
  public set_vertical(_vertical: boolean): void;
  public is_vertical(): boolean;
  public get alignment(): number;
  public set alignment(value): void;
  public get vertical(): boolean;
  public set vertical(value): void;
  static AlignmentMode = {
    ALIGNMENT_BEGIN = 0,
    ALIGNMENT_CENTER = 1,
    ALIGNMENT_END = 2,
  }
}