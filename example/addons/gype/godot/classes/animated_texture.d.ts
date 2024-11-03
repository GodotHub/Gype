
import { Texture2D } from "@godot/classes/texture2d";
export declare class AnimatedTexture extends Texture2D{
  public set_frames(_frames: number): void;
  public get_frames(): number;
  public set_current_frame(_frame: number): void;
  public get_current_frame(): number;
  public set_pause(_pause: boolean): void;
  public get_pause(): boolean;
  public set_one_shot(_one_shot: boolean): void;
  public get_one_shot(): boolean;
  public set_speed_scale(_scale: number): void;
  public get_speed_scale(): number;
  public set_frame_texture(_frame: number, _texture: Texture2D): void;
  public get_frame_texture(_frame: number): Texture2D;
  public set_frame_duration(_frame: number, _duration: number): void;
  public get_frame_duration(_frame: number): number;
  public get frames(): number;
  public set frames(value): void;
  public get current_frame(): number;
  public set current_frame(value): void;
  public get pause(): boolean;
  public set pause(value): void;
  public get one_shot(): boolean;
  public set one_shot(value): void;
  public get speed_scale(): number;
  public set speed_scale(value): void;
}