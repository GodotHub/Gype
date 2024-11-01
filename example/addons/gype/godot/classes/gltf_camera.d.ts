
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
  public get perspective(): boolean {
    get_perspective();
  }
  public set perspective(value): void {
    set_perspective(value);
  }
  public get fov(): number {
    get_fov();
  }
  public set fov(value): void {
    set_fov(value);
  }
  public get size_mag(): number {
    get_size_mag();
  }
  public set size_mag(value): void {
    set_size_mag(value);
  }
  public get depth_far(): number {
    get_depth_far();
  }
  public set depth_far(value): void {
    set_depth_far(value);
  }
  public get depth_near(): number {
    get_depth_near();
  }
  public set depth_near(value): void {
    set_depth_near(value);
  }
}