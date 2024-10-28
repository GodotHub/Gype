
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
  public get frames(): number {
    get_frames();
  }
  public set frames(value: number): void {
    set_frames(value);
  }
  public get current_frame(): number {
    get_current_frame();
  }
  public set current_frame(value: number): void {
    set_current_frame(value);
  }
  public get pause(): boolean {
    get_pause();
  }
  public set pause(value: boolean): void {
    set_pause(value);
  }
  public get one_shot(): boolean {
    get_one_shot();
  }
  public set one_shot(value: boolean): void {
    set_one_shot(value);
  }
  public get speed_scale(): number {
    get_speed_scale();
  }
  public set speed_scale(value: number): void {
    set_speed_scale(value);
  }
}