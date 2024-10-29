
import { Object } from "@godot/classes/object";

export declare class Performance extends Object{
  public get_monitor(_monitor: number): number;
  public add_custom_monitor(_id: StringName, _callable: Callable, _arguments: GDArray): void;
  public remove_custom_monitor(_id: StringName): void;
  public has_custom_monitor(_id: StringName): boolean;
  public get_custom_monitor(_id: StringName): any;
  public get_monitor_modification_time(): number;
  public get_custom_monitor_names(): GDArray;
  static Monitor = {
    TIME_FPS = 0,
    TIME_PROCESS = 1,
    TIME_PHYSICS_PROCESS = 2,
    TIME_NAVIGATION_PROCESS = 3,
    MEMORY_STATIC = 4,
    MEMORY_STATIC_MAX = 5,
    MEMORY_MESSAGE_BUFFER_MAX = 6,
    OBJECT_COUNT = 7,
    OBJECT_RESOURCE_COUNT = 8,
    OBJECT_NODE_COUNT = 9,
    OBJECT_ORPHAN_NODE_COUNT = 10,
    RENDER_TOTAL_OBJECTS_IN_FRAME = 11,
    RENDER_TOTAL_PRIMITIVES_IN_FRAME = 12,
    RENDER_TOTAL_DRAW_CALLS_IN_FRAME = 13,
    RENDER_VIDEO_MEM_USED = 14,
    RENDER_TEXTURE_MEM_USED = 15,
    RENDER_BUFFER_MEM_USED = 16,
    PHYSICS_2D_ACTIVE_OBJECTS = 17,
    PHYSICS_2D_COLLISION_PAIRS = 18,
    PHYSICS_2D_ISLAND_COUNT = 19,
    PHYSICS_3D_ACTIVE_OBJECTS = 20,
    PHYSICS_3D_COLLISION_PAIRS = 21,
    PHYSICS_3D_ISLAND_COUNT = 22,
    AUDIO_OUTPUT_LATENCY = 23,
    NAVIGATION_ACTIVE_MAPS = 24,
    NAVIGATION_REGION_COUNT = 25,
    NAVIGATION_AGENT_COUNT = 26,
    NAVIGATION_LINK_COUNT = 27,
    NAVIGATION_POLYGON_COUNT = 28,
    NAVIGATION_EDGE_COUNT = 29,
    NAVIGATION_EDGE_MERGE_COUNT = 30,
    NAVIGATION_EDGE_CONNECTION_COUNT = 31,
    NAVIGATION_EDGE_FREE_COUNT = 32,
    MONITOR_MAX = 33,
  }
}