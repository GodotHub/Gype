
import { HBoxContainer } from "@godot/classes/h_box_container";
import { Resource } from "@godot/classes/resource";
import { GodotObject } from "@godot/classes/godot_object";

export declare class EditorResourcePicker extends HBoxContainer{
  public _set_create_options(_menu_node: Object): void;
  public _handle_menu_selected(_id: number): boolean;
  public set_base_type(_base_type: String | StringName | string): void;
  public get_base_type(): String;
  public get_allowed_types(): PackedStringArray;
  public set_edited_resource(_resource: Resource): void;
  public get_edited_resource(): Resource;
  public set_toggle_mode(_enable: boolean): void;
  public is_toggle_mode(): boolean;
  public set_toggle_pressed(_pressed: boolean): void;
  public set_editable(_enable: boolean): void;
  public is_editable(): boolean;
  public get base_type(): String {
    get_base_type();
  }
  public set base_type(value): void {
    set_base_type(value);
  }
  public get edited_resource(): Resource {
    get_edited_resource();
  }
  public set edited_resource(value): void {
    set_edited_resource(value);
  }
  public get editable(): boolean {
    is_editable();
  }
  public set editable(value): void {
    set_editable(value);
  }
  public get toggle_mode(): boolean {
    is_toggle_mode();
  }
  public set toggle_mode(value): void {
    set_toggle_mode(value);
  }
  public const resource_selected: string = "resource_selected";
  public const resource_changed: string = "resource_changed";
}