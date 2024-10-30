
import { TextureRect } from "@godot/classes/texture_rect";
import { RefCounted } from "@godot/classes/ref_counted";
import { Control } from "@godot/classes/control";

export declare class EditorResourceTooltipPlugin extends RefCounted{
  public _handles(_type: String | StringName | string): boolean;
  public _make_tooltip_for_path(_path: String | StringName | string, _metadata: Dictionary, _base: Control): Control;
  public request_thumbnail(_path: String | StringName | string, _control: TextureRect): void;
}