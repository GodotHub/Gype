
import { RefCounted } from "@godot/classes/ref_counted";
import { Control } from "@godot/classes/control";
import { TextureRect } from "@godot/classes/texture_rect";


export declare class EditorResourceTooltipPlugin extends RefCounted{
  public _handles(_type: GDString | StringName | string): boolean;
  public _make_tooltip_for_path(_path: GDString | StringName | string, _metadata: Dictionary, _base: Control): Control;
  public request_thumbnail(_path: GDString | StringName | string, _control: TextureRect): void;
}