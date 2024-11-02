
import { Node } from "@godot/classes/node";
import { CameraAttributes } from "@godot/classes/camera_attributes";
import { VoxelGIData } from "@godot/classes/voxel_gi_data";
import { VisualInstance3D } from "@godot/classes/visual_instance3d";


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
  public get subdiv(): number;
  public set subdiv(value): void;
  public get size(): Vector3;
  public set size(value): void;
  public get camera_attributes(): CameraAttributesPractical;
  public set camera_attributes(value): void;
  public get data(): VoxelGIData;
  public set data(value): void;
  static Subdiv = {
    SUBDIV_64 = 0,
    SUBDIV_128 = 1,
    SUBDIV_256 = 2,
    SUBDIV_512 = 3,
    SUBDIV_MAX = 4,
  }
}