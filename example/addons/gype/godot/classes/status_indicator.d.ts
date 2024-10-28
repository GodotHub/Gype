
import { Node } from "@godot/classes/node";
import { Texture2D } from "@godot/classes/texture2d";

export declare class StatusIndicator extends Node{
  public set_tooltip(_tooltip: String): void;
  public get_tooltip(): String;
  public set_icon(_texture: Texture2D): void;
  public get_icon(): Texture2D;
  public set_visible(_visible: boolean): void;
  public is_visible(): boolean;
  public set_menu(_menu: NodePath): void;
  public get_menu(): NodePath;
  public get_rect(): Rect2;
  public get tooltip(): String {
    get_tooltip();
  }
  public set tooltip(value: String): void {
    set_tooltip(value);
  }
  public get icon(): Texture2D {
    get_icon();
  }
  public set icon(value: Texture2D): void {
    set_icon(value);
  }
  public get menu(): NodePath {
    get_menu();
  }
  public set menu(value: NodePath): void {
    set_menu(value);
  }
  public get visible(): boolean {
    is_visible();
  }
  public set visible(value: boolean): void {
    set_visible(value);
  }
}