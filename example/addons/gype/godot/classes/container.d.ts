
import { Control } from "@godot/classes/control";

export declare class Container extends Control{
  public _get_allowed_size_flags_horizontal(): PackedInt32Array;
  public _get_allowed_size_flags_vertical(): PackedInt32Array;
  public queue_sort(): void;
  public fit_child_in_rect(_child: Control, _rect: Rect2): void;
}