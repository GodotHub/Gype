
import { Container } from "@godot/classes/container";
import { GodotObject } from "@godot/classes/godot_object";
import { Control } from "@godot/classes/control";


export declare class EditorProperty extends Container{
  public _update_property(): void;
  public _set_read_only(_read_only: boolean): void;
  public set_label(_text: GDString | StringName | string): void;
  public get_label(): String;
  public set_read_only(_read_only: boolean): void;
  public is_read_only(): boolean;
  public set_checkable(_checkable: boolean): void;
  public is_checkable(): boolean;
  public set_checked(_checked: boolean): void;
  public is_checked(): boolean;
  public set_draw_warning(_draw_warning: boolean): void;
  public is_draw_warning(): boolean;
  public set_keying(_keying: boolean): void;
  public is_keying(): boolean;
  public set_deletable(_deletable: boolean): void;
  public is_deletable(): boolean;
  public get_edited_property(): StringName;
  public get_edited_object(): GodotObject;
  public update_property(): void;
  public add_focusable(_control: Control): void;
  public set_bottom_editor(_editor: Control): void;
  public emit_changed(_property: GDString | StringName | string, _value: any, _field: GDString | StringName | string, _changing: boolean): void;
  public get label(): String;
  public set label(value): void;
  public get read_only(): boolean;
  public set read_only(value): void;
  public get checkable(): boolean;
  public set checkable(value): void;
  public get checked(): boolean;
  public set checked(value): void;
  public get draw_warning(): boolean;
  public set draw_warning(value): void;
  public get keying(): boolean;
  public set keying(value): void;
  public get deletable(): boolean;
  public set deletable(value): void;
  public get property_changed(): Signal;
  public get multiple_properties_changed(): Signal;
  public get property_keyed(): Signal;
  public get property_deleted(): Signal;
  public get property_keyed_with_value(): Signal;
  public get property_checked(): Signal;
  public get property_pinned(): Signal;
  public get property_can_revert_changed(): Signal;
  public get resource_selected(): Signal;
  public get object_id_selected(): Signal;
  public get selected(): Signal;
}