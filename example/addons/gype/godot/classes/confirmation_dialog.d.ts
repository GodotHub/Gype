
import { Button } from "@godot/classes/button";
import { AcceptDialog } from "@godot/classes/accept_dialog";

export declare class ConfirmationDialog extends AcceptDialog{
  public get_cancel_button(): Button;
  public set_cancel_button_text(_text: String): void;
  public get_cancel_button_text(): String;
  public get cancel_button_text(): String {
    get_cancel_button_text();
  }
  public set cancel_button_text(value: String): void {
    set_cancel_button_text(value);
  }
}