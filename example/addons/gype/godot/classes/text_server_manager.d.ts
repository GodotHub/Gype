
import { TextServer } from "@godot/classes/text_server";
import { GodotObject } from "@godot/classes/godot_object";

export declare class TextServerManager extends GodotObject{
  public add_interface(_interface: TextServer): void;
  public get_interface_count(): number;
  public remove_interface(_interface: TextServer): void;
  public get_interface(_idx: number): TextServer;
  public get_interfaces(): GDArray;
  public find_interface(_name: String | StringName | string): TextServer;
  public set_primary_interface(_index: TextServer): void;
  public get_primary_interface(): TextServer;
  public get interface_added(): Signal;
  public get interface_removed(): Signal;
}