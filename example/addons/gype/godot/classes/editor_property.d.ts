
import { Container } from "@godot/classes/container";
import { Control } from "@godot/classes/control";
import { GodotObject } from "@godot/classes/godot_object";

export declare class EditorProperty extends Container{
  public _update_property(): void;
  public _set_read_only(_read_only: boolean): void;
  public set_label(_text: String | StringName | string): void;
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
  public emit_changed(_property: String | StringName | string, _value: any, _field: String | StringName | string, _changing: boolean): void;
  public get label(): String {
    get_label();
  }
  public set label(value): void {
    set_label(value);
  }
  public get read_only(): boolean {
    is_read_only();
  }
  public set read_only(value): void {
    set_read_only(value);
  }
  public get checkable(): boolean {
    is_checkable();
  }
  public set checkable(value): void {
    set_checkable(value);
  }
  public get checked(): boolean {
    is_checked();
  }
  public set checked(value): void {
    set_checked(value);
  }
  public get draw_warning(): boolean {
    is_draw_warning();
  }
  public set draw_warning(value): void {
    set_draw_warning(value);
  }
  public get keying(): boolean {
    is_keying();
  }
  public set keying(value): void {
    set_keying(value);
  }
  public get deletable(): boolean {
    is_deletable();
  }
  public set deletable(value): void {
    set_deletable(value);
  }
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