
import { GodotObject } from "@godot/classes/godot_object";
import { RefCounted } from "@godot/classes/ref_counted";
import { Control } from "@godot/classes/control";

export declare class EditorInspectorPlugin extends RefCounted{
  public _can_handle(_object: Object): boolean;
  public _parse_begin(_object: Object): void;
  public _parse_category(_object: Object, _category: String | StringName | string): void;
  public _parse_group(_object: Object, _group: String | StringName | string): void;
  public _parse_property(_object: Object, _type: number, _name: String | StringName | string, _hint_type: number, _hint_string: String | StringName | string, _usage_flags: number, _wide: boolean): boolean;
  public _parse_end(_object: Object): void;
  public add_custom_control(_control: Control): void;
  public add_property_editor(_property: String | StringName | string, _editor: Control, _add_to_end: boolean, _label: String | StringName | string): void;
  public add_property_editor_for_multiple_properties(_label: String | StringName | string, _properties: PackedStringArray, _editor: Control): void;
}