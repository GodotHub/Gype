
import { Viewport } from "@godot/classes/viewport";
import { Tween } from "@godot/classes/tween";
import { Object } from "@godot/classes/object";
import { InputEvent } from "@godot/classes/input_event";
import { MultiplayerAPI } from "@godot/classes/multiplayer_api";
import { SceneTree } from "@godot/classes/scene_tree";
import { Window } from "@godot/classes/window";

export declare class Node extends Object{
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
  public set_name(_name: String): void;
  public get_name(): StringName;
  public add_child(_node: Node, _force_readable_name: boolean, _internal: number): void;
  public remove_child(_node: Node): void;
  public reparent(_new_parent: Node, _keep_global_transform: boolean): void;
  public get_child_count(_include_internal: boolean): number;
  public get_children(_include_internal: boolean): Array;
  public get_child(_idx: number, _include_internal: boolean): Node;
  public has_node(_path: NodePath): boolean;
  public get_node(_path: NodePath): Node;
  public get_node_or_null(_path: NodePath): Node;
  public get_parent(): Node;
  public find_child(_pattern: String, _recursive: boolean, _owned: boolean): Node;
  public find_children(_pattern: String, _type: String, _recursive: boolean, _owned: boolean): Array;
  public find_parent(_pattern: String): Node;
  public has_node_and_resource(_path: NodePath): boolean;
  public get_node_and_resource(_path: NodePath): GDArray;
  public is_inside_tree(): boolean;
  public is_part_of_edited_scene(): boolean;
  public is_ancestor_of(_node: Node): boolean;
  public is_greater_than(_node: Node): boolean;
  public get_path(): NodePath;
  public get_path_to(_node: Node, _use_unique_path: boolean): NodePath;
  public add_to_group(_group: StringName, _persistent: boolean): void;
  public remove_from_group(_group: StringName): void;
  public is_in_group(_group: StringName): boolean;
  public move_child(_child_node: Node, _to_index: number): void;
  public get_groups(): Array;
  public set_owner(_owner: Node): void;
  public get_owner(): Node;
  public get_index(_include_internal: boolean): number;
  public print_tree(): void;
  public print_tree_pretty(): void;
  public get_tree_string(): String;
  public get_tree_string_pretty(): String;
  public set_scene_file_path(_scene_file_path: String): void;
  public get_scene_file_path(): String;
  public propagate_notification(_what: number): void;
  public propagate_call(_method: StringName, _args: GDArray, _parent_first: boolean): void;
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
  public rpc_config(_method: StringName, _config: Variant): void;
  public set_editor_description(_editor_description: String): void;
  public get_editor_description(): String;
  public set_unique_name_in_owner(_enable: boolean): void;
  public is_unique_name_in_owner(): boolean;
  public atr(_message: String, _context: StringName): String;
  public atr_n(_message: String, _plural_message: StringName, _n: number, _context: StringName): String;
  public rpc(_method: StringName): number;
  public rpc_id(_peer_id: number, _method: StringName): number;
  public update_configuration_warnings(): void;
  public call_deferred_thread_group(_method: StringName): Variant;
  public set_deferred_thread_group(_property: StringName, _value: Variant): void;
  public notify_deferred_thread_group(_what: number): void;
  public call_thread_safe(_method: StringName): Variant;
  public set_thread_safe(_property: StringName, _value: Variant): void;
  public notify_thread_safe(_what: number): void;
  public get name(): StringName {
    get_name();
  }
  public set name(value: StringName): void {
    set_name(value);
  }
  public get unique_name_in_owner(): boolean {
    is_unique_name_in_owner();
  }
  public set unique_name_in_owner(value: boolean): void {
    set_unique_name_in_owner(value);
  }
  public get scene_file_path(): String {
    get_scene_file_path();
  }
  public set scene_file_path(value: String): void {
    set_scene_file_path(value);
  }
  public get owner(): Node {
    get_owner();
  }
  public set owner(value: Node): void {
    set_owner(value);
  }
  public get multiplayer(): MultiplayerAPI {
    get_multiplayer();
  }
  public get process_mode(): number {
    get_process_mode();
  }
  public set process_mode(value: number): void {
    set_process_mode(value);
  }
  public get process_priority(): number {
    get_process_priority();
  }
  public set process_priority(value: number): void {
    set_process_priority(value);
  }
  public get process_physics_priority(): number {
    get_physics_process_priority();
  }
  public set process_physics_priority(value: number): void {
    set_physics_process_priority(value);
  }
  public get process_thread_group(): number {
    get_process_thread_group();
  }
  public set process_thread_group(value: number): void {
    set_process_thread_group(value);
  }
  public get process_thread_group_order(): number {
    get_process_thread_group_order();
  }
  public set process_thread_group_order(value: number): void {
    set_process_thread_group_order(value);
  }
  public get process_thread_messages(): number {
    get_process_thread_messages();
  }
  public set process_thread_messages(value: number): void {
    set_process_thread_messages(value);
  }
  public get physics_interpolation_mode(): number {
    get_physics_interpolation_mode();
  }
  public set physics_interpolation_mode(value: number): void {
    set_physics_interpolation_mode(value);
  }
  public get auto_translate_mode(): number {
    get_auto_translate_mode();
  }
  public set auto_translate_mode(value: number): void {
    set_auto_translate_mode(value);
  }
  public get editor_description(): String {
    get_editor_description();
  }
  public set editor_description(value: String): void {
    set_editor_description(value);
  }
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
}