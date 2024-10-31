
import { VoxelGIData } from "@godot/classes/voxel_gi_data";
import { CameraAttributes } from "@godot/classes/camera_attributes";
import { VisualInstance3D } from "@godot/classes/visual_instance3d";
import { Node } from "@godot/classes/node";

export declare class VoxelGI extends VisualInstance3D{
  public set_probe_data(_data: VoxelGIData): void;
  public get_probe_data(): VoxelGIData;
  public set_subdiv(_subdiv: number): void;
  public get_subdiv(): number;
  public set_size(_size: Vector3): void;
  public get_size(): Vector3;
  public set_camera_attributes(_camera_attributes: CameraAttributes): void;
  public get_camera_attributes(): CameraAttributes;
  public bake(_from_node: Node, _create_visual_debug: boolean): void;
  public debug_bake(): void;
  public get subdiv(): number {
    get_subdiv();
  }
  public set subdiv(value): void {
    set_subdiv(value);
  }
  public get size(): Vector3 {
    get_size();
  }
  public set size(value): void {
    set_size(value);
  }
  public get camera_attributes(): CameraAttributesPractical {
    get_camera_attributes();
  }
  public set camera_attributes(value): void {
    set_camera_attributes(value);
  }
  public get data(): VoxelGIData {
    get_probe_data();
  }
  public set data(value): void {
    set_probe_data(value);
  }
  static Subdiv = {
    SUBDIV_64 = 0,
    SUBDIV_128 = 1,
    SUBDIV_256 = 2,
    SUBDIV_512 = 3,
    SUBDIV_MAX = 4,
  }
}