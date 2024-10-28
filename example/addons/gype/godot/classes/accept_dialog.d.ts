
import { LineEdit } from "@godot/classes/line_edit";
import { Window } from "@godot/classes/window";
import { Label } from "@godot/classes/label";
import { Button } from "@godot/classes/button";

export declare class AcceptDialog extends Window{
  public get_ok_button(): Button;
  public get_label(): Label;
  public set_hide_on_ok(_enabled: boolean): void;
  public get_hide_on_ok(): boolean;
  public set_close_on_escape(_enabled: boolean): void;
  public get_close_on_escape(): boolean;
  public add_button(_text: String, _right: boolean, _action: String): Button;
  public add_cancel_button(_name: String): Button;
  public remove_button(_button: Button): void;
  public register_text_enter(_line_edit: LineEdit): void;
  public set_text(_text: String): void;
  public get_text(): String;
  public set_autowrap(_autowrap: boolean): void;
  public has_autowrap(): boolean;
  public set_ok_button_text(_text: String): void;
  public get_ok_button_text(): String;
  public get ok_button_text(): String {
    get_ok_button_text();
  }
  public set ok_button_text(value: String): void {
    set_ok_button_text(value);
  }
  public get dialog_text(): String {
    get_text();
  }
  public set dialog_text(value: String): void {
    set_text(value);
  }
  public get dialog_hide_on_ok(): boolean {
    get_hide_on_ok();
  }
  public set dialog_hide_on_ok(value: boolean): void {
    set_hide_on_ok(value);
  }
  public get dialog_close_on_escape(): boolean {
    get_close_on_escape();
  }
  public set dialog_close_on_escape(value: boolean): void {
    set_close_on_escape(value);
  }
  public get dialog_autowrap(): boolean {
    has_autowrap();
  }
  public set dialog_autowrap(value: boolean): void {
    set_autowrap(value);
  }
}