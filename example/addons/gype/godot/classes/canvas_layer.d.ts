
import { Node } from "@godot/classes/node";

export declare class CanvasLayer extends Node{
  public set_layer(_layer: number): void;
  public get_layer(): number;
  public set_visible(_visible: boolean): void;
  public is_visible(): boolean;
  public show(): void;
  public hide(): void;
  public set_transform(_transform: Transform2D): void;
  public get_transform(): Transform2D;
  public get_final_transform(): Transform2D;
  public set_offset(_offset: Vector2): void;
  public get_offset(): Vector2;
  public set_rotation(_radians: number): void;
  public get_rotation(): number;
  public set_scale(_scale: Vector2): void;
  public get_scale(): Vector2;
  public set_follow_viewport(_enable: boolean): void;
  public is_following_viewport(): boolean;
  public set_follow_viewport_scale(_scale: number): void;
  public get_follow_viewport_scale(): number;
  public set_custom_viewport(_viewport: Node): void;
  public get_custom_viewport(): Node;
  public get_canvas(): RID;
  public get layer(): number {
    get_layer();
  }
  public set layer(value): void {
    set_layer(value);
  }
  public get visible(): boolean {
    is_visible();
  }
  public set visible(value): void {
    set_visible(value);
  }
  public get offset(): Vector2 {
    get_offset();
  }
  public set offset(value): void {
    set_offset(value);
  }
  public get rotation(): number {
    get_rotation();
  }
  public set rotation(value): void {
    set_rotation(value);
  }
  public get scale(): Vector2 {
    get_scale();
  }
  public set scale(value): void {
    set_scale(value);
  }
  public get transform(): Transform2D {
    get_transform();
  }
  public set transform(value): void {
    set_transform(value);
  }
  public get custom_viewport(): Viewport {
    get_custom_viewport();
  }
  public set custom_viewport(value): void {
    set_custom_viewport(value);
  }
  public get follow_viewport_enabled(): boolean {
    is_following_viewport();
  }
  public set follow_viewport_enabled(value): void {
    set_follow_viewport(value);
  }
  public get follow_viewport_scale(): number {
    get_follow_viewport_scale();
  }
  public set follow_viewport_scale(value): void {
    set_follow_viewport_scale(value);
  }
}