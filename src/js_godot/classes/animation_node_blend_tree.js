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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimationNodeBlendTree");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("AnimationNodeBlendTree");
        let methodname = new StringName("add_node");
        this._bindings.method_add_node = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1980270704
        );
      }
      {
        let classname = new StringName("AnimationNodeBlendTree");
        let methodname = new StringName("get_node");
        this._bindings.method_get_node = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          625644256
        );
      }
      {
        let classname = new StringName("AnimationNodeBlendTree");
        let methodname = new StringName("remove_node");
        this._bindings.method_remove_node = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3304788590
        );
      }
      {
        let classname = new StringName("AnimationNodeBlendTree");
        let methodname = new StringName("rename_node");
        this._bindings.method_rename_node = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3740211285
        );
      }
      {
        let classname = new StringName("AnimationNodeBlendTree");
        let methodname = new StringName("has_node");
        this._bindings.method_has_node = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2619796661
        );
      }
      {
        let classname = new StringName("AnimationNodeBlendTree");
        let methodname = new StringName("connect_node");
        this._bindings.method_connect_node = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2168001410
        );
      }
      {
        let classname = new StringName("AnimationNodeBlendTree");
        let methodname = new StringName("disconnect_node");
        this._bindings.method_disconnect_node = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2415702435
        );
      }
      {
        let classname = new StringName("AnimationNodeBlendTree");
        let methodname = new StringName("set_node_position");
        this._bindings.method_set_node_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1999414630
        );
      }
      {
        let classname = new StringName("AnimationNodeBlendTree");
        let methodname = new StringName("get_node_position");
        this._bindings.method_get_node_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3100822709
        );
      }
      {
        let classname = new StringName("AnimationNodeBlendTree");
        let methodname = new StringName("set_graph_offset");
        this._bindings.method_set_graph_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("AnimationNodeBlendTree");
        let methodname = new StringName("get_graph_offset");
        this._bindings.method_get_graph_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
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
  connect_node(_input_node, _input_index, _output_node) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_connect_node,
      this._owner,
      _input_node, _input_index, _output_node
    );
    
  }
  disconnect_node(_input_node, _input_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_disconnect_node,
      this._owner,
      _input_node, _input_index
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
}