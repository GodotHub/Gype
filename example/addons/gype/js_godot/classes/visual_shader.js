import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import { PackedInt32Array } from '@js_godot/variant/packed_int32_array'
import { Vector2 } from '@js_godot/variant/vector2'
import { Shader } from '@js_godot/classes/shader'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_mode;
  method_add_node;
  method_get_node;
  method_set_node_position;
  method_get_node_position;
  method_get_node_list;
  method_get_valid_node_id;
  method_remove_node;
  method_replace_node;
  method_is_node_connection;
  method_can_connect_nodes;
  method_connect_nodes;
  method_disconnect_nodes;
  method_connect_nodes_forced;
  method_get_node_connections;
  method_set_graph_offset;
  method_get_graph_offset;
  method_attach_node_to_frame;
  method_detach_node_from_frame;
  method_add_varying;
  method_remove_varying;
  method_has_varying;
}
export class VisualShader extends Shader{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShader");
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
      let classname = new StringName("VisualShader");
      let methodname = new StringName("set_mode");
      this._bindings.method_set_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3978014962
      );
    }
    {
      let classname = new StringName("VisualShader");
      let methodname = new StringName("add_node");
      this._bindings.method_add_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1560769431
      );
    }
    {
      let classname = new StringName("VisualShader");
      let methodname = new StringName("get_node");
      this._bindings.method_get_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3784670312
      );
    }
    {
      let classname = new StringName("VisualShader");
      let methodname = new StringName("set_node_position");
      this._bindings.method_set_node_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2726660721
      );
    }
    {
      let classname = new StringName("VisualShader");
      let methodname = new StringName("get_node_position");
      this._bindings.method_get_node_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2175036082
      );
    }
    {
      let classname = new StringName("VisualShader");
      let methodname = new StringName("get_node_list");
      this._bindings.method_get_node_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2370592410
      );
    }
    {
      let classname = new StringName("VisualShader");
      let methodname = new StringName("get_valid_node_id");
      this._bindings.method_get_valid_node_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        629467342
      );
    }
    {
      let classname = new StringName("VisualShader");
      let methodname = new StringName("remove_node");
      this._bindings.method_remove_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844050912
      );
    }
    {
      let classname = new StringName("VisualShader");
      let methodname = new StringName("replace_node");
      this._bindings.method_replace_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3144735253
      );
    }
    {
      let classname = new StringName("VisualShader");
      let methodname = new StringName("is_node_connection");
      this._bindings.method_is_node_connection = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3922381898
      );
    }
    {
      let classname = new StringName("VisualShader");
      let methodname = new StringName("can_connect_nodes");
      this._bindings.method_can_connect_nodes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3922381898
      );
    }
    {
      let classname = new StringName("VisualShader");
      let methodname = new StringName("connect_nodes");
      this._bindings.method_connect_nodes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3081049573
      );
    }
    {
      let classname = new StringName("VisualShader");
      let methodname = new StringName("disconnect_nodes");
      this._bindings.method_disconnect_nodes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2268060358
      );
    }
    {
      let classname = new StringName("VisualShader");
      let methodname = new StringName("connect_nodes_forced");
      this._bindings.method_connect_nodes_forced = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2268060358
      );
    }
    {
      let classname = new StringName("VisualShader");
      let methodname = new StringName("get_node_connections");
      this._bindings.method_get_node_connections = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1441964831
      );
    }
    {
      let classname = new StringName("VisualShader");
      let methodname = new StringName("set_graph_offset");
      this._bindings.method_set_graph_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("VisualShader");
      let methodname = new StringName("get_graph_offset");
      this._bindings.method_get_graph_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("VisualShader");
      let methodname = new StringName("attach_node_to_frame");
      this._bindings.method_attach_node_to_frame = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2479945279
      );
    }
    {
      let classname = new StringName("VisualShader");
      let methodname = new StringName("detach_node_from_frame");
      this._bindings.method_detach_node_from_frame = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844050912
      );
    }
    {
      let classname = new StringName("VisualShader");
      let methodname = new StringName("add_varying");
      this._bindings.method_add_varying = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2084110726
      );
    }
    {
      let classname = new StringName("VisualShader");
      let methodname = new StringName("remove_varying");
      this._bindings.method_remove_varying = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("VisualShader");
      let methodname = new StringName("has_varying");
      this._bindings.method_has_varying = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3927539163
      );
    }
  }
  set_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mode,
      this._owner,
      _mode
    );
    
  }
  add_node(_type, _node, _position, _id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_node,
      this._owner,
      _type, _node, _position, _id
    );
    
  }
  get_node(_type, _id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_node,
      this._owner,
			Variant.INT,
      _type, _id
    );
    
  }
  set_node_position(_type, _id, _position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_node_position,
      this._owner,
      _type, _id, _position
    );
    
  }
  get_node_position(_type, _id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_node_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      _type, _id
    );
    
  }
  get_node_list(_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_node_list,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      _type
    );
    
  }
  get_valid_node_id(_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_valid_node_id,
      this._owner,
			Variant.Type.INT,
      _type
    );
    
  }
  remove_node(_type, _id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_node,
      this._owner,
      _type, _id
    );
    
  }
  replace_node(_type, _id, _new_class) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_replace_node,
      this._owner,
      _type, _id, _new_class
    );
    
  }
  is_node_connection(_type, _from_node, _from_port, _to_node, _to_port) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_node_connection,
      this._owner,
			Variant.Type.BOOL,
      _type, _from_node, _from_port, _to_node, _to_port
    );
    
  }
  can_connect_nodes(_type, _from_node, _from_port, _to_node, _to_port) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_can_connect_nodes,
      this._owner,
			Variant.Type.BOOL,
      _type, _from_node, _from_port, _to_node, _to_port
    );
    
  }
  connect_nodes(_type, _from_node, _from_port, _to_node, _to_port) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_connect_nodes,
      this._owner,
			Variant.INT,
      _type, _from_node, _from_port, _to_node, _to_port
    );
    
  }
  disconnect_nodes(_type, _from_node, _from_port, _to_node, _to_port) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_disconnect_nodes,
      this._owner,
      _type, _from_node, _from_port, _to_node, _to_port
    );
    
  }
  connect_nodes_forced(_type, _from_node, _from_port, _to_node, _to_port) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_connect_nodes_forced,
      this._owner,
      _type, _from_node, _from_port, _to_node, _to_port
    );
    
  }
  get_node_connections(_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_node_connections,
      this._owner,
			Variant.INT,
      _type
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
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  attach_node_to_frame(_type, _id, _frame) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_attach_node_to_frame,
      this._owner,
      _type, _id, _frame
    );
    
  }
  detach_node_from_frame(_type, _id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_detach_node_from_frame,
      this._owner,
      _type, _id
    );
    
  }
  add_varying(_name, _mode, _type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_varying,
      this._owner,
      _name, _mode, _type
    );
    
  }
  remove_varying(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_varying,
      this._owner,
      _name
    );
    
  }
  has_varying(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_varying,
      this._owner,
			Variant.Type.BOOL,
      _name
    );
    
  }
  
