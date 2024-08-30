import * as internal from '__internal__';
import { AnimationRootNode } from 'src/js_godot/classes/animation_root_node'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_add_node;
    method_replace_node;
    method_get_node;
    method_remove_node;
    method_rename_node;
    method_has_node;
    method_get_node_name;
    method_set_node_position;
    method_get_node_position;
    method_has_transition;
    method_add_transition;
    method_get_transition;
    method_get_transition_from;
    method_get_transition_to;
    method_get_transition_count;
    method_remove_transition_by_index;
    method_remove_transition;
    method_set_graph_offset;
    method_get_graph_offset;
    method_set_state_machine_type;
    method_get_state_machine_type;
    method_set_allow_transition_to_self;
    method_is_allow_transition_to_self;
    method_set_reset_ends;
    method_are_ends_reset;
}


export class AnimationNodeStateMachine extends AnimationRootNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimationNodeStateMachine");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("AnimationNodeStateMachine");
        let methodname = new StringName("add_node");
        this._bindings.method_add_node = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1980270704
        );
      }
      {
        let classname = new StringName("AnimationNodeStateMachine");
        let methodname = new StringName("replace_node");
        this._bindings.method_replace_node = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2559412862
        );
      }
      {
        let classname = new StringName("AnimationNodeStateMachine");
        let methodname = new StringName("get_node");
        this._bindings.method_get_node = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          625644256
        );
      }
      {
        let classname = new StringName("AnimationNodeStateMachine");
        let methodname = new StringName("remove_node");
        this._bindings.method_remove_node = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3304788590
        );
      }
      {
        let classname = new StringName("AnimationNodeStateMachine");
        let methodname = new StringName("rename_node");
        this._bindings.method_rename_node = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3740211285
        );
      }
      {
        let classname = new StringName("AnimationNodeStateMachine");
        let methodname = new StringName("has_node");
        this._bindings.method_has_node = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2619796661
        );
      }
      {
        let classname = new StringName("AnimationNodeStateMachine");
        let methodname = new StringName("get_node_name");
        this._bindings.method_get_node_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          739213945
        );
      }
      {
        let classname = new StringName("AnimationNodeStateMachine");
        let methodname = new StringName("set_node_position");
        this._bindings.method_set_node_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1999414630
        );
      }
      {
        let classname = new StringName("AnimationNodeStateMachine");
        let methodname = new StringName("get_node_position");
        this._bindings.method_get_node_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3100822709
        );
      }
      {
        let classname = new StringName("AnimationNodeStateMachine");
        let methodname = new StringName("has_transition");
        this._bindings.method_has_transition = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          471820014
        );
      }
      {
        let classname = new StringName("AnimationNodeStateMachine");
        let methodname = new StringName("add_transition");
        this._bindings.method_add_transition = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          795486887
        );
      }
      {
        let classname = new StringName("AnimationNodeStateMachine");
        let methodname = new StringName("get_transition");
        this._bindings.method_get_transition = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4192381260
        );
      }
      {
        let classname = new StringName("AnimationNodeStateMachine");
        let methodname = new StringName("get_transition_from");
        this._bindings.method_get_transition_from = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          659327637
        );
      }
      {
        let classname = new StringName("AnimationNodeStateMachine");
        let methodname = new StringName("get_transition_to");
        this._bindings.method_get_transition_to = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          659327637
        );
      }
      {
        let classname = new StringName("AnimationNodeStateMachine");
        let methodname = new StringName("get_transition_count");
        this._bindings.method_get_transition_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("AnimationNodeStateMachine");
        let methodname = new StringName("remove_transition_by_index");
        this._bindings.method_remove_transition_by_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("AnimationNodeStateMachine");
        let methodname = new StringName("remove_transition");
        this._bindings.method_remove_transition = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3740211285
        );
      }
      {
        let classname = new StringName("AnimationNodeStateMachine");
        let methodname = new StringName("set_graph_offset");
        this._bindings.method_set_graph_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("AnimationNodeStateMachine");
        let methodname = new StringName("get_graph_offset");
        this._bindings.method_get_graph_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("AnimationNodeStateMachine");
        let methodname = new StringName("set_state_machine_type");
        this._bindings.method_set_state_machine_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2584759088
        );
      }
      {
        let classname = new StringName("AnimationNodeStateMachine");
        let methodname = new StringName("get_state_machine_type");
        this._bindings.method_get_state_machine_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1140726469
        );
      }
      {
        let classname = new StringName("AnimationNodeStateMachine");
        let methodname = new StringName("set_allow_transition_to_self");
        this._bindings.method_set_allow_transition_to_self = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("AnimationNodeStateMachine");
        let methodname = new StringName("is_allow_transition_to_self");
        this._bindings.method_is_allow_transition_to_self = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("AnimationNodeStateMachine");
        let methodname = new StringName("set_reset_ends");
        this._bindings.method_set_reset_ends = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("AnimationNodeStateMachine");
        let methodname = new StringName("are_ends_reset");
        this._bindings.method_are_ends_reset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
  }
  add_node(_name, _node, _position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_node,
      this._owner,
      _name, _node, _position
    );
    
  }
  replace_node(_name, _node) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_replace_node,
      this._owner,
      _name, _node
    );
    
  }
  get_node(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_node,
      this._owner,
			Variant.INT,
      _name
    );
    
  }
  remove_node(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_node,
      this._owner,
      _name
    );
    
  }
  rename_node(_name, _new_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_rename_node,
      this._owner,
      _name, _new_name
    );
    
  }
  has_node(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_node,
      this._owner,
			Variant.Type.BOOL,
      _name
    );
    
  }
  get_node_name(_node) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_node_name,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      _node
    );
    
  }
  set_node_position(_name, _position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_node_position,
      this._owner,
      _name, _position
    );
    
  }
  get_node_position(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_node_position,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _name
    );
    
  }
  has_transition(_from, _to) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_transition,
      this._owner,
			Variant.Type.BOOL,
      _from, _to
    );
    
  }
  add_transition(_from, _to, _transition) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_transition,
      this._owner,
      _from, _to, _transition
    );
    
  }
  get_transition(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_transition,
      this._owner,
			Variant.INT,
      _idx
    );
    
  }
  get_transition_from(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_transition_from,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      _idx
    );
    
  }
  get_transition_to(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_transition_to,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      _idx
    );
    
  }
  get_transition_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_transition_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  remove_transition_by_index(_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_transition_by_index,
      this._owner,
      _idx
    );
    
  }
  remove_transition(_from, _to) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_transition,
      this._owner,
      _from, _to
    );
    
  }
  set_graph_offset(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_graph_offset,
      this._owner,
      _offset
    );
    
  }
  get_graph_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_graph_offset,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  set_state_machine_type(_state_machine_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_state_machine_type,
      this._owner,
      _state_machine_type
    );
    
  }
  get_state_machine_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_state_machine_type,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_allow_transition_to_self(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_allow_transition_to_self,
      this._owner,
      _enable
    );
    
  }
  is_allow_transition_to_self() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_allow_transition_to_self,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_reset_ends(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_reset_ends,
      this._owner,
      _enable
    );
    
  }
  are_ends_reset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_are_ends_reset,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  static StateMachineType = {
    STATE_MACHINE_TYPE_ROOT: 0,
    STATE_MACHINE_TYPE_NESTED: 1,
    STATE_MACHINE_TYPE_GROUPED: 2,
  }
}