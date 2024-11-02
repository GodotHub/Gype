
import { Camera3D } from "@godot/classes/camera3d";
import { Resource } from "@godot/classes/resource";


export declare class GLTFCamera extends Resource{
  public from_node(_camera_node: Camera3D): GLTFCamera;
  public to_node(): Camera3D;
  public from_dictionary(_dictionary: Dictionary): GLTFCamera;
  public to_dictionary(): Dictionary;
  public get_perspective(): boolean;
  public set_perspective(_perspective: boolean): void;
  public get_fov(): number;
  public set_fov(_fov: number): void;
  public get_size_mag(): number;
  public set_size_mag(_size_mag: number): void;
  public get_depth_far(): number;
  public set_depth_far(_zdepth_far: number): void;
  public get_depth_near(): number;
  public set_depth_near(_zdepth_near: number): void;
  public get perspective(): boolean;
  public set perspective(value): void;
  public get fov(): number;
  public set fov(value): void;
  public get size_mag(): number;
  public set size_mag(value): void;
  public get depth_far(): number;
  public set depth_far(value): void;
  public get depth_near(): number;
  public set depth_near(value): void;
}