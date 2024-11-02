
import { GodotObject } from "@godot/classes/godot_object";
import { RefCounted } from "@godot/classes/ref_counted";
import { Control } from "@godot/classes/control";


export declare class EditorInspectorPlugin extends RefCounted{
  public _can_handle(_object: GodotObject): boolean;
  public _parse_begin(_object: GodotObject): void;
  public _parse_category(_object: GodotObject, _category: GDString | StringName | string): void;
  public _parse_group(_object: GodotObject, _group: GDString | StringName | string): void;
  public _parse_property(_object: GodotObject, _type: number, _name: GDString | StringName | string, _hint_type: number, _hint_string: GDString | StringName | string, _usage_flags: number, _wide: boolean): boolean;
  public _parse_end(_object: GodotObject): void;
  public add_custom_control(_control: Control): void;
  public add_property_editor(_property: GDString | StringName | string, _editor: Control, _add_to_end: boolean, _label: GDString | StringName | string): void;
  public add_property_editor_for_multiple_properties(_label: GDString | StringName | string, _properties: PackedStringArray, _editor: Control): void;
}