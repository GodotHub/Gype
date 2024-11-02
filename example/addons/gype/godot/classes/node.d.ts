
import { SceneTree } from "@godot/classes/scene_tree";
import { Window } from "@godot/classes/window";
import { GodotObject } from "@godot/classes/godot_object";
import { Tween } from "@godot/classes/tween";
import { MultiplayerAPI } from "@godot/classes/multiplayer_api";
import { InputEvent } from "@godot/classes/input_event";
import { Viewport } from "@godot/classes/viewport";


export declare class Node extends GodotObject{
  public _process(_delta: number): void;
  public _physics_process(_delta: number): void;
  public _enter_tree(): void;
  public _exit_tree(): void;
  public _ready(): void;
  public _get_configuration_warnings(): PackedStringArray;
  public _input(_event: InputEvent): void;
  public _shortcut_input(_event: InputEvent): void;
  public _unhandled_input(_event: InputEvent): void;
  public _unhandled_key_input(_event: InputEvent): void;
  public print_orphan_nodes(): void;
  public add_sibling(_sibling: Node, _force_readable_name: boolean): void;
  public set_name(_name: GDString | StringName | string): void;
  public get_name(): StringName;
  public add_child(_node: Node, _force_readable_name: boolean, _internal: number): void;
  public remove_child(_node: Node): void;
  public reparent(_new_parent: Node, _keep_global_transform: boolean): void;
  public get_child_count(_include_internal: boolean): number;
  public get_children(_include_internal: boolean): GDArray;
  public get_child(_idx: number, _include_internal: boolean): Node;
  public has_node(_path: GDString | NodePath | string): boolean;
  public get_node<T extends Node>(_path: GDString | NodePath | string): T;
  public get_node_or_null(_path: GDString | NodePath | string): Node;
  public get_parent<T extends Node>(): T;
  public find_child(_pattern: GDString | StringName | string, _recursive: boolean, _owned: boolean): Node;
  public find_children(_pattern: GDString | StringName | string, _type: GDString | StringName | string, _recursive: boolean, _owned: boolean): GDArray;
  public find_parent(_pattern: GDString | StringName | string): Node;
  public has_node_and_resource(_path: GDString | NodePath | string): boolean;
  public get_node_and_resource(_path: GDString | NodePath | string): GDArray;
  public is_inside_tree(): boolean;
  public is_part_of_edited_scene(): boolean;
  public is_ancestor_of(_node: Node): boolean;
  public is_greater_than(_node: Node): boolean;
  public get_path(): NodePath;
  public get_path_to(_node: Node, _use_unique_path: boolean): NodePath;
  public add_to_group(_group: GDString | StringName | string, _persistent: boolean): void;
  public remove_from_group(_group: GDString | StringName | string): void;
  public is_in_group(_group: GDString | StringName | string): boolean;
  public move_child(_child_node: Node, _to_index: number): void;
  public get_groups(): GDArray;
  public set_owner(_owner: Node): void;
  public get_owner(): Node;
  public get_index(_include_internal: boolean): number;
  public print_tree(): void;
  public print_tree_pretty(): void;
  public get_tree_string(): String;
  public get_tree_string_pretty(): String;
  public set_scene_file_path(_scene_file_path: GDString | StringName | string): void;
  public get_scene_file_path(): String;
  public propagate_notification(_what: number): void;
  public propagate_call(_method: GDString | StringName | string, _args: GDArray, _parent_first: boolean): void;
  public set_physics_process(_enable: boolean): void;
  public get_physics_process_delta_time(): number;
  public is_physics_processing(): boolean;
  public get_process_delta_time(): number;
  public set_process(_enable: boolean): void;
  public set_process_priority(_priority: number): void;
  public get_process_priority(): number;
  public set_physics_process_priority(_priority: number): void;
  public get_physics_process_priority(): number;
  public is_processing(): boolean;
  public set_process_input(_enable: boolean): void;
  public is_processing_input(): boolean;
  public set_process_shortcut_input(_enable: boolean): void;
  public is_processing_shortcut_input(): boolean;
  public set_process_unhandled_input(_enable: boolean): void;
  public is_processing_unhandled_input(): boolean;
  public set_process_unhandled_key_input(_enable: boolean): void;
  public is_processing_unhandled_key_input(): boolean;
  public set_process_mode(_mode: number): void;
  public get_process_mode(): number;
  public can_process(): boolean;
  public set_process_thread_group(_mode: number): void;
  public get_process_thread_group(): number;
  public set_process_thread_messages(_flags: number): void;
  public get_process_thread_messages(): number;
  public set_process_thread_group_order(_order: number): void;
  public get_process_thread_group_order(): number;
  public set_display_folded(_fold: boolean): void;
  public is_displayed_folded(): boolean;
  public set_process_internal(_enable: boolean): void;
  public is_processing_internal(): boolean;
  public set_physics_process_internal(_enable: boolean): void;
  public is_physics_processing_internal(): boolean;
  public set_physics_interpolation_mode(_mode: number): void;
  public get_physics_interpolation_mode(): number;
  public is_physics_interpolated(): boolean;
  public is_physics_interpolated_and_enabled(): boolean;
  public reset_physics_interpolation(): void;
  public set_auto_translate_mode(_mode: number): void;
  public get_auto_translate_mode(): number;
  public get_window(): Window;
  public get_last_exclusive_window(): Window;
  public get_tree(): SceneTree;
  public create_tween(): Tween;
  public duplicate(_flags: number): Node;
  public replace_by(_node: Node, _keep_groups: boolean): void;
  public set_scene_instance_load_placeholder(_load_placeholder: boolean): void;
  public get_scene_instance_load_placeholder(): boolean;
  public set_editable_instance(_node: Node, _is_editable: boolean): void;
  public is_editable_instance(_node: Node): boolean;
  public get_viewport(): Viewport;
  public queue_free(): void;
  public request_ready(): void;
  public is_node_ready(): boolean;
  public set_multiplayer_authority(_id: number, _recursive: boolean): void;
  public get_multiplayer_authority(): number;
  public is_multiplayer_authority(): boolean;
  public get_multiplayer(): MultiplayerAPI;
  public rpc_config(_method: GDString | StringName | string, _config: any): void;
  public set_editor_description(_editor_description: GDString | StringName | string): void;
  public get_editor_description(): String;
  public set_unique_name_in_owner(_enable: boolean): void;
  public is_unique_name_in_owner(): boolean;
  public atr(_message: GDString | StringName | string, _context: GDString | StringName | string): String;
  public atr_n(_message: GDString | StringName | string, _plural_message: GDString | StringName | string, _n: number, _context: GDString | StringName | string): String;
  public rpc(_method: GDString | StringName | string, ...arg: StringName): number;
  public rpc_id(_peer_id: number, _method: GDString | StringName | string, ...arg: StringName): number;
  public update_configuration_warnings(): void;
  public call_deferred_thread_group(_method: GDString | StringName | string, ...arg: StringName): any;
  public set_deferred_thread_group(_property: GDString | StringName | string, _value: any): void;
  public notify_deferred_thread_group(_what: number): void;
  public call_thread_safe(_method: GDString | StringName | string, ...arg: StringName): any;
  public set_thread_safe(_property: GDString | StringName | string, _value: any): void;
  public notify_thread_safe(_what: number): void;
  public get name(): StringName;
  public set name(value): void;
  public get unique_name_in_owner(): boolean;
  public set unique_name_in_owner(value): void;
  public get scene_file_path(): String;
  public set scene_file_path(value): void;
  public get owner(): Node;
  public set owner(value): void;
  public get multiplayer(): MultiplayerAPI;
  public get process_mode(): number;
  public set process_mode(value): void;
  public get process_priority(): number;
  public set process_priority(value): void;
  public get process_physics_priority(): number;
  public set process_physics_priority(value): void;
  public get process_thread_group(): number;
  public set process_thread_group(value): void;
  public get process_thread_group_order(): number;
  public set process_thread_group_order(value): void;
  public get process_thread_messages(): number;
  public set process_thread_messages(value): void;
  public get physics_interpolation_mode(): number;
  public set physics_interpolation_mode(value): void;
  public get auto_translate_mode(): number;
  public set auto_translate_mode(value): void;
  public get editor_description(): String;
  public set editor_description(value): void;
  static ProcessMode = {
    PROCESS_MODE_INHERIT = 0,
    PROCESS_MODE_PAUSABLE = 1,
    PROCESS_MODE_WHEN_PAUSED = 2,
    PROCESS_MODE_ALWAYS = 3,
    PROCESS_MODE_DISABLED = 4,
  }
  static ProcessThreadGroup = {
    PROCESS_THREAD_GROUP_INHERIT = 0,
    PROCESS_THREAD_GROUP_MAIN_THREAD = 1,
    PROCESS_THREAD_GROUP_SUB_THREAD = 2,
  }
  static ProcessThreadMessages = {
    FLAG_PROCESS_THREAD_MESSAGES = 1,
    FLAG_PROCESS_THREAD_MESSAGES_PHYSICS = 2,
    FLAG_PROCESS_THREAD_MESSAGES_ALL = 3,
  }
  static PhysicsInterpolationMode = {
    PHYSICS_INTERPOLATION_MODE_INHERIT = 0,
    PHYSICS_INTERPOLATION_MODE_ON = 1,
    PHYSICS_INTERPOLATION_MODE_OFF = 2,
  }
  static DuplicateFlags = {
    DUPLICATE_SIGNALS = 1,
    DUPLICATE_GROUPS = 2,
    DUPLICATE_SCRIPTS = 4,
    DUPLICATE_USE_INSTANTIATION = 8,
  }
  static InternalMode = {
    INTERNAL_MODE_DISABLED = 0,
    INTERNAL_MODE_FRONT = 1,
    INTERNAL_MODE_BACK = 2,
  }
  static AutoTranslateMode = {
    AUTO_TRANSLATE_MODE_INHERIT = 0,
    AUTO_TRANSLATE_MODE_ALWAYS = 1,
    AUTO_TRANSLATE_MODE_DISABLED = 2,
  }
  public get ready(): Signal;
  public get renamed(): Signal;
  public get tree_entered(): Signal;
  public get tree_exiting(): Signal;
  public get tree_exited(): Signal;
  public get child_entered_tree(): Signal;
  public get child_exiting_tree(): Signal;
  public get child_order_changed(): Signal;
  public get replacing_by(): Signal;
  public get editor_description_changed(): Signal;
}