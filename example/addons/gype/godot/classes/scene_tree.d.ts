
import { GodotObject } from "@godot/classes/godot_object";
import { MultiplayerAPI } from "@godot/classes/multiplayer_api";
import { Node } from "@godot/classes/node";
import { Tween } from "@godot/classes/tween";
import { Node } from "@godot/classes/node";
import { PackedScene } from "@godot/classes/packed_scene";
import { Tween } from "@godot/classes/tween";
import { MainLoop } from "@godot/classes/main_loop";
import { SceneTreeTimer } from "@godot/classes/scene_tree_timer";
import { Window } from "@godot/classes/window";

export declare class SceneTree extends MainLoop{
  public get_root(): Window;
  public has_group(_name: String | StringName | string): boolean;
  public is_auto_accept_quit(): boolean;
  public set_auto_accept_quit(_enabled: boolean): void;
  public is_quit_on_go_back(): boolean;
  public set_quit_on_go_back(_enabled: boolean): void;
  public set_debug_collisions_hint(_enable: boolean): void;
  public is_debugging_collisions_hint(): boolean;
  public set_debug_paths_hint(_enable: boolean): void;
  public is_debugging_paths_hint(): boolean;
  public set_debug_navigation_hint(_enable: boolean): void;
  public is_debugging_navigation_hint(): boolean;
  public set_edited_scene_root(_scene: Node): void;
  public get_edited_scene_root(): Node;
  public set_pause(_enable: boolean): void;
  public is_paused(): boolean;
  public create_timer(_time_sec: number, _process_always: boolean, _process_in_physics: boolean, _ignore_time_scale: boolean): SceneTreeTimer;
  public create_tween(): Tween;
  public get_processed_tweens(): GDArray;
  public get_node_count(): number;
  public get_frame(): number;
  public quit(_exit_code: number): void;
  public set_physics_interpolation_enabled(_enabled: boolean): void;
  public is_physics_interpolation_enabled(): boolean;
  public queue_delete(_obj: Object): void;
  public call_group_flags(_flags: number, _group: String | StringName | string, _method: String | StringName | string, ...arg: StringName): void;
  public notify_group_flags(_call_flags: number, _group: String | StringName | string, _notification: number): void;
  public set_group_flags(_call_flags: number, _group: String | StringName | string, _property: String | StringName | string, _value: any): void;
  public call_group(_group: String | StringName | string, _method: String | StringName | string, ...arg: StringName): void;
  public notify_group(_group: String | StringName | string, _notification: number): void;
  public set_group(_group: String | StringName | string, _property: String | StringName | string, _value: any): void;
  public get_nodes_in_group(_group: String | StringName | string): GDArray;
  public get_first_node_in_group(_group: String | StringName | string): Node;
  public get_node_count_in_group(_group: String | StringName | string): number;
  public set_current_scene(_child_node: Node): void;
  public get_current_scene(): Node;
  public change_scene_to_file(_path: String | StringName | string): number;
  public change_scene_to_packed(_packed_scene: PackedScene): number;
  public reload_current_scene(): number;
  public unload_current_scene(): void;
  public set_multiplayer(_multiplayer: MultiplayerAPI, _root_path: NodePath): void;
  public get_multiplayer(_for_path: NodePath): MultiplayerAPI;
  public set_multiplayer_poll_enabled(_enabled: boolean): void;
  public is_multiplayer_poll_enabled(): boolean;
  public get auto_accept_quit(): boolean {
    is_auto_accept_quit();
  }
  public set auto_accept_quit(value): void {
    set_auto_accept_quit(value);
  }
  public get quit_on_go_back(): boolean {
    is_quit_on_go_back();
  }
  public set quit_on_go_back(value): void {
    set_quit_on_go_back(value);
  }
  public get debug_collisions_hint(): boolean {
    is_debugging_collisions_hint();
  }
  public set debug_collisions_hint(value): void {
    set_debug_collisions_hint(value);
  }
  public get debug_paths_hint(): boolean {
    is_debugging_paths_hint();
  }
  public set debug_paths_hint(value): void {
    set_debug_paths_hint(value);
  }
  public get debug_navigation_hint(): boolean {
    is_debugging_navigation_hint();
  }
  public set debug_navigation_hint(value): void {
    set_debug_navigation_hint(value);
  }
  public get paused(): boolean {
    is_paused();
  }
  public set paused(value): void {
    set_pause(value);
  }
  public get edited_scene_root(): Node {
    get_edited_scene_root();
  }
  public set edited_scene_root(value): void {
    set_edited_scene_root(value);
  }
  public get current_scene(): Node {
    get_current_scene();
  }
  public set current_scene(value): void {
    set_current_scene(value);
  }
  public get root(): Node {
    get_root();
  }
  public get multiplayer_poll(): boolean {
    is_multiplayer_poll_enabled();
  }
  public set multiplayer_poll(value): void {
    set_multiplayer_poll_enabled(value);
  }
  public get physics_interpolation(): boolean {
    is_physics_interpolation_enabled();
  }
  public set physics_interpolation(value): void {
    set_physics_interpolation_enabled(value);
  }
  static GroupCallFlags = {
    GROUP_CALL_DEFAULT = 0,
    GROUP_CALL_REVERSE = 1,
    GROUP_CALL_DEFERRED = 2,
    GROUP_CALL_UNIQUE = 4,
  }
  public get tree_changed(): Signal;
  public get tree_process_mode_changed(): Signal;
  public get node_added(): Signal;
  public get node_removed(): Signal;
  public get node_renamed(): Signal;
  public get node_configuration_warning_changed(): Signal;
  public get process_frame(): Signal;
  public get physics_frame(): Signal;
}