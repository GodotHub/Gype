import * as internal from '__internal__';
import { AnimationMixer } from '@js_godot/classes/animation_mixer'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_tree_root;
  method_get_tree_root;
  method_set_advance_expression_base_node;
  method_get_advance_expression_base_node;
  method_set_animation_player;
  method_get_animation_player;
  method_set_process_callback;
  method_get_process_callback;
}
@GodotClass
export class AnimationTree extends AnimationMixer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimationTree");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_tree_root() {
    if (!this._bindings.method_set_tree_root) {
      let classname = new StringName("AnimationTree");
      let methodname = new StringName("set_tree_root");
      this._bindings.method_set_tree_root = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2581683800
      );
    }
  }
  static init_method_get_tree_root() {
    if (!this._bindings.method_get_tree_root) {
      let classname = new StringName("AnimationTree");
      let methodname = new StringName("get_tree_root");
      this._bindings.method_get_tree_root = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4110384712
      );
    }
  }
  static init_method_set_advance_expression_base_node() {
    if (!this._bindings.method_set_advance_expression_base_node) {
      let classname = new StringName("AnimationTree");
      let methodname = new StringName("set_advance_expression_base_node");
      this._bindings.method_set_advance_expression_base_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_get_advance_expression_base_node() {
    if (!this._bindings.method_get_advance_expression_base_node) {
      let classname = new StringName("AnimationTree");
      let methodname = new StringName("get_advance_expression_base_node");
      this._bindings.method_get_advance_expression_base_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }
  static init_method_set_animation_player() {
    if (!this._bindings.method_set_animation_player) {
      let classname = new StringName("AnimationTree");
      let methodname = new StringName("set_animation_player");
      this._bindings.method_set_animation_player = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_get_animation_player() {
    if (!this._bindings.method_get_animation_player) {
      let classname = new StringName("AnimationTree");
      let methodname = new StringName("get_animation_player");
      this._bindings.method_get_animation_player = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }
  static init_method_set_process_callback() {
    if (!this._bindings.method_set_process_callback) {
      let classname = new StringName("AnimationTree");
      let methodname = new StringName("set_process_callback");
      this._bindings.method_set_process_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1723352826
      );
    }
  }
  static init_method_get_process_callback() {
    if (!this._bindings.method_get_process_callback) {
      let classname = new StringName("AnimationTree");
      let methodname = new StringName("get_process_callback");
      this._bindings.method_get_process_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        891317132
      );
    }
  }

  
  
  set_tree_root(_animation_node) {
    AnimationTree.init_method_set_tree_root();
    return _call_native_mb_no_ret(
      AnimationTree._bindings.method_set_tree_root,
      this._owner,
      _animation_node
    );
    
  }
  get_tree_root() {
    AnimationTree.init_method_get_tree_root();
    return _call_native_mb_ret(
      AnimationTree._bindings.method_get_tree_root,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_advance_expression_base_node(_path) {
    AnimationTree.init_method_set_advance_expression_base_node();
    return _call_native_mb_no_ret(
      AnimationTree._bindings.method_set_advance_expression_base_node,
      this._owner,
      _path
    );
    
  }
  get_advance_expression_base_node() {
    AnimationTree.init_method_get_advance_expression_base_node();
    return _call_native_mb_ret(
      AnimationTree._bindings.method_get_advance_expression_base_node,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_animation_player(_path) {
    AnimationTree.init_method_set_animation_player();
    return _call_native_mb_no_ret(
      AnimationTree._bindings.method_set_animation_player,
      this._owner,
      _path
    );
    
  }
  get_animation_player() {
    AnimationTree.init_method_get_animation_player();
    return _call_native_mb_ret(
      AnimationTree._bindings.method_get_animation_player,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_process_callback(_mode) {
    AnimationTree.init_method_set_process_callback();
    return _call_native_mb_no_ret(
      AnimationTree._bindings.method_set_process_callback,
      this._owner,
      _mode
    );
    
  }
  get_process_callback() {
    AnimationTree.init_method_get_process_callback();
    return _call_native_mb_ret(
      AnimationTree._bindings.method_get_process_callback,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get tree_root () {
  return this.get_tree_root();
}
set tree_root (new_value) {
  this.set_tree_root(new_value);
}
get advance_expression_base_node () {
  return this.get_advance_expression_base_node();
}
set advance_expression_base_node (new_value) {
  this.set_advance_expression_base_node(new_value);
}
get anim_player () {
  return this.get_animation_player();
}
set anim_player (new_value) {
  this.set_animation_player(new_value);
}

  static AnimationProcessCallback = {
    ANIMATION_PROCESS_PHYSICS: 0,
    ANIMATION_PROCESS_IDLE: 1,
    ANIMATION_PROCESS_MANUAL: 2,
  }
}