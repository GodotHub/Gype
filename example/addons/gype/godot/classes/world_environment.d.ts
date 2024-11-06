
import { Node } from "@godot/classes/node";
import { Compositor } from "@godot/classes/compositor";
import { Environment } from "@godot/classes/environment";
import { CameraAttributes } from "@godot/classes/camera_attributes";
export declare class WorldEnvironment extends Node{
  public set_environment(_env: Environment): void;
  public get_environment(): Environment;
  public set_camera_attributes(_camera_attributes: CameraAttributes): void;
  public get_camera_attributes(): CameraAttributes;
  public set_compositor(_compositor: Compositor): void;
  public get_compositor(): Compositor;
  public get environment(): Environment;
  public set environment(value): void;
  public get camera_attributes(): CameraAttributesPractical;
  public set camera_attributes(value): void;
  public get compositor(): Compositor;
  public set compositor(value): void;
}