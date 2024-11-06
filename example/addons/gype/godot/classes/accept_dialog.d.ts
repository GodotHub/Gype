
import { Window } from "@godot/classes/window";
import { Button } from "@godot/classes/button";
import { Label } from "@godot/classes/label";
import { LineEdit } from "@godot/classes/line_edit";
export declare class AcceptDialog extends Window{
  public get_ok_button(): Button;
  public get_label(): Label;
  public set_hide_on_ok(_enabled: boolean): void;
  public get_hide_on_ok(): boolean;
  public set_close_on_escape(_enabled: boolean): void;
  public get_close_on_escape(): boolean;
  public add_button(_text: GDString | StringName | string, _right: boolean = false, _action: GDString | StringName | string = ""): Button;
  public add_cancel_button(_name: GDString | StringName | string): Button;
  public remove_button(_button: Button): void;
  public register_text_enter(_line_edit: LineEdit): void;
  public set_text(_text: GDString | StringName | string): void;
  public get_text(): String;
  public set_autowrap(_autowrap: boolean): void;
  public has_autowrap(): boolean;
  public set_ok_button_text(_text: GDString | StringName | string): void;
  public get_ok_button_text(): String;
  public get ok_button_text(): String;
  public set ok_button_text(value): void;
  public get dialog_text(): String;
  public set dialog_text(value): void;
  public get dialog_hide_on_ok(): boolean;
  public set dialog_hide_on_ok(value): void;
  public get dialog_close_on_escape(): boolean;
  public set dialog_close_on_escape(value): void;
  public get dialog_autowrap(): boolean;
  public set dialog_autowrap(value): void;
  public get confirmed(): Signal;
  public get canceled(): Signal;
  public get custom_action(): Signal;
}