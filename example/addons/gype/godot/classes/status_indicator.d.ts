
import { Texture2D } from "@godot/classes/texture2d";
import { Node } from "@godot/classes/node";


export declare class StatusIndicator extends Node{
  public set_tooltip(_tooltip: GDString | StringName | string): void;
  public get_tooltip(): String;
  public set_icon(_texture: Texture2D): void;
  public get_icon(): Texture2D;
  public set_visible(_visible: boolean): void;
  public is_visible(): boolean;
  public set_menu(_menu: GDString | NodePath | string): void;
  public get_menu(): NodePath;
  public get_rect(): Rect2;
  public get tooltip(): String;
  public set tooltip(value): void;
  public get icon(): Texture2D;
  public set icon(value): void;
  public get menu(): NodePath;
  public set menu(value): void;
  public get visible(): boolean;
  public set visible(value): void;
  public get pressed(): Signal;
}