
import { CameraAttributes } from "@godot/classes/camera_attributes";
import { Environment } from "@godot/classes/environment";
import { Compositor } from "@godot/classes/compositor";
import { Node } from "@godot/classes/node";

export declare class WorldEnvironment extends Node{
  public set_environment(_env: Environment): void;
  public get_environment(): Environment;
  public set_camera_attributes(_camera_attributes: CameraAttributes): void;
  public get_camera_attributes(): CameraAttributes;
  public set_compositor(_compositor: Compositor): void;
  public get_compositor(): Compositor;
  public get environment(): Environment {
    get_environment();
  }
  public set environment(value): void {
    set_environment(value);
  }
  public get camera_attributes(): CameraAttributesPractical {
    get_camera_attributes();
  }
  public set camera_attributes(value): void {
    set_camera_attributes(value);
  }
  public get compositor(): Compositor {
    get_compositor();
  }
  public set compositor(value): void {
    set_compositor(value);
  }
}