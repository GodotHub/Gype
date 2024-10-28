
import { TextServer } from "@godot/classes/text_server";
import { Object } from "@godot/classes/object";

export declare class TextServerManager extends Object{
  public add_interface(_interface: TextServer): void;
  public get_interface_count(): number;
  public remove_interface(_interface: TextServer): void;
  public get_interface(_idx: number): TextServer;
  public get_interfaces(): Array;
  public find_interface(_name: String): TextServer;
  public set_primary_interface(_index: TextServer): void;
  public get_primary_interface(): TextServer;
}