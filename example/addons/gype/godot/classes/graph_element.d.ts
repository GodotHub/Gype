
import { Container } from "@godot/classes/container";


export declare class GraphElement extends Container{
  public set_resizable(_resizable: boolean): void;
  public is_resizable(): boolean;
  public set_draggable(_draggable: boolean): void;
  public is_draggable(): boolean;
  public set_selectable(_selectable: boolean): void;
  public is_selectable(): boolean;
  public set_selected(_selected: boolean): void;
  public is_selected(): boolean;
  public set_position_offset(_offset: Vector2): void;
  public get_position_offset(): Vector2;
  public get position_offset(): Vector2;
  public set position_offset(value): void;
  public get resizable(): boolean;
  public set resizable(value): void;
  public get draggable(): boolean;
  public set draggable(value): void;
  public get selectable(): boolean;
  public set selectable(value): void;
  public get selected(): boolean;
  public set selected(value): void;
  public get node_selected(): Signal;
  public get node_deselected(): Signal;
  public get raise_request(): Signal;
  public get delete_request(): Signal;
  public get resize_request(): Signal;
  public get resize_end(): Signal;
  public get dragged(): Signal;
  public get position_offset_changed(): Signal;
}