import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { NodePath } from '@js_godot/variant/node_path'
import { Variant } from '@js_godot/variant/variant'
import { PackedStringArray } from '@js_godot/variant/packed_string_array'
import { StringName } from '@js_godot/variant/string_name'
import { GodotObject } from '@js_godot/classes/godot_object'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_print_orphan_nodes;
  method_add_sibling;
  method_set_name;
  method_get_name;
  method_add_child;
  method_remove_child;
  method_reparent;
  method_get_child_count;
  method_get_children;
  method_get_child;
  method_has_node;
  method_get_node;
  method_get_node_or_null;
  method_get_parent;
  method_find_child;
  method_find_children;
  method_find_parent;
  method_has_node_and_resource;
  method_get_node_and_resource;
  method_is_inside_tree;
  method_is_part_of_edited_scene;
  method_is_ancestor_of;
  method_is_greater_than;
  method_get_path;
  method_get_path_to;
  method_add_to_group;
  method_remove_from_group;
  method_is_in_group;
  method_move_child;
  method_get_groups;
  method_set_owner;
  method_get_owner;
  method_get_index;
  method_print_tree;
  method_print_tree_pretty;
  method_get_tree_string;
  method_get_tree_string_pretty;
  method_set_scene_file_path;
  method_get_scene_file_path;
  method_propagate_notification;
  method_propagate_call;
  method_set_physics_process;
  method_get_physics_process_delta_time;
  method_is_physics_processing;
  method_get_process_delta_time;
  method_set_process;
  method_set_process_priority;
  method_get_process_priority;
  method_set_physics_process_priority;
  method_get_physics_process_priority;
  method_is_processing;
  method_set_process_input;
  method_is_processing_input;
  method_set_process_shortcut_input;
  method_is_processing_shortcut_input;
  method_set_process_unhandled_input;
  method_is_processing_unhandled_input;
  method_set_process_unhandled_key_input;
  method_is_processing_unhandled_key_input;
  method_set_process_mode;
  method_get_process_mode;
  method_can_process;
  method_set_process_thread_group;
  method_get_process_thread_group;
  method_set_process_thread_messages;
  method_get_process_thread_messages;
  method_set_process_thread_group_order;
  method_get_process_thread_group_order;
  method_set_display_folded;
  method_is_displayed_folded;
  method_set_process_internal;
  method_is_processing_internal;
  method_set_physics_process_internal;
  method_is_physics_processing_internal;
  method_set_physics_interpolation_mode;
  method_get_physics_interpolation_mode;
  method_is_physics_interpolated;
  method_is_physics_interpolated_and_enabled;
  method_reset_physics_interpolation;
  method_set_auto_translate_mode;
  method_get_auto_translate_mode;
  method_get_window;
  method_get_last_exclusive_window;
  method_get_tree;
  method_create_tween;
  method_duplicate;
  method_replace_by;
  method_set_scene_instance_load_placeholder;
  method_get_scene_instance_load_placeholder;
  method_set_editable_instance;
  method_is_editable_instance;
  method_get_viewport;
  method_queue_free;
  method_request_ready;
  method_is_node_ready;
  method_set_multiplayer_authority;
  method_get_multiplayer_authority;
  method_is_multiplayer_authority;
  method_get_multiplayer;
  method_rpc_config;
  method_set_editor_description;
  method_get_editor_description;
  method_set_unique_name_in_owner;
  method_is_unique_name_in_owner;
  method_atr;
  method_atr_n;
  method_rpc;
  method_rpc_id;
  method_update_configuration_warnings;
  method_call_deferred_thread_group;
  method_set_deferred_thread_group;
  method_notify_deferred_thread_group;
  method_call_thread_safe;
  method_set_thread_safe;
  method_notify_thread_safe;
}
export class Node extends GodotObject{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Node");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("Node");
      let methodname = new StringName("print_orphan_nodes");
      this._bindings.method_print_orphan_nodes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("add_sibling");
      this._bindings.method_add_sibling = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2570952461
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_name");
      this._bindings.method_set_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_name");
      this._bindings.method_get_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2002593661
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("add_child");
      this._bindings.method_add_child = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3863233950
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("remove_child");
      this._bindings.method_remove_child = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1078189570
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("reparent");
      this._bindings.method_reparent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3685795103
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_child_count");
      this._bindings.method_get_child_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        894402480
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_children");
      this._bindings.method_get_children = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        873284517
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_child");
      this._bindings.method_get_child = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        541253412
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("has_node");
      this._bindings.method_has_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        861721659
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_node");
      this._bindings.method_get_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2734337346
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_node_or_null");
      this._bindings.method_get_node_or_null = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2734337346
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_parent");
      this._bindings.method_get_parent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3160264692
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("find_child");
      this._bindings.method_find_child = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2008217037
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("find_children");
      this._bindings.method_find_children = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2560337219
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("find_parent");
      this._bindings.method_find_parent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1140089439
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("has_node_and_resource");
      this._bindings.method_has_node_and_resource = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        861721659
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_node_and_resource");
      this._bindings.method_get_node_and_resource = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        502563882
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("is_inside_tree");
      this._bindings.method_is_inside_tree = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("is_part_of_edited_scene");
      this._bindings.method_is_part_of_edited_scene = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("is_ancestor_of");
      this._bindings.method_is_ancestor_of = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3093956946
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("is_greater_than");
      this._bindings.method_is_greater_than = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3093956946
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_path");
      this._bindings.method_get_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4075236667
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_path_to");
      this._bindings.method_get_path_to = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        498846349
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("add_to_group");
      this._bindings.method_add_to_group = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3683006648
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("remove_from_group");
      this._bindings.method_remove_from_group = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("is_in_group");
      this._bindings.method_is_in_group = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2619796661
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("move_child");
      this._bindings.method_move_child = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3315886247
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_groups");
      this._bindings.method_get_groups = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_owner");
      this._bindings.method_set_owner = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1078189570
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_owner");
      this._bindings.method_get_owner = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3160264692
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_index");
      this._bindings.method_get_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        894402480
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("print_tree");
      this._bindings.method_print_tree = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("print_tree_pretty");
      this._bindings.method_print_tree_pretty = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_tree_string");
      this._bindings.method_get_tree_string = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2841200299
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_tree_string_pretty");
      this._bindings.method_get_tree_string_pretty = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2841200299
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_scene_file_path");
      this._bindings.method_set_scene_file_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_scene_file_path");
      this._bindings.method_get_scene_file_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("propagate_notification");
      this._bindings.method_propagate_notification = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("propagate_call");
      this._bindings.method_propagate_call = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1871007965
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_physics_process");
      this._bindings.method_set_physics_process = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_physics_process_delta_time");
      this._bindings.method_get_physics_process_delta_time = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("is_physics_processing");
      this._bindings.method_is_physics_processing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_process_delta_time");
      this._bindings.method_get_process_delta_time = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_process");
      this._bindings.method_set_process = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_process_priority");
      this._bindings.method_set_process_priority = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_process_priority");
      this._bindings.method_get_process_priority = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_physics_process_priority");
      this._bindings.method_set_physics_process_priority = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_physics_process_priority");
      this._bindings.method_get_physics_process_priority = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("is_processing");
      this._bindings.method_is_processing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_process_input");
      this._bindings.method_set_process_input = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("is_processing_input");
      this._bindings.method_is_processing_input = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_process_shortcut_input");
      this._bindings.method_set_process_shortcut_input = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("is_processing_shortcut_input");
      this._bindings.method_is_processing_shortcut_input = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_process_unhandled_input");
      this._bindings.method_set_process_unhandled_input = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("is_processing_unhandled_input");
      this._bindings.method_is_processing_unhandled_input = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_process_unhandled_key_input");
      this._bindings.method_set_process_unhandled_key_input = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("is_processing_unhandled_key_input");
      this._bindings.method_is_processing_unhandled_key_input = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_process_mode");
      this._bindings.method_set_process_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1841290486
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_process_mode");
      this._bindings.method_get_process_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        739966102
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("can_process");
      this._bindings.method_can_process = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_process_thread_group");
      this._bindings.method_set_process_thread_group = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2275442745
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_process_thread_group");
      this._bindings.method_get_process_thread_group = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1866404740
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_process_thread_messages");
      this._bindings.method_set_process_thread_messages = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1357280998
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_process_thread_messages");
      this._bindings.method_get_process_thread_messages = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4228993612
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_process_thread_group_order");
      this._bindings.method_set_process_thread_group_order = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_process_thread_group_order");
      this._bindings.method_get_process_thread_group_order = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_display_folded");
      this._bindings.method_set_display_folded = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("is_displayed_folded");
      this._bindings.method_is_displayed_folded = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_process_internal");
      this._bindings.method_set_process_internal = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("is_processing_internal");
      this._bindings.method_is_processing_internal = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_physics_process_internal");
      this._bindings.method_set_physics_process_internal = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("is_physics_processing_internal");
      this._bindings.method_is_physics_processing_internal = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_physics_interpolation_mode");
      this._bindings.method_set_physics_interpolation_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3202404928
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_physics_interpolation_mode");
      this._bindings.method_get_physics_interpolation_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920385216
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("is_physics_interpolated");
      this._bindings.method_is_physics_interpolated = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("is_physics_interpolated_and_enabled");
      this._bindings.method_is_physics_interpolated_and_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("reset_physics_interpolation");
      this._bindings.method_reset_physics_interpolation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_auto_translate_mode");
      this._bindings.method_set_auto_translate_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        776149714
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_auto_translate_mode");
      this._bindings.method_get_auto_translate_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2498906432
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_window");
      this._bindings.method_get_window = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1757182445
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_last_exclusive_window");
      this._bindings.method_get_last_exclusive_window = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1757182445
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_tree");
      this._bindings.method_get_tree = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2958820483
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("create_tween");
      this._bindings.method_create_tween = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3426978995
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("duplicate");
      this._bindings.method_duplicate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3511555459
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("replace_by");
      this._bindings.method_replace_by = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2570952461
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_scene_instance_load_placeholder");
      this._bindings.method_set_scene_instance_load_placeholder = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_scene_instance_load_placeholder");
      this._bindings.method_get_scene_instance_load_placeholder = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_editable_instance");
      this._bindings.method_set_editable_instance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2731852923
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("is_editable_instance");
      this._bindings.method_is_editable_instance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3093956946
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_viewport");
      this._bindings.method_get_viewport = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3596683776
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("queue_free");
      this._bindings.method_queue_free = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("request_ready");
      this._bindings.method_request_ready = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("is_node_ready");
      this._bindings.method_is_node_ready = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_multiplayer_authority");
      this._bindings.method_set_multiplayer_authority = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        972357352
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_multiplayer_authority");
      this._bindings.method_get_multiplayer_authority = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("is_multiplayer_authority");
      this._bindings.method_is_multiplayer_authority = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_multiplayer");
      this._bindings.method_get_multiplayer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        406750475
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("rpc_config");
      this._bindings.method_rpc_config = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3776071444
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_editor_description");
      this._bindings.method_set_editor_description = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("get_editor_description");
      this._bindings.method_get_editor_description = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_unique_name_in_owner");
      this._bindings.method_set_unique_name_in_owner = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("is_unique_name_in_owner");
      this._bindings.method_is_unique_name_in_owner = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("atr");
      this._bindings.method_atr = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3344478075
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("atr_n");
      this._bindings.method_atr_n = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        259354841
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("rpc");
      this._bindings.method_rpc = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4047867050
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("rpc_id");
      this._bindings.method_rpc_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        361499283
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("update_configuration_warnings");
      this._bindings.method_update_configuration_warnings = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("call_deferred_thread_group");
      this._bindings.method_call_deferred_thread_group = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3400424181
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_deferred_thread_group");
      this._bindings.method_set_deferred_thread_group = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3776071444
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("notify_deferred_thread_group");
      this._bindings.method_notify_deferred_thread_group = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("call_thread_safe");
      this._bindings.method_call_thread_safe = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3400424181
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("set_thread_safe");
      this._bindings.method_set_thread_safe = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3776071444
      );
    }
    {
      let classname = new StringName("Node");
      let methodname = new StringName("notify_thread_safe");
      this._bindings.method_notify_thread_safe = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
  }
  
  _process(_delta) {
  }
  _physics_process(_delta) {
  }
  _enter_tree() {
  }
  _exit_tree() {
  }
  _ready() {
  }
  _get_configuration_warnings() {
  }
  _input(_event) {
  }
  _shortcut_input(_event) {
  }
  _unhandled_input(_event) {
  }
  _unhandled_key_input(_event) {
  }
  print_orphan_nodes() {
    return _call_native_mb_no_ret(
      Node._bindings.method_print_orphan_nodes,
      this._owner,
      
    );
    
  }
  add_sibling(_sibling, _force_readable_name) {
    return _call_native_mb_no_ret(
      Node._bindings.method_add_sibling,
      this._owner,
      _sibling, _force_readable_name
    );
    
  }
  set_name(_name) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_name,
      this._owner,
      _name
    );
    
  }
  get_name() {
    return _call_native_mb_ret(
      Node._bindings.method_get_name,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  add_child(_node, _force_readable_name, _internal) {
    return _call_native_mb_no_ret(
      Node._bindings.method_add_child,
      this._owner,
      _node, _force_readable_name, _internal
    );
    
  }
  remove_child(_node) {
    return _call_native_mb_no_ret(
      Node._bindings.method_remove_child,
      this._owner,
      _node
    );
    
  }
  reparent(_new_parent, _keep_global_transform) {
    return _call_native_mb_no_ret(
      Node._bindings.method_reparent,
      this._owner,
      _new_parent, _keep_global_transform
    );
    
  }
  get_child_count(_include_internal) {
    return _call_native_mb_ret(
      Node._bindings.method_get_child_count,
      this._owner,
			Variant.Type.INT,
      _include_internal
    );
    
  }
  get_children(_include_internal) {
    return _call_native_mb_ret(
      Node._bindings.method_get_children,
      this._owner,
			Variant.INT,
      _include_internal
    );
    
  }
  get_child(_idx, _include_internal) {
    return _call_native_mb_ret(
      Node._bindings.method_get_child,
      this._owner,
			Variant.INT,
      _idx, _include_internal
    );
    
  }
  has_node(_path) {
    return _call_native_mb_ret(
      Node._bindings.method_has_node,
      this._owner,
			Variant.Type.BOOL,
      _path
    );
    
  }
  get_node(_path) {
    return _call_native_mb_ret(
      Node._bindings.method_get_node,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  get_node_or_null(_path) {
    return _call_native_mb_ret(
      Node._bindings.method_get_node_or_null,
      this._owner,
			Variant.INT,
      _path
    );
    
  }
  get_parent() {
    return _call_native_mb_ret(
      Node._bindings.method_get_parent,
      this._owner,
			Variant.INT,
      
    );
    
  }
  find_child(_pattern, _recursive, _owned) {
    return _call_native_mb_ret(
      Node._bindings.method_find_child,
      this._owner,
			Variant.INT,
      _pattern, _recursive, _owned
    );
    
  }
  find_children(_pattern, _type, _recursive, _owned) {
    return _call_native_mb_ret(
      Node._bindings.method_find_children,
      this._owner,
			Variant.INT,
      _pattern, _type, _recursive, _owned
    );
    
  }
  find_parent(_pattern) {
    return _call_native_mb_ret(
      Node._bindings.method_find_parent,
      this._owner,
			Variant.INT,
      _pattern
    );
    
  }
  has_node_and_resource(_path) {
    return _call_native_mb_ret(
      Node._bindings.method_has_node_and_resource,
      this._owner,
			Variant.Type.BOOL,
      _path
    );
    
  }
  get_node_and_resource(_path) {
    return _call_native_mb_ret(
      Node._bindings.method_get_node_and_resource,
      this._owner,
			Variant.Type.ARRAY,
    
      _path
    );
    
  }
  is_inside_tree() {
    return _call_native_mb_ret(
      Node._bindings.method_is_inside_tree,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  is_part_of_edited_scene() {
    return _call_native_mb_ret(
      Node._bindings.method_is_part_of_edited_scene,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  is_ancestor_of(_node) {
    return _call_native_mb_ret(
      Node._bindings.method_is_ancestor_of,
      this._owner,
			Variant.Type.BOOL,
      _node
    );
    
  }
  is_greater_than(_node) {
    return _call_native_mb_ret(
      Node._bindings.method_is_greater_than,
      this._owner,
			Variant.Type.BOOL,
      _node
    );
    
  }
  get_path() {
    return _call_native_mb_ret(
      Node._bindings.method_get_path,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  get_path_to(_node, _use_unique_path) {
    return _call_native_mb_ret(
      Node._bindings.method_get_path_to,
      this._owner,
			Variant.Type.NODE_PATH,
    
      _node, _use_unique_path
    );
    
  }
  add_to_group(_group, _persistent) {
    return _call_native_mb_no_ret(
      Node._bindings.method_add_to_group,
      this._owner,
      _group, _persistent
    );
    
  }
  remove_from_group(_group) {
    return _call_native_mb_no_ret(
      Node._bindings.method_remove_from_group,
      this._owner,
      _group
    );
    
  }
  is_in_group(_group) {
    return _call_native_mb_ret(
      Node._bindings.method_is_in_group,
      this._owner,
			Variant.Type.BOOL,
      _group
    );
    
  }
  move_child(_child_node, _to_index) {
    return _call_native_mb_no_ret(
      Node._bindings.method_move_child,
      this._owner,
      _child_node, _to_index
    );
    
  }
  get_groups() {
    return _call_native_mb_ret(
      Node._bindings.method_get_groups,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_owner(_owner) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_owner,
      this._owner,
      _owner
    );
    
  }
  get_owner() {
    return _call_native_mb_ret(
      Node._bindings.method_get_owner,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_index(_include_internal) {
    return _call_native_mb_ret(
      Node._bindings.method_get_index,
      this._owner,
			Variant.Type.INT,
      _include_internal
    );
    
  }
  print_tree() {
    return _call_native_mb_no_ret(
      Node._bindings.method_print_tree,
      this._owner,
      
    );
    
  }
  print_tree_pretty() {
    return _call_native_mb_no_ret(
      Node._bindings.method_print_tree_pretty,
      this._owner,
      
    );
    
  }
  get_tree_string() {
    return _call_native_mb_ret(
      Node._bindings.method_get_tree_string,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_tree_string_pretty() {
    return _call_native_mb_ret(
      Node._bindings.method_get_tree_string_pretty,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_scene_file_path(_scene_file_path) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_scene_file_path,
      this._owner,
      _scene_file_path
    );
    
  }
  get_scene_file_path() {
    return _call_native_mb_ret(
      Node._bindings.method_get_scene_file_path,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  propagate_notification(_what) {
    return _call_native_mb_no_ret(
      Node._bindings.method_propagate_notification,
      this._owner,
      _what
    );
    
  }
  propagate_call(_method, _args, _parent_first) {
    return _call_native_mb_no_ret(
      Node._bindings.method_propagate_call,
      this._owner,
      _method, _args, _parent_first
    );
    
  }
  set_physics_process(_enable) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_physics_process,
      this._owner,
      _enable
    );
    
  }
  get_physics_process_delta_time() {
    return _call_native_mb_ret(
      Node._bindings.method_get_physics_process_delta_time,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  is_physics_processing() {
    return _call_native_mb_ret(
      Node._bindings.method_is_physics_processing,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_process_delta_time() {
    return _call_native_mb_ret(
      Node._bindings.method_get_process_delta_time,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_process(_enable) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_process,
      this._owner,
      _enable
    );
    
  }
  set_process_priority(_priority) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_process_priority,
      this._owner,
      _priority
    );
    
  }
  get_process_priority() {
    return _call_native_mb_ret(
      Node._bindings.method_get_process_priority,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_physics_process_priority(_priority) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_physics_process_priority,
      this._owner,
      _priority
    );
    
  }
  get_physics_process_priority() {
    return _call_native_mb_ret(
      Node._bindings.method_get_physics_process_priority,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  is_processing() {
    return _call_native_mb_ret(
      Node._bindings.method_is_processing,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_process_input(_enable) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_process_input,
      this._owner,
      _enable
    );
    
  }
  is_processing_input() {
    return _call_native_mb_ret(
      Node._bindings.method_is_processing_input,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_process_shortcut_input(_enable) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_process_shortcut_input,
      this._owner,
      _enable
    );
    
  }
  is_processing_shortcut_input() {
    return _call_native_mb_ret(
      Node._bindings.method_is_processing_shortcut_input,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_process_unhandled_input(_enable) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_process_unhandled_input,
      this._owner,
      _enable
    );
    
  }
  is_processing_unhandled_input() {
    return _call_native_mb_ret(
      Node._bindings.method_is_processing_unhandled_input,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_process_unhandled_key_input(_enable) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_process_unhandled_key_input,
      this._owner,
      _enable
    );
    
  }
  is_processing_unhandled_key_input() {
    return _call_native_mb_ret(
      Node._bindings.method_is_processing_unhandled_key_input,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_process_mode(_mode) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_process_mode,
      this._owner,
      _mode
    );
    
  }
  get_process_mode() {
    return _call_native_mb_ret(
      Node._bindings.method_get_process_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  can_process() {
    return _call_native_mb_ret(
      Node._bindings.method_can_process,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_process_thread_group(_mode) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_process_thread_group,
      this._owner,
      _mode
    );
    
  }
  get_process_thread_group() {
    return _call_native_mb_ret(
      Node._bindings.method_get_process_thread_group,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_process_thread_messages(_flags) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_process_thread_messages,
      this._owner,
      _flags
    );
    
  }
  get_process_thread_messages() {
    return _call_native_mb_ret(
      Node._bindings.method_get_process_thread_messages,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_process_thread_group_order(_order) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_process_thread_group_order,
      this._owner,
      _order
    );
    
  }
  get_process_thread_group_order() {
    return _call_native_mb_ret(
      Node._bindings.method_get_process_thread_group_order,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_display_folded(_fold) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_display_folded,
      this._owner,
      _fold
    );
    
  }
  is_displayed_folded() {
    return _call_native_mb_ret(
      Node._bindings.method_is_displayed_folded,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_process_internal(_enable) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_process_internal,
      this._owner,
      _enable
    );
    
  }
  is_processing_internal() {
    return _call_native_mb_ret(
      Node._bindings.method_is_processing_internal,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_physics_process_internal(_enable) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_physics_process_internal,
      this._owner,
      _enable
    );
    
  }
  is_physics_processing_internal() {
    return _call_native_mb_ret(
      Node._bindings.method_is_physics_processing_internal,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_physics_interpolation_mode(_mode) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_physics_interpolation_mode,
      this._owner,
      _mode
    );
    
  }
  get_physics_interpolation_mode() {
    return _call_native_mb_ret(
      Node._bindings.method_get_physics_interpolation_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  is_physics_interpolated() {
    return _call_native_mb_ret(
      Node._bindings.method_is_physics_interpolated,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  is_physics_interpolated_and_enabled() {
    return _call_native_mb_ret(
      Node._bindings.method_is_physics_interpolated_and_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  reset_physics_interpolation() {
    return _call_native_mb_no_ret(
      Node._bindings.method_reset_physics_interpolation,
      this._owner,
      
    );
    
  }
  set_auto_translate_mode(_mode) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_auto_translate_mode,
      this._owner,
      _mode
    );
    
  }
  get_auto_translate_mode() {
    return _call_native_mb_ret(
      Node._bindings.method_get_auto_translate_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_window() {
    return _call_native_mb_ret(
      Node._bindings.method_get_window,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_last_exclusive_window() {
    return _call_native_mb_ret(
      Node._bindings.method_get_last_exclusive_window,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_tree() {
    return _call_native_mb_ret(
      Node._bindings.method_get_tree,
      this._owner,
			Variant.INT,
      
    );
    
  }
  create_tween() {
    return _call_native_mb_ret(
      Node._bindings.method_create_tween,
      this._owner,
			Variant.INT,
      
    );
    
  }
  duplicate(_flags) {
    return _call_native_mb_ret(
      Node._bindings.method_duplicate,
      this._owner,
			Variant.INT,
      _flags
    );
    
  }
  replace_by(_node, _keep_groups) {
    return _call_native_mb_no_ret(
      Node._bindings.method_replace_by,
      this._owner,
      _node, _keep_groups
    );
    
  }
  set_scene_instance_load_placeholder(_load_placeholder) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_scene_instance_load_placeholder,
      this._owner,
      _load_placeholder
    );
    
  }
  get_scene_instance_load_placeholder() {
    return _call_native_mb_ret(
      Node._bindings.method_get_scene_instance_load_placeholder,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_editable_instance(_node, _is_editable) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_editable_instance,
      this._owner,
      _node, _is_editable
    );
    
  }
  is_editable_instance(_node) {
    return _call_native_mb_ret(
      Node._bindings.method_is_editable_instance,
      this._owner,
			Variant.Type.BOOL,
      _node
    );
    
  }
  get_viewport() {
    return _call_native_mb_ret(
      Node._bindings.method_get_viewport,
      this._owner,
			Variant.INT,
      
    );
    
  }
  queue_free() {
    return _call_native_mb_no_ret(
      Node._bindings.method_queue_free,
      this._owner,
      
    );
    
  }
  request_ready() {
    return _call_native_mb_no_ret(
      Node._bindings.method_request_ready,
      this._owner,
      
    );
    
  }
  is_node_ready() {
    return _call_native_mb_ret(
      Node._bindings.method_is_node_ready,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_multiplayer_authority(_id, _recursive) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_multiplayer_authority,
      this._owner,
      _id, _recursive
    );
    
  }
  get_multiplayer_authority() {
    return _call_native_mb_ret(
      Node._bindings.method_get_multiplayer_authority,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  is_multiplayer_authority() {
    return _call_native_mb_ret(
      Node._bindings.method_is_multiplayer_authority,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_multiplayer() {
    return _call_native_mb_ret(
      Node._bindings.method_get_multiplayer,
      this._owner,
			Variant.INT,
      
    );
    
  }
  rpc_config(_method, _config) {
    return _call_native_mb_no_ret(
      Node._bindings.method_rpc_config,
      this._owner,
      _method, _config
    );
    
  }
  set_editor_description(_editor_description) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_editor_description,
      this._owner,
      _editor_description
    );
    
  }
  get_editor_description() {
    return _call_native_mb_ret(
      Node._bindings.method_get_editor_description,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_unique_name_in_owner(_enable) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_unique_name_in_owner,
      this._owner,
      _enable
    );
    
  }
  is_unique_name_in_owner() {
    return _call_native_mb_ret(
      Node._bindings.method_is_unique_name_in_owner,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  atr(_message, _context) {
    return _call_native_mb_ret(
      Node._bindings.method_atr,
      this._owner,
			Variant.Type.STRING,
    
      _message, _context
    );
    
  }
  atr_n(_message, _plural_message, _n, _context) {
    return _call_native_mb_ret(
      Node._bindings.method_atr_n,
      this._owner,
			Variant.Type.STRING,
    
      _message, _plural_message, _n, _context
    );
    
  }
  rpc(_method) {
    return _call_native_mb_ret(
      Node._bindings.method_rpc,
      this._owner,
			Variant.INT,
      _method
    );
    
  }
  rpc_id(_peer_id, _method) {
    return _call_native_mb_ret(
      Node._bindings.method_rpc_id,
      this._owner,
			Variant.INT,
      _peer_id, _method
    );
    
  }
  update_configuration_warnings() {
    return _call_native_mb_no_ret(
      Node._bindings.method_update_configuration_warnings,
      this._owner,
      
    );
    
  }
  call_deferred_thread_group(_method) {
    return _call_native_mb_ret(
      Node._bindings.method_call_deferred_thread_group,
      this._owner,
			Variant.Type.VARIANT,
    
      _method
    );
    
  }
  set_deferred_thread_group(_property, _value) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_deferred_thread_group,
      this._owner,
      _property, _value
    );
    
  }
  notify_deferred_thread_group(_what) {
    return _call_native_mb_no_ret(
      Node._bindings.method_notify_deferred_thread_group,
      this._owner,
      _what
    );
    
  }
  call_thread_safe(_method) {
    return _call_native_mb_ret(
      Node._bindings.method_call_thread_safe,
      this._owner,
			Variant.Type.VARIANT,
    
      _method
    );
    
  }
  set_thread_safe(_property, _value) {
    return _call_native_mb_no_ret(
      Node._bindings.method_set_thread_safe,
      this._owner,
      _property, _value
    );
    
  }
  notify_thread_safe(_what) {
    return _call_native_mb_no_ret(
      Node._bindings.method_notify_thread_safe,
      this._owner,
      _what
    );
    
  }
  
get name () {
  return this.get_name();
}
set name (new_value) {
  this.set_name(new_value);
}
get unique_name_in_owner () {
  return this.is_unique_name_in_owner();
}
set unique_name_in_owner (new_value) {
  this.set_unique_name_in_owner(new_value);
}
get scene_file_path () {
  return this.get_scene_file_path();
}
set scene_file_path (new_value) {
  this.set_scene_file_path(new_value);
}
get owner () {
  return this.get_owner();
}
set owner (new_value) {
  this.set_owner(new_value);
}
get multiplayer () {
  return this.get_multiplayer();
}
get process_mode () {
  return this.get_process_mode();
}
set process_mode (new_value) {
  this.set_process_mode(new_value);
}
get process_priority () {
  return this.get_process_priority();
}
set process_priority (new_value) {
  this.set_process_priority(new_value);
}
get process_physics_priority () {
  return this.get_physics_process_priority();
}
set process_physics_priority (new_value) {
  this.set_physics_process_priority(new_value);
}
get process_thread_group () {
  return this.get_process_thread_group();
}
set process_thread_group (new_value) {
  this.set_process_thread_group(new_value);
}
get process_thread_group_order () {
  return this.get_process_thread_group_order();
}
set process_thread_group_order (new_value) {
  this.set_process_thread_group_order(new_value);
}
get process_thread_messages () {
  return this.get_process_thread_messages();
}
set process_thread_messages (new_value) {
  this.set_process_thread_messages(new_value);
}
get physics_interpolation_mode () {
  return this.get_physics_interpolation_mode();
}
set physics_interpolation_mode (new_value) {
  this.set_physics_interpolation_mode(new_value);
}
get auto_translate_mode () {
  return this.get_auto_translate_mode();
}
set auto_translate_mode (new_value) {
  this.set_auto_translate_mode(new_value);
}
get editor_description () {
  return this.get_editor_description();
}
set editor_description (new_value) {
  this.set_editor_description(new_value);
}

  static ProcessMode = {
    PROCESS_MODE_INHERIT: 0,
    PROCESS_MODE_PAUSABLE: 1,
    PROCESS_MODE_WHEN_PAUSED: 2,
    PROCESS_MODE_ALWAYS: 3,
    PROCESS_MODE_DISABLED: 4,
  }
  static ProcessThreadGroup = {
    PROCESS_THREAD_GROUP_INHERIT: 0,
    PROCESS_THREAD_GROUP_MAIN_THREAD: 1,
    PROCESS_THREAD_GROUP_SUB_THREAD: 2,
  }
  static ProcessThreadMessages = {
    FLAG_PROCESS_THREAD_MESSAGES: 1,
    FLAG_PROCESS_THREAD_MESSAGES_PHYSICS: 2,
    FLAG_PROCESS_THREAD_MESSAGES_ALL: 3,
  }
  static PhysicsInterpolationMode = {
    PHYSICS_INTERPOLATION_MODE_INHERIT: 0,
    PHYSICS_INTERPOLATION_MODE_ON: 1,
    PHYSICS_INTERPOLATION_MODE_OFF: 2,
  }
  static DuplicateFlags = {
    DUPLICATE_SIGNALS: 1,
    DUPLICATE_GROUPS: 2,
    DUPLICATE_SCRIPTS: 4,
    DUPLICATE_USE_INSTANTIATION: 8,
  }
  static InternalMode = {
    INTERNAL_MODE_DISABLED: 0,
    INTERNAL_MODE_FRONT: 1,
    INTERNAL_MODE_BACK: 2,
  }
  static AutoTranslateMode = {
    AUTO_TRANSLATE_MODE_INHERIT: 0,
    AUTO_TRANSLATE_MODE_ALWAYS: 1,
    AUTO_TRANSLATE_MODE_DISABLED: 2,
  }

  static {
    this._init_bindings();
  }
}