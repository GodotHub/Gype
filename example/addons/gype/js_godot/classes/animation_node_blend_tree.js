import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { AnimationRootNode } from '@js_godot/classes/animation_root_node'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_add_node;
  method_get_node;
  method_remove_node;
  method_rename_node;
  method_has_node;
  method_connect_node;
  method_disconnect_node;
  method_set_node_position;
  method_get_node_position;
  method_set_graph_offset;
  method_get_graph_offset;
}
export class AnimationNodeBlendTree extends AnimationRootNode{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimationNodeBlendTree");
    } else {
      super(godot_object);
    }
  }
  static init_method_add_node() {
    if (!this.#_bindings.method_add_node) {
      let classname = new StringName("AnimationNodeBlendTree");
      let methodname = new StringName("add_node");
      this.#_bindings.method_add_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1980270704
      );
    }
  }
  static init_method_get_node() {
    if (!this.#_bindings.method_get_node) {
      let classname = new StringName("AnimationNodeBlendTree");
      let methodname = new StringName("get_node");
      this.#_bindings.method_get_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        625644256
      );
    }
  }
  static init_method_remove_node() {
    if (!this.#_bindings.method_remove_node) {
      let classname = new StringName("AnimationNodeBlendTree");
      let methodname = new StringName("remove_node");
      this.#_bindings.method_remove_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_rename_node() {
    if (!this.#_bindings.method_rename_node) {
      let classname = new StringName("AnimationNodeBlendTree");
      let methodname = new StringName("rename_node");
      this.#_bindings.method_rename_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3740211285
      );
    }
  }
  static init_method_has_node() {
    if (!this.#_bindings.method_has_node) {
      let classname = new StringName("AnimationNodeBlendTree");
      let methodname = new StringName("has_node");
      this.#_bindings.method_has_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2619796661
      );
    }
  }
  static init_method_connect_node() {
    if (!this.#_bindings.method_connect_node) {
      let classname = new StringName("AnimationNodeBlendTree");
      let methodname = new StringName("connect_node");
      this.#_bindings.method_connect_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2168001410
      );
    }
  }
  static init_method_disconnect_node() {
    if (!this.#_bindings.method_disconnect_node) {
      let classname = new StringName("AnimationNodeBlendTree");
      let methodname = new StringName("disconnect_node");
      this.#_bindings.method_disconnect_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2415702435
      );
    }
  }
  static init_method_set_node_position() {
    if (!this.#_bindings.method_set_node_position) {
      let classname = new StringName("AnimationNodeBlendTree");
      let methodname = new StringName("set_node_position");
      this.#_bindings.method_set_node_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1999414630
      );
    }
  }
  static init_method_get_node_position() {
    if (!this.#_bindings.method_get_node_position) {
      let classname = new StringName("AnimationNodeBlendTree");
      let methodname = new StringName("get_node_position");
      this.#_bindings.method_get_node_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3100822709
      );
    }
  }
  static init_method_set_graph_offset() {
    if (!this.#_bindings.method_set_graph_offset) {
      let classname = new StringName("AnimationNodeBlendTree");
      let methodname = new StringName("set_graph_offset");
      this.#_bindings.method_set_graph_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_graph_offset() {
    if (!this.#_bindings.method_get_graph_offset) {
      let classname = new StringName("AnimationNodeBlendTree");
      let methodname = new StringName("get_graph_offset");
      this.#_bindings.method_get_graph_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }

  
  
  add_node(_name, _node, _position) {
    AnimationNodeBlendTree.init_method_add_node();
    return _call_native_mb_no_ret(
      AnimationNodeBlendTree.#_bindings.method_add_node,
      this._owner,
      _name, _node, _position
    );
    
  }
  get_node(_name) {
    AnimationNodeBlendTree.init_method_get_node();
    return _call_native_mb_ret(
      AnimationNodeBlendTree.#_bindings.method_get_node,
      this._owner,
			Variant.Type.OBJECT,
      _name
    );
    
  }
  remove_node(_name) {
    AnimationNodeBlendTree.init_method_remove_node();
    return _call_native_mb_no_ret(
      AnimationNodeBlendTree.#_bindings.method_remove_node,
      this._owner,
      _name
    );
    
  }
  rename_node(_name, _new_name) {
    AnimationNodeBlendTree.init_method_rename_node();
    return _call_native_mb_no_ret(
      AnimationNodeBlendTree.#_bindings.method_rename_node,
      this._owner,
      _name, _new_name
    );
    
  }
  has_node(_name) {
    AnimationNodeBlendTree.init_method_has_node();
    return _call_native_mb_ret(
      AnimationNodeBlendTree.#_bindings.method_has_node,
      this._owner,
			Variant.Type.BOOL,
    
      _name
    );
    
  }
  connect_node(_input_node, _input_index, _output_node) {
    AnimationNodeBlendTree.init_method_connect_node();
    return _call_native_mb_no_ret(
      AnimationNodeBlendTree.#_bindings.method_connect_node,
      this._owner,
      _input_node, _input_index, _output_node
    );
    
  }
  disconnect_node(_input_node, _input_index) {
    AnimationNodeBlendTree.init_method_disconnect_node();
    return _call_native_mb_no_ret(
      AnimationNodeBlendTree.#_bindings.method_disconnect_node,
      this._owner,
      _input_node, _input_index
    );
    
  }
  set_node_position(_name, _position) {
    AnimationNodeBlendTree.init_method_set_node_position();
    return _call_native_mb_no_ret(
      AnimationNodeBlendTree.#_bindings.method_set_node_position,
      this._owner,
      _name, _position
    );
    
  }
  get_node_position(_name) {
    AnimationNodeBlendTree.init_method_get_node_position();
    return _call_native_mb_ret(
      AnimationNodeBlendTree.#_bindings.method_get_node_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      _name
    );
    
  }
  set_graph_offset(_offset) {
    AnimationNodeBlendTree.init_method_set_graph_offset();
    return _call_native_mb_no_ret(
      AnimationNodeBlendTree.#_bindings.method_set_graph_offset,
      this._owner,
      _offset
    );
    
  }
  get_graph_offset() {
    AnimationNodeBlendTree.init_method_get_graph_offset();
    return _call_native_mb_ret(
      AnimationNodeBlendTree.#_bindings.method_get_graph_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  
get graph_offset () {
  return this.get_graph_offset();
}
set graph_offset (new_value) {
  this.set_graph_offset(new_value);
}

}