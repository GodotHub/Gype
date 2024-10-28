
import { Object } from "@godot/classes/object";
import { Control } from "@godot/classes/control";
import { RefCounted } from "@godot/classes/ref_counted";

export declare class EditorInspectorPlugin extends RefCounted{
  public _can_handle(_object: Object): boolean;
  public _parse_begin(_object: Object): void;
  public _parse_category(_object: Object, _category: String): void;
  public _parse_group(_object: Object, _group: String): void;
  public _parse_property(_object: Object, _type: number, _name: String, _hint_type: number, _hint_string: String, _usage_flags: number, _wide: boolean): boolean;
  public _parse_end(_object: Object): void;
  public add_custom_control(_control: Control): void;
  public add_property_editor(_property: String, _editor: Control, _add_to_end: boolean, _label: String): void;
  public add_property_editor_for_multiple_properties(_label: String, _properties: PackedStringArray, _editor: Control): void;
}