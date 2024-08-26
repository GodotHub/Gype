import * as internal from '__internal__';
import { NodePath } from 'src/js_godot/variant/node_path'
import { GDString } from 'src/js_godot/variant/gd_string'
import { Variant } from 'src/js_godot/variant/variant'
import { GDArray } from 'src/js_godot/variant/gd_array'
import { StringName } from 'src/js_godot/variant/string_name'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { RefCounted } from 'src/js_godot/classesref_counted'
class _MethodBindings {
    method_get_node_count;
    method_get_node_type;
    method_get_node_name;
    method_get_node_path;
    method_get_node_owner_path;
    method_is_node_instance_placeholder;
    method_get_node_instance_placeholder;
    method_get_node_instance;
    method_get_node_groups;
    method_get_node_index;
    method_get_node_property_count;
    method_get_node_property_name;
    method_get_node_property_value;
    method_get_connection_count;
    method_get_connection_source;
    method_get_connection_signal;
    method_get_connection_target;
    method_get_connection_method;
    method_get_connection_flags;
    method_get_connection_binds;
    method_get_connection_unbinds;
}


export class SceneState extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SceneState");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("SceneState");
      let methodname = new StringName("get_node_count");
      this._bindings.method_get_node_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("SceneState");
      let methodname = new StringName("get_node_type");
      this._bindings.method_get_node_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        659327637
      );
    }
    {
      let classname = new StringName("SceneState");
      let methodname = new StringName("get_node_name");
      this._bindings.method_get_node_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        659327637
      );
    }
    {
      let classname = new StringName("SceneState");
      let methodname = new StringName("get_node_path");
      this._bindings.method_get_node_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2272487792
      );
    }
    {
      let classname = new StringName("SceneState");
      let methodname = new StringName("get_node_owner_path");
      this._bindings.method_get_node_owner_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        408788394
      );
    }
    {
      let classname = new StringName("SceneState");
      let methodname = new StringName("is_node_instance_placeholder");
      this._bindings.method_is_node_instance_placeholder = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("SceneState");
      let methodname = new StringName("get_node_instance_placeholder");
      this._bindings.method_get_node_instance_placeholder = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("SceneState");
      let methodname = new StringName("get_node_instance");
      this._bindings.method_get_node_instance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        511017218
      );
    }
    {
      let classname = new StringName("SceneState");
      let methodname = new StringName("get_node_groups");
      this._bindings.method_get_node_groups = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        647634434
      );
    }
    {
      let classname = new StringName("SceneState");
      let methodname = new StringName("get_node_index");
      this._bindings.method_get_node_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("SceneState");
      let methodname = new StringName("get_node_property_count");
      this._bindings.method_get_node_property_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("SceneState");
      let methodname = new StringName("get_node_property_name");
      this._bindings.method_get_node_property_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        351665558
      );
    }
    {
      let classname = new StringName("SceneState");
      let methodname = new StringName("get_node_property_value");
      this._bindings.method_get_node_property_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        678354945
      );
    }
    {
      let classname = new StringName("SceneState");
      let methodname = new StringName("get_connection_count");
      this._bindings.method_get_connection_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("SceneState");
      let methodname = new StringName("get_connection_source");
      this._bindings.method_get_connection_source = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        408788394
      );
    }
    {
      let classname = new StringName("SceneState");
      let methodname = new StringName("get_connection_signal");
      this._bindings.method_get_connection_signal = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        659327637
      );
    }
    {
      let classname = new StringName("SceneState");
      let methodname = new StringName("get_connection_target");
      this._bindings.method_get_connection_target = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        408788394
      );
    }
    {
      let classname = new StringName("SceneState");
      let methodname = new StringName("get_connection_method");
      this._bindings.method_get_connection_method = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        659327637
      );
    }
    {
      let classname = new StringName("SceneState");
      let methodname = new StringName("get_connection_flags");
      this._bindings.method_get_connection_flags = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("SceneState");
      let methodname = new StringName("get_connection_binds");
      this._bindings.method_get_connection_binds = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        663333327
      );
    }
    {
      let classname = new StringName("SceneState");
      let methodname = new StringName("get_connection_unbinds");
      this._bindings.method_get_connection_unbinds = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
  }
  get_node_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_node_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  get_node_type(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_node_type,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      _idx
    );
  }
  get_node_name(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_node_name,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      _idx
    );
  }
  get_node_path(_idx, _for_parent) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_node_path,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      _idx, _for_parent
    );
  }
  get_node_owner_path(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_node_owner_path,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      _idx
    );
  }
  is_node_instance_placeholder(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_node_instance_placeholder,
      this._owner,
			Variant.Type.BOOL,
      _idx
    );
  }
  get_node_instance_placeholder(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_node_instance_placeholder,
      this._owner,
			Variant.Type.STRING
    ,
      _idx
    );
  }
  get_node_instance(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_node_instance,
      this._owner,
			Variant.INT,
      _idx
    );
  }
  get_node_groups(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_node_groups,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      _idx
    );
  }
  get_node_index(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_node_index,
      this._owner,
			Variant.Type.INT,
      _idx
    );
  }
  get_node_property_count(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_node_property_count,
      this._owner,
			Variant.Type.INT,
      _idx
    );
  }
  get_node_property_name(_idx, _prop_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_node_property_name,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      _idx, _prop_idx
    );
  }
  get_node_property_value(_idx, _prop_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_node_property_value,
      this._owner,
			Variant.Type.VARIANT
    ,
      _idx, _prop_idx
    );
  }
  get_connection_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_connection_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  get_connection_source(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_connection_source,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      _idx
    );
  }
  get_connection_signal(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_connection_signal,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      _idx
    );
  }
  get_connection_target(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_connection_target,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      _idx
    );
  }
  get_connection_method(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_connection_method,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      _idx
    );
  }
  get_connection_flags(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_connection_flags,
      this._owner,
			Variant.Type.INT,
      _idx
    );
  }
  get_connection_binds(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_connection_binds,
      this._owner,
			Variant.Type.ARRAY
    ,
      _idx
    );
  }
  get_connection_unbinds(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_connection_unbinds,
      this._owner,
			Variant.Type.INT,
      _idx
    );
  }
  static GenEditState = {
    GEN_EDIT_STATE_DISABLED: 0,
    GEN_EDIT_STATE_INSTANCE: 1,
    GEN_EDIT_STATE_MAIN: 2,
    GEN_EDIT_STATE_MAIN_INHERITED: 3,
  }
}