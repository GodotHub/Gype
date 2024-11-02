
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
  public get layer(): number;
  public set layer(value): void;
  public get visible(): boolean;
  public set visible(value): void;
  public get offset(): Vector2;
  public set offset(value): void;
  public get rotation(): number;
  public set rotation(value): void;
  public get scale(): Vector2;
  public set scale(value): void;
  public get transform(): Transform2D;
  public set transform(value): void;
  public get custom_viewport(): Viewport;
  public set custom_viewport(value): void;
  public get follow_viewport_enabled(): boolean;
  public set follow_viewport_enabled(value): void;
  public get follow_viewport_scale(): number;
  public set follow_viewport_scale(value): void;
  public get visibility_changed(): Signal;
}