get graph_offset () {
  return this.get_graph_offset();
}
set graph_offset (new_value) {
  this.set_graph_offset(new_value);
}

  static Type = {
    TYPE_VERTEX: 0,
    TYPE_FRAGMENT: 1,
    TYPE_LIGHT: 2,
    TYPE_START: 3,
    TYPE_PROCESS: 4,
    TYPE_COLLIDE: 5,
    TYPE_START_CUSTOM: 6,
    TYPE_PROCESS_CUSTOM: 7,
    TYPE_SKY: 8,
    TYPE_FOG: 9,
    TYPE_MAX: 10,
  }
  static VaryingMode = {
    VARYING_MODE_VERTEX_TO_FRAG_LIGHT: 0,
    VARYING_MODE_FRAG_TO_LIGHT: 1,
    VARYING_MODE_MAX: 2,
  }
  static VaryingType = {
    VARYING_TYPE_FLOAT: 0,
    VARYING_TYPE_INT: 1,
    VARYING_TYPE_UINT: 2,
    VARYING_TYPE_VECTOR_2D: 3,
    VARYING_TYPE_VECTOR_3D: 4,
    VARYING_TYPE_VECTOR_4D: 5,
    VARYING_TYPE_BOOLEAN: 6,
    VARYING_TYPE_TRANSFORM: 7,
    VARYING_TYPE_MAX: 8,
  }

  static {
    this._init_bindings();
  }
}