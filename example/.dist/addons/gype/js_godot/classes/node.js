var __classPrivateFieldGet = (this && this.__classPrivateFieldGet) || function (receiver, state, kind, f) {
    if (kind === "a" && !f) throw new TypeError("Private accessor was defined without a getter");
    if (typeof state === "function" ? receiver !== state || !f : !state.has(receiver)) throw new TypeError("Cannot read private member from an object whose class did not declare it");
    return kind === "m" ? f : kind === "a" ? f.call(receiver) : f ? f.value : state.get(receiver);
};
var _a, _Node__bindings, _Node_initialized;
import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant';
import { StringName } from '@js_godot/variant/string_name';
import { GodotObject } from '@js_godot/classes/godot_object';
import { GDArray } from '@js_godot/variant/gd_array';
import { call_utility_ret, call_utility_no_ret, _call_native_mb_ret, _call_native_mb_no_ret } from "@js_godot/core/engine_ptrcall";
class _MethodBindings {
}
export class Node extends GodotObject {
    constructor(godot_object) {
        if (!godot_object) {
            super("Node");
        }
        else {
            super(godot_object);
        }
    }
    static init_method_print_orphan_nodes() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_print_orphan_nodes) {
            let classname = new StringName("Node");
            let methodname = new StringName("print_orphan_nodes");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_print_orphan_nodes = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3218959716);
        }
    }
    static init_method_add_sibling() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_add_sibling) {
            let classname = new StringName("Node");
            let methodname = new StringName("add_sibling");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_add_sibling = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2570952461);
        }
    }
    static init_method_set_name() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_name) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_name");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_name = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 83702148);
        }
    }
    static init_method_get_name() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_name) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_name");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_name = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2002593661);
        }
    }
    static init_method_add_child() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_add_child) {
            let classname = new StringName("Node");
            let methodname = new StringName("add_child");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_add_child = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3863233950);
        }
    }
    static init_method_remove_child() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_remove_child) {
            let classname = new StringName("Node");
            let methodname = new StringName("remove_child");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_remove_child = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1078189570);
        }
    }
    static init_method_reparent() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_reparent) {
            let classname = new StringName("Node");
            let methodname = new StringName("reparent");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_reparent = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3685795103);
        }
    }
    static init_method_get_child_count() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_child_count) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_child_count");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_child_count = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 894402480);
        }
    }
    static init_method_get_children() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_children) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_children");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_children = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 873284517);
        }
    }
    static init_method_get_child() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_child) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_child");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_child = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 541253412);
        }
    }
    static init_method_has_node() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_has_node) {
            let classname = new StringName("Node");
            let methodname = new StringName("has_node");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_has_node = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 861721659);
        }
    }
    static init_method_get_node() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_node) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_node");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_node = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2734337346);
        }
    }
    static init_method_get_node_or_null() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_node_or_null) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_node_or_null");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_node_or_null = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2734337346);
        }
    }
    static init_method_get_parent() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_parent) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_parent");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_parent = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3160264692);
        }
    }
    static init_method_find_child() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_find_child) {
            let classname = new StringName("Node");
            let methodname = new StringName("find_child");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_find_child = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2008217037);
        }
    }
    static init_method_find_children() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_find_children) {
            let classname = new StringName("Node");
            let methodname = new StringName("find_children");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_find_children = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2560337219);
        }
    }
    static init_method_find_parent() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_find_parent) {
            let classname = new StringName("Node");
            let methodname = new StringName("find_parent");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_find_parent = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1140089439);
        }
    }
    static init_method_has_node_and_resource() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_has_node_and_resource) {
            let classname = new StringName("Node");
            let methodname = new StringName("has_node_and_resource");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_has_node_and_resource = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 861721659);
        }
    }
    static init_method_get_node_and_resource() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_node_and_resource) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_node_and_resource");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_node_and_resource = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 502563882);
        }
    }
    static init_method_is_inside_tree() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_inside_tree) {
            let classname = new StringName("Node");
            let methodname = new StringName("is_inside_tree");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_inside_tree = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_is_part_of_edited_scene() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_part_of_edited_scene) {
            let classname = new StringName("Node");
            let methodname = new StringName("is_part_of_edited_scene");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_part_of_edited_scene = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_is_ancestor_of() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_ancestor_of) {
            let classname = new StringName("Node");
            let methodname = new StringName("is_ancestor_of");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_ancestor_of = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3093956946);
        }
    }
    static init_method_is_greater_than() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_greater_than) {
            let classname = new StringName("Node");
            let methodname = new StringName("is_greater_than");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_greater_than = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3093956946);
        }
    }
    static init_method_get_path() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_path) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_path");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_path = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 4075236667);
        }
    }
    static init_method_get_path_to() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_path_to) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_path_to");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_path_to = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 498846349);
        }
    }
    static init_method_add_to_group() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_add_to_group) {
            let classname = new StringName("Node");
            let methodname = new StringName("add_to_group");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_add_to_group = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3683006648);
        }
    }
    static init_method_remove_from_group() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_remove_from_group) {
            let classname = new StringName("Node");
            let methodname = new StringName("remove_from_group");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_remove_from_group = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3304788590);
        }
    }
    static init_method_is_in_group() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_in_group) {
            let classname = new StringName("Node");
            let methodname = new StringName("is_in_group");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_in_group = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2619796661);
        }
    }
    static init_method_move_child() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_move_child) {
            let classname = new StringName("Node");
            let methodname = new StringName("move_child");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_move_child = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3315886247);
        }
    }
    static init_method_get_groups() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_groups) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_groups");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_groups = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3995934104);
        }
    }
    static init_method_set_owner() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_owner) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_owner");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_owner = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1078189570);
        }
    }
    static init_method_get_owner() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_owner) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_owner");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_owner = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3160264692);
        }
    }
    static init_method_get_index() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_index) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_index");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_index = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 894402480);
        }
    }
    static init_method_print_tree() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_print_tree) {
            let classname = new StringName("Node");
            let methodname = new StringName("print_tree");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_print_tree = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3218959716);
        }
    }
    static init_method_print_tree_pretty() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_print_tree_pretty) {
            let classname = new StringName("Node");
            let methodname = new StringName("print_tree_pretty");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_print_tree_pretty = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3218959716);
        }
    }
    static init_method_get_tree_string() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_tree_string) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_tree_string");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_tree_string = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2841200299);
        }
    }
    static init_method_get_tree_string_pretty() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_tree_string_pretty) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_tree_string_pretty");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_tree_string_pretty = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2841200299);
        }
    }
    static init_method_set_scene_file_path() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_scene_file_path) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_scene_file_path");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_scene_file_path = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 83702148);
        }
    }
    static init_method_get_scene_file_path() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_scene_file_path) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_scene_file_path");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_scene_file_path = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 201670096);
        }
    }
    static init_method_propagate_notification() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_propagate_notification) {
            let classname = new StringName("Node");
            let methodname = new StringName("propagate_notification");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_propagate_notification = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1286410249);
        }
    }
    static init_method_propagate_call() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_propagate_call) {
            let classname = new StringName("Node");
            let methodname = new StringName("propagate_call");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_propagate_call = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1871007965);
        }
    }
    static init_method_set_physics_process() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_physics_process) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_physics_process");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_physics_process = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2586408642);
        }
    }
    static init_method_get_physics_process_delta_time() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_physics_process_delta_time) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_physics_process_delta_time");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_physics_process_delta_time = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1740695150);
        }
    }
    static init_method_is_physics_processing() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_physics_processing) {
            let classname = new StringName("Node");
            let methodname = new StringName("is_physics_processing");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_physics_processing = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_get_process_delta_time() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_process_delta_time) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_process_delta_time");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_process_delta_time = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1740695150);
        }
    }
    static init_method_set_process() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_process) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_process");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_process = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2586408642);
        }
    }
    static init_method_set_process_priority() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_process_priority) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_process_priority");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_process_priority = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1286410249);
        }
    }
    static init_method_get_process_priority() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_process_priority) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_process_priority");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_process_priority = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3905245786);
        }
    }
    static init_method_set_physics_process_priority() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_physics_process_priority) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_physics_process_priority");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_physics_process_priority = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1286410249);
        }
    }
    static init_method_get_physics_process_priority() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_physics_process_priority) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_physics_process_priority");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_physics_process_priority = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3905245786);
        }
    }
    static init_method_is_processing() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_processing) {
            let classname = new StringName("Node");
            let methodname = new StringName("is_processing");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_processing = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_set_process_input() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_process_input) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_process_input");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_process_input = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2586408642);
        }
    }
    static init_method_is_processing_input() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_processing_input) {
            let classname = new StringName("Node");
            let methodname = new StringName("is_processing_input");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_processing_input = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_set_process_shortcut_input() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_process_shortcut_input) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_process_shortcut_input");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_process_shortcut_input = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2586408642);
        }
    }
    static init_method_is_processing_shortcut_input() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_processing_shortcut_input) {
            let classname = new StringName("Node");
            let methodname = new StringName("is_processing_shortcut_input");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_processing_shortcut_input = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_set_process_unhandled_input() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_process_unhandled_input) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_process_unhandled_input");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_process_unhandled_input = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2586408642);
        }
    }
    static init_method_is_processing_unhandled_input() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_processing_unhandled_input) {
            let classname = new StringName("Node");
            let methodname = new StringName("is_processing_unhandled_input");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_processing_unhandled_input = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_set_process_unhandled_key_input() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_process_unhandled_key_input) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_process_unhandled_key_input");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_process_unhandled_key_input = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2586408642);
        }
    }
    static init_method_is_processing_unhandled_key_input() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_processing_unhandled_key_input) {
            let classname = new StringName("Node");
            let methodname = new StringName("is_processing_unhandled_key_input");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_processing_unhandled_key_input = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_set_process_mode() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_process_mode) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_process_mode");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_process_mode = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1841290486);
        }
    }
    static init_method_get_process_mode() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_process_mode) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_process_mode");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_process_mode = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 739966102);
        }
    }
    static init_method_can_process() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_can_process) {
            let classname = new StringName("Node");
            let methodname = new StringName("can_process");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_can_process = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_set_process_thread_group() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_process_thread_group) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_process_thread_group");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_process_thread_group = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2275442745);
        }
    }
    static init_method_get_process_thread_group() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_process_thread_group) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_process_thread_group");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_process_thread_group = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1866404740);
        }
    }
    static init_method_set_process_thread_messages() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_process_thread_messages) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_process_thread_messages");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_process_thread_messages = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1357280998);
        }
    }
    static init_method_get_process_thread_messages() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_process_thread_messages) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_process_thread_messages");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_process_thread_messages = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 4228993612);
        }
    }
    static init_method_set_process_thread_group_order() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_process_thread_group_order) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_process_thread_group_order");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_process_thread_group_order = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1286410249);
        }
    }
    static init_method_get_process_thread_group_order() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_process_thread_group_order) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_process_thread_group_order");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_process_thread_group_order = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3905245786);
        }
    }
    static init_method_set_display_folded() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_display_folded) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_display_folded");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_display_folded = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2586408642);
        }
    }
    static init_method_is_displayed_folded() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_displayed_folded) {
            let classname = new StringName("Node");
            let methodname = new StringName("is_displayed_folded");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_displayed_folded = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_set_process_internal() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_process_internal) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_process_internal");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_process_internal = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2586408642);
        }
    }
    static init_method_is_processing_internal() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_processing_internal) {
            let classname = new StringName("Node");
            let methodname = new StringName("is_processing_internal");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_processing_internal = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_set_physics_process_internal() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_physics_process_internal) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_physics_process_internal");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_physics_process_internal = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2586408642);
        }
    }
    static init_method_is_physics_processing_internal() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_physics_processing_internal) {
            let classname = new StringName("Node");
            let methodname = new StringName("is_physics_processing_internal");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_physics_processing_internal = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_set_physics_interpolation_mode() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_physics_interpolation_mode) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_physics_interpolation_mode");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_physics_interpolation_mode = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3202404928);
        }
    }
    static init_method_get_physics_interpolation_mode() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_physics_interpolation_mode) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_physics_interpolation_mode");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_physics_interpolation_mode = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2920385216);
        }
    }
    static init_method_is_physics_interpolated() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_physics_interpolated) {
            let classname = new StringName("Node");
            let methodname = new StringName("is_physics_interpolated");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_physics_interpolated = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_is_physics_interpolated_and_enabled() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_physics_interpolated_and_enabled) {
            let classname = new StringName("Node");
            let methodname = new StringName("is_physics_interpolated_and_enabled");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_physics_interpolated_and_enabled = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_reset_physics_interpolation() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_reset_physics_interpolation) {
            let classname = new StringName("Node");
            let methodname = new StringName("reset_physics_interpolation");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_reset_physics_interpolation = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3218959716);
        }
    }
    static init_method_set_auto_translate_mode() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_auto_translate_mode) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_auto_translate_mode");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_auto_translate_mode = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 776149714);
        }
    }
    static init_method_get_auto_translate_mode() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_auto_translate_mode) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_auto_translate_mode");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_auto_translate_mode = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2498906432);
        }
    }
    static init_method_get_window() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_window) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_window");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_window = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1757182445);
        }
    }
    static init_method_get_last_exclusive_window() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_last_exclusive_window) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_last_exclusive_window");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_last_exclusive_window = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1757182445);
        }
    }
    static init_method_get_tree() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_tree) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_tree");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_tree = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2958820483);
        }
    }
    static init_method_create_tween() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_create_tween) {
            let classname = new StringName("Node");
            let methodname = new StringName("create_tween");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_create_tween = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3426978995);
        }
    }
    static init_method_duplicate() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_duplicate) {
            let classname = new StringName("Node");
            let methodname = new StringName("duplicate");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_duplicate = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3511555459);
        }
    }
    static init_method_replace_by() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_replace_by) {
            let classname = new StringName("Node");
            let methodname = new StringName("replace_by");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_replace_by = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2570952461);
        }
    }
    static init_method_set_scene_instance_load_placeholder() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_scene_instance_load_placeholder) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_scene_instance_load_placeholder");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_scene_instance_load_placeholder = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2586408642);
        }
    }
    static init_method_get_scene_instance_load_placeholder() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_scene_instance_load_placeholder) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_scene_instance_load_placeholder");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_scene_instance_load_placeholder = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_set_editable_instance() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_editable_instance) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_editable_instance");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_editable_instance = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2731852923);
        }
    }
    static init_method_is_editable_instance() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_editable_instance) {
            let classname = new StringName("Node");
            let methodname = new StringName("is_editable_instance");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_editable_instance = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3093956946);
        }
    }
    static init_method_get_viewport() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_viewport) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_viewport");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_viewport = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3596683776);
        }
    }
    static init_method_queue_free() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_queue_free) {
            let classname = new StringName("Node");
            let methodname = new StringName("queue_free");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_queue_free = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3218959716);
        }
    }
    static init_method_request_ready() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_request_ready) {
            let classname = new StringName("Node");
            let methodname = new StringName("request_ready");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_request_ready = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3218959716);
        }
    }
    static init_method_is_node_ready() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_node_ready) {
            let classname = new StringName("Node");
            let methodname = new StringName("is_node_ready");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_node_ready = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_set_multiplayer_authority() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_multiplayer_authority) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_multiplayer_authority");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_multiplayer_authority = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 972357352);
        }
    }
    static init_method_get_multiplayer_authority() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_multiplayer_authority) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_multiplayer_authority");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_multiplayer_authority = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3905245786);
        }
    }
    static init_method_is_multiplayer_authority() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_multiplayer_authority) {
            let classname = new StringName("Node");
            let methodname = new StringName("is_multiplayer_authority");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_multiplayer_authority = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_get_multiplayer() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_multiplayer) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_multiplayer");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_multiplayer = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 406750475);
        }
    }
    static init_method_rpc_config() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_rpc_config) {
            let classname = new StringName("Node");
            let methodname = new StringName("rpc_config");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_rpc_config = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3776071444);
        }
    }
    static init_method_set_editor_description() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_editor_description) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_editor_description");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_editor_description = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 83702148);
        }
    }
    static init_method_get_editor_description() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_editor_description) {
            let classname = new StringName("Node");
            let methodname = new StringName("get_editor_description");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_get_editor_description = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 201670096);
        }
    }
    static init_method_set_unique_name_in_owner() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_unique_name_in_owner) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_unique_name_in_owner");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_unique_name_in_owner = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 2586408642);
        }
    }
    static init_method_is_unique_name_in_owner() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_unique_name_in_owner) {
            let classname = new StringName("Node");
            let methodname = new StringName("is_unique_name_in_owner");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_is_unique_name_in_owner = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 36873697);
        }
    }
    static init_method_atr() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_atr) {
            let classname = new StringName("Node");
            let methodname = new StringName("atr");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_atr = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3344478075);
        }
    }
    static init_method_atr_n() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_atr_n) {
            let classname = new StringName("Node");
            let methodname = new StringName("atr_n");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_atr_n = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 259354841);
        }
    }
    static init_method_rpc() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_rpc) {
            let classname = new StringName("Node");
            let methodname = new StringName("rpc");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_rpc = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 4047867050);
        }
    }
    static init_method_rpc_id() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_rpc_id) {
            let classname = new StringName("Node");
            let methodname = new StringName("rpc_id");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_rpc_id = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 361499283);
        }
    }
    static init_method_update_configuration_warnings() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_update_configuration_warnings) {
            let classname = new StringName("Node");
            let methodname = new StringName("update_configuration_warnings");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_update_configuration_warnings = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3218959716);
        }
    }
    static init_method_call_deferred_thread_group() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_call_deferred_thread_group) {
            let classname = new StringName("Node");
            let methodname = new StringName("call_deferred_thread_group");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_call_deferred_thread_group = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3400424181);
        }
    }
    static init_method_set_deferred_thread_group() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_deferred_thread_group) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_deferred_thread_group");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_deferred_thread_group = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3776071444);
        }
    }
    static init_method_notify_deferred_thread_group() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_notify_deferred_thread_group) {
            let classname = new StringName("Node");
            let methodname = new StringName("notify_deferred_thread_group");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_notify_deferred_thread_group = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1286410249);
        }
    }
    static init_method_call_thread_safe() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_call_thread_safe) {
            let classname = new StringName("Node");
            let methodname = new StringName("call_thread_safe");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_call_thread_safe = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3400424181);
        }
    }
    static init_method_set_thread_safe() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_thread_safe) {
            let classname = new StringName("Node");
            let methodname = new StringName("set_thread_safe");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_set_thread_safe = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 3776071444);
        }
    }
    static init_method_notify_thread_safe() {
        if (!__classPrivateFieldGet(this, _a, "f", _Node__bindings).method_notify_thread_safe) {
            let classname = new StringName("Node");
            let methodname = new StringName("notify_thread_safe");
            __classPrivateFieldGet(this, _a, "f", _Node__bindings).method_notify_thread_safe = internal.classdb_get_method_bind(classname.opaque, methodname.opaque, 1286410249);
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
        _a.init_method_print_orphan_nodes();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_print_orphan_nodes, this._owner);
    }
    add_sibling(_sibling, _force_readable_name) {
        _a.init_method_add_sibling();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_add_sibling, this._owner, _sibling, _force_readable_name);
    }
    set_name(_name) {
        _a.init_method_set_name();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_name, this._owner, _name);
    }
    get_name() {
        _a.init_method_get_name();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_name, this._owner, Variant.Type.STRING_NAME);
    }
    add_child(_node, _force_readable_name, _internal) {
        _a.init_method_add_child();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_add_child, this._owner, _node, _force_readable_name, _internal);
    }
    remove_child(_node) {
        _a.init_method_remove_child();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_remove_child, this._owner, _node);
    }
    reparent(_new_parent, _keep_global_transform) {
        _a.init_method_reparent();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_reparent, this._owner, _new_parent, _keep_global_transform);
    }
    get_child_count(_include_internal) {
        _a.init_method_get_child_count();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_child_count, this._owner, Variant.Type.INT, _include_internal);
    }
    get_children(_include_internal) {
        _a.init_method_get_children();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_children, this._owner, Variant.Type.ARRAY, _include_internal);
    }
    get_child(_idx, _include_internal) {
        _a.init_method_get_child();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_child, this._owner, Variant.Type.OBJECT, _idx, _include_internal);
    }
    has_node(_path) {
        _a.init_method_has_node();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_has_node, this._owner, Variant.Type.BOOL, _path);
    }
    get_node(_path) {
        _a.init_method_get_node();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_node, this._owner, Variant.Type.OBJECT, _path);
    }
    get_node_or_null(_path) {
        _a.init_method_get_node_or_null();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_node_or_null, this._owner, Variant.Type.OBJECT, _path);
    }
    get_parent() {
        _a.init_method_get_parent();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_parent, this._owner, Variant.Type.OBJECT);
    }
    find_child(_pattern, _recursive, _owned) {
        _a.init_method_find_child();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_find_child, this._owner, Variant.Type.OBJECT, _pattern, _recursive, _owned);
    }
    find_children(_pattern, _type, _recursive, _owned) {
        _a.init_method_find_children();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_find_children, this._owner, Variant.Type.ARRAY, _pattern, _type, _recursive, _owned);
    }
    find_parent(_pattern) {
        _a.init_method_find_parent();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_find_parent, this._owner, Variant.Type.OBJECT, _pattern);
    }
    has_node_and_resource(_path) {
        _a.init_method_has_node_and_resource();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_has_node_and_resource, this._owner, Variant.Type.BOOL, _path);
    }
    get_node_and_resource(_path) {
        _a.init_method_get_node_and_resource();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_node_and_resource, this._owner, Variant.Type.ARRAY, _path);
    }
    is_inside_tree() {
        _a.init_method_is_inside_tree();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_is_inside_tree, this._owner, Variant.Type.BOOL);
    }
    is_part_of_edited_scene() {
        _a.init_method_is_part_of_edited_scene();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_is_part_of_edited_scene, this._owner, Variant.Type.BOOL);
    }
    is_ancestor_of(_node) {
        _a.init_method_is_ancestor_of();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_is_ancestor_of, this._owner, Variant.Type.BOOL, _node);
    }
    is_greater_than(_node) {
        _a.init_method_is_greater_than();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_is_greater_than, this._owner, Variant.Type.BOOL, _node);
    }
    get_path() {
        _a.init_method_get_path();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_path, this._owner, Variant.Type.NODE_PATH);
    }
    get_path_to(_node, _use_unique_path) {
        _a.init_method_get_path_to();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_path_to, this._owner, Variant.Type.NODE_PATH, _node, _use_unique_path);
    }
    add_to_group(_group, _persistent) {
        _a.init_method_add_to_group();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_add_to_group, this._owner, _group, _persistent);
    }
    remove_from_group(_group) {
        _a.init_method_remove_from_group();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_remove_from_group, this._owner, _group);
    }
    is_in_group(_group) {
        _a.init_method_is_in_group();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_is_in_group, this._owner, Variant.Type.BOOL, _group);
    }
    move_child(_child_node, _to_index) {
        _a.init_method_move_child();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_move_child, this._owner, _child_node, _to_index);
    }
    get_groups() {
        _a.init_method_get_groups();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_groups, this._owner, Variant.Type.ARRAY);
    }
    set_owner(_owner) {
        _a.init_method_set_owner();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_owner, this._owner, _owner);
    }
    get_owner() {
        _a.init_method_get_owner();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_owner, this._owner, Variant.Type.OBJECT);
    }
    get_index(_include_internal) {
        _a.init_method_get_index();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_index, this._owner, Variant.Type.INT, _include_internal);
    }
    print_tree() {
        _a.init_method_print_tree();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_print_tree, this._owner);
    }
    print_tree_pretty() {
        _a.init_method_print_tree_pretty();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_print_tree_pretty, this._owner);
    }
    get_tree_string() {
        _a.init_method_get_tree_string();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_tree_string, this._owner, Variant.Type.STRING);
    }
    get_tree_string_pretty() {
        _a.init_method_get_tree_string_pretty();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_tree_string_pretty, this._owner, Variant.Type.STRING);
    }
    set_scene_file_path(_scene_file_path) {
        _a.init_method_set_scene_file_path();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_scene_file_path, this._owner, _scene_file_path);
    }
    get_scene_file_path() {
        _a.init_method_get_scene_file_path();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_scene_file_path, this._owner, Variant.Type.STRING);
    }
    propagate_notification(_what) {
        _a.init_method_propagate_notification();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_propagate_notification, this._owner, _what);
    }
    propagate_call(_method, _args, _parent_first) {
        _a.init_method_propagate_call();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_propagate_call, this._owner, _method, _args, _parent_first);
    }
    set_physics_process(_enable) {
        _a.init_method_set_physics_process();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_physics_process, this._owner, _enable);
    }
    get_physics_process_delta_time() {
        _a.init_method_get_physics_process_delta_time();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_physics_process_delta_time, this._owner, Variant.Type.FLOAT);
    }
    is_physics_processing() {
        _a.init_method_is_physics_processing();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_is_physics_processing, this._owner, Variant.Type.BOOL);
    }
    get_process_delta_time() {
        _a.init_method_get_process_delta_time();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_process_delta_time, this._owner, Variant.Type.FLOAT);
    }
    set_process(_enable) {
        _a.init_method_set_process();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_process, this._owner, _enable);
    }
    set_process_priority(_priority) {
        _a.init_method_set_process_priority();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_process_priority, this._owner, _priority);
    }
    get_process_priority() {
        _a.init_method_get_process_priority();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_process_priority, this._owner, Variant.Type.INT);
    }
    set_physics_process_priority(_priority) {
        _a.init_method_set_physics_process_priority();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_physics_process_priority, this._owner, _priority);
    }
    get_physics_process_priority() {
        _a.init_method_get_physics_process_priority();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_physics_process_priority, this._owner, Variant.Type.INT);
    }
    is_processing() {
        _a.init_method_is_processing();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_is_processing, this._owner, Variant.Type.BOOL);
    }
    set_process_input(_enable) {
        _a.init_method_set_process_input();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_process_input, this._owner, _enable);
    }
    is_processing_input() {
        _a.init_method_is_processing_input();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_is_processing_input, this._owner, Variant.Type.BOOL);
    }
    set_process_shortcut_input(_enable) {
        _a.init_method_set_process_shortcut_input();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_process_shortcut_input, this._owner, _enable);
    }
    is_processing_shortcut_input() {
        _a.init_method_is_processing_shortcut_input();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_is_processing_shortcut_input, this._owner, Variant.Type.BOOL);
    }
    set_process_unhandled_input(_enable) {
        _a.init_method_set_process_unhandled_input();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_process_unhandled_input, this._owner, _enable);
    }
    is_processing_unhandled_input() {
        _a.init_method_is_processing_unhandled_input();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_is_processing_unhandled_input, this._owner, Variant.Type.BOOL);
    }
    set_process_unhandled_key_input(_enable) {
        _a.init_method_set_process_unhandled_key_input();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_process_unhandled_key_input, this._owner, _enable);
    }
    is_processing_unhandled_key_input() {
        _a.init_method_is_processing_unhandled_key_input();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_is_processing_unhandled_key_input, this._owner, Variant.Type.BOOL);
    }
    set_process_mode(_mode) {
        _a.init_method_set_process_mode();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_process_mode, this._owner, _mode);
    }
    get_process_mode() {
        _a.init_method_get_process_mode();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_process_mode, this._owner, Variant.Type.INT);
    }
    can_process() {
        _a.init_method_can_process();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_can_process, this._owner, Variant.Type.BOOL);
    }
    set_process_thread_group(_mode) {
        _a.init_method_set_process_thread_group();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_process_thread_group, this._owner, _mode);
    }
    get_process_thread_group() {
        _a.init_method_get_process_thread_group();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_process_thread_group, this._owner, Variant.Type.INT);
    }
    set_process_thread_messages(_flags) {
        _a.init_method_set_process_thread_messages();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_process_thread_messages, this._owner, _flags);
    }
    get_process_thread_messages() {
        _a.init_method_get_process_thread_messages();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_process_thread_messages, this._owner, Variant.Type.OBJECT);
    }
    set_process_thread_group_order(_order) {
        _a.init_method_set_process_thread_group_order();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_process_thread_group_order, this._owner, _order);
    }
    get_process_thread_group_order() {
        _a.init_method_get_process_thread_group_order();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_process_thread_group_order, this._owner, Variant.Type.INT);
    }
    set_display_folded(_fold) {
        _a.init_method_set_display_folded();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_display_folded, this._owner, _fold);
    }
    is_displayed_folded() {
        _a.init_method_is_displayed_folded();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_is_displayed_folded, this._owner, Variant.Type.BOOL);
    }
    set_process_internal(_enable) {
        _a.init_method_set_process_internal();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_process_internal, this._owner, _enable);
    }
    is_processing_internal() {
        _a.init_method_is_processing_internal();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_is_processing_internal, this._owner, Variant.Type.BOOL);
    }
    set_physics_process_internal(_enable) {
        _a.init_method_set_physics_process_internal();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_physics_process_internal, this._owner, _enable);
    }
    is_physics_processing_internal() {
        _a.init_method_is_physics_processing_internal();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_is_physics_processing_internal, this._owner, Variant.Type.BOOL);
    }
    set_physics_interpolation_mode(_mode) {
        _a.init_method_set_physics_interpolation_mode();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_physics_interpolation_mode, this._owner, _mode);
    }
    get_physics_interpolation_mode() {
        _a.init_method_get_physics_interpolation_mode();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_physics_interpolation_mode, this._owner, Variant.Type.INT);
    }
    is_physics_interpolated() {
        _a.init_method_is_physics_interpolated();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_is_physics_interpolated, this._owner, Variant.Type.BOOL);
    }
    is_physics_interpolated_and_enabled() {
        _a.init_method_is_physics_interpolated_and_enabled();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_is_physics_interpolated_and_enabled, this._owner, Variant.Type.BOOL);
    }
    reset_physics_interpolation() {
        _a.init_method_reset_physics_interpolation();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_reset_physics_interpolation, this._owner);
    }
    set_auto_translate_mode(_mode) {
        _a.init_method_set_auto_translate_mode();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_auto_translate_mode, this._owner, _mode);
    }
    get_auto_translate_mode() {
        _a.init_method_get_auto_translate_mode();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_auto_translate_mode, this._owner, Variant.Type.INT);
    }
    get_window() {
        _a.init_method_get_window();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_window, this._owner, Variant.Type.OBJECT);
    }
    get_last_exclusive_window() {
        _a.init_method_get_last_exclusive_window();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_last_exclusive_window, this._owner, Variant.Type.OBJECT);
    }
    get_tree() {
        _a.init_method_get_tree();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_tree, this._owner, Variant.Type.OBJECT);
    }
    create_tween() {
        _a.init_method_create_tween();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_create_tween, this._owner, Variant.Type.OBJECT);
    }
    duplicate(_flags) {
        _a.init_method_duplicate();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_duplicate, this._owner, Variant.Type.OBJECT, _flags);
    }
    replace_by(_node, _keep_groups) {
        _a.init_method_replace_by();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_replace_by, this._owner, _node, _keep_groups);
    }
    set_scene_instance_load_placeholder(_load_placeholder) {
        _a.init_method_set_scene_instance_load_placeholder();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_scene_instance_load_placeholder, this._owner, _load_placeholder);
    }
    get_scene_instance_load_placeholder() {
        _a.init_method_get_scene_instance_load_placeholder();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_scene_instance_load_placeholder, this._owner, Variant.Type.BOOL);
    }
    set_editable_instance(_node, _is_editable) {
        _a.init_method_set_editable_instance();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_editable_instance, this._owner, _node, _is_editable);
    }
    is_editable_instance(_node) {
        _a.init_method_is_editable_instance();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_is_editable_instance, this._owner, Variant.Type.BOOL, _node);
    }
    get_viewport() {
        _a.init_method_get_viewport();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_viewport, this._owner, Variant.Type.OBJECT);
    }
    queue_free() {
        _a.init_method_queue_free();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_queue_free, this._owner);
    }
    request_ready() {
        _a.init_method_request_ready();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_request_ready, this._owner);
    }
    is_node_ready() {
        _a.init_method_is_node_ready();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_is_node_ready, this._owner, Variant.Type.BOOL);
    }
    set_multiplayer_authority(_id, _recursive) {
        _a.init_method_set_multiplayer_authority();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_multiplayer_authority, this._owner, _id, _recursive);
    }
    get_multiplayer_authority() {
        _a.init_method_get_multiplayer_authority();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_multiplayer_authority, this._owner, Variant.Type.INT);
    }
    is_multiplayer_authority() {
        _a.init_method_is_multiplayer_authority();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_is_multiplayer_authority, this._owner, Variant.Type.BOOL);
    }
    get_multiplayer() {
        _a.init_method_get_multiplayer();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_multiplayer, this._owner, Variant.Type.OBJECT);
    }
    rpc_config(_method, _config) {
        _a.init_method_rpc_config();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_rpc_config, this._owner, _method, _config);
    }
    set_editor_description(_editor_description) {
        _a.init_method_set_editor_description();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_editor_description, this._owner, _editor_description);
    }
    get_editor_description() {
        _a.init_method_get_editor_description();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_get_editor_description, this._owner, Variant.Type.STRING);
    }
    set_unique_name_in_owner(_enable) {
        _a.init_method_set_unique_name_in_owner();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_unique_name_in_owner, this._owner, _enable);
    }
    is_unique_name_in_owner() {
        _a.init_method_is_unique_name_in_owner();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_is_unique_name_in_owner, this._owner, Variant.Type.BOOL);
    }
    atr(_message, _context) {
        _a.init_method_atr();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_atr, this._owner, Variant.Type.STRING, _message, _context);
    }
    atr_n(_message, _plural_message, _n, _context) {
        _a.init_method_atr_n();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_atr_n, this._owner, Variant.Type.STRING, _message, _plural_message, _n, _context);
    }
    rpc(_method) {
        _a.init_method_rpc();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_rpc, this._owner, Variant.Type.INT, _method);
    }
    rpc_id(_peer_id, _method) {
        _a.init_method_rpc_id();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_rpc_id, this._owner, Variant.Type.INT, _peer_id, _method);
    }
    update_configuration_warnings() {
        _a.init_method_update_configuration_warnings();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_update_configuration_warnings, this._owner);
    }
    call_deferred_thread_group(_method) {
        _a.init_method_call_deferred_thread_group();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_call_deferred_thread_group, this._owner, Variant.Type.VARIANT, _method);
    }
    set_deferred_thread_group(_property, _value) {
        _a.init_method_set_deferred_thread_group();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_deferred_thread_group, this._owner, _property, _value);
    }
    notify_deferred_thread_group(_what) {
        _a.init_method_notify_deferred_thread_group();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_notify_deferred_thread_group, this._owner, _what);
    }
    call_thread_safe(_method) {
        _a.init_method_call_thread_safe();
        return _call_native_mb_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_call_thread_safe, this._owner, Variant.Type.VARIANT, _method);
    }
    set_thread_safe(_property, _value) {
        _a.init_method_set_thread_safe();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_set_thread_safe, this._owner, _property, _value);
    }
    notify_thread_safe(_what) {
        _a.init_method_notify_thread_safe();
        return _call_native_mb_no_ret(__classPrivateFieldGet(_a, _a, "f", _Node__bindings).method_notify_thread_safe, this._owner, _what);
    }
    get name() {
        return this.get_name();
    }
    set name(new_value) {
        this.set_name(new_value);
    }
    get unique_name_in_owner() {
        return this.is_unique_name_in_owner();
    }
    set unique_name_in_owner(new_value) {
        this.set_unique_name_in_owner(new_value);
    }
    get scene_file_path() {
        return this.get_scene_file_path();
    }
    set scene_file_path(new_value) {
        this.set_scene_file_path(new_value);
    }
    get owner() {
        return this.get_owner();
    }
    set owner(new_value) {
        this.set_owner(new_value);
    }
    get multiplayer() {
        return this.get_multiplayer();
    }
    get process_mode() {
        return this.get_process_mode();
    }
    set process_mode(new_value) {
        this.set_process_mode(new_value);
    }
    get process_priority() {
        return this.get_process_priority();
    }
    set process_priority(new_value) {
        this.set_process_priority(new_value);
    }
    get process_physics_priority() {
        return this.get_physics_process_priority();
    }
    set process_physics_priority(new_value) {
        this.set_physics_process_priority(new_value);
    }
    get process_thread_group() {
        return this.get_process_thread_group();
    }
    set process_thread_group(new_value) {
        this.set_process_thread_group(new_value);
    }
    get process_thread_group_order() {
        return this.get_process_thread_group_order();
    }
    set process_thread_group_order(new_value) {
        this.set_process_thread_group_order(new_value);
    }
    get process_thread_messages() {
        return this.get_process_thread_messages();
    }
    set process_thread_messages(new_value) {
        this.set_process_thread_messages(new_value);
    }
    get physics_interpolation_mode() {
        return this.get_physics_interpolation_mode();
    }
    set physics_interpolation_mode(new_value) {
        this.set_physics_interpolation_mode(new_value);
    }
    get auto_translate_mode() {
        return this.get_auto_translate_mode();
    }
    set auto_translate_mode(new_value) {
        this.set_auto_translate_mode(new_value);
    }
    get editor_description() {
        return this.get_editor_description();
    }
    set editor_description(new_value) {
        this.set_editor_description(new_value);
    }
}
_a = Node;
_Node__bindings = { value: new _MethodBindings() };
_Node_initialized = { value: false };
Node.ProcessMode = {
    PROCESS_MODE_INHERIT: 0,
    PROCESS_MODE_PAUSABLE: 1,
    PROCESS_MODE_WHEN_PAUSED: 2,
    PROCESS_MODE_ALWAYS: 3,
    PROCESS_MODE_DISABLED: 4,
};
Node.ProcessThreadGroup = {
    PROCESS_THREAD_GROUP_INHERIT: 0,
    PROCESS_THREAD_GROUP_MAIN_THREAD: 1,
    PROCESS_THREAD_GROUP_SUB_THREAD: 2,
};
Node.ProcessThreadMessages = {
    FLAG_PROCESS_THREAD_MESSAGES: 1,
    FLAG_PROCESS_THREAD_MESSAGES_PHYSICS: 2,
    FLAG_PROCESS_THREAD_MESSAGES_ALL: 3,
};
Node.PhysicsInterpolationMode = {
    PHYSICS_INTERPOLATION_MODE_INHERIT: 0,
    PHYSICS_INTERPOLATION_MODE_ON: 1,
    PHYSICS_INTERPOLATION_MODE_OFF: 2,
};
Node.DuplicateFlags = {
    DUPLICATE_SIGNALS: 1,
    DUPLICATE_GROUPS: 2,
    DUPLICATE_SCRIPTS: 4,
    DUPLICATE_USE_INSTANTIATION: 8,
};
Node.InternalMode = {
    INTERNAL_MODE_DISABLED: 0,
    INTERNAL_MODE_FRONT: 1,
    INTERNAL_MODE_BACK: 2,
};
Node.AutoTranslateMode = {
    AUTO_TRANSLATE_MODE_INHERIT: 0,
    AUTO_TRANSLATE_MODE_ALWAYS: 1,
    AUTO_TRANSLATE_MODE_DISABLED: 2,
};
