
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
  public get position_offset(): Vector2 {
    get_position_offset();
  }
  public set position_offset(value): void {
    set_position_offset(value);
  }
  public get resizable(): boolean {
    is_resizable();
  }
  public set resizable(value): void {
    set_resizable(value);
  }
  public get draggable(): boolean {
    is_draggable();
  }
  public set draggable(value): void {
    set_draggable(value);
  }
  public get selectable(): boolean {
    is_selectable();
  }
  public set selectable(value): void {
    set_selectable(value);
  }
  public get selected(): boolean {
    is_selected();
  }
  public set selected(value): void {
    set_selected(value);
  }
}