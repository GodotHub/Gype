import * as internal from '__internal__';
import { MainLoop } from '@js_godot/classes/main_loop'
import { StringName } from '@js_godot/variant/string_name'
import { GDArray } from '@js_godot/variant/gd_array'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_root;
  method_has_group;
  method_is_auto_accept_quit;
  method_set_auto_accept_quit;
  method_is_quit_on_go_back;
  method_set_quit_on_go_back;
  method_set_debug_collisions_hint;
  method_is_debugging_collisions_hint;
  method_set_debug_paths_hint;
  method_is_debugging_paths_hint;
  method_set_debug_navigation_hint;
  method_is_debugging_navigation_hint;
  method_set_edited_scene_root;
  method_get_edited_scene_root;
  method_set_pause;
  method_is_paused;
  method_create_timer;
  method_create_tween;
  method_get_processed_tweens;
  method_get_node_count;
  method_get_frame;
  method_quit;
  method_set_physics_interpolation_enabled;
  method_is_physics_interpolation_enabled;
  method_queue_delete;
  method_call_group_flags;
  method_notify_group_flags;
  method_set_group_flags;
  method_call_group;
  method_notify_group;
  method_set_group;
  method_get_nodes_in_group;
  method_get_first_node_in_group;
  method_get_node_count_in_group;
  method_set_current_scene;
  method_get_current_scene;
  method_change_scene_to_file;
  method_change_scene_to_packed;
  method_reload_current_scene;
  method_unload_current_scene;
  method_set_multiplayer;
  method_get_multiplayer;
  method_set_multiplayer_poll_enabled;
  method_is_multiplayer_poll_enabled;
}
export class SceneTree extends MainLoop{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("SceneTree");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_root() {
    if (!this.#_bindings.method_get_root) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("get_root");
      this.#_bindings.method_get_root = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1757182445
      );
    }
  }
  static init_method_has_group() {
    if (!this.#_bindings.method_has_group) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("has_group");
      this.#_bindings.method_has_group = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2619796661
      );
    }
  }
  static init_method_is_auto_accept_quit() {
    if (!this.#_bindings.method_is_auto_accept_quit) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("is_auto_accept_quit");
      this.#_bindings.method_is_auto_accept_quit = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_auto_accept_quit() {
    if (!this.#_bindings.method_set_auto_accept_quit) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("set_auto_accept_quit");
      this.#_bindings.method_set_auto_accept_quit = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_quit_on_go_back() {
    if (!this.#_bindings.method_is_quit_on_go_back) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("is_quit_on_go_back");
      this.#_bindings.method_is_quit_on_go_back = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_quit_on_go_back() {
    if (!this.#_bindings.method_set_quit_on_go_back) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("set_quit_on_go_back");
      this.#_bindings.method_set_quit_on_go_back = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_set_debug_collisions_hint() {
    if (!this.#_bindings.method_set_debug_collisions_hint) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("set_debug_collisions_hint");
      this.#_bindings.method_set_debug_collisions_hint = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_debugging_collisions_hint() {
    if (!this.#_bindings.method_is_debugging_collisions_hint) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("is_debugging_collisions_hint");
      this.#_bindings.method_is_debugging_collisions_hint = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_debug_paths_hint() {
    if (!this.#_bindings.method_set_debug_paths_hint) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("set_debug_paths_hint");
      this.#_bindings.method_set_debug_paths_hint = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_debugging_paths_hint() {
    if (!this.#_bindings.method_is_debugging_paths_hint) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("is_debugging_paths_hint");
      this.#_bindings.method_is_debugging_paths_hint = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_debug_navigation_hint() {
    if (!this.#_bindings.method_set_debug_navigation_hint) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("set_debug_navigation_hint");
      this.#_bindings.method_set_debug_navigation_hint = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_debugging_navigation_hint() {
    if (!this.#_bindings.method_is_debugging_navigation_hint) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("is_debugging_navigation_hint");
      this.#_bindings.method_is_debugging_navigation_hint = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_edited_scene_root() {
    if (!this.#_bindings.method_set_edited_scene_root) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("set_edited_scene_root");
      this.#_bindings.method_set_edited_scene_root = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1078189570
      );
    }
  }
  static init_method_get_edited_scene_root() {
    if (!this.#_bindings.method_get_edited_scene_root) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("get_edited_scene_root");
      this.#_bindings.method_get_edited_scene_root = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3160264692
      );
    }
  }
  static init_method_set_pause() {
    if (!this.#_bindings.method_set_pause) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("set_pause");
      this.#_bindings.method_set_pause = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_paused() {
    if (!this.#_bindings.method_is_paused) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("is_paused");
      this.#_bindings.method_is_paused = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_create_timer() {
    if (!this.#_bindings.method_create_timer) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("create_timer");
      this.#_bindings.method_create_timer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2709170273
      );
    }
  }
  static init_method_create_tween() {
    if (!this.#_bindings.method_create_tween) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("create_tween");
      this.#_bindings.method_create_tween = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3426978995
      );
    }
  }
  static init_method_get_processed_tweens() {
    if (!this.#_bindings.method_get_processed_tweens) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("get_processed_tweens");
      this.#_bindings.method_get_processed_tweens = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_get_node_count() {
    if (!this.#_bindings.method_get_node_count) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("get_node_count");
      this.#_bindings.method_get_node_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_frame() {
    if (!this.#_bindings.method_get_frame) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("get_frame");
      this.#_bindings.method_get_frame = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_quit() {
    if (!this.#_bindings.method_quit) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("quit");
      this.#_bindings.method_quit = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1995695955
      );
    }
  }
  static init_method_set_physics_interpolation_enabled() {
    if (!this.#_bindings.method_set_physics_interpolation_enabled) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("set_physics_interpolation_enabled");
      this.#_bindings.method_set_physics_interpolation_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_physics_interpolation_enabled() {
    if (!this.#_bindings.method_is_physics_interpolation_enabled) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("is_physics_interpolation_enabled");
      this.#_bindings.method_is_physics_interpolation_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_queue_delete() {
    if (!this.#_bindings.method_queue_delete) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("queue_delete");
      this.#_bindings.method_queue_delete = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3975164845
      );
    }
  }
  static init_method_call_group_flags() {
    if (!this.#_bindings.method_call_group_flags) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("call_group_flags");
      this.#_bindings.method_call_group_flags = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1527739229
      );
    }
  }
  static init_method_notify_group_flags() {
    if (!this.#_bindings.method_notify_group_flags) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("notify_group_flags");
      this.#_bindings.method_notify_group_flags = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1245489420
      );
    }
  }
  static init_method_set_group_flags() {
    if (!this.#_bindings.method_set_group_flags) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("set_group_flags");
      this.#_bindings.method_set_group_flags = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3497599527
      );
    }
  }
  static init_method_call_group() {
    if (!this.#_bindings.method_call_group) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("call_group");
      this.#_bindings.method_call_group = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1257962832
      );
    }
  }
  static init_method_notify_group() {
    if (!this.#_bindings.method_notify_group) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("notify_group");
      this.#_bindings.method_notify_group = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2415702435
      );
    }
  }
  static init_method_set_group() {
    if (!this.#_bindings.method_set_group) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("set_group");
      this.#_bindings.method_set_group = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1279312029
      );
    }
  }
  static init_method_get_nodes_in_group() {
    if (!this.#_bindings.method_get_nodes_in_group) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("get_nodes_in_group");
      this.#_bindings.method_get_nodes_in_group = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        689397652
      );
    }
  }
  static init_method_get_first_node_in_group() {
    if (!this.#_bindings.method_get_first_node_in_group) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("get_first_node_in_group");
      this.#_bindings.method_get_first_node_in_group = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4071044623
      );
    }
  }
  static init_method_get_node_count_in_group() {
    if (!this.#_bindings.method_get_node_count_in_group) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("get_node_count_in_group");
      this.#_bindings.method_get_node_count_in_group = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2458036349
      );
    }
  }
  static init_method_set_current_scene() {
    if (!this.#_bindings.method_set_current_scene) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("set_current_scene");
      this.#_bindings.method_set_current_scene = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1078189570
      );
    }
  }
  static init_method_get_current_scene() {
    if (!this.#_bindings.method_get_current_scene) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("get_current_scene");
      this.#_bindings.method_get_current_scene = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3160264692
      );
    }
  }
  static init_method_change_scene_to_file() {
    if (!this.#_bindings.method_change_scene_to_file) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("change_scene_to_file");
      this.#_bindings.method_change_scene_to_file = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166001499
      );
    }
  }
  static init_method_change_scene_to_packed() {
    if (!this.#_bindings.method_change_scene_to_packed) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("change_scene_to_packed");
      this.#_bindings.method_change_scene_to_packed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        107349098
      );
    }
  }
  static init_method_reload_current_scene() {
    if (!this.#_bindings.method_reload_current_scene) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("reload_current_scene");
      this.#_bindings.method_reload_current_scene = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        166280745
      );
    }
  }
  static init_method_unload_current_scene() {
    if (!this.#_bindings.method_unload_current_scene) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("unload_current_scene");
      this.#_bindings.method_unload_current_scene = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_multiplayer() {
    if (!this.#_bindings.method_set_multiplayer) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("set_multiplayer");
      this.#_bindings.method_set_multiplayer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2385607013
      );
    }
  }
  static init_method_get_multiplayer() {
    if (!this.#_bindings.method_get_multiplayer) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("get_multiplayer");
      this.#_bindings.method_get_multiplayer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3453401404
      );
    }
  }
  static init_method_set_multiplayer_poll_enabled() {
    if (!this.#_bindings.method_set_multiplayer_poll_enabled) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("set_multiplayer_poll_enabled");
      this.#_bindings.method_set_multiplayer_poll_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_multiplayer_poll_enabled() {
    if (!this.#_bindings.method_is_multiplayer_poll_enabled) {
      let classname = new StringName("SceneTree");
      let methodname = new StringName("is_multiplayer_poll_enabled");
      this.#_bindings.method_is_multiplayer_poll_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  get_root() {
    SceneTree.init_method_get_root();
    return _call_native_mb_ret(
      SceneTree.#_bindings.method_get_root,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  has_group(_name) {
    SceneTree.init_method_has_group();
    return _call_native_mb_ret(
      SceneTree.#_bindings.method_has_group,
      this._owner,
			Variant.Type.BOOL,
    
      _name
    );
    
  }
  is_auto_accept_quit() {
    SceneTree.init_method_is_auto_accept_quit();
    return _call_native_mb_ret(
      SceneTree.#_bindings.method_is_auto_accept_quit,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_auto_accept_quit(_enabled) {
    SceneTree.init_method_set_auto_accept_quit();
    return _call_native_mb_no_ret(
      SceneTree.#_bindings.method_set_auto_accept_quit,
      this._owner,
      _enabled
    );
    
  }
  is_quit_on_go_back() {
    SceneTree.init_method_is_quit_on_go_back();
    return _call_native_mb_ret(
      SceneTree.#_bindings.method_is_quit_on_go_back,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_quit_on_go_back(_enabled) {
    SceneTree.init_method_set_quit_on_go_back();
    return _call_native_mb_no_ret(
      SceneTree.#_bindings.method_set_quit_on_go_back,
      this._owner,
      _enabled
    );
    
  }
  set_debug_collisions_hint(_enable) {
    SceneTree.init_method_set_debug_collisions_hint();
    return _call_native_mb_no_ret(
      SceneTree.#_bindings.method_set_debug_collisions_hint,
      this._owner,
      _enable
    );
    
  }
  is_debugging_collisions_hint() {
    SceneTree.init_method_is_debugging_collisions_hint();
    return _call_native_mb_ret(
      SceneTree.#_bindings.method_is_debugging_collisions_hint,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_debug_paths_hint(_enable) {
    SceneTree.init_method_set_debug_paths_hint();
    return _call_native_mb_no_ret(
      SceneTree.#_bindings.method_set_debug_paths_hint,
      this._owner,
      _enable
    );
    
  }
  is_debugging_paths_hint() {
    SceneTree.init_method_is_debugging_paths_hint();
    return _call_native_mb_ret(
      SceneTree.#_bindings.method_is_debugging_paths_hint,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_debug_navigation_hint(_enable) {
    SceneTree.init_method_set_debug_navigation_hint();
    return _call_native_mb_no_ret(
      SceneTree.#_bindings.method_set_debug_navigation_hint,
      this._owner,
      _enable
    );
    
  }
  is_debugging_navigation_hint() {
    SceneTree.init_method_is_debugging_navigation_hint();
    return _call_native_mb_ret(
      SceneTree.#_bindings.method_is_debugging_navigation_hint,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_edited_scene_root(_scene) {
    SceneTree.init_method_set_edited_scene_root();
    return _call_native_mb_no_ret(
      SceneTree.#_bindings.method_set_edited_scene_root,
      this._owner,
      _scene
    );
    
  }
  get_edited_scene_root() {
    SceneTree.init_method_get_edited_scene_root();
    return _call_native_mb_ret(
      SceneTree.#_bindings.method_get_edited_scene_root,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_pause(_enable) {
    SceneTree.init_method_set_pause();
    return _call_native_mb_no_ret(
      SceneTree.#_bindings.method_set_pause,
      this._owner,
      _enable
    );
    
  }
  is_paused() {
    SceneTree.init_method_is_paused();
    return _call_native_mb_ret(
      SceneTree.#_bindings.method_is_paused,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  create_timer(_time_sec, _process_always, _process_in_physics, _ignore_time_scale) {
    SceneTree.init_method_create_timer();
    return _call_native_mb_ret(
      SceneTree.#_bindings.method_create_timer,
      this._owner,
			Variant.Type.OBJECT,
      _time_sec, _process_always, _process_in_physics, _ignore_time_scale
    );
    
  }
  create_tween() {
    SceneTree.init_method_create_tween();
    return _call_native_mb_ret(
      SceneTree.#_bindings.method_create_tween,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_processed_tweens() {
    SceneTree.init_method_get_processed_tweens();
    return _call_native_mb_ret(
      SceneTree.#_bindings.method_get_processed_tweens,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  get_node_count() {
    SceneTree.init_method_get_node_count();
    return _call_native_mb_ret(
      SceneTree.#_bindings.method_get_node_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_frame() {
    SceneTree.init_method_get_frame();
    return _call_native_mb_ret(
      SceneTree.#_bindings.method_get_frame,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  quit(_exit_code) {
    SceneTree.init_method_quit();
    return _call_native_mb_no_ret(
      SceneTree.#_bindings.method_quit,
      this._owner,
      _exit_code
    );
    
  }
  set_physics_interpolation_enabled(_enabled) {
    SceneTree.init_method_set_physics_interpolation_enabled();
    return _call_native_mb_no_ret(
      SceneTree.#_bindings.method_set_physics_interpolation_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_physics_interpolation_enabled() {
    SceneTree.init_method_is_physics_interpolation_enabled();
    return _call_native_mb_ret(
      SceneTree.#_bindings.method_is_physics_interpolation_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  queue_delete(_obj) {
    SceneTree.init_method_queue_delete();
    return _call_native_mb_no_ret(
      SceneTree.#_bindings.method_queue_delete,
      this._owner,
      _obj
    );
    
  }
  call_group_flags(_flags, _group, _method) {
    SceneTree.init_method_call_group_flags();
    return _call_native_mb_no_ret(
      SceneTree.#_bindings.method_call_group_flags,
      this._owner,
      _flags, _group, _method
    );
    
  }
  notify_group_flags(_call_flags, _group, _notification) {
    SceneTree.init_method_notify_group_flags();
    return _call_native_mb_no_ret(
      SceneTree.#_bindings.method_notify_group_flags,
      this._owner,
      _call_flags, _group, _notification
    );
    
  }
  set_group_flags(_call_flags, _group, _property, _value) {
    SceneTree.init_method_set_group_flags();
    return _call_native_mb_no_ret(
      SceneTree.#_bindings.method_set_group_flags,
      this._owner,
      _call_flags, _group, _property, _value
    );
    
  }
  call_group(_group, _method) {
    SceneTree.init_method_call_group();
    return _call_native_mb_no_ret(
      SceneTree.#_bindings.method_call_group,
      this._owner,
      _group, _method
    );
    
  }
  notify_group(_group, _notification) {
    SceneTree.init_method_notify_group();
    return _call_native_mb_no_ret(
      SceneTree.#_bindings.method_notify_group,
      this._owner,
      _group, _notification
    );
    
  }
  set_group(_group, _property, _value) {
    SceneTree.init_method_set_group();
    return _call_native_mb_no_ret(
      SceneTree.#_bindings.method_set_group,
      this._owner,
      _group, _property, _value
    );
    
  }
  get_nodes_in_group(_group) {
    SceneTree.init_method_get_nodes_in_group();
    return _call_native_mb_ret(
      SceneTree.#_bindings.method_get_nodes_in_group,
      this._owner,
			Variant.Type.ARRAY,
      _group
    );
    
  }
  get_first_node_in_group(_group) {
    SceneTree.init_method_get_first_node_in_group();
    return _call_native_mb_ret(
      SceneTree.#_bindings.method_get_first_node_in_group,
      this._owner,
			Variant.Type.OBJECT,
      _group
    );
    
  }
  get_node_count_in_group(_group) {
    SceneTree.init_method_get_node_count_in_group();
    return _call_native_mb_ret(
      SceneTree.#_bindings.method_get_node_count_in_group,
      this._owner,
			Variant.Type.INT,
    
      _group
    );
    
  }
  set_current_scene(_child_node) {
    SceneTree.init_method_set_current_scene();
    return _call_native_mb_no_ret(
      SceneTree.#_bindings.method_set_current_scene,
      this._owner,
      _child_node
    );
    
  }
  get_current_scene() {
    SceneTree.init_method_get_current_scene();
    return _call_native_mb_ret(
      SceneTree.#_bindings.method_get_current_scene,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  change_scene_to_file(_path) {
    SceneTree.init_method_change_scene_to_file();
    return _call_native_mb_ret(
      SceneTree.#_bindings.method_change_scene_to_file,
      this._owner,
			Variant.Type.INT,
    
      _path
    );
    
  }
  change_scene_to_packed(_packed_scene) {
    SceneTree.init_method_change_scene_to_packed();
    return _call_native_mb_ret(
      SceneTree.#_bindings.method_change_scene_to_packed,
      this._owner,
			Variant.Type.INT,
    
      _packed_scene
    );
    
  }
  reload_current_scene() {
    SceneTree.init_method_reload_current_scene();
    return _call_native_mb_ret(
      SceneTree.#_bindings.method_reload_current_scene,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  unload_current_scene() {
    SceneTree.init_method_unload_current_scene();
    return _call_native_mb_no_ret(
      SceneTree.#_bindings.method_unload_current_scene,
      this._owner,
      
    );
    
  }
  set_multiplayer(_multiplayer, _root_path) {
    SceneTree.init_method_set_multiplayer();
    return _call_native_mb_no_ret(
      SceneTree.#_bindings.method_set_multiplayer,
      this._owner,
      _multiplayer, _root_path
    );
    
  }
  get_multiplayer(_for_path) {
    SceneTree.init_method_get_multiplayer();
    return _call_native_mb_ret(
      SceneTree.#_bindings.method_get_multiplayer,
      this._owner,
			Variant.Type.OBJECT,
      _for_path
    );
    
  }
  set_multiplayer_poll_enabled(_enabled) {
    SceneTree.init_method_set_multiplayer_poll_enabled();
    return _call_native_mb_no_ret(
      SceneTree.#_bindings.method_set_multiplayer_poll_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_multiplayer_poll_enabled() {
    SceneTree.init_method_is_multiplayer_poll_enabled();
    return _call_native_mb_ret(
      SceneTree.#_bindings.method_is_multiplayer_poll_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get auto_accept_quit () {
  return this.is_auto_accept_quit();
}
set auto_accept_quit (new_value) {
  this.set_auto_accept_quit(new_value);
}
get quit_on_go_back () {
  return this.is_quit_on_go_back();
}
set quit_on_go_back (new_value) {
  this.set_quit_on_go_back(new_value);
}
get debug_collisions_hint () {
  return this.is_debugging_collisions_hint();
}
set debug_collisions_hint (new_value) {
  this.set_debug_collisions_hint(new_value);
}
get debug_paths_hint () {
  return this.is_debugging_paths_hint();
}
set debug_paths_hint (new_value) {
  this.set_debug_paths_hint(new_value);
}
get debug_navigation_hint () {
  return this.is_debugging_navigation_hint();
}
set debug_navigation_hint (new_value) {
  this.set_debug_navigation_hint(new_value);
}
get paused () {
  return this.is_paused();
}
set paused (new_value) {
  this.set_pause(new_value);
}
get edited_scene_root () {
  return this.get_edited_scene_root();
}
set edited_scene_root (new_value) {
  this.set_edited_scene_root(new_value);
}
get current_scene () {
  return this.get_current_scene();
}
set current_scene (new_value) {
  this.set_current_scene(new_value);
}
get root () {
  return this.get_root();
}
get multiplayer_poll () {
  return this.is_multiplayer_poll_enabled();
}
set multiplayer_poll (new_value) {
  this.set_multiplayer_poll_enabled(new_value);
}
get physics_interpolation () {
  return this.is_physics_interpolation_enabled();
}
set physics_interpolation (new_value) {
  this.set_physics_interpolation_enabled(new_value);
}

  static GroupCallFlags = {
    GROUP_CALL_DEFAULT: 0,
    GROUP_CALL_REVERSE: 1,
    GROUP_CALL_DEFERRED: 2,
    GROUP_CALL_UNIQUE: 4,
  }
}